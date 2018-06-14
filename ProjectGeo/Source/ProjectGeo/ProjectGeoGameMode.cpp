// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectGeoGameMode.h"
#include "ProjectGeoPlayerController.h"
#include "ProjectGeoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectGeoGameMode::AProjectGeoGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectGeoPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}