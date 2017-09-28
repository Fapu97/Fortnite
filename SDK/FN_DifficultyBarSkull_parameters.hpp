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

// Function DifficultyBarSkull.DifficultyBarSkull_C.SetActive
struct UDifficultyBarSkull_C_SetActive_Params
{
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultyBarSkull.DifficultyBarSkull_C.SetColor
struct UDifficultyBarSkull_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function DifficultyBarSkull.DifficultyBarSkull_C.SetState
struct UDifficultyBarSkull_C_SetState_Params
{
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
