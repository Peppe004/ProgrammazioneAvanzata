// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
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
}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyPlayer::MoveForward(float Value) {
	if ((Controller != nullptr) && (Value != 0.0f)) {

		const FRotator Rotation = Controller->GetControlRotation(); //ottengo la rotazione del controller
		const FRotator YawRoation(0, Rotation.Yaw, 0); //creo una nuova rotazione con solo lo yaw
		const FVector Direction = FRotationMatrix(YawRoation).GetUnitAxis(EAxis::X); //ottengo il vettore forward dalla rotazione dalla matrice

		AddMovementInput(Direction, Value);
	}
}

void AMyPlayer::MoveRight(float Value) {

	if ((Controller != nullptr) && (Value != 0.0f)) {

		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRoation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRoation).GetUnitAxis(EAxis::Y); //ottengo il vettore right dalla rotazione dalla matrice

		AddMovementInput(Direction, Value);
	}
}

void AMyPlayer::StartSprinting() {
	GetCharacterMovement()->MaxWalkSpeed = 1200.0f; //aumenta la velocità di camminata
}

void AMyPlayer::StopSprinting() {
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyPlayer::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMyPlayer::StartSprinting);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMyPlayer::StopSprinting);

}

