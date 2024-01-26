// Fill out your copyright notice in the Description page of Project Settings.


#include "RunnerCharacter.h"
#include "GameModeRunner.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ARunnerCharacter::ARunnerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;


	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));

	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	CameraArm->TargetArmLength = 350.f;
	CameraArm->SocketOffset = FVector(0.f, 0.f, 100.f);
	CameraArm->bUsePawnControlRotation = true;
	CameraArm->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->bUsePawnControlRotation = false;
	Camera->SetupAttachment(CameraArm, USpringArmComponent::SocketName);
}

// Called when the game starts or when spawned
void ARunnerCharacter::BeginPlay()
{
	Super::BeginPlay();
	AGameModeRunner* GameMode = Cast<AGameModeRunner>(UGameplayStatics::GetGameMode(GetWorld()));

	
}

void ARunnerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator ControlRotation = GetControlRotation();
	ControlRotation.Pitch = 0.f;
	ControlRotation.Roll = 0.f;

	AddMovementInput(ControlRotation.Vector());

}

// Called to bind functionality to input
void ARunnerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ARunnerCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Released, this, &ARunnerCharacter::StopJumping);

	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ARunnerCharacter::MoveRight);
	PlayerInputComponent->BindAction(TEXT("MoveDown"), IE_Pressed, this, &ARunnerCharacter::MoveDown);

}

void ARunnerCharacter::MoveRight(float Value)
{
	PawnMovement->AddInputVector(GetActorRightVector() * Value);
}

void ARunnerCharacter::MoveDown()
{
}

void ARunnerCharacter::OnDeath()
{
	bIsDead = false;
	if (RestartTimerHandle.IsValid())
	{
		GetWorldTimerManager().ClearTimer(RestartTimerHandle);
	}
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), TEXT("RestartLevel"));
}
void ARunnerCharacter::Death()
{
	if (!bIsDead)
	{
		const FVector PawnLocation = GetActorLocation();

		UWorld* World = GetWorld();

		if(World)
		{
			bIsDead = true;
			DisableInput(nullptr);

			if (DeathParticle)
			{
				UGameplayStatics::SpawnEmitterAtLocation(World, DeathParticle, PawnLocation);
			}
			if (DeathSound)
			{
				UGameplayStatics::PlaySoundAtLocation(World, DeathSound, PawnLocation);
			}

			GetMesh()->SetVisibility(false);

			World->GetTimerManager().SetTimer(RestartTimerHandle, this, &ARunnerCharacter::OnDeath, 1.f);
		}
	}
}

void ARunnerCharacter::AddCoin()
{
	AGameModeRunner* GameMode = Cast<AGameModeRunner>(UGameplayStatics::GetGameMode(GetWorld()));
	if (GameMode)
	{
		GameMode->AddCoins();
	}
}

