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

// Function BP_DeadDrop_LandingZone1024.BP_DeadDrop_LandingZone1024_C.OnRep_HideLZ
struct ABP_DeadDrop_LandingZone1024_C_OnRep_HideLZ_Params
{
};

// Function BP_DeadDrop_LandingZone1024.BP_DeadDrop_LandingZone1024_C.UserConstructionScript
struct ABP_DeadDrop_LandingZone1024_C_UserConstructionScript_Params
{
};

// Function BP_DeadDrop_LandingZone1024.BP_DeadDrop_LandingZone1024_C.ReceiveBeginPlay
struct ABP_DeadDrop_LandingZone1024_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeadDrop_LandingZone1024.BP_DeadDrop_LandingZone1024_C.HandleMissionEvent_BalloonLanded
struct ABP_DeadDrop_LandingZone1024_C_HandleMissionEvent_BalloonLanded_Params
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

// Function BP_DeadDrop_LandingZone1024.BP_DeadDrop_LandingZone1024_C.ExecuteUbergraph_BP_DeadDrop_LandingZone1024
struct ABP_DeadDrop_LandingZone1024_C_ExecuteUbergraph_BP_DeadDrop_LandingZone1024_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
