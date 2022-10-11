// Copyright Epic Games, Inc. All Rights Reserved.

#include "ASubmergedCityGameMode.h"
#include "ASubmergedCityCharacter.h"
#include "UObject/ConstructorHelpers.h"

AASubmergedCityGameMode::AASubmergedCityGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
