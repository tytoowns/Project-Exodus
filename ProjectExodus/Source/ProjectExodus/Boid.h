// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boid.generated.h"

UCLASS()
class PROJECTEXODUS_API ABoid : public AActor
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* BoidMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class USphereComponent* CollisionSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class UArrowComponent* Arrow;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class UMaterialInterface* Material;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Particle, meta = (AllowPrivateAccess = "true"))
		class UParticleSystemComponent* ExplosionParticle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Particle, meta = (AllowPrivateAccess = "true"))
		class UParticleSystemComponent* FieldParticle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class USpotLightComponent* FrontLight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class USpotLightComponent* RearLight;

protected:

	virtual void BeginPlay() override;

	UFUNCTION() void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	UFUNCTION() void EndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	// Variable declarations
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		float deltaTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat)
		float hp = 100.0f;;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat)
		bool bIsDead = false;

public:

	ABoid();

	virtual void Tick(float DeltaTime) override;

	float GetSphereRadius();
	bool GetIsDead();
	void SetLightColor(FLinearColor color);

	UFUNCTION(BlueprintCallable, Category = "Combat")
		void OnShot(float damage);

	// Component accessors
	FORCEINLINE class USphereComponent* GetSphere() const { return CollisionSphere; }
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return BoidMesh; }
	FORCEINLINE class UArrowComponent* GetArrow() const { return Arrow; }
};