#pragma once

#include "CoreMinimal.h"
#include "ShaderParameterMacros.h"

class FRDGBuilder;
class FSceneView;
struct FPostProcessMaterialInputs;
struct FScreenPassTexture;

struct FOutlineGroupGPU
{
	FVector4f ColorAndRadius = FVector4f::Zero();
	/** X = Custom Stencil，Y = EOutlineMethod。 */
	FUintVector4 Stencil = FUintVector4(0, 0, 0, 0);
};

class FOutlinePass
{
public:
	static FScreenPassTexture AddPass(
		FRDGBuilder& GraphBuilder,
		const FSceneView& View,
		const FPostProcessMaterialInputs& Inputs,
		const TArray<FOutlineGroupGPU>& Groups);
};
