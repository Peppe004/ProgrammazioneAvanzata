#include "MyPlayerAnimInstance.h"
#include "MyPlayer.h" 
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UMyPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	OwningPlayer = Cast<AMyPlayer>(TryGetPawnOwner());

	if (OwningPlayer) {
		OwningPlayerMovement = OwningPlayer->GetCharacterMovement();
	}
}

void UMyPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds) {

	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!OwningPlayer || !OwningPlayerMovement) {
		return;
	}

	speed = UKismetMathLibrary::VSizeXY(OwningPlayerMovement->Velocity);

	bIsSprinting = OwningPlayer->bIsSprinting;
	isFalling = OwningPlayerMovement->IsFalling();
}