// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API APC_PlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void GameHasEnded(class AActor* EndGameFocus = nullptr, bool bIsWinner = false) override;

private:
	UPROPERTY(EditAnywhere) TSubclassOf<class UUserWidget> LoseScreenClass;
	UPROPERTY(EditAnywhere) TSubclassOf<class UUserWidget> WinScreenClass;
	UPROPERTY(EditAnywhere) TSubclassOf<class UUserWidget> HUDClass;
	UPROPERTY(EditAnywhere) float RestartDelay = 5;

	FTimerHandle RestartTimer;
	UPROPERTY(EditAnywhere) UUserWidget* HUD;
};
