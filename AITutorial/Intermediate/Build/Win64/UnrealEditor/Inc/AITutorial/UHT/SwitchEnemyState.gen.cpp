// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwitchEnemyState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSwitchEnemyState() {}

// ********** Begin Cross Module References ********************************************************
AITUTORIAL_API UClass* Z_Construct_UClass_USwitchEnemyState();
AITUTORIAL_API UClass* Z_Construct_UClass_USwitchEnemyState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AITutorial();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USwitchEnemyState ********************************************************
void USwitchEnemyState::StaticRegisterNativesUSwitchEnemyState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USwitchEnemyState;
UClass* USwitchEnemyState::GetPrivateStaticClass()
{
	using TClass = USwitchEnemyState;
	if (!Z_Registration_Info_UClass_USwitchEnemyState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SwitchEnemyState"),
			Z_Registration_Info_UClass_USwitchEnemyState.InnerSingleton,
			StaticRegisterNativesUSwitchEnemyState,
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
	return Z_Registration_Info_UClass_USwitchEnemyState.InnerSingleton;
}
UClass* Z_Construct_UClass_USwitchEnemyState_NoRegister()
{
	return USwitchEnemyState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USwitchEnemyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SwitchEnemyState.h" },
		{ "ModuleRelativePath", "SwitchEnemyState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwitchEnemyState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USwitchEnemyState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AITutorial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwitchEnemyState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USwitchEnemyState_Statics::ClassParams = {
	&USwitchEnemyState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwitchEnemyState_Statics::Class_MetaDataParams), Z_Construct_UClass_USwitchEnemyState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USwitchEnemyState()
{
	if (!Z_Registration_Info_UClass_USwitchEnemyState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwitchEnemyState.OuterSingleton, Z_Construct_UClass_USwitchEnemyState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USwitchEnemyState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USwitchEnemyState);
USwitchEnemyState::~USwitchEnemyState() {}
// ********** End Class USwitchEnemyState **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_SwitchEnemyState_h__Script_AITutorial_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USwitchEnemyState, USwitchEnemyState::StaticClass, TEXT("USwitchEnemyState"), &Z_Registration_Info_UClass_USwitchEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwitchEnemyState), 1289007355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_SwitchEnemyState_h__Script_AITutorial_738856264(TEXT("/Script/AITutorial"),
	Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_SwitchEnemyState_h__Script_AITutorial_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_SwitchEnemyState_h__Script_AITutorial_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
