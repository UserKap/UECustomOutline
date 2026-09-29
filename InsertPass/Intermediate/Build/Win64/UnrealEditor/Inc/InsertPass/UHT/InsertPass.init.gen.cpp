// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsertPass_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InsertPass;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InsertPass(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_InsertPass.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/InsertPass",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0xDEE2B798,
			0x57BB3AB9,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InsertPass.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_InsertPass.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InsertPass(Z_Construct_UPackage__Script_InsertPass, TEXT("/Script/InsertPass"), Z_Registration_Info_UPackage__Script_InsertPass, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDEE2B798, 0x57BB3AB9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
