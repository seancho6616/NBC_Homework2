// Fill out your copyright notice in the Description page of Project Settings.


#include "HomeworkGameMode.h"
#include "NBC_Character.h"
#include "HomeworkPlayerController.h"

AHomeworkGameMode::AHomeworkGameMode() {
	DefaultPawnClass = ANBC_Character::StaticClass();
	PlayerControllerClass = AHomeworkPlayerController::StaticClass();
}

