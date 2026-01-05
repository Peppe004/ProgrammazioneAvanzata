// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inventory.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IMPETUSFIRSTLEVEL_API UInventory : public UActorComponent
{
	GENERATED_BODY()

	

public:	
	UInventory();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void AddItemToInventory(FName ItemName);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveItemFromInventory(FName ItemName);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	int32 GetNumberOfItem(FName ItemName);

protected:
	virtual void BeginPlay() override;

	TMap<FName, int32> InventoryItems;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		 
};
