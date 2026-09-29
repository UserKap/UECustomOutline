#include "InsertPassSceneViewExtension.h"

#include "InsertPassModule.h"
#include "InsertPassSubsystem.h"
#include "OutlineComponent.h"
#include "PostProcess/PostProcessMaterialInputs.h"

namespace
{
/*
将线性颜色和半径转换为向量4f
*/
	static FVector4f ToLinearColorAndRadius(const FLinearColor& Linear, float Radius)
	{
		return FVector4f(Linear.R, Linear.G, Linear.B, Radius);
	}

	static constexpr int32 MaxOutlinesPerFrame = 16;
}

/*
构造函数
*/
FInsertPassSceneViewExtension::FInsertPassSceneViewExtension(const FAutoRegister& AutoRegister, UWorld* InWorld, UInsertPassSubsystem* InSubsystem)
	: FWorldSceneViewExtension(AutoRegister, InWorld)
	, Subsystem(InSubsystem)
{
}

/*
检查描边系统是否激活
*/
bool FInsertPassSceneViewExtension::IsActiveThisFrame_Internal(const FSceneViewExtensionContext& Context) const
{
	if (!FWorldSceneViewExtension::IsActiveThisFrame_Internal(Context))
	{
		return false;
	}

	const UInsertPassSubsystem* InsertPassSubsystem = Subsystem.Get();
	return InsertPassSubsystem && InsertPassSubsystem->HasRegisteredOutline();
}

/*
开始渲染视图家族
*/
void FInsertPassSceneViewExtension::BeginRenderViewFamily(FSceneViewFamily& InViewFamily)
{
	// 同步并收集启用的描边组件
	TArray<FOutlineGroupGPU> Instances;
	// 获取描边系统
	if (UInsertPassSubsystem* InsertPassSubsystem = Subsystem.Get())
	{
		// 同步并收集启用的描边组件
		TArray<UOutlineComponent*> Components;
		// 同步并收集启用的描边组件
		InsertPassSubsystem->SyncAndCollectEnabledOutlines(Components);

		for (const UOutlineComponent* Component : Components)
		{
			if (!Component)
			{
				continue;
			}

			if (Component->GetStencilValue() <= 0)
			{
				continue;
			}

			auto AddInstance = [&](EOutlineMethod Method, const FLinearColor& Color, float Thickness)
			{
				if (Instances.Num() >= MaxOutlinesPerFrame)
				{
					UE_LOG(LogInsertPass, Warning, TEXT("同帧启用的描边超过 %d 个，多余的会被跳过。"), MaxOutlinesPerFrame);
					return;
				}

				FOutlineGroupGPU& Instance = Instances.AddDefaulted_GetRef();
				Instance.ColorAndRadius = ToLinearColorAndRadius(Color, FMath::Clamp(Thickness, 1.0f, 16.0f));
				Instance.Stencil.X = static_cast<uint32>(Component->GetStencilValue());
				Instance.Stencil.Y = static_cast<uint32>(Method);
				if (Method == EOutlineMethod::Structure)
				{
					const float OneMinusDot = 1.0f - FMath::Cos(FMath::DegreesToRadians(Component->GetStructureCreaseAngle()));
					Instance.Stencil.Z = static_cast<uint32>(FMath::RoundToInt(FMath::Clamp(OneMinusDot, 0.0f, 1.0f) * 1000.0f));
				}
			};

			if (Component->IsScreenPixelEnabled())
			{
				AddInstance(EOutlineMethod::ScreenPixel, Component->GetScreenPixelColor(), Component->GetScreenPixelThickness());
			}
			if (Component->IsDepthNormalEnabled())
			{
				AddInstance(EOutlineMethod::DepthNormal, Component->GetDepthNormalColor(), Component->GetDepthNormalThickness());
			}
			if (Component->IsStructureEnabled())
			{
				AddInstance(EOutlineMethod::Structure, Component->GetStructureColor(), Component->GetStructureThickness());
			}
		}
	}

	ENQUEUE_RENDER_COMMAND(InsertPassSnapshotOutlines)(
		[WeakThis = AsWeak(), Instances = MoveTemp(Instances)](FRHICommandListImmediate&)
		{
			if (TSharedPtr<FInsertPassSceneViewExtension, ESPMode::ThreadSafe> This = StaticCastSharedPtr<FInsertPassSceneViewExtension>(WeakThis.Pin()))
			{
				This->RenderThreadOutlines = Instances;
			}
		});
}

void FInsertPassSceneViewExtension::SubscribeToPostProcessingPass(
	EPostProcessingPass Pass,
	const FSceneView& InView,
	FPostProcessingPassDelegateArray& InOutPassCallbacks,
	bool bIsPassEnabled)
{
	if (Pass != EPostProcessingPass::BeforeDOF || !bIsPassEnabled || RenderThreadOutlines.Num() == 0)
	{
		return;
	}

	InOutPassCallbacks.Add(FPostProcessingPassDelegate::CreateRaw(this, &FInsertPassSceneViewExtension::RenderOutline_RenderThread));
}

FScreenPassTexture FInsertPassSceneViewExtension::RenderOutline_RenderThread(
	FRDGBuilder& GraphBuilder,
	const FSceneView& View,
	const FPostProcessMaterialInputs& Inputs)
{
	return FOutlinePass::AddPass(GraphBuilder, View, Inputs, RenderThreadOutlines);
}
