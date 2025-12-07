#include "MyPlayerAnimInstance.h"
#include "MyPlayer.h" 
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UMyPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	OwningPlayer = Cast<AMyPlayer>(TryGetPawnOwner());

	if (OwningPlayer) {
		// GetCharacterMovement restituisce un UCharacterMovementComponent
		OwningPlayerMovement = OwningPlayer->GetCharacterMovement();
	}
}

void UMyPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds) {

	Super::NativeUpdateAnimation(DeltaSeconds);

	// Controllo di sicurezza: se non abbiamo il player o il movimento, usciamo
	if (!OwningPlayer || !OwningPlayerMovement) {
		return;
	}

	// Calcolo della velocità
	speed = UKismetMathLibrary::VSizeXY(OwningPlayerMovement->Velocity);
}