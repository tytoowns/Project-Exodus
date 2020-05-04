// Fill out your copyright notice in the Description page of Project Settings.


#include "Boid.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Components/ArrowComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

ABoid::ABoid()
{
	PrimaryActorTick.bCanEverTick = true;

	// Sphere
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionCapsule"));
	CollisionSphere->SetSphereRadius(1600.0f);
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ABoid::BeginOverlap);
	CollisionSphere->OnComponentEndOverlap.AddDynamic(this, &ABoid::EndOverlap);
	CollisionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	CollisionSphere->SetCollisionObjectType(ECC_Pawn);

	// Mesh
	BoidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoidMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>mesh(TEXT("/Game/StaticMeshes/Drone_low1"));
	BoidMesh->SetStaticMesh(mesh.Object);
	BoidMesh->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	BoidMesh->SetRelativeLocation(FVector(-190.0f, 0.0f, 0.0f));
	BoidMesh->SetRelativeScale3D(FVector(200.0f, 200.0f, 200.0f));
	BoidMesh->SetupAttachment(CollisionSphere);
	BoidMesh->SetCollisionResponseToAllChannels(ECR_Ignore);

	//Material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> boidMat(TEXT("/Game/StarterContent/Materials/M_Metal_Steel"));
	BoidMesh->SetMaterial(0, boidMat.Object);

	// Particles
	static ConstructorHelpers::FObjectFinder<UParticleSystem>PSExplode(TEXT("/Game/Particles/P_Explode"));
	ExplosionParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExplosionParticle"));
	ExplosionParticle->SetTemplate(PSExplode.Object);
	ExplosionParticle->bAutoActivate = false;
	ExplosionParticle->SetRelativeScale3D(FVector(100.0f, 100.0f, 100.0f));

	static ConstructorHelpers::FObjectFinder<UParticleSystem>PSField(TEXT("/Game/Particles/P_Field"));
	FieldParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FieldParticle"));
	//FieldParticle->SetTemplate(PSField.Object);
	//FieldParticle->bAutoActivate = true;
	//FieldParticle->SetupAttachment(BoidMesh);
	//FieldParticle->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));

	// Lights
	FrontLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("FrontLight"));
	FrontLight->SetLightColor(FLinearColor::Green);
	FrontLight->SetRelativeLocationAndRotation(FVector(1360.0f, 0.0f, 0.0f), FRotator(0.0f, 180.0f, 0.0f));
	FrontLight->SetIntensity(40000000.0f);
	FrontLight->SetAttenuationRadius(2000.0f);
	FrontLight->SetupAttachment(BoidMesh);

	RearLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("RearLight"));
	RearLight->SetLightColor(FLinearColor::Green);
	RearLight->SetRelativeLocation(FVector(-1682.0f, 0.0f, 0.0f));
	RearLight->SetIntensity(40000000.0f);
	RearLight->SetAttenuationRadius(2000.0f);
	RearLight->SetupAttachment(BoidMesh);

	// Arrow
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	Arrow->ArrowSize = 0.15f;
	Arrow->SetupAttachment(BoidMesh);
	//Arrow->SetHiddenInGame(false);
}

void ABoid::BeginPlay()
{
	Super::BeginPlay();
}

void ABoid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	deltaTime = DeltaTime;
}

void ABoid::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
}

void ABoid::EndOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{

}

void ABoid::OnShot(float damage)
{
	hp -= damage;

	FTransform trans = GetActorTransform();
	trans.SetScale3D(FVector(3.0f, 3.0f, 3.0f));

	if (hp <= 0.0f)
	{
		bIsDead = true;
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticle->Template, trans, true, EPSCPoolMethod::None, true);
		//ExplosionParticle->SetRelativeScale3D(FVector(100.0f, 100.0f, 100.0f));
		this->Destroy();
	}
}

bool ABoid::GetIsDead()
{
	return bIsDead;
}

float ABoid::GetSphereRadius()
{
	return CollisionSphere->GetScaledSphereRadius();
}

void ABoid::SetLightColor(FLinearColor color)
{
	FrontLight->SetLightColor(color);
	RearLight->SetLightColor(color);
}