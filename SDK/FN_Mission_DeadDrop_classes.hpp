#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_DeadDrop.Mission_DeadDrop_C
// 0x0200 (0x08B8 - 0x06B8)
class AMission_DeadDrop_C : public AFortMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UFortMissionTimerComponent*                  FortMissionTimer;                                         // 0x06C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ABP_DeadDrop_Balloon_C*                      DownedBalloon;                                            // 0x06D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PrepareTimer;                                             // 0x06D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortAIEncounterInfo*                        AttackEncounter;                                          // 0x06E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FileDownloadTimer;                                        // 0x06E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                FileCounter;                                              // 0x06EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      FileCorrupted_ : 1;                                       // 0x06F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                FilesSucceeded;                                           // 0x06F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                FilesFailed;                                              // 0x06F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                TotalFiles;                                               // 0x06FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                FileUploadHandle;                                         // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      IntroDialogueComplete : 1;                                // 0x0708(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ReachedBalloon : 1;                                       // 0x0709(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeToLandStartAttack;                                    // 0x070C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BronzePercent;                                            // 0x0710(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SilverPercent;                                            // 0x0714(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GoldPercent;                                              // 0x0718(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                PlatinumBadge;                                            // 0x0720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                ParticipationBadge;                                       // 0x0728(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                BronzeBadge;                                              // 0x0730(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                SilverBadge;                                              // 0x0738(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                GoldBadge;                                                // 0x0740(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      DataDownloadSuccess : 1;                                  // 0x0748(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BalloonDamageTime;                                        // 0x074C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                TimeToStartAttackHandle;                                  // 0x0750(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                TimeUntilBallonDamageHandle;                              // 0x0758(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                _1MinuteWarningHandle;                                    // 0x0760(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class ABP_DamageBalloon_C*                         DestructibleBalloon;                                      // 0x0768(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DebugWardRadius : 1;                                      // 0x0770(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       PrepareTextHandle;                                        // 0x0778(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UGen_Text_StartObjective_C*                  PrepareTextParams;                                        // 0x0798(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       PrepareText;                                              // 0x07A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UGen_BonusTimeLimit_StartObjective_C*        StartObjectiveParamsBonusLocateTimer;                     // 0x07B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       BonusObjectiveHandle;                                     // 0x07C0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       BonusLocateText;                                          // 0x07E0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UGen_BonusTimeLimit_StopObjective_C*         StopObjectiveParamsBonusLocateTimer;                      // 0x07F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                MapReminderDialogTimerHandle;                             // 0x0800(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UFortQuestItemDefinition*                    Q_Theater_PvE01_02;                                       // 0x0808(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      PlayQuestDialog : 1;                                      // 0x0810(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      BonusFailed : 1;                                          // 0x0811(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      HasLocatedBalloon : 1;                                    // 0x0812(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      WasBonusStarted : 1;                                      // 0x0813(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<TEnumAsByte<EFortEncounterDirection>>       ForbiddenStormDirections;                                 // 0x0818(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class AActor*>                              Blank;                                                    // 0x0828(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	unsigned char                                      IsMapleTree : 1;                                          // 0x0838(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UGen_BonusBuildLimit_StartObjective_C*       StartObjectiveParams_BonusBuildLimit;                     // 0x0840(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       BuildLimitBonusHandle;                                    // 0x0848(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                BuiltLimitNumber;                                         // 0x0868(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                ParticipationBadge_ServerLost;                            // 0x0870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FName                                       RecommendedBuildRow;                                      // 0x0878(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UGen_RecommendedBuild_StartObjective_C*      StartObjectiveParams_RecommendedBuild;                    // 0x0880(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class AActor*>                              BlankArray;                                               // 0x0888(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       RecommendedBuildObjectiveHandle;                          // 0x0898(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_DeadDrop.Mission_DeadDrop_C");
		return ptr;
	}


	void RegisterForBackupTimerForSuccessDialogPart1(float LengthOfTimeForEnglishInSeconds, float AdditionalFudgeTimeInSeconds);
	void StopRecommendedBuildLimit();
	void StartRecommendedBuildLimit();
	void StartBonusBuildLimit();
	float GetAffectingDistance();
	void GetAffectingType();
	void CalculateBadgeReward(int Success, int Total, bool* Succeed);
	void PlayResultsDialogue(int FilesSucceeded, int FilesFailed, int TotalFiles);
	void SetTimeOfDayOptions(float Time, float Speed);
	void UserConstructionScript();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E95416230();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EA21C1170();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EB5749735();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E12B5C47E();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E798785EE();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E0636F887();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E115E7EC2();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EE644A995();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB03AF3A402();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB01BD78718();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB05203E12A();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0D8E972A6();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0C0655F71();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EF5C1778E();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB08E454752();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB031B1DC66();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E26030D82();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB02E0CC1EE();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0F5F3A1DC();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB03BE2F041();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB07D77DD1B();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0BB57343D();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0F7F04730();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB057FD1469();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0A80F5BB7();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB09F58CD77();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB03115FCCC();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EEE159BF3();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0972D27FE();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB06626A4CD();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0575E6B5A();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB07A001531();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB054CA2361();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB00A646FFB();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0BF3D1F32();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0B987FBBB();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0506E91E9();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E49D4C8B8();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EA1F7ABCC();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E5EBC4EFD();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E69E13DBD();
	void BlueprintOnActivated();
	void StartAttack();
	void AttackComplete();
	void HandleMissionEvent_FailEncounter(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void UploadFile();
	void BalloonDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void FileUploaded();
	void StartDownloadEffects();
	void PlaySuccessSound();
	void PlayFailSound();
	void HandleMissionEvent_ReachedBalloon(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void _1MinuteToLandExpandWard();
	void AllowFileCorruption();
	void HandleMissionEvent_BalloonLanded(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void StartFileDownload();
	void TimerUntilBalloonCanBeDamaged();
	void HandleMissionEvent_ReduceTimer(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void OnEncounterRestStarted(class UFortAIEncounterInfo* Encounter);
	void OnEncounterSpawnDirectionsChosen(class UFortAIEncounterInfo* Encounter);
	void HandleMissionEvent_FailDefendObj(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_CompleteLocateObj(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_AllowBalloonDamage(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_ObjectiveFailed(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ReminderTimer();
	void HandleMissionEvent_ObjectiveSucceeded(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void EncounterDirectionChoosen();
	void IntroDialogDone();
	void StartMission();
	void OnMatchStarted();
	void Trigger_AllFilesSuccess();
	void Trigger_MostFiles();
	void Trigger_SomeFiles();
	void HandleMissionEvent_MissionForceSuccess(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_DeadDrop_MapleTreeForceWest(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void RemoveTimerLabelText();
	void HideHealthBar();
	void FirstDialogFailsafe();
	void TriggerContinueEndDialog();
	void OnWorldReady();
	void OnTimeOutForFinalConversation();
	void OnTimeOutForSuccessDialogPart1();
	void PatrolWardRadius();
	void ContinueDialog();
	void ExecuteUbergraph_Mission_DeadDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
