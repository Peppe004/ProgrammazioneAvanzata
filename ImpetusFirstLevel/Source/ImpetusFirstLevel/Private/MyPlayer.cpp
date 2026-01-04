// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
#include "MyAxe.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMyPlayer::AMyPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(RootComponent); //lo attacco alla capsula
	SpringArmComp->TargetArmLength = 300.0f; //lunghezza del braccio
	SpringArmComp->bUsePawnControlRotation = true; //ruota il braccio con il controller

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp); //attacco la camera al braccio
	CameraComp->bUsePawnControlRotation = false; //la camera non ruota con il controller, lo fa il braccio


	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true; //fa ruotare il personaggio nella direzione del movimento
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 360.0f, 0.0f); //velocità di rotazione

	bIsSprinting = false;
	bIsAttacking = false;
	bIsThrowing = false;
}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();

	if (AxeClass) {
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this; 
		SpawnParams.Instigator = GetInstigator(); 

		UWorld* World = GetWorld();

		if (World) {
			EquippedAxe = World->SpawnActor<AMyAxe>(AxeClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
			
			if (EquippedAxe) {
				FName AxeSocketName = TEXT("WeaponSocket");
				EquippedAxe->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, AxeSocketName);
			}
		}
	}
	
}

// Called every frame
void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyPlayer::MoveForward(float Value) {

	forwardInput = Value;

	if (bIsAttacking || bIsThrowing) return;

	if(Value <= 0.0f && bIsSprinting) {
		StopSprinting();
	}

	if ((Controller != nullptr) && (Value != 0.0f)) {

		const FRotator Rotation = Controller->GetControlRotation(); //ottengo la rotazione del controller
		const FRotator YawRoation(0, Rotation.Yaw, 0); //creo una nuova rotazione con solo lo yaw
		const FVector Direction = FRotationMatrix(YawRoation).GetUnitAxis(EAxis::X); //ottengo il vettore forward dalla rotazione dalla matrice

		AddMovementInput(Direction, Value);
	}
}

void AMyPlayer::MoveRight(float Value) {

	if (bIsAttacking || bIsThrowing) return;

	if ((Controller != nullptr) && (Value != 0.0f)) {

		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRoation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRoation).GetUnitAxis(EAxis::Y); //ottengo il vettore right dalla rotazione dalla matrice

		AddMovementInput(Direction, Value);
	}
}

void AMyPlayer::StartSprinting() {

	if(forwardInput > 0.0f) {
		bIsSprinting = true;
		GetCharacterMovement()->MaxWalkSpeed = 1200.0f; //aumenta la velocità di camminata
	}
}

void AMyPlayer::StopSprinting() {
	bIsSprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

void AMyPlayer::Attack() {

	OnAttack(); //chiamo l'evento blueprint
}

void AMyPlayer::ThrowRock() {
	OnThrowRock(); //chiamo l'evento blueprint
}

void AMyPlayer::CheckJump()
{
	if (bIsAttacking || bIsThrowing) return;

	Jump();
}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyPlayer::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyPlayer::CheckJump);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMyPlayer::StartSprinting);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMyPlayer::StopSprinting);
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AMyPlayer::Attack);
	PlayerInputComponent->BindAction("ThrowRock", IE_Pressed, this, &AMyPlayer::ThrowRock);

}

