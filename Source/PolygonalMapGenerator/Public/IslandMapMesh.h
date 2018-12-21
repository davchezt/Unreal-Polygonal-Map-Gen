// Copyright 2018 Schemepunk Studios

#pragma once

#include "CoreMinimal.h"
#include "IslandMap.h"
#include "ProceduralMeshComponent.h"
#include "IslandMapMesh.generated.h"

/**
 * Similar to the AIslandMap class, but this automatically generates a procedural mesh
 * once a map has been generated.
 */
UCLASS()
class POLYGONALMAPGENERATOR_API AIslandMapMesh : public AIslandMap
{
	GENERATED_BODY()
private:
	/** The procedural mesh component that will store the map. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Mesh")
	UProceduralMeshComponent* MapMesh;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float ZScale;

public:
	AIslandMapMesh();

protected:
	virtual void BeginPlay() override;
	virtual void CreateDynmaicMesh();
};
