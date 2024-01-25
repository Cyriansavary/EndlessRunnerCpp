// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeRunner.h"

void AGameModeRunner::CreateInitialFloorTiles()
{
	AddFloorTile(false);

	for (int i = 0; i < NumInitialFloorTiles; i++)
	{
		AddFloorTile(true);
	}
}

AFloorTile* AGameModeRunner::AddFloorTile(const bool bSpawnItems)
{
	UWorld* World = GetWorld();

	if (World)
	{
		AFloorTile* Tile = World->SpawnActor<AFloorTile>(FloorTileClass, NextSpawnPoint);

		if (Tile)
		{
			if (bSpawnItems)
			{
				Tile->SpawnItems();
			}
			NextSpawnPoint = Tile->GetAttachTransform();
		}
		return Tile;
	}
	return nullptr;
}

void AGameModeRunner::BeginPlay()
{
	CreateInitialFloorTiles();
}
