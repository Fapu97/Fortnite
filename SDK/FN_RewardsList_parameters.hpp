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

// Function RewardsList.RewardsList_C.Get Reward Items
struct URewardsList_C_Get_Reward_Items_Params
{
	TArray<class UFortItemDefinition*>                 Item_Definitions;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function RewardsList.RewardsList_C.AddSeparator
struct URewardsList_C_AddSeparator_Params
{
};

// Function RewardsList.RewardsList_C.Update
struct URewardsList_C_Update_Params
{
	TArray<struct FFortMissionRewardInfo>              Mission_Rewards;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function RewardsList.RewardsList_C.PreConstruct
struct URewardsList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsList.RewardsList_C.ExecuteUbergraph_RewardsList
struct URewardsList_C_ExecuteUbergraph_RewardsList_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
