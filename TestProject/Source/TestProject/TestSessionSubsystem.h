// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"
#include "TestSessionSubsystem.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCSOnCreateSessionComplete, bool, Successful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCSOnUpdateSessionComplete, bool, Successful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCSOnStartSessionComplete, bool, Successful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCSOnEndSessionComplete, bool, Successful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCSOnDestroySessionComplete, bool, Successful);
DECLARE_MULTICAST_DELEGATE_TwoParams(FCSOnFindSessionsComplete, const TArray<FOnlineSessionSearchResult>& SessionResults, bool Successful);
DECLARE_MULTICAST_DELEGATE_OneParam(FCSOnJoinSessionComplete, EOnJoinSessionCompleteResult::Type Result);


UCLASS()
class TESTPROJECT_API UTestSessionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UTestSessionSubsystem();

	void CreateSession(int32 NumPublicConnections, bool bIsLANMatch);
	FCSOnCreateSessionComplete OnCreateSessionCompleteEvent;
	
	void UpdateSession();
	FCSOnUpdateSessionComplete OnUpdateSessionCompleteEvent;

	void StartSession();
	FCSOnStartSessionComplete OnStartSessionCompleteEvent;

	void EndSession();
	FCSOnEndSessionComplete OnEndSessionCompleteEvent;

	void DestroySession();
	FCSOnDestroySessionComplete OnDestroySessionCompleteEvent;

	void FindSessions(int32 MaxSearchResults, bool bIsLANQuery);
	FCSOnFindSessionsComplete OnFindSessionsCompleteEvent;

	void JoinSession(const FOnlineSessionSearchResult& SessionResult);
	FCSOnJoinSessionComplete OnJoinSessionCompleteEvent;

protected:
	void OnCreateSessionCompleted(FName SessionName, bool Success);
	void OnUpdateSessionCompleted(FName SessionName, bool Success);
	void OnStartSessionCompleted(FName SessionName, bool Success);
	void OnEndSessionCompleted(FName SessionName, bool Success);
	void OnDestroySessionCompleted(FName SessionName, bool Success);
	void OnFindSessionsCompleted(bool Success);
	void OnJoinSessionCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	bool TryTravelToCurrentSession();
	
private:
	TSharedPtr<FOnlineSessionSettings> LastSessionSettings;
	
	FOnCreateSessionCompleteDelegate CreateSessionCompleteDelegate;
	FDelegateHandle CreateSessionCompleteDelegateHandle;

	FOnUpdateSessionCompleteDelegate UpdateSessionCompleteDelegate;
	FDelegateHandle UpdateSessionCompleteDelegateHandle;

	FOnStartSessionCompleteDelegate StartSessionCompleteDelegate;
	FDelegateHandle StartSessionCompleteDelegateHandle;

	FOnEndSessionCompleteDelegate EndSessionCompleteDelegate;
	FDelegateHandle EndSessionCompleteDelegateHandle;

	FOnDestroySessionCompleteDelegate DestroySessionCompleteDelegate;
	FDelegateHandle DestroySessionCompleteDelegateHandle;

	FOnFindSessionsCompleteDelegate FindSessionsCompleteDelegate;
	FDelegateHandle FindSessionsCompleteDelegateHandle;
	TSharedPtr<FOnlineSessionSearch> LastSessionSearch;

	FOnJoinSessionCompleteDelegate JoinSessionCompleteDelegate;
	FDelegateHandle JoinSessionCompleteDelegateHandle;
};
