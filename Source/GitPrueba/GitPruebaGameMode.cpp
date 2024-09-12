// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitPruebaGameMode.h"
#include "GitPruebaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitPruebaGameMode::AGitPruebaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
