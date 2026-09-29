// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InsertPassSubsystem.h"

#ifdef INSERTPASS_InsertPassSubsystem_generated_h
#error "InsertPassSubsystem.generated.h already included, missing '#pragma once' in InsertPassSubsystem.h"
#endif
#define INSERTPASS_InsertPassSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UOutlineComponent;

// ********** Begin Class UInsertPassSubsystem *****************************************************
#define FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectOutlineActor); \
	DECLARE_FUNCTION(execSelectOutline); \
	DECLARE_FUNCTION(execClearAllOutlines);


struct Z_Construct_UClass_UInsertPassSubsystem_Statics;
INSERTPASS_API UClass* Z_Construct_UClass_UInsertPassSubsystem(ETypeConstructPhase);

#define FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UInsertPassSubsystem_Statics; \
	friend INSERTPASS_API UClass* ::Z_Construct_UClass_UInsertPassSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UInsertPassSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsertPass"), Z_Construct_UClass_UInsertPassSubsystem) \
	DECLARE_SERIALIZER(UInsertPassSubsystem)


#define FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInsertPassSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInsertPassSubsystem(UInsertPassSubsystem&&) = delete; \
	UInsertPassSubsystem(const UInsertPassSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInsertPassSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInsertPassSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInsertPassSubsystem) \
	NO_API virtual ~UInsertPassSubsystem();


#define FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h_10_PROLOG
#define FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInsertPassSubsystem;

// ********** End Class UInsertPassSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnityProject_Unreal_Learn_Project_Plugins_InsertPass_Source_InsertPass_Public_InsertPassSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
