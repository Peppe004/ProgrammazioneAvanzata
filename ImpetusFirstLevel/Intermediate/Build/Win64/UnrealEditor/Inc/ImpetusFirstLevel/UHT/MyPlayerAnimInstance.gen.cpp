// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPlayerAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyPlayerAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
IMPETUSFIRSTLEVEL_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
IMPETUSFIRSTLEVEL_API UClass* Z_Construct_UClass_UMyPlayerAnimInstance();
IMPETUSFIRSTLEVEL_API UClass* Z_Construct_UClass_UMyPlayerAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImpetusFirstLevel();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyPlayerAnimInstance ****************************************************
void UMyPlayerAnimInstance::StaticRegisterNativesUMyPlayerAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyPlayerAnimInstance;
UClass* UMyPlayerAnimInstance::GetPrivateStaticClass()
{
	using TClass = UMyPlayerAnimInstance;
	if (!Z_Registration_Info_UClass_UMyPlayerAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyPlayerAnimInstance"),
			Z_Registration_Info_UClass_UMyPlayerAnimInstance.InnerSingleton,
			StaticRegisterNativesUMyPlayerAnimInstance,
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
	return Z_Registration_Info_UClass_UMyPlayerAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyPlayerAnimInstance_NoRegister()
{
	return UMyPlayerAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MyPlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/MyPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MyPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayerMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MyPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayerMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPlayerAnimInstance_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPlayerAnimInstance, OwningPlayer), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayer_MetaData), NewProp_OwningPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPlayerAnimInstance_Statics::NewProp_OwningPlayerMovement = { "OwningPlayerMovement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPlayerAnimInstance, OwningPlayerMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayerMovement_MetaData), NewProp_OwningPlayerMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPlayerAnimInstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPlayerAnimInstance, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyPlayerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerAnimInstance_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerAnimInstance_Statics::NewProp_OwningPlayerMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerAnimInstance_Statics::NewProp_speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ImpetusFirstLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyPlayerAnimInstance_Statics::ClassParams = {
	&UMyPlayerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyPlayerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyPlayerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMyPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UMyPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyPlayerAnimInstance.OuterSingleton;
}
UMyPlayerAnimInstance::UMyPlayerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPlayerAnimInstance);
UMyPlayerAnimInstance::~UMyPlayerAnimInstance() {}
// ********** End Class UMyPlayerAnimInstance ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyPlayerAnimInstance_h__Script_ImpetusFirstLevel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyPlayerAnimInstance, UMyPlayerAnimInstance::StaticClass, TEXT("UMyPlayerAnimInstance"), &Z_Registration_Info_UClass_UMyPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyPlayerAnimInstance), 315737050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyPlayerAnimInstance_h__Script_ImpetusFirstLevel_3280129991(TEXT("/Script/ImpetusFirstLevel"),
	Z_CompiledInDeferFile_FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyPlayerAnimInstance_h__Script_ImpetusFirstLevel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyPlayerAnimInstance_h__Script_ImpetusFirstLevel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
