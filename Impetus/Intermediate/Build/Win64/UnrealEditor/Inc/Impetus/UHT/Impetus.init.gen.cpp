// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImpetus_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Impetus;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Impetus()
	{
		if (!Z_Registration_Info_UPackage__Script_Impetus.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Impetus",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xACDC602A,
				0x6923915A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Impetus.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Impetus.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Impetus(Z_Construct_UPackage__Script_Impetus, TEXT("/Script/Impetus"), Z_Registration_Info_UPackage__Script_Impetus, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xACDC602A, 0x6923915A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
