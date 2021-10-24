// Copyright Epic Games, Inc. All Rights Reserved.

#include "DK30ProjectGameMode.h"
#include "DK30ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADK30ProjectGameMode::ADK30ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
