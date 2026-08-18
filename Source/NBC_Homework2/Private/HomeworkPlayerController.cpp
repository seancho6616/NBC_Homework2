// Fill out your copyright notice in the Description page of Project Settings.


#include "HomeworkPlayerController.h"
#include "EnhancedInputSubsystems.h"

AHomeworkPlayerController::AHomeworkPlayerController() : MoveAction(nullptr), LookAction(nullptr){}

void AHomeworkPlayerController::BeginPlay() {
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer()) {
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()) {
			if (InputMappingContext) {
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}