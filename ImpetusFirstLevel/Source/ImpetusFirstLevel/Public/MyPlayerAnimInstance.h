#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyPlayerAnimInstance.generated.h"

class AMyPlayer;
class UCharacterMovementComponent; 

UCLASS()
class IMPETUSFIRSTLEVEL_API UMyPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	AMyPlayer* OwningPlayer;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	UCharacterMovementComponent* OwningPlayerMovement;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float speed;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsSprinting;

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	float Direction;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool isFalling;

};