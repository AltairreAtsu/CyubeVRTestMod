#pragma once
#include "CoreMinimal.h"
#include "GetAccountListDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAccountListDelegate, bool, bSuccessful, const FString&, Content);

