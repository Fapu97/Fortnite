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

// Function B_CloudSpouts_01.B_CloudSpouts_01_C.FinishSpout
struct AB_CloudSpouts_01_C_FinishSpout_Params
{
};

// Function B_CloudSpouts_01.B_CloudSpouts_01_C.CleanupInstanceVariables
struct AB_CloudSpouts_01_C_CleanupInstanceVariables_Params
{
};

// Function B_CloudSpouts_01.B_CloudSpouts_01_C.UserConstructionScript
struct AB_CloudSpouts_01_C_UserConstructionScript_Params
{
};

// Function B_CloudSpouts_01.B_CloudSpouts_01_C.ReceiveBeginPlay
struct AB_CloudSpouts_01_C_ReceiveBeginPlay_Params
{
};

// Function B_CloudSpouts_01.B_CloudSpouts_01_C.AnimateSplineIn
struct AB_CloudSpouts_01_C_AnimateSplineIn_Params
{
};

// Function B_CloudSpouts_01.B_CloudSpouts_01_C.Loop
struct AB_CloudSpouts_01_C_Loop_Params
{
};

// Function B_CloudSpouts_01.B_CloudSpouts_01_C.InitSpout
struct AB_CloudSpouts_01_C_InitSpout_Params
{
	bool                                               Pooled;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_CloudSpouts_01.B_CloudSpouts_01_C.ExecuteUbergraph_B_CloudSpouts_01
struct AB_CloudSpouts_01_C_ExecuteUbergraph_B_CloudSpouts_01_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
