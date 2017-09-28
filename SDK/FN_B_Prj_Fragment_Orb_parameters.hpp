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

// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.UserConstructionScript
struct AB_Prj_Fragment_Orb_C_UserConstructionScript_Params
{
};

// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.OnStop
struct AB_Prj_Fragment_Orb_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.ReceiveBeginPlay
struct AB_Prj_Fragment_Orb_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.InitTarget
struct AB_Prj_Fragment_Orb_C_InitTarget_Params
{
	struct FVector                                     In;                                                       // (CPF_Parm, CPF_IsPlainOldData)
};

// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.ExecuteUbergraph_B_Prj_Fragment_Orb
struct AB_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
