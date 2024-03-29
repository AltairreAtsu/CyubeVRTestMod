#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksResult.h"
#include "GetFollowerCountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGetFollowerCountDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamID, int32, Count);

