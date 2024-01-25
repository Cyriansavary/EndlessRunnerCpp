// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS()
class ENDLESSRUNNECPP_API AObstacle : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Components")
	class USceneComponent* SceneComponent;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* StaticMesh;
	// Sets default values for this actor's properties
	AObstacle();

	UFUNCTION()
	void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	virtual void BeginPlay() override;
};
