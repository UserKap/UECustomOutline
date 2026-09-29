// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OutlineComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOutlineComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_InsertPass(ETypeConstructPhase);
INSERTPASS_API UEnum* Z_Construct_UEnum_InsertPass_EOutlineMethod(ETypeConstructPhase);
INSERTPASS_API UClass* Z_Construct_UClass_UOutlineComponent(ETypeConstructPhase);
INSERTPASS_API UClass* Z_Construct_UClass_UOutlineComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOutlineMethod ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_InsertPass_EOutlineMethod_Statics
template<> INSERTPASS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOutlineMethod>()
{
	return Z_Construct_UEnum_InsertPass_EOutlineMethod(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xb8\xa4\xe5\xa5\x97\xe6\x8f\x8f\xe8\xbe\xb9\xe4\xba\x92\xe4\xb8\x8d\xe6\xb7\xb7\xe7\x94\xa8\xef\xbc\x8c\xe5\x9c\xa8\xe7\xbb\x84\xe4\xbb\xb6\xe4\xb8\x8a\xe9\x80\x89\xe6\x8b\xa9\xe3\x80\x82 */" },
#endif
		{ "DepthNormal.Comment", "/** \xe5\x8f\xaa\xe7\x9c\x8b\xe5\x9c\xba\xe6\x99\xaf\xe6\xb7\xb1\xe5\xba\xa6\xe5\x92\x8c\xe6\xb3\x95\xe7\xba\xbf\xef\xbc\x9a\xe6\xb7\xb1\xe5\xba\xa6\xe5\xb7\xae\xe3\x80\x81\xe6\xb3\x95\xe7\xba\xbf\xe6\x8a\x98\xe8\xa7\x92\xe5\xae\x9a\xe8\xbe\xb9\xe7\xbc\x98\xef\xbc\x8c\xe6\xb7\xb1\xe5\xba\xa6\xe5\xae\x9a\xe9\x81\xae\xe6\x8c\xa1\xe3\x80\x82 */" },
		{ "DepthNormal.DisplayName", "\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf" },
		{ "DepthNormal.Name", "EOutlineMethod::DepthNormal" },
		{ "DepthNormal.ToolTip", "\xe5\x8f\xaa\xe7\x9c\x8b\xe5\x9c\xba\xe6\x99\xaf\xe6\xb7\xb1\xe5\xba\xa6\xe5\x92\x8c\xe6\xb3\x95\xe7\xba\xbf\xef\xbc\x9a\xe6\xb7\xb1\xe5\xba\xa6\xe5\xb7\xae\xe3\x80\x81\xe6\xb3\x95\xe7\xba\xbf\xe6\x8a\x98\xe8\xa7\x92\xe5\xae\x9a\xe8\xbe\xb9\xe7\xbc\x98\xef\xbc\x8c\xe6\xb7\xb1\xe5\xba\xa6\xe5\xae\x9a\xe9\x81\xae\xe6\x8c\xa1\xe3\x80\x82" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ScreenPixel.Comment", "/** \xe5\x8e\x9f\xe6\x9d\xa5\xe7\x9a\x84\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0\xef\xbc\x9a\xe6\x8c\x89 Custom Stencil \xe5\x9c\xa8\xe9\x82\xbb\xe5\x9f\x9f\xe9\x87\x8c\xe6\x89\xbe\xe5\xa4\x96\xe8\xbd\xae\xe5\xbb\x93\xe3\x80\x82 */" },
		{ "ScreenPixel.DisplayName", "\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ScreenPixel.Name", "EOutlineMethod::ScreenPixel" },
		{ "ScreenPixel.ToolTip", "\xe5\x8e\x9f\xe6\x9d\xa5\xe7\x9a\x84\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0\xef\xbc\x9a\xe6\x8c\x89 Custom Stencil \xe5\x9c\xa8\xe9\x82\xbb\xe5\x9f\x9f\xe9\x87\x8c\xe6\x89\xbe\xe5\xa4\x96\xe8\xbd\xae\xe5\xbb\x93\xe3\x80\x82" },
		{ "Structure.Comment", "/** \xe6\x8a\xbd\xe5\x8f\x96\xe4\xb8\x89\xe8\xa7\x92\xe9\x9d\xa2\xe8\xbe\xb9\xef\xbc\x8c\xe7\x94\xa8\xe5\x89\x8d\xe6\x99\xaf\xe7\xba\xbf\xe6\x89\xb9\xe7\x94\xbb\xe5\x87\xba\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84\xef\xbc\x88\xe5\x90\xab\xe8\x83\x8c\xe9\x9d\xa2\xef\xbc\x89\xe3\x80\x82 */" },
		{ "Structure.DisplayName", "\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "Structure.Name", "EOutlineMethod::Structure" },
		{ "Structure.ToolTip", "\xe6\x8a\xbd\xe5\x8f\x96\xe4\xb8\x89\xe8\xa7\x92\xe9\x9d\xa2\xe8\xbe\xb9\xef\xbc\x8c\xe7\x94\xa8\xe5\x89\x8d\xe6\x99\xaf\xe7\xba\xbf\xe6\x89\xb9\xe7\x94\xbb\xe5\x87\xba\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84\xef\xbc\x88\xe5\x90\xab\xe8\x83\x8c\xe9\x9d\xa2\xef\xbc\x89\xe3\x80\x82" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xa4\xe5\xa5\x97\xe6\x8f\x8f\xe8\xbe\xb9\xe4\xba\x92\xe4\xb8\x8d\xe6\xb7\xb7\xe7\x94\xa8\xef\xbc\x8c\xe5\x9c\xa8\xe7\xbb\x84\xe4\xbb\xb6\xe4\xb8\x8a\xe9\x80\x89\xe6\x8b\xa9\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOutlineMethod::ScreenPixel", (int64)EOutlineMethod::ScreenPixel },
		{ "EOutlineMethod::DepthNormal", (int64)EOutlineMethod::DepthNormal },
		{ "EOutlineMethod::Structure", (int64)EOutlineMethod::Structure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_InsertPass,
	nullptr,
	"EOutlineMethod",
	"EOutlineMethod",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOutlineMethod;
UEnum* Z_Construct_UEnum_InsertPass_EOutlineMethod(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOutlineMethod.OuterSingleton)
		{
			ZRIE_EOutlineMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InsertPass_EOutlineMethod, (UObject*)Z_Construct_UPackage__Script_InsertPass(ETypeConstructPhase::Outer), TEXT("EOutlineMethod"));
		}
		return ZRIE_EOutlineMethod.OuterSingleton;
	}
	if (!ZRIE_EOutlineMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOutlineMethod.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOutlineMethod.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOutlineMethod **************************************************************

// ********** Begin Class UOutlineComponent Function ClearOutline **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_ClearOutline_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x85\xb3\xe6\x8e\x89\xe6\x9c\xac\xe7\xbb\x84\xe4\xbb\xb6\xe4\xb8\x8a\xe7\x9a\x84\xe5\x85\xa8\xe9\x83\xa8\xe6\x8f\x8f\xe8\xbe\xb9\xe6\x96\xb9\xe5\xbc\x8f\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe6\x8e\x89\xe6\x9c\xac\xe7\xbb\x84\xe4\xbb\xb6\xe4\xb8\x8a\xe7\x9a\x84\xe5\x85\xa8\xe9\x83\xa8\xe6\x8f\x8f\xe8\xbe\xb9\xe6\x96\xb9\xe5\xbc\x8f\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearOutline constinit property declarations **************************
// ********** End Function ClearOutline constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "ClearOutline", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOutlineComponent_ClearOutline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execClearOutline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearOutline();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function ClearOutline ************************************

// ********** Begin Class UOutlineComponent Function GetDepthNormalColor ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_GetDepthNormalColor_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventGetDepthNormalColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDepthNormalColor constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDepthNormalColor constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDepthNormalColor Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventGetDepthNormalColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDepthNormalColor Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "GetDepthNormalColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventGetDepthNormalColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventGetDepthNormalColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_GetDepthNormalColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execGetDepthNormalColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetDepthNormalColor();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function GetDepthNormalColor *****************************

// ********** Begin Class UOutlineComponent Function GetDepthNormalThickness ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_GetDepthNormalThickness_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventGetDepthNormalThickness_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDepthNormalThickness constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDepthNormalThickness constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDepthNormalThickness Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventGetDepthNormalThickness_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDepthNormalThickness Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "GetDepthNormalThickness", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventGetDepthNormalThickness_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventGetDepthNormalThickness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_GetDepthNormalThickness(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execGetDepthNormalThickness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDepthNormalThickness();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function GetDepthNormalThickness *************************

// ********** Begin Class UOutlineComponent Function GetScreenPixelColor ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_GetScreenPixelColor_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventGetScreenPixelColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetScreenPixelColor constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetScreenPixelColor constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetScreenPixelColor Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventGetScreenPixelColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetScreenPixelColor Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "GetScreenPixelColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventGetScreenPixelColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventGetScreenPixelColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_GetScreenPixelColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execGetScreenPixelColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetScreenPixelColor();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function GetScreenPixelColor *****************************

// ********** Begin Class UOutlineComponent Function GetScreenPixelThickness ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_GetScreenPixelThickness_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventGetScreenPixelThickness_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetScreenPixelThickness constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetScreenPixelThickness constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetScreenPixelThickness Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventGetScreenPixelThickness_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetScreenPixelThickness Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "GetScreenPixelThickness", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventGetScreenPixelThickness_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventGetScreenPixelThickness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_GetScreenPixelThickness(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execGetScreenPixelThickness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScreenPixelThickness();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function GetScreenPixelThickness *************************

// ********** Begin Class UOutlineComponent Function GetStructureColor *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_GetStructureColor_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventGetStructureColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStructureColor constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStructureColor constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStructureColor Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventGetStructureColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetStructureColor Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "GetStructureColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventGetStructureColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventGetStructureColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_GetStructureColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execGetStructureColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetStructureColor();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function GetStructureColor *******************************

// ********** Begin Class UOutlineComponent Function GetStructureCreaseAngle ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_GetStructureCreaseAngle_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventGetStructureCreaseAngle_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStructureCreaseAngle constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStructureCreaseAngle constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStructureCreaseAngle Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventGetStructureCreaseAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetStructureCreaseAngle Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "GetStructureCreaseAngle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventGetStructureCreaseAngle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventGetStructureCreaseAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_GetStructureCreaseAngle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execGetStructureCreaseAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStructureCreaseAngle();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function GetStructureCreaseAngle *************************

// ********** Begin Class UOutlineComponent Function GetStructureThickness *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_GetStructureThickness_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventGetStructureThickness_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStructureThickness constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStructureThickness constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStructureThickness Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventGetStructureThickness_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetStructureThickness Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "GetStructureThickness", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventGetStructureThickness_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventGetStructureThickness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_GetStructureThickness(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execGetStructureThickness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStructureThickness();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function GetStructureThickness ***************************

// ********** Begin Class UOutlineComponent Function IsDepthNormalEnabled **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_IsDepthNormalEnabled_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventIsDepthNormalEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDepthNormalEnabled constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OutlineComponent_eventIsDepthNormalEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDepthNormalEnabled constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDepthNormalEnabled Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventIsDepthNormalEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsDepthNormalEnabled Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "IsDepthNormalEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventIsDepthNormalEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventIsDepthNormalEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_IsDepthNormalEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execIsDepthNormalEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDepthNormalEnabled();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function IsDepthNormalEnabled ****************************

// ********** Begin Class UOutlineComponent Function IsOutlineEnabled ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_IsOutlineEnabled_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventIsOutlineEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbb\xbb\xe4\xb8\x80\xe5\xa5\x97\xe6\x8f\x8f\xe8\xbe\xb9\xe5\xbc\x80\xe7\x9d\x80\xe5\x8d\xb3\xe4\xb8\xba\xe5\x90\xaf\xe7\x94\xa8\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe4\xb8\x80\xe5\xa5\x97\xe6\x8f\x8f\xe8\xbe\xb9\xe5\xbc\x80\xe7\x9d\x80\xe5\x8d\xb3\xe4\xb8\xba\xe5\x90\xaf\xe7\x94\xa8\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsOutlineEnabled constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OutlineComponent_eventIsOutlineEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOutlineEnabled constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOutlineEnabled Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventIsOutlineEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsOutlineEnabled Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "IsOutlineEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventIsOutlineEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventIsOutlineEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_IsOutlineEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execIsOutlineEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOutlineEnabled();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function IsOutlineEnabled ********************************

// ********** Begin Class UOutlineComponent Function IsScreenPixelEnabled **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_IsScreenPixelEnabled_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventIsScreenPixelEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsScreenPixelEnabled constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OutlineComponent_eventIsScreenPixelEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsScreenPixelEnabled constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsScreenPixelEnabled Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventIsScreenPixelEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsScreenPixelEnabled Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "IsScreenPixelEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventIsScreenPixelEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventIsScreenPixelEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_IsScreenPixelEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execIsScreenPixelEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsScreenPixelEnabled();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function IsScreenPixelEnabled ****************************

// ********** Begin Class UOutlineComponent Function IsStructureEnabled ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_IsStructureEnabled_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventIsStructureEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsStructureEnabled constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OutlineComponent_eventIsStructureEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsStructureEnabled constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsStructureEnabled Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventIsStructureEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsStructureEnabled Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "IsStructureEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventIsStructureEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventIsStructureEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_IsStructureEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execIsStructureEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStructureEnabled();
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function IsStructureEnabled ******************************

// ********** Begin Class UOutlineComponent Function SelectExclusive *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SelectExclusive_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSelectExclusive_Parms
	{
		bool bEnableScreenPixel;
		bool bEnableDepthNormal;
		bool bEnableStructure;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xba\x92\xe6\x96\xa5\xe9\x80\x89\xe4\xb8\xad\xef\xbc\x9a\xe5\x85\xb3\xe9\x97\xad\xe5\x9c\xba\xe6\x99\xaf\xe4\xb8\xad\xe5\x85\xb6\xe4\xbb\x96 Actor \xe7\x9a\x84\xe6\x8f\x8f\xe8\xbe\xb9\xef\xbc\x8c\xe5\x86\x8d\xe6\x89\x93\xe5\xbc\x80\xe8\x87\xaa\xe5\xb7\xb1\xe3\x80\x82\n\x09 * \xe7\x82\xb9\xe5\x87\xbb Actor \xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x8d\xb3\xe5\x8f\xaf\xe3\x80\x82\n\x09 */" },
#endif
		{ "CPP_Default_bEnableDepthNormal", "false" },
		{ "CPP_Default_bEnableScreenPixel", "true" },
		{ "CPP_Default_bEnableStructure", "false" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x92\xe6\x96\xa5\xe9\x80\x89\xe4\xb8\xad\xef\xbc\x9a\xe5\x85\xb3\xe9\x97\xad\xe5\x9c\xba\xe6\x99\xaf\xe4\xb8\xad\xe5\x85\xb6\xe4\xbb\x96 Actor \xe7\x9a\x84\xe6\x8f\x8f\xe8\xbe\xb9\xef\xbc\x8c\xe5\x86\x8d\xe6\x89\x93\xe5\xbc\x80\xe8\x87\xaa\xe5\xb7\xb1\xe3\x80\x82\n\xe7\x82\xb9\xe5\x87\xbb Actor \xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x8d\xb3\xe5\x8f\xaf\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SelectExclusive constinit property declarations ***********************
	static void NewProp_bEnableScreenPixel_SetBit(void* Obj)
	{
		((OutlineComponent_eventSelectExclusive_Parms*)Obj)->bEnableScreenPixel = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScreenPixel;
	static void NewProp_bEnableDepthNormal_SetBit(void* Obj)
	{
		((OutlineComponent_eventSelectExclusive_Parms*)Obj)->bEnableDepthNormal = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDepthNormal;
	static void NewProp_bEnableStructure_SetBit(void* Obj)
	{
		((OutlineComponent_eventSelectExclusive_Parms*)Obj)->bEnableStructure = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStructure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SelectExclusive constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SelectExclusive Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableScreenPixel = { "bEnableScreenPixel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventSelectExclusive_Parms), &UHT_STATICS::NewProp_bEnableScreenPixel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDepthNormal = { "bEnableDepthNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventSelectExclusive_Parms), &UHT_STATICS::NewProp_bEnableDepthNormal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableStructure = { "bEnableStructure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventSelectExclusive_Parms), &UHT_STATICS::NewProp_bEnableStructure_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableScreenPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDepthNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableStructure,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SelectExclusive Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SelectExclusive", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSelectExclusive_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSelectExclusive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SelectExclusive(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSelectExclusive)
{
	P_GET_UBOOL(Z_Param_bEnableScreenPixel);
	P_GET_UBOOL(Z_Param_bEnableDepthNormal);
	P_GET_UBOOL(Z_Param_bEnableStructure);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectExclusive(Z_Param_bEnableScreenPixel,Z_Param_bEnableDepthNormal,Z_Param_bEnableStructure);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SelectExclusive *********************************

// ********** Begin Class UOutlineComponent Function SetCustomDepthEnabled *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetCustomDepthEnabled_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetCustomDepthEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x85\xbc\xe5\xae\xb9\xe6\x97\xa7\xe8\x93\x9d\xe5\x9b\xbe\xef\xbc\x9a""Custom Depth \xe7\x94\xb1\xe7\xbb\x84\xe4\xbb\xb6\xe6\x89\x98\xe7\xae\xa1\xef\xbc\x8c\xe8\xbf\x99\xe9\x87\x8c\xe5\x8f\xaa\xe5\x90\x8c\xe6\xad\xa5\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82 */" },
#endif
		{ "DisplayName", "Set Custom Depth Enabled" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xbc\xe5\xae\xb9\xe6\x97\xa7\xe8\x93\x9d\xe5\x9b\xbe\xef\xbc\x9a""Custom Depth \xe7\x94\xb1\xe7\xbb\x84\xe4\xbb\xb6\xe6\x89\x98\xe7\xae\xa1\xef\xbc\x8c\xe8\xbf\x99\xe9\x87\x8c\xe5\x8f\xaa\xe5\x90\x8c\xe6\xad\xa5\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomDepthEnabled constinit property declarations *****************
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((OutlineComponent_eventSetCustomDepthEnabled_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomDepthEnabled constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomDepthEnabled Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventSetCustomDepthEnabled_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCustomDepthEnabled Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetCustomDepthEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetCustomDepthEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetCustomDepthEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetCustomDepthEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetCustomDepthEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomDepthEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetCustomDepthEnabled ***************************

// ********** Begin Class UOutlineComponent Function SetDepthNormalColor ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetDepthNormalColor_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetDepthNormalColor_Parms
	{
		FLinearColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDepthNormalColor constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDepthNormalColor constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDepthNormalColor Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetDepthNormalColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDepthNormalColor Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetDepthNormalColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetDepthNormalColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetDepthNormalColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetDepthNormalColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetDepthNormalColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDepthNormalColor(Z_Param_InColor);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetDepthNormalColor *****************************

// ********** Begin Class UOutlineComponent Function SetDepthNormalEnabled *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetDepthNormalEnabled_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetDepthNormalEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDepthNormalEnabled constinit property declarations *****************
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((OutlineComponent_eventSetDepthNormalEnabled_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDepthNormalEnabled constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDepthNormalEnabled Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventSetDepthNormalEnabled_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDepthNormalEnabled Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetDepthNormalEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetDepthNormalEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetDepthNormalEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetDepthNormalEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetDepthNormalEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDepthNormalEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetDepthNormalEnabled ***************************

// ********** Begin Class UOutlineComponent Function SetDepthNormalThickness ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetDepthNormalThickness_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetDepthNormalThickness_Parms
	{
		float InThickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDepthNormalThickness constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDepthNormalThickness constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDepthNormalThickness Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InThickness = { "InThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetDepthNormalThickness_Parms, InThickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InThickness,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDepthNormalThickness Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetDepthNormalThickness", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetDepthNormalThickness_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetDepthNormalThickness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetDepthNormalThickness(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetDepthNormalThickness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InThickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDepthNormalThickness(Z_Param_InThickness);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetDepthNormalThickness *************************

// ********** Begin Class UOutlineComponent Function SetOutlineEnabled *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetOutlineEnabled_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetOutlineEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x85\xbc\xe5\xae\xb9\xe6\x97\xa7\xe8\x93\x9d\xe5\x9b\xbe\xef\xbc\x9a\xe7\xad\x89\xe4\xbb\xb7\xe4\xba\x8e\xe5\xbc\x80\xe5\x85\xb3\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0\xe6\x8f\x8f\xe8\xbe\xb9\xe3\x80\x82 */" },
#endif
		{ "DisplayName", "Set Outline Enabled" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xbc\xe5\xae\xb9\xe6\x97\xa7\xe8\x93\x9d\xe5\x9b\xbe\xef\xbc\x9a\xe7\xad\x89\xe4\xbb\xb7\xe4\xba\x8e\xe5\xbc\x80\xe5\x85\xb3\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0\xe6\x8f\x8f\xe8\xbe\xb9\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetOutlineEnabled constinit property declarations *********************
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((OutlineComponent_eventSetOutlineEnabled_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOutlineEnabled constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOutlineEnabled Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventSetOutlineEnabled_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOutlineEnabled Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetOutlineEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetOutlineEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetOutlineEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetOutlineEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetOutlineEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutlineEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetOutlineEnabled *******************************

// ********** Begin Class UOutlineComponent Function SetScreenPixelColor ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetScreenPixelColor_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetScreenPixelColor_Parms
	{
		FLinearColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetScreenPixelColor constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetScreenPixelColor constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetScreenPixelColor Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetScreenPixelColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetScreenPixelColor Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetScreenPixelColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetScreenPixelColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetScreenPixelColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetScreenPixelColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetScreenPixelColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScreenPixelColor(Z_Param_InColor);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetScreenPixelColor *****************************

// ********** Begin Class UOutlineComponent Function SetScreenPixelEnabled *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetScreenPixelEnabled_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetScreenPixelEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetScreenPixelEnabled constinit property declarations *****************
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((OutlineComponent_eventSetScreenPixelEnabled_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetScreenPixelEnabled constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetScreenPixelEnabled Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventSetScreenPixelEnabled_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetScreenPixelEnabled Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetScreenPixelEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetScreenPixelEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetScreenPixelEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetScreenPixelEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetScreenPixelEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScreenPixelEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetScreenPixelEnabled ***************************

// ********** Begin Class UOutlineComponent Function SetScreenPixelThickness ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetScreenPixelThickness_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetScreenPixelThickness_Parms
	{
		float InThickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetScreenPixelThickness constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetScreenPixelThickness constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetScreenPixelThickness Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InThickness = { "InThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetScreenPixelThickness_Parms, InThickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InThickness,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetScreenPixelThickness Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetScreenPixelThickness", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetScreenPixelThickness_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetScreenPixelThickness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetScreenPixelThickness(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetScreenPixelThickness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InThickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScreenPixelThickness(Z_Param_InThickness);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetScreenPixelThickness *************************

// ********** Begin Class UOutlineComponent Function SetStructureColor *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetStructureColor_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetStructureColor_Parms
	{
		FLinearColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStructureColor constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStructureColor constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStructureColor Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetStructureColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStructureColor Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetStructureColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetStructureColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetStructureColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetStructureColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetStructureColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStructureColor(Z_Param_InColor);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetStructureColor *******************************

// ********** Begin Class UOutlineComponent Function SetStructureCreaseAngle ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetStructureCreaseAngle_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetStructureCreaseAngle_Parms
	{
		float InDegrees;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStructureCreaseAngle constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDegrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStructureCreaseAngle constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStructureCreaseAngle Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InDegrees = { "InDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetStructureCreaseAngle_Parms, InDegrees), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InDegrees,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStructureCreaseAngle Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetStructureCreaseAngle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetStructureCreaseAngle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetStructureCreaseAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetStructureCreaseAngle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetStructureCreaseAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDegrees);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStructureCreaseAngle(Z_Param_InDegrees);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetStructureCreaseAngle *************************

// ********** Begin Class UOutlineComponent Function SetStructureEnabled ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetStructureEnabled_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetStructureEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStructureEnabled constinit property declarations *******************
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((OutlineComponent_eventSetStructureEnabled_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStructureEnabled constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStructureEnabled Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OutlineComponent_eventSetStructureEnabled_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStructureEnabled Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetStructureEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetStructureEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetStructureEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetStructureEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetStructureEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStructureEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetStructureEnabled *****************************

// ********** Begin Class UOutlineComponent Function SetStructureThickness *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOutlineComponent_SetStructureThickness_Statics
struct UHT_STATICS
{
	struct OutlineComponent_eventSetStructureThickness_Parms
	{
		float InThickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStructureThickness constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStructureThickness constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStructureThickness Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InThickness = { "InThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetStructureThickness_Parms, InThickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InThickness,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStructureThickness Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOutlineComponent, nullptr, "SetStructureThickness", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OutlineComponent_eventSetStructureThickness_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OutlineComponent_eventSetStructureThickness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetStructureThickness(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOutlineComponent::execSetStructureThickness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InThickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStructureThickness(Z_Param_InThickness);
	P_NATIVE_END;
}
// ********** End Class UOutlineComponent Function SetStructureThickness ***************************

// ********** Begin Class UOutlineComponent ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOutlineComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\x8f\x8f\xe8\xbe\xb9\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0\xe3\x80\x81\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf\xe3\x80\x81\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84\xe5\x90\x84\xe6\x9c\x89\xe5\xbc\x80\xe5\x85\xb3\xef\xbc\x8c\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe3\x80\x82\n */" },
#endif
		{ "DisplayName", "\xe6\x8f\x8f\xe8\xbe\xb9" },
		{ "IncludePath", "OutlineComponent.h" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x8f\xe8\xbe\xb9\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0\xe3\x80\x81\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf\xe3\x80\x81\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84\xe5\x90\x84\xe6\x9c\x89\xe5\xbc\x80\xe5\x85\xb3\xef\xbc\x8c\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableScreenPixel_MetaData[] = {
		{ "BlueprintGetter", "IsScreenPixelEnabled" },
		{ "BlueprintSetter", "SetScreenPixelEnabled" },
		{ "Category", "OutlineSystem|\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPixelColor_MetaData[] = {
		{ "Category", "OutlineSystem|\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPixelThickness_MetaData[] = {
		{ "Category", "OutlineSystem|\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "0.5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa4\x96\xe8\xbd\xae\xe5\xbb\x93\xe5\xae\xbd\xe5\xba\xa6\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe6\x98\xaf\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0\xe3\x80\x82\xe5\x85\xa8\xe5\xb1\x8f pass \xe9\x87\x8c\xe6\x9c\x80\xe5\xa4\x9a\xe6\x8c\x89 16 \xe8\xae\xa1\xe7\xae\x97\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe8\xbd\xae\xe5\xbb\x93\xe5\xae\xbd\xe5\xba\xa6\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe6\x98\xaf\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0\xe3\x80\x82\xe5\x85\xa8\xe5\xb1\x8f pass \xe9\x87\x8c\xe6\x9c\x80\xe5\xa4\x9a\xe6\x8c\x89 16 \xe8\xae\xa1\xe7\xae\x97\xe3\x80\x82" },
#endif
		{ "UIMax", "32.0" },
		{ "UIMin", "0.5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDepthNormal_MetaData[] = {
		{ "BlueprintGetter", "IsDepthNormalEnabled" },
		{ "BlueprintSetter", "SetDepthNormalEnabled" },
		{ "Category", "OutlineSystem|\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthNormalColor_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthNormalThickness_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xb7\xb1\xe5\xba\xa6\xe6\xb3\x95\xe7\xba\xbf" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "0.5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbe\xb9\xe7\xbc\x98\xe5\xae\xbd\xe5\xba\xa6\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe6\x98\xaf\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0\xe3\x80\x82\xe5\x85\xa8\xe5\xb1\x8f pass \xe9\x87\x8c\xe6\x9c\x80\xe5\xa4\x9a\xe6\x8c\x89 16 \xe8\xae\xa1\xe7\xae\x97\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\xb9\xe7\xbc\x98\xe5\xae\xbd\xe5\xba\xa6\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe6\x98\xaf\xe5\xb1\x8f\xe5\xb9\x95\xe5\x83\x8f\xe7\xb4\xa0\xe3\x80\x82\xe5\x85\xa8\xe5\xb1\x8f pass \xe9\x87\x8c\xe6\x9c\x80\xe5\xa4\x9a\xe6\x8c\x89 16 \xe8\xae\xa1\xe7\xae\x97\xe3\x80\x82" },
#endif
		{ "UIMax", "32.0" },
		{ "UIMin", "0.5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStructure_MetaData[] = {
		{ "BlueprintGetter", "IsStructureEnabled" },
		{ "BlueprintSetter", "SetStructureEnabled" },
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructureColor_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructureThickness_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbb\x93\xe6\x9e\x84\xe7\xba\xbf\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe7\xb2\x97\xe7\xbb\x86\xef\xbc\x88\xe5\x8e\x98\xe7\xb1\xb3\xef\xbc\x89\xe3\x80\x82""0 \xe7\xba\xa6\xe4\xb8\xba 1 \xe5\x83\x8f\xe7\xb4\xa0\xe7\xbb\x86\xe7\xba\xbf\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9e\x84\xe7\xba\xbf\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe7\xb2\x97\xe7\xbb\x86\xef\xbc\x88\xe5\x8e\x98\xe7\xb1\xb3\xef\xbc\x89\xe3\x80\x82""0 \xe7\xba\xa6\xe4\xb8\xba 1 \xe5\x83\x8f\xe7\xb4\xa0\xe7\xbb\x86\xe7\xba\xbf\xe3\x80\x82" },
#endif
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructureCreaseAngle_MetaData[] = {
		{ "Category", "OutlineSystem|\xe6\xa8\xa1\xe5\x9e\x8b\xe7\xbb\x93\xe6\x9e\x84" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x9b\xb8\xe9\x82\xbb\xe4\xb8\x89\xe8\xa7\x92\xe9\x9d\xa2\xe5\xa4\xb9\xe8\xa7\x92\xe5\xa4\xa7\xe4\xba\x8e\xe8\xaf\xa5\xe5\x80\xbc\xe6\x89\x8d\xe4\xbf\x9d\xe7\x95\x99\xe8\xbe\xb9\xe3\x80\x82\xe8\xb6\x8a\xe5\xb0\x8f\xe8\xb6\x8a\xe5\xaf\x86\xef\xbc\x8c\xe8\xb6\x8a\xe5\xa4\xa7\xe8\xb6\x8a\xe6\x8e\xa5\xe8\xbf\x91\xe5\x9b\x9b\xe8\xbe\xb9\xe9\x9d\xa2\xe5\xa4\x96\xe8\xbd\xae\xe5\xbb\x93\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe9\x82\xbb\xe4\xb8\x89\xe8\xa7\x92\xe9\x9d\xa2\xe5\xa4\xb9\xe8\xa7\x92\xe5\xa4\xa7\xe4\xba\x8e\xe8\xaf\xa5\xe5\x80\xbc\xe6\x89\x8d\xe4\xbf\x9d\xe7\x95\x99\xe8\xbe\xb9\xe3\x80\x82\xe8\xb6\x8a\xe5\xb0\x8f\xe8\xb6\x8a\xe5\xaf\x86\xef\xbc\x8c\xe8\xb6\x8a\xe5\xa4\xa7\xe8\xb6\x8a\xe6\x8e\xa5\xe8\xbf\x91\xe5\x9b\x9b\xe8\xbe\xb9\xe9\x9d\xa2\xe5\xa4\x96\xe8\xbd\xae\xe5\xbb\x93\xe3\x80\x82" },
#endif
		{ "UIMax", "90.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedStencilValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x94\xb1 Subsystem \xe5\x88\x86\xe9\x85\x8d\xe7\x9a\x84\xe5\x94\xaf\xe4\xb8\x80 Stencil\xef\xbc\x88""1-255\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb1 Subsystem \xe5\x88\x86\xe9\x85\x8d\xe7\x9a\x84\xe5\x94\xaf\xe4\xb8\x80 Stencil\xef\xbc\x88""1-255\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructureLineBatch_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOutlineComponent constinit property declarations ************************
	static void NewProp_bEnableScreenPixel_SetBit(void* Obj)
	{
		((UOutlineComponent*)Obj)->bEnableScreenPixel = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScreenPixel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPixelColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenPixelThickness;
	static void NewProp_bEnableDepthNormal_SetBit(void* Obj)
	{
		((UOutlineComponent*)Obj)->bEnableDepthNormal = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDepthNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DepthNormalColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthNormalThickness;
	static void NewProp_bEnableStructure_SetBit(void* Obj)
	{
		((UOutlineComponent*)Obj)->bEnableStructure = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStructure;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructureColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StructureThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StructureCreaseAngle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllocatedStencilValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StructureLineBatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOutlineComponent constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearOutline"), .Pointer = &UOutlineComponent::execClearOutline },
		{ .NameUTF8 = UTF8TEXT("GetDepthNormalColor"), .Pointer = &UOutlineComponent::execGetDepthNormalColor },
		{ .NameUTF8 = UTF8TEXT("GetDepthNormalThickness"), .Pointer = &UOutlineComponent::execGetDepthNormalThickness },
		{ .NameUTF8 = UTF8TEXT("GetScreenPixelColor"), .Pointer = &UOutlineComponent::execGetScreenPixelColor },
		{ .NameUTF8 = UTF8TEXT("GetScreenPixelThickness"), .Pointer = &UOutlineComponent::execGetScreenPixelThickness },
		{ .NameUTF8 = UTF8TEXT("GetStructureColor"), .Pointer = &UOutlineComponent::execGetStructureColor },
		{ .NameUTF8 = UTF8TEXT("GetStructureCreaseAngle"), .Pointer = &UOutlineComponent::execGetStructureCreaseAngle },
		{ .NameUTF8 = UTF8TEXT("GetStructureThickness"), .Pointer = &UOutlineComponent::execGetStructureThickness },
		{ .NameUTF8 = UTF8TEXT("IsDepthNormalEnabled"), .Pointer = &UOutlineComponent::execIsDepthNormalEnabled },
		{ .NameUTF8 = UTF8TEXT("IsOutlineEnabled"), .Pointer = &UOutlineComponent::execIsOutlineEnabled },
		{ .NameUTF8 = UTF8TEXT("IsScreenPixelEnabled"), .Pointer = &UOutlineComponent::execIsScreenPixelEnabled },
		{ .NameUTF8 = UTF8TEXT("IsStructureEnabled"), .Pointer = &UOutlineComponent::execIsStructureEnabled },
		{ .NameUTF8 = UTF8TEXT("SelectExclusive"), .Pointer = &UOutlineComponent::execSelectExclusive },
		{ .NameUTF8 = UTF8TEXT("SetCustomDepthEnabled"), .Pointer = &UOutlineComponent::execSetCustomDepthEnabled },
		{ .NameUTF8 = UTF8TEXT("SetDepthNormalColor"), .Pointer = &UOutlineComponent::execSetDepthNormalColor },
		{ .NameUTF8 = UTF8TEXT("SetDepthNormalEnabled"), .Pointer = &UOutlineComponent::execSetDepthNormalEnabled },
		{ .NameUTF8 = UTF8TEXT("SetDepthNormalThickness"), .Pointer = &UOutlineComponent::execSetDepthNormalThickness },
		{ .NameUTF8 = UTF8TEXT("SetOutlineEnabled"), .Pointer = &UOutlineComponent::execSetOutlineEnabled },
		{ .NameUTF8 = UTF8TEXT("SetScreenPixelColor"), .Pointer = &UOutlineComponent::execSetScreenPixelColor },
		{ .NameUTF8 = UTF8TEXT("SetScreenPixelEnabled"), .Pointer = &UOutlineComponent::execSetScreenPixelEnabled },
		{ .NameUTF8 = UTF8TEXT("SetScreenPixelThickness"), .Pointer = &UOutlineComponent::execSetScreenPixelThickness },
		{ .NameUTF8 = UTF8TEXT("SetStructureColor"), .Pointer = &UOutlineComponent::execSetStructureColor },
		{ .NameUTF8 = UTF8TEXT("SetStructureCreaseAngle"), .Pointer = &UOutlineComponent::execSetStructureCreaseAngle },
		{ .NameUTF8 = UTF8TEXT("SetStructureEnabled"), .Pointer = &UOutlineComponent::execSetStructureEnabled },
		{ .NameUTF8 = UTF8TEXT("SetStructureThickness"), .Pointer = &UOutlineComponent::execSetStructureThickness },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOutlineComponent_ClearOutline, "ClearOutline" }, // 6c34831f96674c68c659601cbbe89702bd60063c
		{ &Z_Construct_UFunction_UOutlineComponent_GetDepthNormalColor, "GetDepthNormalColor" }, // 7d14c407b3a5055e2bd4992e5bd257098d3eb70d
		{ &Z_Construct_UFunction_UOutlineComponent_GetDepthNormalThickness, "GetDepthNormalThickness" }, // 271d42698543efbb08d4808cd90b87c9e6959a7f
		{ &Z_Construct_UFunction_UOutlineComponent_GetScreenPixelColor, "GetScreenPixelColor" }, // 175bb254b713e9549e53f6d027bc003fe30b7bc4
		{ &Z_Construct_UFunction_UOutlineComponent_GetScreenPixelThickness, "GetScreenPixelThickness" }, // 4618c45008d8cd57abbb7e7097d4b74b2028b81c
		{ &Z_Construct_UFunction_UOutlineComponent_GetStructureColor, "GetStructureColor" }, // ea7336e5acfc2ad64aaf64d4a62bd1609fdf459c
		{ &Z_Construct_UFunction_UOutlineComponent_GetStructureCreaseAngle, "GetStructureCreaseAngle" }, // 45ecdd5100ef4adefca9c560d859e3760a1d63c9
		{ &Z_Construct_UFunction_UOutlineComponent_GetStructureThickness, "GetStructureThickness" }, // 0670de5c6488291a310ede69acb7a86ed4746ac1
		{ &Z_Construct_UFunction_UOutlineComponent_IsDepthNormalEnabled, "IsDepthNormalEnabled" }, // 000ed6f5e23f75eb35832413afa948cee64b69f1
		{ &Z_Construct_UFunction_UOutlineComponent_IsOutlineEnabled, "IsOutlineEnabled" }, // afbd60e8bdc64430c2b7fbcf943cd07d5e4fe5d4
		{ &Z_Construct_UFunction_UOutlineComponent_IsScreenPixelEnabled, "IsScreenPixelEnabled" }, // 1a578d3c57aa70a90ca9087ad195a198c9663649
		{ &Z_Construct_UFunction_UOutlineComponent_IsStructureEnabled, "IsStructureEnabled" }, // 278a436d17f1cd2ac6ad72eb03c947aab6a4dbeb
		{ &Z_Construct_UFunction_UOutlineComponent_SelectExclusive, "SelectExclusive" }, // be0cb766ad0148956b37ace165568ba191f3dccb
		{ &Z_Construct_UFunction_UOutlineComponent_SetCustomDepthEnabled, "SetCustomDepthEnabled" }, // d76077e5d987f9899158e5c17a8ec5280dc03037
		{ &Z_Construct_UFunction_UOutlineComponent_SetDepthNormalColor, "SetDepthNormalColor" }, // bc93ca1162f5b0a87577b753bb65e2da4f3aa116
		{ &Z_Construct_UFunction_UOutlineComponent_SetDepthNormalEnabled, "SetDepthNormalEnabled" }, // f676b26970c1ae0c50b0c06e3fc6d0b6e5c5c618
		{ &Z_Construct_UFunction_UOutlineComponent_SetDepthNormalThickness, "SetDepthNormalThickness" }, // 228d7a1bb3f2f7ce873966638a66485c92b06084
		{ &Z_Construct_UFunction_UOutlineComponent_SetOutlineEnabled, "SetOutlineEnabled" }, // 54f22bf39a549aa0cc2635a2bd3c9db484cc2cdd
		{ &Z_Construct_UFunction_UOutlineComponent_SetScreenPixelColor, "SetScreenPixelColor" }, // 9d7578949ab237a1af6a7da6cd51a285b4637fcb
		{ &Z_Construct_UFunction_UOutlineComponent_SetScreenPixelEnabled, "SetScreenPixelEnabled" }, // 127e8979b2aab16a3e6dbe502e6f1a8a6ac0bd1d
		{ &Z_Construct_UFunction_UOutlineComponent_SetScreenPixelThickness, "SetScreenPixelThickness" }, // b94a9d3468f2b5b7749475bc1372214bf0c653c4
		{ &Z_Construct_UFunction_UOutlineComponent_SetStructureColor, "SetStructureColor" }, // e8f5dd60ebbc83f722917b53e691532802267ef5
		{ &Z_Construct_UFunction_UOutlineComponent_SetStructureCreaseAngle, "SetStructureCreaseAngle" }, // 05c34b8c2516982ccde3b0907c38911c0854b228
		{ &Z_Construct_UFunction_UOutlineComponent_SetStructureEnabled, "SetStructureEnabled" }, // 8e73243d0a03110afa93ef66f78b45e6dcb0a580
		{ &Z_Construct_UFunction_UOutlineComponent_SetStructureThickness, "SetStructureThickness" }, // d7a71332f4f54e4a40fa5c9c6987245390f6c734
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutlineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOutlineComponent Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableScreenPixel = { "bEnableScreenPixel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOutlineComponent), &UHT_STATICS::NewProp_bEnableScreenPixel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableScreenPixel_MetaData), NewProp_bEnableScreenPixel_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ScreenPixelColor = { "ScreenPixelColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, ScreenPixelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenPixelColor_MetaData), NewProp_ScreenPixelColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ScreenPixelThickness = { "ScreenPixelThickness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, ScreenPixelThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenPixelThickness_MetaData), NewProp_ScreenPixelThickness_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDepthNormal = { "bEnableDepthNormal", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOutlineComponent), &UHT_STATICS::NewProp_bEnableDepthNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDepthNormal_MetaData), NewProp_bEnableDepthNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DepthNormalColor = { "DepthNormalColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, DepthNormalColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthNormalColor_MetaData), NewProp_DepthNormalColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DepthNormalThickness = { "DepthNormalThickness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, DepthNormalThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthNormalThickness_MetaData), NewProp_DepthNormalThickness_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableStructure = { "bEnableStructure", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOutlineComponent), &UHT_STATICS::NewProp_bEnableStructure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStructure_MetaData), NewProp_bEnableStructure_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StructureColor = { "StructureColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, StructureColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructureColor_MetaData), NewProp_StructureColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StructureThickness = { "StructureThickness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, StructureThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructureThickness_MetaData), NewProp_StructureThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StructureCreaseAngle = { "StructureCreaseAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, StructureCreaseAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructureCreaseAngle_MetaData), NewProp_StructureCreaseAngle_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AllocatedStencilValue = { "AllocatedStencilValue", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, AllocatedStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocatedStencilValue_MetaData), NewProp_AllocatedStencilValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StructureLineBatch = { "StructureLineBatch", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, StructureLineBatch), Z_Construct_UClass_ULineBatchComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructureLineBatch_MetaData), NewProp_StructureLineBatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableScreenPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScreenPixelColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScreenPixelThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDepthNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DepthNormalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DepthNormalThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableStructure,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructureColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructureThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructureCreaseAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllocatedStencilValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructureLineBatch,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOutlineComponent Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_InsertPass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOutlineComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOutlineComponent_StaticRegisterNativesUOutlineComponent()
{
	UClass* Class = UOutlineComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOutlineComponent;
UClass* Z_Construct_UClass_UOutlineComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOutlineComponent;
		if (!Z_Registration_Info_UClass_UOutlineComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OutlineComponent"),
				Z_Registration_Info_UClass_UOutlineComponent.InnerSingleton,
				UOutlineComponent_StaticRegisterNativesUOutlineComponent,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UOutlineComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOutlineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutlineComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOutlineComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOutlineComponent);
UOutlineComponent::~UOutlineComponent() {}
// ********** End Class UOutlineComponent **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h__Script_InsertPass_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_InsertPass_EOutlineMethod, TEXT("EOutlineMethod"), &ZRIE_EOutlineMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3885437166U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOutlineComponent, TEXT("UOutlineComponent"), &Z_Registration_Info_UClass_UOutlineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutlineComponent), 3650796654U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h__Script_InsertPass_b91e2f4f85c86bd4cb6d5d697a8afa48d12dcffc{
	TEXT("/Script/InsertPass"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
