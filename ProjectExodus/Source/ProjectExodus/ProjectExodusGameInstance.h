// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ProjectExodusGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTEXODUS_API UProjectExodusGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UProjectExodusGameInstance(const FObjectInitializer & ObjectInitializer);

	virtual void Init();

	UFUNCTION(Exec)
		void Host();

	UFUNCTION(Exec)
		void Join(const FString& Address);

	UFUNCTION(Exec)
		void LevelOne();


};
