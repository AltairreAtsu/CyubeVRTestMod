#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "CreateAccountMinimalDelegateDelegate.h"
#include "DeleteAccountMinimalDelegateDelegate.h"
#include "GetAccountListMinimalDelegateDelegate.h"
#include "GetAccountPublicInfoMinimalDelegateDelegate.h"
#include "GetServerIPsBySteamIDMinimalDelegateDelegate.h"
#include "GetServerSteamIDsByIPMinimalDelegateDelegate.h"
#include "QueryLoginTokenMinimalDelegateDelegate.h"
#include "ResetLoginTokenMinimalDelegateDelegate.h"
#include "SetBanStatusMinimalDelegateDelegate.h"
#include "SetMemoMinimalDelegateDelegate.h"
#include "UWorksInterfaceWeb.h"
#include "UWorksInterfaceWebGameServers.generated.h"

class UUWorksRequestWebCreateAccount;
class UUWorksRequestWebDeleteAccount;
class UUWorksRequestWebGetAccountList;
class UUWorksRequestWebGetAccountPublicInfo;
class UUWorksRequestWebGetServerIPsBySteamID;
class UUWorksRequestWebGetServerSteamIDsByIP;
class UUWorksRequestWebQueryLoginToken;
class UUWorksRequestWebResetLoginToken;
class UUWorksRequestWebSetBanStatus;
class UUWorksRequestWebSetMemo;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebGameServers : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebGameServers();

    UFUNCTION(BlueprintCallable)
    static void SetMemoMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& Memo, const FSetMemoMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebSetMemo* SetMemo();
    
    UFUNCTION(BlueprintCallable)
    static void SetBanStatusMinimal(const FString& Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds, const FSetBanStatusMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebSetBanStatus* SetBanStatus();
    
    UFUNCTION(BlueprintCallable)
    static void ResetLoginTokenMinimal(const FString& Key, FUWorksSteamID SteamID, const FResetLoginTokenMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebResetLoginToken* ResetLoginToken();
    
    UFUNCTION(BlueprintCallable)
    static void QueryLoginTokenMinimal(const FString& Key, const FString& LoginToken, const FQueryLoginTokenMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebQueryLoginToken* QueryLoginToken();
    
    UFUNCTION(BlueprintCallable)
    static void GetServerSteamIDsByIPMinimal(const FString& Key, const FString& ServerIPs, const FGetServerSteamIDsByIPMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetServerSteamIDsByIP* GetServerSteamIDsByIP();
    
    UFUNCTION(BlueprintCallable)
    static void GetServerIPsBySteamIDMinimal(const FString& Key, FUWorksSteamID ServerSteamID, const FGetServerIPsBySteamIDMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetServerIPsBySteamID* GetServerIPsBySteamID();
    
    UFUNCTION(BlueprintCallable)
    static void GetAccountPublicInfoMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetAccountPublicInfoMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetAccountPublicInfo* GetAccountPublicInfo();
    
    UFUNCTION(BlueprintCallable)
    static void GetAccountListMinimal(const FString& Key, const FGetAccountListMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetAccountList* GetAccountList();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteAccountMinimal(const FString& Key, FUWorksSteamID SteamID, const FDeleteAccountMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebDeleteAccount* DeleteAccount();
    
    UFUNCTION(BlueprintCallable)
    static void CreateAccountMinimal(const FString& Key, int32 AppID, const FString& Memo, const FCreateAccountMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebCreateAccount* CreateAccount();
    
};

