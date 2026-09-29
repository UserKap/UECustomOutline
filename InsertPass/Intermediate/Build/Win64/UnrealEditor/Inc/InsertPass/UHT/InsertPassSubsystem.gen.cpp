// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsertPassSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeInsertPassSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_InsertPass(ETypeConstructPhase);
INSERTPASS_API UClass* Z_Construct_UClass_UInsertPassSubsystem(ETypeConstructPhase);
INSERTPASS_API UClass* Z_Construct_UClass_UInsertPassSubsystem(ETypeConstructPhase);
INSERTPASS_API UClass* Z_Construct_UClass_UOutlineComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UInsertPassSubsystem Function ClearAllOutlines ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInsertPassSubsystem_ClearAllOutlines_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x85\xb3\xe6\x8e\x89\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x96\xe7\x95\x8c\xe9\x87\x8c\xe6\x89\x80\xe6\x9c\x89\xe6\x8f\x8f\xe8\xbe\xb9\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x88\xe4\xb8\x8d\xe9\x99\x90 Actor \xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InsertPassSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe6\x8e\x89\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x96\xe7\x95\x8c\xe9\x87\x8c\xe6\x89\x80\xe6\x9c\x89\xe6\x8f\x8f\xe8\xbe\xb9\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x88\xe4\xb8\x8d\xe9\x99\x90 Actor \xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearAllOutlines constinit property declarations **********************
// ********** End Function ClearAllOutlines constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInsertPassSubsystem, nullptr, "ClearAllOutlines", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UInsertPassSubsystem_ClearAllOutlines(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInsertPassSubsystem::execClearAllOutlines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllOutlines();
	P_NATIVE_END;
}
// ********** End Class UInsertPassSubsystem Function ClearAllOutlines *****************************

// ********** Begin Class UInsertPassSubsystem Function SelectOutline ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInsertPassSubsystem_SelectOutline_Statics
struct UHT_STATICS
{
	struct InsertPassSubsystem_eventSelectOutline_Parms
	{
		UOutlineComponent* Target;
		bool bEnableScreenPixel;
		bool bEnableDepthNormal;
		bool bEnableStructure;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xba\x92\xe6\x96\xa5\xe9\x80\x89\xe4\xb8\xad\xe6\x8f\x8f\xe8\xbe\xb9\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x9a\xe5\x85\x88\xe5\x85\xb3\xe6\x8e\x89\xe5\x90\x8c\xe4\xb8\x96\xe7\x95\x8c\xe5\x85\xb6\xe4\xbb\x96 Actor \xe4\xb8\x8a\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbe\xb9\xef\xbc\x8c\xe5\x86\x8d\xe6\x89\x93\xe5\xbc\x80 Target\xe3\x80\x82\n\x09 * \xe4\xb8\x8d\xe9\x99\x90\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xef\xbc\x8c\xe5\x8f\xaa\xe8\xa6\x81\xe6\x8c\x82\xe4\xba\x86\xe6\x8f\x8f\xe8\xbe\xb9\xe7\xbb\x84\xe4\xbb\xb6\xe9\x83\xbd\xe4\xbc\x9a\xe8\xa2\xab\xe5\x85\xb3\xe6\x8e\x89\xe3\x80\x82\n\x09 */" },
#endif
		{ "CPP_Default_bEnableDepthNormal", "false" },
		{ "CPP_Default_bEnableScreenPixel", "true" },
		{ "CPP_Default_bEnableStructure", "false" },
		{ "ModuleRelativePath", "Public/InsertPassSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x92\xe6\x96\xa5\xe9\x80\x89\xe4\xb8\xad\xe6\x8f\x8f\xe8\xbe\xb9\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x9a\xe5\x85\x88\xe5\x85\xb3\xe6\x8e\x89\xe5\x90\x8c\xe4\xb8\x96\xe7\x95\x8c\xe5\x85\xb6\xe4\xbb\x96 Actor \xe4\xb8\x8a\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbe\xb9\xef\xbc\x8c\xe5\x86\x8d\xe6\x89\x93\xe5\xbc\x80 Target\xe3\x80\x82\n\xe4\xb8\x8d\xe9\x99\x90\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xef\xbc\x8c\xe5\x8f\xaa\xe8\xa6\x81\xe6\x8c\x82\xe4\xba\x86\xe6\x8f\x8f\xe8\xbe\xb9\xe7\xbb\x84\xe4\xbb\xb6\xe9\x83\xbd\xe4\xbc\x9a\xe8\xa2\xab\xe5\x85\xb3\xe6\x8e\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectOutline constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bEnableScreenPixel_SetBit(void* Obj)
	{
		((InsertPassSubsystem_eventSelectOutline_Parms*)Obj)->bEnableScreenPixel = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScreenPixel;
	static void NewProp_bEnableDepthNormal_SetBit(void* Obj)
	{
		((InsertPassSubsystem_eventSelectOutline_Parms*)Obj)->bEnableDepthNormal = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDepthNormal;
	static void NewProp_bEnableStructure_SetBit(void* Obj)
	{
		((InsertPassSubsystem_eventSelectOutline_Parms*)Obj)->bEnableStructure = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStructure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SelectOutline constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SelectOutline Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(InsertPassSubsystem_eventSelectOutline_Parms, Target), Z_Construct_UClass_UOutlineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableScreenPixel = { "bEnableScreenPixel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(InsertPassSubsystem_eventSelectOutline_Parms), &UHT_STATICS::NewProp_bEnableScreenPixel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDepthNormal = { "bEnableDepthNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(InsertPassSubsystem_eventSelectOutline_Parms), &UHT_STATICS::NewProp_bEnableDepthNormal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableStructure = { "bEnableStructure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(InsertPassSubsystem_eventSelectOutline_Parms), &UHT_STATICS::NewProp_bEnableStructure_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableScreenPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDepthNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableStructure,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SelectOutline Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInsertPassSubsystem, nullptr, "SelectOutline", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InsertPassSubsystem_eventSelectOutline_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InsertPassSubsystem_eventSelectOutline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInsertPassSubsystem_SelectOutline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInsertPassSubsystem::execSelectOutline)
{
	P_GET_OBJECT(UOutlineComponent,Z_Param_Target);
	P_GET_UBOOL(Z_Param_bEnableScreenPixel);
	P_GET_UBOOL(Z_Param_bEnableDepthNormal);
	P_GET_UBOOL(Z_Param_bEnableStructure);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectOutline(Z_Param_Target,Z_Param_bEnableScreenPixel,Z_Param_bEnableDepthNormal,Z_Param_bEnableStructure);
	P_NATIVE_END;
}
// ********** End Class UInsertPassSubsystem Function SelectOutline ********************************

// ********** Begin Class UInsertPassSubsystem Function SelectOutlineActor *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInsertPassSubsystem_SelectOutlineActor_Statics
struct UHT_STATICS
{
	struct InsertPassSubsystem_eventSelectOutlineActor_Parms
	{
		AActor* TargetActor;
		bool bEnableScreenPixel;
		bool bEnableDepthNormal;
		bool bEnableStructure;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OutlineSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xba\x92\xe6\x96\xa5\xe9\x80\x89\xe4\xb8\xad\xe6\x9f\x90\xe4\xb8\xaa Actor\xef\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe6\x89\xbe\xe5\xae\x83\xe8\xba\xab\xe4\xb8\x8a\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbe\xb9\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82\n\x09 * \xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe7\x82\xb9\xe5\x88\xb0\xe4\xbb\xbb\xe6\x84\x8f Actor \xe6\x97\xb6\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe6\x9c\x80\xe6\x96\xb9\xe4\xbe\xbf\xe3\x80\x82\n\x09 */" },
#endif
		{ "CPP_Default_bEnableDepthNormal", "false" },
		{ "CPP_Default_bEnableScreenPixel", "true" },
		{ "CPP_Default_bEnableStructure", "false" },
		{ "ModuleRelativePath", "Public/InsertPassSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x92\xe6\x96\xa5\xe9\x80\x89\xe4\xb8\xad\xe6\x9f\x90\xe4\xb8\xaa Actor\xef\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe6\x89\xbe\xe5\xae\x83\xe8\xba\xab\xe4\xb8\x8a\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbe\xb9\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82\n\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe7\x82\xb9\xe5\x88\xb0\xe4\xbb\xbb\xe6\x84\x8f Actor \xe6\x97\xb6\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe6\x9c\x80\xe6\x96\xb9\xe4\xbe\xbf\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SelectOutlineActor constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static void NewProp_bEnableScreenPixel_SetBit(void* Obj)
	{
		((InsertPassSubsystem_eventSelectOutlineActor_Parms*)Obj)->bEnableScreenPixel = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScreenPixel;
	static void NewProp_bEnableDepthNormal_SetBit(void* Obj)
	{
		((InsertPassSubsystem_eventSelectOutlineActor_Parms*)Obj)->bEnableDepthNormal = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDepthNormal;
	static void NewProp_bEnableStructure_SetBit(void* Obj)
	{
		((InsertPassSubsystem_eventSelectOutlineActor_Parms*)Obj)->bEnableStructure = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStructure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SelectOutlineActor constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SelectOutlineActor Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(InsertPassSubsystem_eventSelectOutlineActor_Parms, TargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableScreenPixel = { "bEnableScreenPixel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(InsertPassSubsystem_eventSelectOutlineActor_Parms), &UHT_STATICS::NewProp_bEnableScreenPixel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDepthNormal = { "bEnableDepthNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(InsertPassSubsystem_eventSelectOutlineActor_Parms), &UHT_STATICS::NewProp_bEnableDepthNormal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableStructure = { "bEnableStructure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(InsertPassSubsystem_eventSelectOutlineActor_Parms), &UHT_STATICS::NewProp_bEnableStructure_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableScreenPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDepthNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableStructure,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SelectOutlineActor Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInsertPassSubsystem, nullptr, "SelectOutlineActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InsertPassSubsystem_eventSelectOutlineActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InsertPassSubsystem_eventSelectOutlineActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInsertPassSubsystem_SelectOutlineActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInsertPassSubsystem::execSelectOutlineActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_UBOOL(Z_Param_bEnableScreenPixel);
	P_GET_UBOOL(Z_Param_bEnableDepthNormal);
	P_GET_UBOOL(Z_Param_bEnableStructure);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectOutlineActor(Z_Param_TargetActor,Z_Param_bEnableScreenPixel,Z_Param_bEnableDepthNormal,Z_Param_bEnableStructure);
	P_NATIVE_END;
}
// ********** End Class UInsertPassSubsystem Function SelectOutlineActor ***************************

// ********** Begin Class UInsertPassSubsystem *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UInsertPassSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InsertPassSubsystem.h" },
		{ "ModuleRelativePath", "Public/InsertPassSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInsertPassSubsystem constinit property declarations *********************
// ********** End Class UInsertPassSubsystem constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearAllOutlines"), .Pointer = &UInsertPassSubsystem::execClearAllOutlines },
		{ .NameUTF8 = UTF8TEXT("SelectOutline"), .Pointer = &UInsertPassSubsystem::execSelectOutline },
		{ .NameUTF8 = UTF8TEXT("SelectOutlineActor"), .Pointer = &UInsertPassSubsystem::execSelectOutlineActor },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInsertPassSubsystem_ClearAllOutlines, "ClearAllOutlines" }, // cb5223bcd15f9da84bb865b7a937076140f81658
		{ &Z_Construct_UFunction_UInsertPassSubsystem_SelectOutline, "SelectOutline" }, // 2a8cea37d1182b0f4d004e97a9f7a90a9e4ffd60
		{ &Z_Construct_UFunction_UInsertPassSubsystem_SelectOutlineActor, "SelectOutlineActor" }, // 27ba9746bca267c261444b7426cef69e90144033
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInsertPassSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_InsertPass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UInsertPassSubsystem,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UInsertPassSubsystem_StaticRegisterNativesUInsertPassSubsystem()
{
	UClass* Class = UInsertPassSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInsertPassSubsystem;
UClass* Z_Construct_UClass_UInsertPassSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UInsertPassSubsystem;
		if (!Z_Registration_Info_UClass_UInsertPassSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("InsertPassSubsystem"),
				Z_Registration_Info_UClass_UInsertPassSubsystem.InnerSingleton,
				UInsertPassSubsystem_StaticRegisterNativesUInsertPassSubsystem,
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
		return Z_Registration_Info_UClass_UInsertPassSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UInsertPassSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInsertPassSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UInsertPassSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UInsertPassSubsystem::UInsertPassSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInsertPassSubsystem);
UInsertPassSubsystem::~UInsertPassSubsystem() {}
// ********** End Class UInsertPassSubsystem *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h__Script_InsertPass_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInsertPassSubsystem, TEXT("UInsertPassSubsystem"), &Z_Registration_Info_UClass_UInsertPassSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInsertPassSubsystem), 4271870U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h__Script_InsertPass_7ea86b40fd76a150d21a24601467022defaa2e4b{
	TEXT("/Script/InsertPass"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
