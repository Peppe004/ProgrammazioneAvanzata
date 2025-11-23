// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AITutorialCharacter.h"

#ifdef AITUTORIAL_AITutorialCharacter_generated_h
#error "AITutorialCharacter.generated.h already included, missing '#pragma once' in AITutorialCharacter.h"
#endif
#define AITUTORIAL_AITutorialCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAITutorialCharacter *****************************************************
#define FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


AITUTORIAL_API UClass* Z_Construct_UClass_AAITutorialCharacter_NoRegister();

#define FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialCharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAITutorialCharacter(); \
	friend struct Z_Construct_UClass_AAITutorialCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITUTORIAL_API UClass* Z_Construct_UClass_AAITutorialCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AAITutorialCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AITutorial"), Z_Construct_UClass_AAITutorialCharacter_NoRegister) \
	DECLARE_SERIALIZER(AAITutorialCharacter)


#define FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialCharacter_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAITutorialCharacter(AAITutorialCharacter&&) = delete; \
	AAITutorialCharacter(const AAITutorialCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAITutorialCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAITutorialCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AAITutorialCharacter) \
	NO_API virtual ~AAITutorialCharacter();


#define FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialCharacter_h_25_PROLOG
#define FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialCharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialCharacter_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAITutorialCharacter;

// ********** End Class AAITutorialCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_AITutorialCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
