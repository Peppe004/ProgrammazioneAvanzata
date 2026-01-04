// MyAxe.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h" 
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "MyPlayer.h"
#include "MyAxe.generated.h"

UCLASS()
class IMPETUSFIRSTLEVEL_API AMyAxe : public AActor
{
	GENERATED_BODY()

public:
	AMyAxe();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visual")
	UStaticMeshComponent* AxeMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	UBoxComponent* AxeCollisionBox;

	// Riferimento al BP dell'albero vero da spawnare
	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	TSubclassOf<AActor> TreeActorBP;

	// Riferimento al BP del legno
	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	TSubclassOf<AActor> WoodItemBP;

	UFUNCTION()
	void OnAxeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Variabile per evitare di colpire lo stesso albero mille volte in un frame
	bool bCanHitTree;

	UPROPERTY(EditAnywhere, Category = "Config")
	UStaticMesh* TreeMeshToDetect; //è la mesh degli alberi,la uso per far sì che l'ascia sostituisca solo gli alberi

public:
	virtual void Tick(float DeltaTime) override;
	bool bIsAttacking;
};