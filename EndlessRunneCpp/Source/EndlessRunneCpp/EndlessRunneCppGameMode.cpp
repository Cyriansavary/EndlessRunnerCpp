// Copyright Epic Games, Inc. All Rights Reserved.

#include "EndlessRunneCppGameMode.h"
#include "EndlessRunneCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEndlessRunneCppGameMode::AEndlessRunneCppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
