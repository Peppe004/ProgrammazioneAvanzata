// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITutorial_init() {}
	AITUTORIAL_API UFunction* Z_Construct_UDelegateFunction_AITutorial_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AITutorial;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AITutorial()
	{
		if (!Z_Registration_Info_UPackage__Script_AITutorial.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AITutorial_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AITutorial",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD302B0DF,
				0xA2EE9DE5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AITutorial.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AITutorial.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AITutorial(Z_Construct_UPackage__Script_AITutorial, TEXT("/Script/AITutorial"), Z_Registration_Info_UPackage__Script_AITutorial, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD302B0DF, 0xA2EE9DE5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
