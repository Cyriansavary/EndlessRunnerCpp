// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"
#include "RunnerCharacter.h"

// Sets default values
AObstacle::AObstacle()
{
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(SceneComponent);

	

}

void AObstacle::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Obstacle Hit"));
	ARunnerCharacter* RunCharacter = Cast<ARunnerCharacter>(OtherActor);

	if (RunCharacter)
	{
		RunCharacter->Death();
	}
}

void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	StaticMesh->OnComponentHit.AddDynamic(this, &AObstacle::OnHit);

}





