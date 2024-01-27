// Fill out your copyright notice in the Description page of Project Settings.


#include "KtrSoundSubsystem.h"
#include "KotoriSound.h"
#include "Kismet/GameplayStatics.h"

void UKtrSoundSubsystem::PlaySound2D(USoundBase* Sound)
{
	FString str = FString::Printf(TEXT("PlaySound2D %s"), *Sound->GetName());
	UKismetSystemLibrary::PrintString(this, str);
	UGameplayStatics::PlaySound2D(this, Sound);
}
