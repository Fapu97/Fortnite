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

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.UserConstructionScript
struct ABP_Hex_OutpostCC_C_UserConstructionScript_Params
{
};

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ReceiveBeginPlay
struct ABP_Hex_OutpostCC_C_ReceiveBeginPlay_Params
{
};

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ActivateOutpost
struct ABP_Hex_OutpostCC_C_ActivateOutpost_Params
{
};

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.HandleOnPlayerInfoChanged
struct ABP_Hex_OutpostCC_C_HandleOnPlayerInfoChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ExecuteUbergraph_BP_Hex_OutpostCC
struct ABP_Hex_OutpostCC_C_ExecuteUbergraph_BP_Hex_OutpostCC_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
