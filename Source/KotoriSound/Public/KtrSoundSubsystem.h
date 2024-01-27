// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KtrGameInstanceSubsystem.h"

#include "KtrSoundSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class KOTORISOUND_API UKtrSoundSubsystem : public UKtrGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="KtrSound")
	void PlaySound2D(USoundBase* Sound);
};
