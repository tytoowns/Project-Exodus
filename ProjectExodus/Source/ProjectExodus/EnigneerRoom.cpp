// Fill out your copyright notice in the Description page of Project Settings.


#include "EnigneerRoom.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Controller.h"
// Sets default values
AEnigneerRoom::AEnigneerRoom()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnigneerRoom::BeginPlay()
{
	Super::BeginPlay();
	if (HasAuthority())
	{
		SetReplicates(true);
		SetReplicateMovement(true);
	}
}

// Called every frame
void AEnigneerRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (HasAuthority())
	{
		UWorld* World = GetWorld();
		if (!ensure(World != nullptr)) return;


		Ship = World->GetFirstPlayerController();

		ShipTransform = Ship->GetPawn()->GetTransform();
		SetActorRotation(ShipTransform.GetRotation());

		UE_LOG(LogTemp, Warning, TEXT("%s"), *ShipTransform.ToString());
	}
}

