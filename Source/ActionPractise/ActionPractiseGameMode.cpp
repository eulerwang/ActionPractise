// Copyright Epic Games, Inc. All Rights Reserved.

#include "ActionPractiseGameMode.h"
#include "ActionPractiseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AActionPractiseGameMode::AActionPractiseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
