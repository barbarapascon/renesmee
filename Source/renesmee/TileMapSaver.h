
#pragma once

#include "CoreMinimal.h"
#include "../../../../../../../Program Files/Epic Games/UE_5.4/Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTileMap.h"
#include "GameFramework/Actor.h"
#include "TileMapSaver.generated.h"



UCLASS()
class RENESMEE_API ATileMapSaver : public AActor
{
	GENERATED_BODY()

public:	
	UFUNCTION(BlueprintCallable, Category = "TileMap")
	void SaveTileMap(UPaperTileMap* TileMap, const FString& Path);

};
