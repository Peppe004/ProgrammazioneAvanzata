// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy.h"

#ifdef AITUTORIAL_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define AITUTORIAL_Enemy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemy *******************************************************************
#define FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStateSelectorValue);


AITUTORIAL_API UClass* Z_Construct_UClass_AEnemy_NoRegister();

#define FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Enemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITUTORIAL_API UClass* Z_Construct_UClass_AEnemy_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemy, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AITutorial"), Z_Construct_UClass_AEnemy_NoRegister) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Enemy_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemy(AEnemy&&) = delete; \
	AEnemy(const AEnemy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Enemy_h_10_PROLOG
#define FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Enemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Enemy_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemy;

// ********** End Class AEnemy *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cerve_OneDrive_Documenti_GAME_DEVELOPMENT_Unreal_Projects_AITutorial_Source_AITutorial_Enemy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
