// Copyright Epic Games, Inc. All Rights Reserved.

#include "TutorialGameMode.h"
#include "TutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutorialGameMode::ATutorialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
