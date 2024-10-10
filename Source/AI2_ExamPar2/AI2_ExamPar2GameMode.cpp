// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI2_ExamPar2GameMode.h"
#include "AI2_ExamPar2Character.h"
#include "UObject/ConstructorHelpers.h"

AAI2_ExamPar2GameMode::AAI2_ExamPar2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
