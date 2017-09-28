#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_DeadDrop.Mission_DeadDrop_C.RegisterForBackupTimerForSuccessDialogPart1
struct AMission_DeadDrop_C_RegisterForBackupTimerForSuccessDialogPart1_Params
{
	float                                              LengthOfTimeForEnglishInSeconds;                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AdditionalFudgeTimeInSeconds;                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.StopRecommendedBuildLimit
struct AMission_DeadDrop_C_StopRecommendedBuildLimit_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.StartRecommendedBuildLimit
struct AMission_DeadDrop_C_StartRecommendedBuildLimit_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.StartBonusBuildLimit
struct AMission_DeadDrop_C_StartBonusBuildLimit_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.GetAffectingDistance
struct AMission_DeadDrop_C_GetAffectingDistance_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.GetAffectingType
struct AMission_DeadDrop_C_GetAffectingType_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.CalculateBadgeReward
struct AMission_DeadDrop_C_CalculateBadgeReward_Params
{
	int                                                Success;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Total;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Succeed;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.PlayResultsDialogue
struct AMission_DeadDrop_C_PlayResultsDialogue_Params
{
	int                                                FilesSucceeded;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FilesFailed;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalFiles;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.SetTimeOfDayOptions
struct AMission_DeadDrop_C_SetTimeOfDayOptions_Params
{
	float                                              Time;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Speed;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.UserConstructionScript
struct AMission_DeadDrop_C_UserConstructionScript_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E95416230
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E95416230_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EA21C1170
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EA21C1170_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EB5749735
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EB5749735_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E12B5C47E
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E12B5C47E_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E798785EE
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E798785EE_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E0636F887
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E0636F887_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E115E7EC2
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E115E7EC2_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EE644A995
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EE644A995_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03AF3A402
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB03AF3A402_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB01BD78718
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB01BD78718_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB05203E12A
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB05203E12A_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0D8E972A6
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0D8E972A6_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0C0655F71
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0C0655F71_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EF5C1778E
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EF5C1778E_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB08E454752
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB08E454752_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB031B1DC66
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB031B1DC66_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E26030D82
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E26030D82_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB02E0CC1EE
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB02E0CC1EE_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0F5F3A1DC
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0F5F3A1DC_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03BE2F041
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB03BE2F041_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB07D77DD1B
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB07D77DD1B_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0BB57343D
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0BB57343D_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0F7F04730
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0F7F04730_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB057FD1469
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB057FD1469_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0A80F5BB7
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0A80F5BB7_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB09F58CD77
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB09F58CD77_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03115FCCC
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB03115FCCC_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EEE159BF3
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EEE159BF3_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0972D27FE
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0972D27FE_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB06626A4CD
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB06626A4CD_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0575E6B5A
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0575E6B5A_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB07A001531
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB07A001531_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB054CA2361
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB054CA2361_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB00A646FFB
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB00A646FFB_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0BF3D1F32
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0BF3D1F32_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0B987FBBB
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0B987FBBB_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0506E91E9
struct AMission_DeadDrop_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0506E91E9_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E49D4C8B8
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E49D4C8B8_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EA1F7ABCC
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EA1F7ABCC_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E5EBC4EFD
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E5EBC4EFD_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E69E13DBD
struct AMission_DeadDrop_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E69E13DBD_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.BlueprintOnActivated
struct AMission_DeadDrop_C_BlueprintOnActivated_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.StartAttack
struct AMission_DeadDrop_C_StartAttack_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.AttackComplete
struct AMission_DeadDrop_C_AttackComplete_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_FailEncounter
struct AMission_DeadDrop_C_HandleMissionEvent_FailEncounter_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.UploadFile
struct AMission_DeadDrop_C_UploadFile_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.BalloonDamaged
struct AMission_DeadDrop_C_BalloonDamaged_Params
{
	class AActor*                                      DamagedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.FileUploaded
struct AMission_DeadDrop_C_FileUploaded_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.StartDownloadEffects
struct AMission_DeadDrop_C_StartDownloadEffects_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.PlaySuccessSound
struct AMission_DeadDrop_C_PlaySuccessSound_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.PlayFailSound
struct AMission_DeadDrop_C_PlayFailSound_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_ReachedBalloon
struct AMission_DeadDrop_C_HandleMissionEvent_ReachedBalloon_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.1MinuteToLandExpandWard
struct AMission_DeadDrop_C__1MinuteToLandExpandWard_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.AllowFileCorruption
struct AMission_DeadDrop_C_AllowFileCorruption_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_BalloonLanded
struct AMission_DeadDrop_C_HandleMissionEvent_BalloonLanded_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.StartFileDownload
struct AMission_DeadDrop_C_StartFileDownload_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.TimerUntilBalloonCanBeDamaged
struct AMission_DeadDrop_C_TimerUntilBalloonCanBeDamaged_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_ReduceTimer
struct AMission_DeadDrop_C_HandleMissionEvent_ReduceTimer_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnEncounterRestStarted
struct AMission_DeadDrop_C_OnEncounterRestStarted_Params
{
	class UFortAIEncounterInfo*                        Encounter;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnEncounterSpawnDirectionsChosen
struct AMission_DeadDrop_C_OnEncounterSpawnDirectionsChosen_Params
{
	class UFortAIEncounterInfo*                        Encounter;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_FailDefendObj
struct AMission_DeadDrop_C_HandleMissionEvent_FailDefendObj_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_CompleteLocateObj
struct AMission_DeadDrop_C_HandleMissionEvent_CompleteLocateObj_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_AllowBalloonDamage
struct AMission_DeadDrop_C_HandleMissionEvent_AllowBalloonDamage_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_ObjectiveFailed
struct AMission_DeadDrop_C_HandleMissionEvent_ObjectiveFailed_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.ReminderTimer
struct AMission_DeadDrop_C_ReminderTimer_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_ObjectiveSucceeded
struct AMission_DeadDrop_C_HandleMissionEvent_ObjectiveSucceeded_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.EncounterDirectionChoosen
struct AMission_DeadDrop_C_EncounterDirectionChoosen_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.IntroDialogDone
struct AMission_DeadDrop_C_IntroDialogDone_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.StartMission
struct AMission_DeadDrop_C_StartMission_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnMatchStarted
struct AMission_DeadDrop_C_OnMatchStarted_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.Trigger_AllFilesSuccess
struct AMission_DeadDrop_C_Trigger_AllFilesSuccess_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.Trigger_MostFiles
struct AMission_DeadDrop_C_Trigger_MostFiles_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.Trigger_SomeFiles
struct AMission_DeadDrop_C_Trigger_SomeFiles_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_MissionForceSuccess
struct AMission_DeadDrop_C_HandleMissionEvent_MissionForceSuccess_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HandleMissionEvent_DeadDrop_MapleTreeForceWest
struct AMission_DeadDrop_C_HandleMissionEvent_DeadDrop_MapleTreeForceWest_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.RemoveTimerLabelText
struct AMission_DeadDrop_C_RemoveTimerLabelText_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.HideHealthBar
struct AMission_DeadDrop_C_HideHealthBar_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.FirstDialogFailsafe
struct AMission_DeadDrop_C_FirstDialogFailsafe_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.TriggerContinueEndDialog
struct AMission_DeadDrop_C_TriggerContinueEndDialog_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnWorldReady
struct AMission_DeadDrop_C_OnWorldReady_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnTimeOutForFinalConversation
struct AMission_DeadDrop_C_OnTimeOutForFinalConversation_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.OnTimeOutForSuccessDialogPart1
struct AMission_DeadDrop_C_OnTimeOutForSuccessDialogPart1_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.PatrolWardRadius
struct AMission_DeadDrop_C_PatrolWardRadius_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.ContinueDialog
struct AMission_DeadDrop_C_ContinueDialog_Params
{
};

// Function Mission_DeadDrop.Mission_DeadDrop_C.ExecuteUbergraph_Mission_DeadDrop
struct AMission_DeadDrop_C_ExecuteUbergraph_Mission_DeadDrop_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
