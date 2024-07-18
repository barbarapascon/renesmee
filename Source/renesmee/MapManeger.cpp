// Fill out your copyright notice in the Description page of Project Settings.

#include "MapManeger.h"
#include "TileActor.h"
#include "Engine/World.h"

// Sets default values
AMapManeger::AMapManeger()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    TileSize = 100.0f;  // Set the size of the tile
}

// Called when the game starts or when spawned
void AMapManeger::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AMapManeger::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMapManeger::CreateMap(int32 NumTilesX, int32 NumTilesY)
{
    if (!TileClass) return;

    for (int32 X = 0; X < NumTilesX; ++X)
    {
        for (int32 Y = 0; Y < NumTilesY; ++Y)
        {
            FVector Location(X * TileSize, Y * TileSize, 0.0f);
            GetWorld()->SpawnActor<ATileActor>(TileClass, Location, FRotator::ZeroRotator);
        }
    }
}
