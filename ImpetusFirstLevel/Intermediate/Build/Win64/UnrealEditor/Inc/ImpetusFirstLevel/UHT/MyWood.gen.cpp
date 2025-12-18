// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyWood.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyWood() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
IMPETUSFIRSTLEVEL_API UClass* Z_Construct_UClass_AMyWood();
IMPETUSFIRSTLEVEL_API UClass* Z_Construct_UClass_AMyWood_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImpetusFirstLevel();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyWood ******************************************************************
void AMyWood::StaticRegisterNativesAMyWood()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyWood;
UClass* AMyWood::GetPrivateStaticClass()
{
	using TClass = AMyWood;
	if (!Z_Registration_Info_UClass_AMyWood.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyWood"),
			Z_Registration_Info_UClass_AMyWood.InnerSingleton,
			StaticRegisterNativesAMyWood,
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
	return Z_Registration_Info_UClass_AMyWood.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyWood_NoRegister()
{
	return AMyWood::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyWood_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyWood.h" },
		{ "ModuleRelativePath", "Public/MyWood.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_woodMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyWood.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_woodCollisionBox_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyWood.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_woodMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_woodCollisionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyWood>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyWood_Statics::NewProp_woodMesh = { "woodMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyWood, woodMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_woodMesh_MetaData), NewProp_woodMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyWood_Statics::NewProp_woodCollisionBox = { "woodCollisionBox", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyWood, woodCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_woodCollisionBox_MetaData), NewProp_woodCollisionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyWood_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyWood_Statics::NewProp_woodMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyWood_Statics::NewProp_woodCollisionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyWood_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyWood_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ImpetusFirstLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyWood_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyWood_Statics::ClassParams = {
	&AMyWood::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyWood_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyWood_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyWood_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyWood_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyWood()
{
	if (!Z_Registration_Info_UClass_AMyWood.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyWood.OuterSingleton, Z_Construct_UClass_AMyWood_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyWood.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyWood);
AMyWood::~AMyWood() {}
// ********** End Class AMyWood ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyWood_h__Script_ImpetusFirstLevel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyWood, AMyWood::StaticClass, TEXT("AMyWood"), &Z_Registration_Info_UClass_AMyWood, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyWood), 2519934998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyWood_h__Script_ImpetusFirstLevel_1420858496(TEXT("/Script/ImpetusFirstLevel"),
	Z_CompiledInDeferFile_FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyWood_h__Script_ImpetusFirstLevel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyWood_h__Script_ImpetusFirstLevel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
