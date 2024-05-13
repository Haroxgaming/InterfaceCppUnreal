// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ReactToTriggerinterface.h"
#include "GameFramework/Actor.h"
#include "InteractObject.generated.h"

UCLASS()
class TESTCPPUNREAL_API AInteractObject : public AActor, public IReactToTriggerinterface
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category="Mesh")
	UStaticMeshComponent* Mesh;
	
public:	
	// Sets default values for this actor's properties
	AInteractObject();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void test();

	virtual bool ReactToTrigger_Implementation() override;

	virtual void testinterfacecall() override;
};
