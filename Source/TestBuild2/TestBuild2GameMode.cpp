// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TestBuild2GameMode.h"
#include "TestBuild2HUD.h"
#include "TestBuild2Character.h"
#include "UObject/ConstructorHelpers.h"

ATestBuild2GameMode::ATestBuild2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestBuild2HUD::StaticClass();
}
