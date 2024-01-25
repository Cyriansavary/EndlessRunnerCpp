// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorTile.h"
#include "RunnerCharacter.h"
#include "GameModeRunner.h"
#include "Kismet/KismetMathLibrary.h"





// Sets default values
AFloorTile::AFloorTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	RootComponent = SceneComponent;

	FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>("FloorMesh");
	FloorMesh->SetupAttachment(SceneComponent);
	
	Attachpoint = CreateDefaultSubobject<UArrowComponent>("Attachpoint");
	Attachpoint->SetupAttachment(SceneComponent);

	CenterPoint = CreateDefaultSubobject<UArrowComponent>("CenterLane");
	CenterPoint->SetupAttachment(SceneComponent);

	LeftPoint = CreateDefaultSubobject<UArrowComponent>("LeftLane");
	LeftPoint->SetupAttachment(SceneComponent);

	RightPoint = CreateDefaultSubobject<UArrowComponent>("RightLane");
	RightPoint->SetupAttachment(SceneComponent);

	FloorTriggerBox = CreateDefaultSubobject<UBoxComponent>("FloorTriggerBox");
	FloorTriggerBox->SetupAttachment(SceneComponent);
	FloorTriggerBox->SetBoxExtent(FVector(32.f, 500.f, 200.f));
	FloorTriggerBox->SetCollisionProfileName("OverlapOnlyPawn");

}


// Called when the game starts or when spawned
void AFloorTile::BeginPlay()
{
	Super::BeginPlay();

	RunGameMode = Cast<AGameModeRunner>(GetWorld()->GetAuthGameMode());

	check(RunGameMode);

	FloorTriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AFloorTile::OnTriggerEnter);
	
}


void AFloorTile::OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ARunnerCharacter* RunnerCharacter = Cast<ARunnerCharacter>(OtherActor);

	if (RunnerCharacter)
	{
		RunGameMode->AddFloorTile(true);

		GetWorldTimerManager().SetTimer(DestroyTimerHandle, this, &AFloorTile::DestroyFloorTile, 2.f, false);

	}
}
void AFloorTile::SpawnItems()
{
		SpawnLaneItem(CenterPoint);
		SpawnLaneItem(LeftPoint);
		SpawnLaneItem(RightPoint);
}

void AFloorTile::SpawnLaneItem(UArrowComponent* lane)
{
	const float RandomNumber = FMath::FRandRange(0.f, 1.5f);
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	const FTransform SpawnTransform = lane->GetComponentTransform();

	if (UKismetMathLibrary::InRange_FloatFloat(RandomNumber, 0.5f, 0.75f,true, true))
	{
		AObstacle* Obstacle = GetWorld()->SpawnActor<AObstacle>(SmallObstacleClass, SpawnTransform, SpawnParameters);
	}
	else if (UKismetMathLibrary::InRange_FloatFloat(RandomNumber, 0.75f, 1.f, true, true))
	{
		UE_LOG(LogTemp, Warning, TEXT("Spawn Big Obstacle"));
		AObstacle* Obstacle = GetWorld()->SpawnActor<AObstacle>(BigObstacleClass, SpawnTransform, SpawnParameters);
	}


}

void AFloorTile::DestroyFloorTile()
{
	if (DestroyTimerHandle.IsValid())
	{
		GetWorldTimerManager().ClearTimer(DestroyTimerHandle);
	}

	this->Destroy();
}
