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

// Function SkillTreeDetailsTagBonuses.SkillTreeDetailsTagBonuses_C.Update
struct USkillTreeDetailsTagBonuses_C_Update_Params
{
	TArray<struct FFortTagUIData>                      TagUIData;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function SkillTreeDetailsTagBonuses.SkillTreeDetailsTagBonuses_C.PreConstruct
struct USkillTreeDetailsTagBonuses_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsTagBonuses.SkillTreeDetailsTagBonuses_C.ExecuteUbergraph_SkillTreeDetailsTagBonuses
struct USkillTreeDetailsTagBonuses_C_ExecuteUbergraph_SkillTreeDetailsTagBonuses_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
