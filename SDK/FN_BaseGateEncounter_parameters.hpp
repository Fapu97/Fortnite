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

// Function BaseGateEncounter.BaseGateEncounter_C.OnRampStarted
struct UBaseGateEncounter_C_OnRampStarted_Params
{
};

// Function BaseGateEncounter.BaseGateEncounter_C.DataLog
struct UBaseGateEncounter_C_DataLog_Params
{
};

// Function BaseGateEncounter.BaseGateEncounter_C.OnPeakStarted
struct UBaseGateEncounter_C_OnPeakStarted_Params
{
};

// Function BaseGateEncounter.BaseGateEncounter_C.OnFadeStarted
struct UBaseGateEncounter_C_OnFadeStarted_Params
{
};

// Function BaseGateEncounter.BaseGateEncounter_C.ExecuteUbergraph_BaseGateEncounter
struct UBaseGateEncounter_C_ExecuteUbergraph_BaseGateEncounter_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
