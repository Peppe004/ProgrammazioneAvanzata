#include "Inventory.h"

UInventory::UInventory()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInventory::BeginPlay()
{
	Super::BeginPlay();
}

void UInventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UInventory::AddItemToInventory(FName ItemName)
{
	if (ItemName.IsNone()) return;

	int32& currentCount = InventoryItems.FindOrAdd(ItemName); //cerca se l'oggetto esiste, altrimenti lo aggiunge
	currentCount++;

	if (GEngine)
	{
		FString Message = FString::Printf(TEXT("Raccolto: %s | Totale: %d"), *ItemName.ToString(), currentCount);
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, Message);
	}

}

