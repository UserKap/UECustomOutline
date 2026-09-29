#include "OutlinePass.h"

#include "OutlineComponent.h"

#include "DataDrivenShaderPlatformInfo.h"
#include "GlobalShader.h"
#include "PostProcess/PostProcessMaterialInputs.h"
#include "RHIStaticStates.h"
#include "SceneTexturesConfig.h"
#include "ScreenPass.h"

class FOutlinePS : public FGlobalShader
{
public:
	DECLARE_GLOBAL_SHADER(FOutlinePS);
	SHADER_USE_PARAMETER_STRUCT(FOutlinePS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
		SHADER_PARAMETER_STRUCT_REF(FViewUniformShaderParameters, View)
		SHADER_PARAMETER_RDG_UNIFORM_BUFFER(FSceneTextureUniformParameters, SceneTexturesStruct)
		SHADER_PARAMETER_RDG_TEXTURE(Texture2D, SceneColorTexture)
		SHADER_PARAMETER_SAMPLER(SamplerState, SceneColorSampler)
		SHADER_PARAMETER_ARRAY(FVector4f, OutlineColors, [16])
		SHADER_PARAMETER_SCALAR_ARRAY(uint32, OutlineStencils, [16])
		SHADER_PARAMETER_SCALAR_ARRAY(uint32, OutlineMethods, [16])
		SHADER_PARAMETER_SCALAR_ARRAY(uint32, OutlineCreases, [16])
		SHADER_PARAMETER(uint32, OutlineGroupCount)
		SHADER_PARAMETER(uint32, bUseScreenPixel)
		SHADER_PARAMETER(uint32, bUseDepthNormal)
		SHADER_PARAMETER(uint32, bUseStructure)
		SHADER_PARAMETER(int32, ScreenPixelRadius)
		SHADER_PARAMETER(int32, DepthNormalRadius)
		SHADER_PARAMETER(int32, StructureRadius)
		SHADER_PARAMETER(FIntPoint, ViewportMin)
		SHADER_PARAMETER(FIntPoint, ViewportMax)
		RENDER_TARGET_BINDING_SLOTS()
	END_SHADER_PARAMETER_STRUCT()

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
	}
};

IMPLEMENT_GLOBAL_SHADER(FOutlinePS, "/InsertPass/Private/Outline.usf", "OutlinePS", SF_Pixel);

FScreenPassTexture FOutlinePass::AddPass(
	FRDGBuilder& GraphBuilder,
	const FSceneView& View,
	const FPostProcessMaterialInputs& Inputs,
	const TArray<FOutlineGroupGPU>& Groups)
{
	FScreenPassTexture SceneColor = FScreenPassTexture::CopyFromSlice(
		GraphBuilder,
		Inputs.GetInput(EPostProcessMaterialInput::SceneColor));

	if (!SceneColor.IsValid() || Groups.Num() == 0 || !Inputs.SceneTextures.SceneTextures)
	{
		return SceneColor;
	}

	FScreenPassRenderTarget Output = Inputs.OverrideOutput;
	if (!Output.IsValid())
	{
		Output = FScreenPassRenderTarget::CreateFromInput(GraphBuilder, SceneColor, View.GetOverwriteLoadAction(), TEXT("InsertPass.Outline"));
	}

	int32 ScreenPixelRadius = 0;
	int32 DepthNormalRadius = 0;
	int32 StructureRadius = 0;
	uint32 bUseScreenPixel = 0;
	uint32 bUseDepthNormal = 0;
	uint32 bUseStructure = 0;
	for (const FOutlineGroupGPU& Group : Groups)
	{
		const int32 Radius = FMath::Clamp(FMath::RoundToInt(Group.ColorAndRadius.W), 1, 16);
		if (Group.Stencil.Y == static_cast<uint32>(EOutlineMethod::DepthNormal))
		{
			bUseDepthNormal = 1;
			DepthNormalRadius = FMath::Max(DepthNormalRadius, Radius);
		}
		else if (Group.Stencil.Y == static_cast<uint32>(EOutlineMethod::Structure))
		{
			bUseStructure = 1;
			StructureRadius = FMath::Max(StructureRadius, Radius);
		}
		else
		{
			bUseScreenPixel = 1;
			ScreenPixelRadius = FMath::Max(ScreenPixelRadius, Radius);
		}
	}

	const int32 GroupCount = FMath::Min(Groups.Num(), 16);
	FOutlinePS::FParameters* Parameters = GraphBuilder.AllocParameters<FOutlinePS::FParameters>();
	Parameters->View = View.ViewUniformBuffer;
	Parameters->SceneTexturesStruct = Inputs.SceneTextures.SceneTextures;
	Parameters->SceneColorTexture = SceneColor.Texture;
	Parameters->SceneColorSampler = TStaticSamplerState<SF_Point, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
	for (int32 GroupIndex = 0; GroupIndex < 16; ++GroupIndex)
	{
		Parameters->OutlineColors[GroupIndex] = FVector4f(0.0f, 0.0f, 0.0f, 1.0f);
		GET_SCALAR_ARRAY_ELEMENT(Parameters->OutlineStencils, GroupIndex) = 0u;
		GET_SCALAR_ARRAY_ELEMENT(Parameters->OutlineMethods, GroupIndex) = 0u;
		GET_SCALAR_ARRAY_ELEMENT(Parameters->OutlineCreases, GroupIndex) = 0u;
	}
	for (int32 GroupIndex = 0; GroupIndex < GroupCount; ++GroupIndex)
	{
		Parameters->OutlineColors[GroupIndex] = Groups[GroupIndex].ColorAndRadius;
		GET_SCALAR_ARRAY_ELEMENT(Parameters->OutlineStencils, GroupIndex) = Groups[GroupIndex].Stencil.X;
		GET_SCALAR_ARRAY_ELEMENT(Parameters->OutlineMethods, GroupIndex) = Groups[GroupIndex].Stencil.Y;
		GET_SCALAR_ARRAY_ELEMENT(Parameters->OutlineCreases, GroupIndex) = Groups[GroupIndex].Stencil.Z;
	}
	Parameters->OutlineGroupCount = GroupCount;
	Parameters->bUseScreenPixel = bUseScreenPixel;
	Parameters->bUseDepthNormal = bUseDepthNormal;
	Parameters->bUseStructure = bUseStructure;
	Parameters->ScreenPixelRadius = ScreenPixelRadius;
	Parameters->DepthNormalRadius = DepthNormalRadius;
	Parameters->StructureRadius = StructureRadius;
	Parameters->ViewportMin = Output.ViewRect.Min;
	Parameters->ViewportMax = Output.ViewRect.Max;
	Parameters->RenderTargets = {};
	Parameters->RenderTargets[0] = Output.GetRenderTargetBinding();

	TShaderMapRef<FOutlinePS> PixelShader(GetGlobalShaderMap(View.GetFeatureLevel()));
	const FScreenPassTextureViewport Viewport(Output);

	AddDrawScreenPass(
		GraphBuilder,
		RDG_EVENT_NAME("InsertPass_Outline"),
		View,
		Viewport,
		Viewport,
		PixelShader,
		Parameters);

	return MoveTemp(Output);
}
