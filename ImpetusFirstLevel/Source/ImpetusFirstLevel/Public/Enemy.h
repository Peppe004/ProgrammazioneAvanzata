// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS(abstract)
class IMPETUSFIRSTLEVEL_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemy();
	~AEnemy();



	int StateSelector = 0;

	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AI")
	int GetStateSelectorValue();
};
