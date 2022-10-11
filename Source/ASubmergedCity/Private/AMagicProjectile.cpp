// Fill out your copyright notice in the Description page of Project Settings.


#include "AMagicProjectile.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AAMagicProjectile::AAMagicProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpereComp = CreateDefaultSubobject<USphereComponent>("SpereComp");
	RootComponent = SpereComp;

	EffectComp = CreateDefaultSubobject<UParticleSystemComponent>("EffectComp");
	EffectComp->SetupAttachment(SpereComp);

	MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");
	MovementComp->InitialSpeed = 1000.0f;
	MovementComp->bRotationFollowsVelocity = true;
	MovementComp->bInitialVelocityInLocalSpace = true;
}

// Called when the game starts or when spawned
void AAMagicProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

