// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "UnityChanSisters.h"
#include "UnityChanSistersGameMode.h"
#include "UnityChanSistersCharacter.h"

AUnityChanSistersGameMode::AUnityChanSistersGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScroller/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
