// Copyright Epic Games, Inc. All Rights Reserved.

#include "Wwise_ShowcasesGameMode.h"
#include "Wwise_ShowcasesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWwise_ShowcasesGameMode::AWwise_ShowcasesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
