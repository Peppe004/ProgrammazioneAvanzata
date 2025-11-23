// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AITutorialGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAITutorialGameMode() {}

// ********** Begin Cross Module References ********************************************************
AITUTORIAL_API UClass* Z_Construct_UClass_AAITutorialGameMode();
AITUTORIAL_API UClass* Z_Construct_UClass_AAITutorialGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AITutorial();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAITutorialGameMode ******************************************************
void AAITutorialGameMode::StaticRegisterNativesAAITutorialGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAITutorialGameMode;
UClass* AAITutorialGameMode::GetPrivateStaticClass()
{
	using TClass = AAITutorialGameMode;
	if (!Z_Registration_Info_UClass_AAITutorialGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AITutorialGameMode"),
			Z_Registration_Info_UClass_AAITutorialGameMode.InnerSingleton,
			StaticRegisterNativesAAITutorialGameMode,
			sizeof(TClass),
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
	return Z_Registration_Info_UClass_AAITutorialGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AAITutorialGameMode_NoRegister()
{
	return AAITutorialGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAITutorialGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AITutorialGameMode.h" },
		{ "ModuleRelativePath", "AITutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAITutorialGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAITutorialGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AITutorial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAITutorialGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAITutorialGameMode_Statics::ClassParams = {
	&AAITutorialGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAITutorialGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAITutorialGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAITutorialGameMode()
{
	if (!Z_Registration_Info_UClass_AAITutorialGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAITutorialGameMode.OuterSingleton, Z_Construct_UClass_AAITutorialGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAITutorialGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAITutorialGameMode);
AAITutorialGameMode::~AAITutorialGameMode() {}
// ********** End Class AAITutorialGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialGameMode_h__Script_AITutorial_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAITutorialGameMode, AAITutorialGameMode::StaticClass, TEXT("AAITutorialGameMode"), &Z_Registration_Info_UClass_AAITutorialGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAITutorialGameMode), 1499869783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialGameMode_h__Script_AITutorial_1515403316(TEXT("/Script/AITutorial"),
	Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialGameMode_h__Script_AITutorial_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialGameMode_h__Script_AITutorial_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
