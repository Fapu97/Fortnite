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

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.RefreshTick
struct UStreamingInstallProgressBar_C_RefreshTick_Params
{
};

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ToggleTimer
struct UStreamingInstallProgressBar_C_ToggleTimer_Params
{
	bool                                               Enable;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Construct
struct UStreamingInstallProgressBar_C_Construct_Params
{
};

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Destruct
struct UStreamingInstallProgressBar_C_Destruct_Params
{
};

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ExecuteUbergraph_StreamingInstallProgressBar
struct UStreamingInstallProgressBar_C_ExecuteUbergraph_StreamingInstallProgressBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
