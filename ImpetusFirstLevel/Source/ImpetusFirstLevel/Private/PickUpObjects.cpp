// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUpObjects.h"
#include "Inventory.h"


// Sets default values
APickUpObjects::APickUpObjects()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;
    mesh->SetCollisionProfileName(TEXT("NoCollision"));

	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	collisionBox->SetupAttachment(mesh);
}

// Called when the game starts or when spawned
void APickUpObjects::BeginPlay()
{
	Super::BeginPlay();

	if (collisionBox)
	{
		collisionBox->OnComponentBeginOverlap.AddDynamic(this, &APickUpObjects::OnOverlap);
	}
	
}

// Called every frame
void APickUpObjects::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void APickUpObjects::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    // 1. Controllo base: Qualcosa ha toccato il legno?
    if (!OtherActor || OtherActor == this) return;

    //if (GEngine)
        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("1. Toccato da qualcosa!"));

    // 2. Cerchiamo l'inventario
    UInventory* inventoryComp = OtherActor->FindComponentByClass<UInventory>();

    if (inventoryComp)
    {
        //if (GEngine)
            //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("2. Inventario TROVATO!"));

        FName ItemName = "Unknown";
        if (Tags.Num() > 0) {
            ItemName = Tags[0];
        }

        inventoryComp->AddItemToInventory(ItemName);
        Destroy();
    }
}

