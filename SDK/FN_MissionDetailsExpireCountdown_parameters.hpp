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

// Function MissionDetailsExpireCountdown.MissionDetailsExpireCountdown_C.UpdateTimer
struct UMissionDetailsExpireCountdown_C_UpdateTimer_Params
{
	struct FTimespan                                   ExpirationTime;                                           // (CPF_Parm)
	bool                                               bAlwaysShow;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHidden;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsExpireCountdown.MissionDetailsExpireCountdown_C.TimerCountDown
struct UMissionDetailsExpireCountdown_C_TimerCountDown_Params
{
};

// Function MissionDetailsExpireCountdown.MissionDetailsExpireCountdown_C.Get_MissionRemainTime_Text
struct UMissionDetailsExpireCountdown_C_Get_MissionRemainTime_Text_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MissionDetailsExpireCountdown.MissionDetailsExpireCountdown_C.Construct
struct UMissionDetailsExpireCountdown_C_Construct_Params
{
};

// Function MissionDetailsExpireCountdown.MissionDetailsExpireCountdown_C.ExecuteUbergraph_MissionDetailsExpireCountdown
struct UMissionDetailsExpireCountdown_C_ExecuteUbergraph_MissionDetailsExpireCountdown_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
