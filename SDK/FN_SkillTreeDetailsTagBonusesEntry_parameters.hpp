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

// Function SkillTreeDetailsTagBonusesEntry.SkillTreeDetailsTagBonusesEntry_C.IsIconValid
struct USkillTreeDetailsTagBonusesEntry_C_IsIconValid_Params
{
	bool                                               bIsValid;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsTagBonusesEntry.SkillTreeDetailsTagBonusesEntry_C.Initialize
struct USkillTreeDetailsTagBonusesEntry_C_Initialize_Params
{
	struct FFortTagUIData                              TagUIData;                                                // (CPF_Parm)
};

// Function SkillTreeDetailsTagBonusesEntry.SkillTreeDetailsTagBonusesEntry_C.PreConstruct
struct USkillTreeDetailsTagBonusesEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsTagBonusesEntry.SkillTreeDetailsTagBonusesEntry_C.PreConstructFromParent
struct USkillTreeDetailsTagBonusesEntry_C_PreConstructFromParent_Params
{
};

// Function SkillTreeDetailsTagBonusesEntry.SkillTreeDetailsTagBonusesEntry_C.ExecuteUbergraph_SkillTreeDetailsTagBonusesEntry
struct USkillTreeDetailsTagBonusesEntry_C_ExecuteUbergraph_SkillTreeDetailsTagBonusesEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
