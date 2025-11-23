// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PickableObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePickableObject() {}

// ********** Begin Cross Module References ********************************************************
AITUTORIAL_API UClass* Z_Construct_UClass_APickableObject();
AITUTORIAL_API UClass* Z_Construct_UClass_APickableObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AITutorial();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APickableObject **********************************************************
void APickableObject::StaticRegisterNativesAPickableObject()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APickableObject;
UClass* APickableObject::GetPrivateStaticClass()
{
	using TClass = APickableObject;
	if (!Z_Registration_Info_UClass_APickableObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PickableObject"),
			Z_Registration_Info_UClass_APickableObject.InnerSingleton,
			StaticRegisterNativesAPickableObject,
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
	return Z_Registration_Info_UClass_APickableObject.InnerSingleton;
}
UClass* Z_Construct_UClass_APickableObject_NoRegister()
{
	return APickableObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APickableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PickableObject.h" },
		{ "ModuleRelativePath", "Public/PickableObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APickableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AITutorial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickableObject_Statics::ClassParams = {
	&APickableObject::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_APickableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickableObject()
{
	if (!Z_Registration_Info_UClass_APickableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickableObject.OuterSingleton, Z_Construct_UClass_APickableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickableObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickableObject);
APickableObject::~APickableObject() {}
// ********** End Class APickableObject ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Public_PickableObject_h__Script_AITutorial_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickableObject, APickableObject::StaticClass, TEXT("APickableObject"), &Z_Registration_Info_UClass_APickableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickableObject), 3476003957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Public_PickableObject_h__Script_AITutorial_2507910019(TEXT("/Script/AITutorial"),
	Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Public_PickableObject_h__Script_AITutorial_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Public_PickableObject_h__Script_AITutorial_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
