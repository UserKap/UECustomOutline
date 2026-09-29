#pragma once

#include "Components/ActorComponent.h"
#include "OutlineComponent.generated.h"

/** 两套描边互不混用，在组件上选择。 */
UENUM(BlueprintType)
enum class EOutlineMethod : uint8
{
	/** 原来的屏幕像素：按 Custom Stencil 在邻域里找外轮廓。 */
	ScreenPixel UMETA(DisplayName = "屏幕像素"),
	/** 只看场景深度和法线：深度差、法线折角定边缘，深度定遮挡。 */
	DepthNormal UMETA(DisplayName = "深度法线"),
	/** 抽取三角面边，用前景线批画出模型结构（含背面）。 */
	Structure UMETA(DisplayName = "模型结构"),
};

/**
 * 描边组件。屏幕像素、深度法线、模型结构各有开关，可以同时开。
 */
UCLASS(ClassGroup = (Rendering), meta = (BlueprintSpawnableComponent, DisplayName = "描边"))
class INSERTPASS_API UOutlineComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UOutlineComponent();

	UFUNCTION(BlueprintCallable, Category = "OutlineSystem|屏幕像素")
	void SetScreenPixelEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "OutlineSystem|屏幕像素")
	void SetScreenPixelColor(FLinearColor InColor);

	UFUNCTION(BlueprintCallable, Category = "OutlineSystem|屏幕像素")
	void SetScreenPixelThickness(float InThickness);

	UFUNCTION(BlueprintCallable, Category = "OutlineSystem|深度法线")
	void SetDepthNormalEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "OutlineSystem|深度法线")
	void SetDepthNormalColor(FLinearColor InColor);

	UFUNCTION(BlueprintCallable, Category = "OutlineSystem|深度法线")
	void SetDepthNormalThickness(float InThickness);

	UFUNCTION(BlueprintCallable, Category = "OutlineSystem|模型结构")
	void SetStructureEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "OutlineSystem|模型结构")
	void SetStructureColor(FLinearColor InColor);

	UFUNCTION(BlueprintCallable, Category = "OutlineSystem|模型结构")
	void SetStructureThickness(float InThickness);

	UFUNCTION(BlueprintCallable, Category = "OutlineSystem|模型结构")
	void SetStructureCreaseAngle(float InDegrees);

	UFUNCTION(BlueprintPure, Category = "OutlineSystem|屏幕像素")
	bool IsScreenPixelEnabled() const { return bEnableScreenPixel; }

	UFUNCTION(BlueprintPure, Category = "OutlineSystem|屏幕像素")
	FLinearColor GetScreenPixelColor() const { return ScreenPixelColor; }

	UFUNCTION(BlueprintPure, Category = "OutlineSystem|屏幕像素")
	float GetScreenPixelThickness() const { return ScreenPixelThickness; }

	UFUNCTION(BlueprintPure, Category = "OutlineSystem|深度法线")
	bool IsDepthNormalEnabled() const { return bEnableDepthNormal; }

	UFUNCTION(BlueprintPure, Category = "OutlineSystem|深度法线")
	FLinearColor GetDepthNormalColor() const { return DepthNormalColor; }

	UFUNCTION(BlueprintPure, Category = "OutlineSystem|深度法线")
	float GetDepthNormalThickness() const { return DepthNormalThickness; }

	UFUNCTION(BlueprintPure, Category = "OutlineSystem|模型结构")
	bool IsStructureEnabled() const { return bEnableStructure; }

	UFUNCTION(BlueprintPure, Category = "OutlineSystem|模型结构")
	FLinearColor GetStructureColor() const { return StructureColor; }

	UFUNCTION(BlueprintPure, Category = "OutlineSystem|模型结构")
	float GetStructureThickness() const { return StructureThickness; }

	UFUNCTION(BlueprintPure, Category = "OutlineSystem|模型结构")
	float GetStructureCreaseAngle() const { return StructureCreaseAngle; }

	/** 任一套描边开着即为启用。 */
	UFUNCTION(BlueprintPure, Category = "OutlineSystem")
	bool IsOutlineEnabled() const { return bEnableScreenPixel || bEnableDepthNormal || bEnableStructure; }

	/** 关掉本组件上的全部描边方式。 */
	UFUNCTION(BlueprintCallable, Category = "OutlineSystem")
	void ClearOutline();

	/**
	 * 互斥选中：关闭场景中其他 Actor 的描边，再打开自己。
	 * 点击 Actor 时调用这个即可。
	 */
	UFUNCTION(BlueprintCallable, Category = "OutlineSystem")
	void SelectExclusive(
		bool bEnableScreenPixel = true,
		bool bEnableDepthNormal = false,
		bool bEnableStructure = false);

	/** 兼容旧蓝图：等价于开关屏幕像素描边。 */
	UFUNCTION(BlueprintCallable, Category = "OutlineSystem", meta = (DisplayName = "Set Outline Enabled"))
	void SetOutlineEnabled(bool bEnabled);

	/** 兼容旧蓝图：Custom Depth 由组件托管，这里只同步状态。 */
	UFUNCTION(BlueprintCallable, Category = "OutlineSystem", meta = (DisplayName = "Set Custom Depth Enabled"))
	void SetCustomDepthEnabled(bool bEnabled);

	int32 GetStencilValue() const { return AllocatedStencilValue; }

	void SetAllocatedStencilValue(int32 InStencilValue);

	/** 把 Owner 上 Primitive 的 Custom Depth / Stencil 同步成当前开关状态。 */
	void ApplyOutlineState();

protected:
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	UPROPERTY(EditAnywhere, BlueprintGetter = IsScreenPixelEnabled, BlueprintSetter = SetScreenPixelEnabled, Category = "OutlineSystem|屏幕像素")
	bool bEnableScreenPixel = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OutlineSystem|屏幕像素")
	FLinearColor ScreenPixelColor = FLinearColor(1.0f, 0.45f, 0.05f, 1.0f);

	/** 外轮廓宽度，单位是屏幕像素。全屏 pass 里最多按 16 计算。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OutlineSystem|屏幕像素", meta = (ClampMin = "0.5", ClampMax = "32.0", UIMin = "0.5", UIMax = "32.0"))
	float ScreenPixelThickness = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintGetter = IsDepthNormalEnabled, BlueprintSetter = SetDepthNormalEnabled, Category = "OutlineSystem|深度法线")
	bool bEnableDepthNormal = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OutlineSystem|深度法线")
	FLinearColor DepthNormalColor = FLinearColor(0.2f, 0.75f, 1.0f, 1.0f);

	/** 边缘宽度，单位是屏幕像素。全屏 pass 里最多按 16 计算。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OutlineSystem|深度法线", meta = (ClampMin = "0.5", ClampMax = "32.0", UIMin = "0.5", UIMax = "32.0"))
	float DepthNormalThickness = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintGetter = IsStructureEnabled, BlueprintSetter = SetStructureEnabled, Category = "OutlineSystem|模型结构")
	bool bEnableStructure = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OutlineSystem|模型结构")
	FLinearColor StructureColor = FLinearColor(0.95f, 0.95f, 0.95f, 1.0f);

	/** 结构线世界空间粗细（厘米）。0 约为 1 像素细线。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OutlineSystem|模型结构", meta = (ClampMin = "0.0", ClampMax = "32.0", UIMin = "0.0", UIMax = "32.0"))
	float StructureThickness = 1.0f;

	/** 相邻三角面夹角大于该值才保留边。越小越密，越大越接近四边面外轮廓。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OutlineSystem|模型结构", meta = (ClampMin = "1.0", ClampMax = "90.0", UIMin = "1.0", UIMax = "90.0"))
	float StructureCreaseAngle = 20.0f;

public:
	struct FStructureEdge
	{
		int32 A = 0;
		int32 B = 0;
	};

	struct FStructureMeshCache
	{
		TWeakObjectPtr<UPrimitiveComponent> Source;
		TArray<FVector> LocalPositions;
		TArray<FStructureEdge> Edges;
		/** 焊接顶点对应的原始顶点，骨骼网格每帧用它更新位置。 */
		TArray<int32> WeldToOriginal;
		bool bSkinned = false;
	};

private:
	void RegisterWithSubsystem();
	void UpdateStructureTickState();
	void RebuildStructureCaches();
	void DrawStructureLines();
	void ClearStructureLines();

	/** 由 Subsystem 分配的唯一 Stencil（1-255）。 */
	UPROPERTY(Transient)
	int32 AllocatedStencilValue = 0;

	UPROPERTY(Transient)
	TObjectPtr<class ULineBatchComponent> StructureLineBatch;

	TArray<FStructureMeshCache> StructureCaches;
	bool bStructureCacheDirty = true;
};
