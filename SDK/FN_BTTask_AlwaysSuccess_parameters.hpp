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

// Function BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ReceiveExecute
struct UBTTask_AlwaysSuccess_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ExecuteUbergraph_BTTask_AlwaysSuccess
struct UBTTask_AlwaysSuccess_C_ExecuteUbergraph_BTTask_AlwaysSuccess_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
