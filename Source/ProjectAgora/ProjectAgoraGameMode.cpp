// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectAgoraGameMode.h"
#include "ProjectAgoraCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectAgoraGameMode::AProjectAgoraGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
