// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;

UCLASS()
class ASUBMERGEDCITY_API AAMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAMagicProjectile();

protected:

	UPROPERTY(VisibleAnywhere)
	USphereComponent * SpereComp;

	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent * MovementComp;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent * EffectComp;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
