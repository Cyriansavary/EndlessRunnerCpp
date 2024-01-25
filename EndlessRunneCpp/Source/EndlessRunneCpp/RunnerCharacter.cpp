// Fill out your copyright notice in the Description page of Project Settings.


#include "RunnerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ARunnerCharacter::ARunnerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	
}


// Called every frame
void ARunnerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARunnerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ARunnerCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Released, this, &ARunnerCharacter::StopJumping);

	PlayerInputComponent->BindAction(TEXT("MoveLeft"), IE_Pressed, this, &ARunnerCharacter::MoveLeft);
	PlayerInputComponent->BindAction(TEXT("MoveRight"), IE_Pressed, this, &ARunnerCharacter::MoveRight);
	PlayerInputComponent->BindAction(TEXT("MoveDown"), IE_Pressed, this, &ARunnerCharacter::MoveDown);

}

void ARunnerCharacter::MoveLeft()
{
}

void ARunnerCharacter::MoveRight()
{
}

void ARunnerCharacter::MoveDown()
{
}




