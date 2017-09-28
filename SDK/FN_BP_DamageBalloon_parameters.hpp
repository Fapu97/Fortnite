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

// Function BP_DamageBalloon.BP_DamageBalloon_C.OnRep_DisableBalloonCollisionOnSeperation
struct ABP_DamageBalloon_C_OnRep_DisableBalloonCollisionOnSeperation_Params
{
};

// Function BP_DamageBalloon.BP_DamageBalloon_C.OnRep_DestroyBalloon
struct ABP_DamageBalloon_C_OnRep_DestroyBalloon_Params
{
};

// Function BP_DamageBalloon.BP_DamageBalloon_C.ShouldDie
struct ABP_DamageBalloon_C_ShouldDie_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController**                                EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_DamageBalloon.BP_DamageBalloon_C.UserConstructionScript
struct ABP_DamageBalloon_C_UserConstructionScript_Params
{
};

// Function BP_DamageBalloon.BP_DamageBalloon_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E3F7E884F
struct ABP_DamageBalloon_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E3F7E884F_Params
{
};

// Function BP_DamageBalloon.BP_DamageBalloon_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E31D8CAB5
struct ABP_DamageBalloon_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E31D8CAB5_Params
{
};

// Function BP_DamageBalloon.BP_DamageBalloon_C.OnDamageServer
struct ABP_DamageBalloon_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function BP_DamageBalloon.BP_DamageBalloon_C.HandleMissionEvent_BalloonSeperation
struct ABP_DamageBalloon_C_HandleMissionEvent_BalloonSeperation_Params
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

// Function BP_DamageBalloon.BP_DamageBalloon_C.ExecuteUbergraph_BP_DamageBalloon
struct ABP_DamageBalloon_C_ExecuteUbergraph_BP_DamageBalloon_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
