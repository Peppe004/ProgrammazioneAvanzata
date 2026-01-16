#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inventory.generated.h"

// 1. DEFINIZIONE DEL TIPO (Va bene qui, sopra la classe)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryUpdated, FName, ItemName, int32, ItemCount);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class IMPETUSFIRSTLEVEL_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:
	UInventory();

	// --- FUNZIONI ---
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void AddItemToInventory(FName ItemName);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveItemFromInventory(FName ItemName);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	int32 GetNumberOfItem(FName ItemName);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	FName SwitchItem(bool bNext);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void InitializeItemAmount(FName ItemName, int32 Amount);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
	FName CurrentEquippedItem;

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FOnInventoryUpdated OnInventoryUpdated;

protected:
	virtual void BeginPlay() override;

	TMap<FName, int32> InventoryItems;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};