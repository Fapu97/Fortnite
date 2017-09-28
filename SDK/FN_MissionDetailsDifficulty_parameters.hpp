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

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.CheckBlockParty
struct UMissionDetailsDifficulty_C_CheckBlockParty_Params
{
	struct FString                                     TheaterUniqueId;                                          // (CPF_Parm, CPF_ZeroConstructor)
	int                                                MissionRewardCount;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.IsShieldUpgradeAvailable
struct UMissionDetailsDifficulty_C_IsShieldUpgradeAvailable_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.SetUnderpoweredWarningVisibility
struct UMissionDetailsDifficulty_C_SetUnderpoweredWarningVisibility_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.SetSwitchers
struct UMissionDetailsDifficulty_C_SetSwitchers_Params
{
};

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.GetMissionDetails
struct UMissionDetailsDifficulty_C_GetMissionDetails_Params
{
};

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.SetProgressBarValues
struct UMissionDetailsDifficulty_C_SetProgressBarValues_Params
{
};

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.IsUnderpowered
struct UMissionDetailsDifficulty_C_IsUnderpowered_Params
{
	int                                                MinimumPowerLevel;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Underpowered;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.Update
struct UMissionDetailsDifficulty_C_Update_Params
{
};

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.Construct
struct UMissionDetailsDifficulty_C_Construct_Params
{
};

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.SelectedMissionChanged
struct UMissionDetailsDifficulty_C_SelectedMissionChanged_Params
{
};

// Function MissionDetailsDifficulty.MissionDetailsDifficulty_C.ExecuteUbergraph_MissionDetailsDifficulty
struct UMissionDetailsDifficulty_C_ExecuteUbergraph_MissionDetailsDifficulty_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
