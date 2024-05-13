// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractObject.h"

// Sets default values
AInteractObject::AInteractObject()
{

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Patrick"));
	SetRootComponent(Mesh);
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AInteractObject::ReactToTrigger_Implementation()
{
	UE_LOG(LogTemp,Warning,TEXT("Test"));
	
	return false;
}

void AInteractObject::testinterfacecall()
{
	IReactToTriggerinterface::testinterfacecall();
	FVector CurrentLocation = GetActorLocation();
	CurrentLocation.Z += 50.0f;
	SetActorLocation(CurrentLocation);
}

void AInteractObject::test_Implementation()
{
	UE_LOG(LogTemp,Warning,TEXT("Coucou"));
}
