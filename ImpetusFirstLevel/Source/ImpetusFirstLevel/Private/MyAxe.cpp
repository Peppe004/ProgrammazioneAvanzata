#include "MyAxe.h"

AMyAxe::AMyAxe()
{
	PrimaryActorTick.bCanEverTick = true;

	AxeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AxeMesh"));
	RootComponent = AxeMesh;

	AxeCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("AxeCollision"));
	AxeCollisionBox->SetupAttachment(AxeMesh);
}

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

	if (OtherActor == nullptr || OtherActor == this)
	{
		return;
	}

	//non colpisco il player
	if (OtherActor == GetOwner())
	{
		return; 
	}

	AActor* myPlayer = GetOwner();

	if (myPlayer) {
		AMyPlayer* player = Cast<AMyPlayer>(myPlayer);

		if (player) {
			bIsAttacking = player->bIsAttacking;
		}
	}

	if (!bIsAttacking) return;

	// Controlliamo se il componente colpito è un Instanced Static Mesh (Foliage)
	UInstancedStaticMeshComponent* FoliageComp = Cast<UInstancedStaticMeshComponent>(OtherComp);

	if (FoliageComp && OtherBodyIndex != INDEX_NONE)
	{
		// Prendiamo la posizione e rotazione dell'albero che stiamo per cancellare
		FTransform InstanceTransform;
		FoliageComp->GetInstanceTransform(OtherBodyIndex, InstanceTransform, true); // true = World Space

		DrawDebugSphere(GetWorld(), InstanceTransform.GetLocation(), 50.0f, 12, FColor::Red, false, 5.0f);
		// Cancelliamo l'albero dal foliage (così sparisce visivamente)
		FoliageComp->RemoveInstance(OtherBodyIndex);

		// Spawniamo al suo posto il substitutetreebp 
		if (TreeActorBP)
		{
			GetWorld()->SpawnActor<AActor>(TreeActorBP, InstanceTransform);

			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Albero Foliage sostituito con Actor!"));
		}
	}
}

// Called every frame
void AMyAxe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

