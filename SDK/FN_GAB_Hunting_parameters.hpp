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

// Function GAB_Hunting.GAB_Hunting_C.UpdatePositionData
struct UGAB_Hunting_C_UpdatePositionData_Params
{
	TArray<struct FVector>                             PosArray;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FVector                                     NewPosition;                                              // (CPF_Parm, CPF_IsPlainOldData)
	float                                              MaxDistance;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HasValidData;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GAB_Hunting.GAB_Hunting_C.UpdateDistanceData
struct UGAB_Hunting_C_UpdateDistanceData_Params
{
	TArray<float>                                      DistArray;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	float                                              NewDistance;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinValue;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HasValidData;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GAB_Hunting.GAB_Hunting_C.OnCancelled_9284CD4944DA1972DB7A98BE0A9A28C1
struct UGAB_Hunting_C_OnCancelled_9284CD4944DA1972DB7A98BE0A9A28C1_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.OnInterrupted_9284CD4944DA1972DB7A98BE0A9A28C1
struct UGAB_Hunting_C_OnInterrupted_9284CD4944DA1972DB7A98BE0A9A28C1_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.OnComplete_9284CD4944DA1972DB7A98BE0A9A28C1
struct UGAB_Hunting_C_OnComplete_9284CD4944DA1972DB7A98BE0A9A28C1_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.K2_ActivateAbility
struct UGAB_Hunting_C_K2_ActivateAbility_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.K2_OnEndAbility
struct UGAB_Hunting_C_K2_OnEndAbility_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.OnQueryFinishedEvent_Event_1
struct UGAB_Hunting_C_OnQueryFinishedEvent_Event_1_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GAB_Hunting.GAB_Hunting_C.OnTargetPerceptionUpdated_Event_1
struct UGAB_Hunting_C_OnTargetPerceptionUpdated_Event_1_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (CPF_Parm)
};

// Function GAB_Hunting.GAB_Hunting_C.StartQuery
struct UGAB_Hunting_C_StartQuery_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.Restart Hunting
struct UGAB_Hunting_C_Restart_Hunting_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.StoreGoalDistance
struct UGAB_Hunting_C_StoreGoalDistance_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.ExecuteUbergraph_GAB_Hunting
struct UGAB_Hunting_C_ExecuteUbergraph_GAB_Hunting_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
