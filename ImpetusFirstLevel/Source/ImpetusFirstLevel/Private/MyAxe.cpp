// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAxe.h"

// Sets default values
AMyAxe::AMyAxe()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AxeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AxeMesh"));
	RootComponent = AxeMesh;

	AxeCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("AxeCollision"));
	AxeCollisionBox->SetupAttachment(AxeMesh);
}

// Called when the game starts or when spawned
void AMyAxe::BeginPlay()
{
	Super::BeginPlay();

	if (AxeCollisionBox) {
		AxeCollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly); // Abilita solo il rilevamento delle collisioni
		AxeCollisionBox->SetCollisionObjectType(ECC_WorldDynamic); // Imposta il tipo di oggetto di collisione
		AxeCollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap); // Imposta la risposta di collisione a "Overlap" per tutti i canali
		AxeCollisionBox->SetGenerateOverlapEvents(true); // Abilita la generazione di eventi di overlap
		AxeCollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AMyAxe::OnAxeOverlap); // Collega la funzione di callback per l'evento di overlap
	}
	
}

void AMyAxe::OnAxeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	// Logica da eseguire quando l'ascia entra in collisione con un altro attore
	UE_LOG(LogTemp, Warning, TEXT("Ascia ha colpito: %s"), *OtherActor->GetName());
}

// Called every frame
void AMyAxe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

