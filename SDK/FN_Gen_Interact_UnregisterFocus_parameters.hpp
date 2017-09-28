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

// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.BreakParams
struct UGen_Interact_UnregisterFocus_C_BreakParams_Params
{
	class AActor*                                      ActorToUnregisterRegister;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.SetParams
struct UGen_Interact_UnregisterFocus_C_SetParams_Params
{
	class AActor*                                      ActorToUnregister;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGen_Interact_UnregisterFocus_C*             ThisObject;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
