#pragma once

#include "OutlinePass.h"
#include "SceneViewExtension.h"

class UInsertPassSubsystem;

class FInsertPassSceneViewExtension : public FWorldSceneViewExtension
{
public:
	FInsertPassSceneViewExtension(const FAutoRegister& AutoRegister, UWorld* InWorld, UInsertPassSubsystem* InSubsystem);

	virtual bool IsActiveThisFrame_Internal(const FSceneViewExtensionContext& Context) const override;
	virtual void BeginRenderViewFamily(FSceneViewFamily& InViewFamily) override;
	virtual void SubscribeToPostProcessingPass(EPostProcessingPass Pass, const FSceneView& InView, FPostProcessingPassDelegateArray& InOutPassCallbacks, bool bIsPassEnabled) override;

private:
	FScreenPassTexture RenderOutline_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessMaterialInputs& Inputs);

	TWeakObjectPtr<UInsertPassSubsystem> Subsystem;
	TArray<FOutlineGroupGPU> RenderThreadOutlines;
};
