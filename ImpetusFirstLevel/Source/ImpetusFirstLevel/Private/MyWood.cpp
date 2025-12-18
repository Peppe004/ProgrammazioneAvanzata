// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWood.h"

// Sets default values
AMyWood::AMyWood()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	woodMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WoodMesh"));
	RootComponent = woodMesh;

	woodCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("woodCollisionBox"));
	woodCollisionBox->SetupAttachment(woodMesh);
}

// Called when the game starts or when spawned
void AMyWood::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyWood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

