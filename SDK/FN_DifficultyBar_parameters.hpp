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

// Function DifficultyBar.DifficultyBar_C.ClearDifficulty
struct UDifficultyBar_C_ClearDifficulty_Params
{
};

// Function DifficultyBar.DifficultyBar_C.GetConningColor
struct UDifficultyBar_C_GetConningColor_Params
{
	float                                              DifficultyLevel;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function DifficultyBar.DifficultyBar_C.SetDifficulty
struct UDifficultyBar_C_SetDifficulty_Params
{
	int                                                Difficulty;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LootLevel;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultyBar.DifficultyBar_C.PreConstruct
struct UDifficultyBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultyBar.DifficultyBar_C.Construct
struct UDifficultyBar_C_Construct_Params
{
};

// Function DifficultyBar.DifficultyBar_C.ExecuteUbergraph_DifficultyBar
struct UDifficultyBar_C_ExecuteUbergraph_DifficultyBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
