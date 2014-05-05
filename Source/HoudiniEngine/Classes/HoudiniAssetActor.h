/*
 * PROPRIETARY INFORMATION.  This software is proprietary to
 * Side Effects Software Inc., and is not to be reproduced,
 * transmitted, or disclosed in any way without written permission.
 *
 * Produced by:
 *      Damian Campeanu
 *      Side Effects Software Inc
 *      123 Front Street West, Suite 1401
 *      Toronto, Ontario
 *      Canada   M5J 2M2
 *      416-504-9876
 *
 */

#pragma once
#include "HoudiniAssetActor.generated.h"


UCLASS(hidecategories=(Input), ConversionRoot, meta=(ChildCanTick))
class HOUDINIENGINE_API AHoudiniAssetActor : public AActor
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(Category = HoudiniAssetActor, VisibleAnywhere, BlueprintReadOnly, meta = (ExposeFunctionCategories = "Mesh,Rendering,Physics,Components|HoudiniAsset"))
	TSubobjectPtr<UHoudiniAssetComponent> HoudiniAssetComponent;
};
