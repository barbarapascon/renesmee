// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapManeger.generated.h"

UCLASS()
class RENESMEE_API AMapManeger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapManeger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Map")
	void CreateMap(int32 NumTilesX, int32 NumTilesY);

	UPROPERTY(EditDefaultsOnly, Category = "Map")
	TSubclassOf<class ATileActor> TileClass;

	UPROPERTY(EditDefaultsOnly, Category = "Map")
	float TileSize;
};
