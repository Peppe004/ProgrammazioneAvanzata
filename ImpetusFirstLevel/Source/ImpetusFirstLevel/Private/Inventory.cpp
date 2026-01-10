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

void UInventory::RemoveItemFromInventory(FName ItemName) {

	if (ItemName.IsNone()) return;

	int32* currentCount = InventoryItems.Find(ItemName);
	if (currentCount && *currentCount > 0) {
		(*currentCount)--;
		if (GEngine)
		{
			FString Message = FString::Printf(TEXT("Rimosso: %s | Totale: %d"), *ItemName.ToString(), *currentCount);
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, Message);
		}
	}
}

int32 UInventory::GetNumberOfItem(FName ItemName) {

	if (ItemName.IsNone()) return 0;

	int32* currentCount = InventoryItems.Find(ItemName);

	return currentCount ? *currentCount : 0;
}

FName UInventory::SwitchItem(bool bNext)
{

    if (InventoryItems.Num() == 0)
    {
        CurrentEquippedItem = FName(); // Nessun oggetto
        return CurrentEquippedItem;
    }

    //Estraggo tutte le chiavi (i nomi degli oggetti) in un Array temporaneo
    TArray<FName> ItemList;
    InventoryItems.GetKeys(ItemList);

    int32 CurrentIndex = ItemList.Find(CurrentEquippedItem);

    // Se non trovo l'oggetto (o è la prima volta che apriamo l'inventario), parto da -1
    // così al prossimo step andremo a 0 (il primo oggetto)
    if (CurrentIndex == INDEX_NONE)
    {
        CurrentIndex = -1;
    }

    int32 NewIndex;

    if (bNext)
    {
        // Se andiamo avanti: (Indice + 1) % NumeroTotale
        // Il modulo (%) serve a tornare a 0 se superiamo l'ultimo elemento
        NewIndex = (CurrentIndex + 1) % ItemList.Num();
    }
    else
    {
        // Se andiamo indietro
        if (CurrentIndex - 1 < 0)
        {
            NewIndex = ItemList.Num() - 1; // Vai all'ultimo
        }
        else
        {
            NewIndex = CurrentIndex - 1;
        }
    }

    CurrentEquippedItem = ItemList[NewIndex];

    if (GEngine)
    {
        FString Message = FString::Printf(TEXT("Equipaggiato: %s"), *CurrentEquippedItem.ToString());
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, Message);
    }

	return CurrentEquippedItem;
}

