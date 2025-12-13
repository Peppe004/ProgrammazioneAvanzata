// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyAxe.h"

#ifdef IMPETUSFIRSTLEVEL_MyAxe_generated_h
#error "MyAxe.generated.h already included, missing '#pragma once' in MyAxe.h"
#endif
#define IMPETUSFIRSTLEVEL_MyAxe_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AMyAxe *******************************************************************
#define FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyAxe_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAxeOverlap);


IMPETUSFIRSTLEVEL_API UClass* Z_Construct_UClass_AMyAxe_NoRegister();

#define FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyAxe_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyAxe(); \
	friend struct Z_Construct_UClass_AMyAxe_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IMPETUSFIRSTLEVEL_API UClass* Z_Construct_UClass_AMyAxe_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyAxe, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImpetusFirstLevel"), Z_Construct_UClass_AMyAxe_NoRegister) \
	DECLARE_SERIALIZER(AMyAxe)


#define FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyAxe_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyAxe(AMyAxe&&) = delete; \
	AMyAxe(const AMyAxe&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAxe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAxe); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyAxe) \
	NO_API virtual ~AMyAxe();


#define FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyAxe_h_11_PROLOG
#define FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyAxe_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyAxe_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyAxe_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyAxe_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyAxe;

// ********** End Class AMyAxe *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgrammazioneAvanzata_ImpetusFirstLevel_Source_ImpetusFirstLevel_Public_MyAxe_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
