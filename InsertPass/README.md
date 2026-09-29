# InsertPass 技术解析

`InsertPass` 是一个面向 UE 5.8 的渲染插件，目标是用 **Scene View Extension（视口扩展）** 在延迟渲染管线里插入自定义 Pass，效果上接近 Unity 的 `ScriptableRendererFeature`。

当前落地功能是一套完整的 **描边系统**：组件开关 → 世界子系统分配 Stencil → 视口扩展收集快照 → BeforeDOF 全屏全局着色器（或结构线批）。

---

## 1. 和 Unity Render Feature 的对应关系

| Unity | Unreal（本插件） |
|------|------------------|
| `ScriptableRendererFeature` / `ScriptableRenderPass` | `FSceneViewExtensionBase` / `FWorldSceneViewExtension` |
| `EnqueuePass` 插到指定事件 | `SubscribeToPostProcessingPass(EPostProcessingPass::…)` |
| CommandBuffer + RT | `FRDGBuilder` + `AddDrawScreenPass` |
| 自定义 HLSL / Shader Graph | Global Shader（`.usf`）+ `DECLARE_GLOBAL_SHADER` |
| Layer / Stencil 选物体 | Custom Depth + Custom Stencil |

要点：UE 没有「任意插槽的 Pass 列表」。渲染器在固定阶段回调扩展，你在回调里往 **RDG** 挂节点；真正的 GPU 命令在整帧图编译后才执行。

---

## 2. 目录与模块结构

```
Plugins/InsertPass/
├── InsertPass.uplugin              # Runtime 模块，LoadingPhase = PostConfigInit
├── Shaders/
│   └── Private/Outline.usf         # 全屏描边像素着色器
└── Source/InsertPass/
    ├── InsertPass.Build.cs         # Engine + RenderCore/Renderer/RHI
    ├── Public/
    │   ├── InsertPassModule.h
    │   ├── InsertPassSubsystem.h   # 世界子系统：注册、Stencil、互斥选中
    │   └── OutlineComponent.h      # Actor 组件：三种描边开关
    └── Private/
        ├── InsertPassModule.cpp    # 映射 /InsertPass → 插件 Shaders 目录
        ├── InsertPassSubsystem.cpp
        ├── InsertPassSceneViewExtension.*  # 视口扩展：收集 + 订阅后处理
        ├── OutlinePass.*           # FOutlinePS 全局着色器 + AddPass
        └── OutlineComponent.cpp    # CustomDepth / 结构线批
```

依赖：

- **Public**：`Core`、`CoreUObject`、`Engine`
- **Private**：`Projects`、`RenderCore`、`Renderer`、`RHI`

启动时必须把着色器目录挂到虚拟路径，否则全局着色器找不到 `.usf`：

```cpp
AddShaderSourceDirectoryMapping(TEXT("/InsertPass"), PluginShaderDir);
// IMPLEMENT_GLOBAL_SHADER(..., "/InsertPass/Private/Outline.usf", "OutlinePS", SF_Pixel);
```

工程配置（`Config/DefaultEngine.ini`）：

- `r.CustomDepth=3`：开启带 Stencil 的 Custom Depth
- `r.CustomDepthTemporalAAJitter=1`：Custom Depth 与 TAA jitter 对齐，避免描边跟着相机抖

---

## 3. 一帧数据流（总览）

```
游戏线程
  UOutlineComponent::OnRegister / BeginPlay
       │ 注册到 UInsertPassSubsystem，分配 Stencil 1–255
       │ ApplyOutlineState → 网格 SetRenderCustomDepth + Stencil
       ▼
  FInsertPassSceneViewExtension::BeginRenderViewFamily
       │ SyncAndCollectEnabledOutlines
       │ 为每种启用的 Method 生成 FOutlineGroupGPU
       │ ENQUEUE_RENDER_COMMAND → RenderThreadOutlines
       ▼
渲染线程 / 后处理
  SubscribeToPostProcessingPass(BeforeDOF)
       │
       ▼
  FOutlinePass::AddPass
       │ 读 View / SceneTextures / SceneColor
       │ AddDrawScreenPass(FOutlinePS)
       ▼
  Outline.usf::OutlinePS
       │ 读 Custom Stencil / Scene Depth / GBufferA 法线
       │ 写出描边颜色到 SceneColor
```

**为什么挂在 BeforeDOF？**

Custom Stencil 是在 BasePass / CustomDepth 阶段、**TAA 之前**写好的。若在 Tonemap 之后画描边，采样到的是已抖动、已抗锯齿的缓冲，轮廓会跟镜头漂移，宽度也调不准。BeforeDOF 仍在线性色空间，颜色也更可控。

---

## 4. 核心类职责

### 4.1 `UOutlineComponent`（游戏侧入口）

挂在 Actor 上，三种方式可同时开：

| Method | 含义 | 实现路径 |
|--------|------|----------|
| **屏幕像素** `ScreenPixel` | 按 Custom Stencil 邻域找外轮廓 | 全屏 Pass |
| **深度法线** `DepthNormal` | Roberts 深度/法线边缘 | 全屏 Pass |
| **模型结构** `Structure` | 三角/四边结构线（折角剔除） | **CPU 抽边 + `ULineBatchComponent`（前景）**；全屏里还有同 Stencil 的 Roberts 折痕补充 |

关键行为：

1. **注册**：`OnRegister` / `BeginPlay` → `RegisterWithSubsystem`
2. **Custom Depth 策略**：组件已注册时保持 `SetRenderCustomDepth(true)`；开关只改 **Stencil 值**（0 = 关，非 0 = 开）。反复开关 CustomDepth 本身会导致再次打开失效。
3. **互斥选中**：`SelectExclusive` → 子系统扫当前世界所有描边组件，先清其他再开自己。
4. **结构线**：焊接顶点 → 按相邻面夹角剔共面对角线 → 每帧用 `SDPG_Foreground` 画线（背面可见）。

### 4.2 `UInsertPassSubsystem`（世界子系统）

- 支持 `Game` / `PIE` / `Editor` 世界
- 持有 `TSharedPtr<FInsertPassSceneViewExtension>`
- 用 `TBitArray` 分配唯一 Stencil（1–255）
- 蓝图 API：`ClearAllOutlines`、`SelectOutline`、`SelectOutlineActor`
- `GatherWorldOutlineComponents`：注册表 + `TObjectIterator`，不限 Actor 蓝图类

### 4.3 `FInsertPassSceneViewExtension`（插管点）

继承 `FWorldSceneViewExtension`，关键钩子：

1. `IsActiveThisFrame_Internal`：有注册组件才激活  
2. `BeginRenderViewFamily`（**游戏线程**）：收集最多 16 个 `FOutlineGroupGPU`，拷到渲染线程  
3. `SubscribeToPostProcessingPass`：仅 `BeforeDOF` 订阅  
4. `RenderOutline_RenderThread`：调用 `FOutlinePass::AddPass`

GPU 实例布局：

```cpp
struct FOutlineGroupGPU
{
    FVector4f ColorAndRadius; // rgb = 线性颜色，a = 厚度(1–16)
    FUintVector4 Stencil;     // X = StencilId，Y = EOutlineMethod，Z = 结构折角千分比
};
```

### 4.4 `FOutlinePass` / `FOutlinePS`（RDG 全屏 Pass）

- `SHADER_USE_PARAMETER_STRUCT` + `RENDER_TARGET_BINDING_SLOTS`
- 绑定：`View`、`SceneTexturesStruct`、`SceneColorTexture`
- 标量数组必须用 `SHADER_PARAMETER_SCALAR_ARRAY` / HLSL `DECLARE_SCALAR_ARRAY`（`uint32` 数组不能直接 `SHADER_PARAMETER_ARRAY`，对齐会 static_assert）
- 写出时若是链路上最后一个 Pass，必须写 `OverrideOutput`；`RenderTargets` 必须 **packed，中间不能空槽**

---

## 5. 三种描边算法

### 5.1 屏幕像素（外轮廓）

思路：当前像素 Stencil 为 A，邻域出现 **非 0 且 ≠ A** 的 Stencil B，且邻域场景深度不比中心更远（遮挡），则按距离衰减画 B 的颜色。

- 半径 = `ScreenPixelThickness`，Pass 内 clamp 到 1–16  
- 复杂度 O(R²)，只服务于「要可控宽度的外轮廓」  
- 颜色来自对应 Stencil 的 `OutlineColors`

### 5.2 深度法线（Roberts）

对齐常见 Unity 后处理描边：每像素固定采 4 点——当前、右、下、右下，步长 = 厚度：

```
depthGx = d0 - d3,  depthGy = d1 - d2
normalGx = n0 - n3, normalGy = n1 - n2
edge = max(depthEdge, normalEdge)，再阈值二值化
```

- 法线来自 `GBufferA` + `DecodeNormal`  
- 深度用 `CalcSceneDepth`（视图空间厘米）  
- 颜色 Stencil 取四点里最近的非 0 Custom Stencil  
- **固定 4 次深度 + 4 次法线采样**，不再 8 方向步进

### 5.3 模型结构（双路径）

**A. 线批（主视觉，三角/四边结构）**

1. 从 StaticMesh / SkeletalMesh LOD0 读索引与位置  
2. 按位置网格焊接（去掉 UV 缝重复点）  
3. 建边 → 邻接三角面法线 → 夹角 &lt; `StructureCreaseAngle` 的共面边剔除（去掉四边形对角线）  
4. `ULineBatchComponent` + `SDPG_Foreground` 每帧重画（关深度，背面也可见）

**B. 全屏 Roberts 折痕（补充）**

- 仅当中心 Stencil ≠ 0，且 Roberts 四点同属该 Stencil  
- 偏重法线折角，深度作弱补充  
- 阈值来自 `OutlineCreases`（由折角角的 `1-cos` 千分比传入）

---

## 6. Custom Depth / Stencil 约定

| 值 | 含义 |
|----|------|
| CustomDepth 开启 | 物体进入 Custom Depth 缓冲 |
| Stencil = 0 | 本组件描边关闭（仍可保持 CustomDepth on） |
| Stencil = 1–255 | 子系统分配的物体 ID，全屏 Pass 用它匹配颜色组 |

注意：

- 选中描边用 Stencil 区分物体，不要用「开关 CustomDepth」做开关  
- Nanite 网格对 Overlay / 部分后处理支持有限；结构线批读的是 RenderData LOD0（Nanite 上多为 fallback 源网格）

---

## 7. 蓝图用法速查

**点击互斥选中（推荐）**

```
Event ActorOnClicked
  → OutlineComponent → Select Exclusive
      (ScreenPixel / DepthNormal / Structure 按需勾选)
```

或：

```
点中的 Actor
  → Get World Subsystem (Insert Pass Subsystem)
  → Select Outline Actor
```

不要用 `Get All Actors of Class` 且填死某个蓝图类，否则其他类型 Actor 上的描边组件不会被清掉。

**网格**：勾选 Click Events（以及需要的 Mouse Over Events）；PlayerController 打开鼠标。

---

## 8. 扩展新 Pass 的推荐步骤

本插件名字叫 InsertPass，描边只是第一条业务线。再插管可按同一骨架：

1. 在 `Shaders/Private/` 加 `.usf`，模块里已映射 `/InsertPass`  
2. 新 `FGlobalShader` + `IMPLEMENT_GLOBAL_SHADER("/InsertPass/Private/Xxx.usf", …)`  
3. 在 `FInsertPassSceneViewExtension` 里选钩子：  
   - 后处理：`SubscribeToPostProcessingPass`  
   - BasePass 后：`PostRenderBasePassDeferred_RenderThread`（网格二次绘制等）  
4. 游戏线程只做「收集参数 → `ENQUEUE_RENDER_COMMAND`」；RDG 操作只在渲染线程  
5. 参数结构变更后 **不要** 指望 Live Coding 热更 UB/参数布局，关编辑器完整编译

---

## 9. 已知限制与踩坑

1. **Live Coding**：改 `SHADER_PARAMETER_*` / `UENUM` / `UPROPERTY` 后务必完整编译，否则易出现 RT 未 packed、UB 槽错位等 Fatal。  
2. **法线外扩网格 Pass**：依赖 GPU Scene 的 View / InstancedView / Scene / InstanceCulling / Primitive UB，从 ViewExtension 完整复刻成本高，已从本插件移除。  
3. **Overlay + Wireframe 材质**：Nanite / Substrate 下经常不画，结构改为线批。  
4. **全局着色器 `.usf`**：C++ `FParameters` 成员不会自动进 HLSL，必须在 `.usf` 里手写同名声明。  
5. **同帧实例上限**：16 组 `FOutlineGroupGPU`。  
6. **结构线批**：高模边数多时 Tick 成本明显，可调大 `StructureCreaseAngle` 减边。

---

## 10. 调试建议

- 日志分类：`LogInsertPass`（结构缓存边数、Stencil 耗尽等）  
- 控制台：`r.CustomDepth` 应为 3；改完 `.usf` 后 `recompileshaders changed`  
- 看 Custom Stencil：用引擎缓冲可视化或临时在 shader 里输出 Stencil  
- 描边抖动：确认 BeforeDOF + `r.CustomDepthTemporalAAJitter=1`  
- IDE 红线：刷新项目根目录 `compile_commands.json` 后 Reload Window（真编译以 UBT 为准）

---

## 11. 关键源码索引

| 主题 | 文件 |
|------|------|
| 着色器目录映射 | `InsertPassModule.cpp` |
| Stencil / 互斥选中 | `InsertPassSubsystem.cpp` |
| 收集快照 + 订阅 BeforeDOF | `InsertPassSceneViewExtension.cpp` |
| RDG 全屏 Pass | `OutlinePass.cpp` |
| Roberts / 屏幕像素 HLSL | `Shaders/Private/Outline.usf` |
| 组件 + 结构线批 | `OutlineComponent.cpp` |

---

## 12. 一句话总结

**InsertPass = Scene View Extension 插管框架 + Custom Stencil 选物体 + BeforeDOF 全屏 Global Shader（屏幕像素 / Roberts 深度法线）+ 可选 CPU 结构线批。**  
游戏线程只负责状态与快照，渲染线程只负责 RDG 与着色器；扩展新效果时优先复用这条「组件 → 子系统 → Extension → Pass → `.usf`」链路。
