// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FloorTile.h"
#include "GameModeRunner.generated.h"

/**
 * 
 */
UCLASS()
class ENDLESSRUNNECPP_API AGameModeRunner : public AGameModeBase
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnyWhere)
	int32 TotalCoin = 0;

	UPROPERTY(EditAnyWhere, Category = "Config")
	TSubclassOf<AFloorTile> FloorTileClass;

	UPROPERTY(EditAnyWhere, Category = "Config")
	int32 NumInitialFloorTiles = 10;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
	FTransform NextSpawnPoint;

	UFUNCTION(BlueprintCallable)
	void CreateInitialFloorTiles();

	UFUNCTION(BlueprintCallable)
	AFloorTile* AddFloorTile(const bool bSpawnItems);

	UFUNCTION()
	void AddCoins();

	protected:
		virtual void BeginPlay() override;

	
};
