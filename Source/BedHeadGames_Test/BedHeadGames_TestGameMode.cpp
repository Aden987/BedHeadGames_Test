// Copyright Epic Games, Inc. All Rights Reserved.

#include "BedHeadGames_TestGameMode.h"
#include "BedHeadGames_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABedHeadGames_TestGameMode::ABedHeadGames_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
