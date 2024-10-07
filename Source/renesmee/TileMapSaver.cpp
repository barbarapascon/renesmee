// Fill out your copyright notice in the Description page of Project Settings.


#include "TileMapSaver.h"
#include "../../../../../../../Program Files/Epic Games/UE_5.4/Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTileMap.h"
#include "../../../../../../../Program Files/Epic Games/UE_5.4/Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTileMapComponent.h"
#include "Misc/PackageName.h"
#include "Serialization/ArchiveSaveCompressedProxy.h"
#include "Kismet/GameplayStatics.h"
#include "AssetRegistry.generated.h"
#include "UObject/SavePackage.h"
#include <UObject/NoExportTypes.h>
#include <AssetRegistry/AssetRegistryModule.h>


void ATileMapSaver::SaveTileMap(UPaperTileMap* TileMap, const FString& Path)
{
    if (!TileMap)
    {
        UE_LOG(LogTemp, Error, TEXT("TileMap is null"));
        return;
    }

    FString PackageName = FPaths::ProjectContentDir() / Path;
    UPackage* Package = CreatePackage(*PackageName);

    if (Package)
    {
        TileMap->Rename(*TileMap->GetName(), Package);

        // Obter o módulo de registro de ativos e registrar o novo ativo
        FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
        AssetRegistryModule.AssetCreated(TileMap);

        Package->MarkPackageDirty();
        FString FilePath = PackageName + FPackageName::GetAssetPackageExtension();

        FSavePackageArgs SaveArgs;
        SaveArgs.TopLevelFlags = RF_Public | RF_Standalone;
        SaveArgs.Error = GError;
        SaveArgs.SaveFlags = SAVE_None;

        UPackage::SavePackage(Package, TileMap, EObjectFlags::RF_Public | RF_Standalone, *FilePath, GError, nullptr, true, true, SAVE_None);
    }
}


