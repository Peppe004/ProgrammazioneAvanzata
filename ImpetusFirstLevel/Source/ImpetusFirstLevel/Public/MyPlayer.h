// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyPlayer.generated.h"

UCLASS()
class IMPETUSFIRSTLEVEL_API AMyPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* CameraComp;

	UPROPERTY(EditDefaultsOnly, Category = "Axe")
	TSubclassOf<class AMyAxe> AxeClass; //classe dell'ascia da spawnare (tramite BP)

	UPROPERTY()
	AMyAxe* EquippedAxe; //puntatore all'ascia equipaggiata

	void MoveForward(float Value);
	void MoveRight(float Value);

	void StartSprinting();
	void StopSprinting();

	void Attack();
	void ThrowRock();
	void CheckJump();
	void EatingMeat();

	UFUNCTION(BlueprintImplementableEvent, Category = "Combat") //permette di implementare la funzione in blueprint
	void OnAttack();

	UFUNCTION(BlueprintImplementableEvent, Category = "RockThrowing")
	void OnThrowRock();

	UFUNCTION(BlueprintImplementableEvent, Category = "EatingMeat")
	void OnEatingMeat();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	bool bIsSprinting;

	float forwardInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float maxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats")
	float currentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats") 
	bool bIsAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")  
	bool bIsThrowing;

};
