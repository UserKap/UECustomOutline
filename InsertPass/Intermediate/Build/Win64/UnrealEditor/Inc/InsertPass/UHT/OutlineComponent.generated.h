// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OutlineComponent.h"

#ifdef INSERTPASS_OutlineComponent_generated_h
#error "OutlineComponent.generated.h already included, missing '#pragma once' in OutlineComponent.h"
#endif
#define INSERTPASS_OutlineComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Class UOutlineComponent ********************************************************
#define FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomDepthEnabled); \
	DECLARE_FUNCTION(execSetOutlineEnabled); \
	DECLARE_FUNCTION(execSelectExclusive); \
	DECLARE_FUNCTION(execClearOutline); \
	DECLARE_FUNCTION(execIsOutlineEnabled); \
	DECLARE_FUNCTION(execGetStructureCreaseAngle); \
	DECLARE_FUNCTION(execGetStructureThickness); \
	DECLARE_FUNCTION(execGetStructureColor); \
	DECLARE_FUNCTION(execIsStructureEnabled); \
	DECLARE_FUNCTION(execGetDepthNormalThickness); \
	DECLARE_FUNCTION(execGetDepthNormalColor); \
	DECLARE_FUNCTION(execIsDepthNormalEnabled); \
	DECLARE_FUNCTION(execGetScreenPixelThickness); \
	DECLARE_FUNCTION(execGetScreenPixelColor); \
	DECLARE_FUNCTION(execIsScreenPixelEnabled); \
	DECLARE_FUNCTION(execSetStructureCreaseAngle); \
	DECLARE_FUNCTION(execSetStructureThickness); \
	DECLARE_FUNCTION(execSetStructureColor); \
	DECLARE_FUNCTION(execSetStructureEnabled); \
	DECLARE_FUNCTION(execSetDepthNormalThickness); \
	DECLARE_FUNCTION(execSetDepthNormalColor); \
	DECLARE_FUNCTION(execSetDepthNormalEnabled); \
	DECLARE_FUNCTION(execSetScreenPixelThickness); \
	DECLARE_FUNCTION(execSetScreenPixelColor); \
	DECLARE_FUNCTION(execSetScreenPixelEnabled);


struct Z_Construct_UClass_UOutlineComponent_Statics;
INSERTPASS_API UClass* Z_Construct_UClass_UOutlineComponent(ETypeConstructPhase);

#define FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOutlineComponent_Statics; \
	friend INSERTPASS_API UClass* ::Z_Construct_UClass_UOutlineComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOutlineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InsertPass"), Z_Construct_UClass_UOutlineComponent) \
	DECLARE_SERIALIZER(UOutlineComponent)


#define FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOutlineComponent(UOutlineComponent&&) = delete; \
	UOutlineComponent(const UOutlineComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutlineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutlineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOutlineComponent) \
	NO_API virtual ~UOutlineComponent();


#define FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h_21_PROLOG
#define FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOutlineComponent;

// ********** End Class UOutlineComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_OutlineComponent_h

// ********** Begin Enum EOutlineMethod ************************************************************
#define FOREACH_ENUM_EOUTLINEMETHOD(op) \
	op(EOutlineMethod::ScreenPixel) \
	op(EOutlineMethod::DepthNormal) \
	op(EOutlineMethod::Structure) 

enum class EOutlineMethod : uint8;
template<> struct TIsUEnumClass<EOutlineMethod> { enum { Value = true }; };
template<> UE_NODEBUG INSERTPASS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOutlineMethod>();
// ********** End Enum EOutlineMethod **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
