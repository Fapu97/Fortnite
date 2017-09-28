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

// Function SkillTreeDetailsQuestRequirements.SkillTreeDetailsQuestRequirements_C.Update
struct USkillTreeDetailsQuestRequirements_C_Update_Params
{
	struct FHomebaseNode                               HomebaseNode;                                             // (CPF_Parm)
};

// Function SkillTreeDetailsQuestRequirements.SkillTreeDetailsQuestRequirements_C.PreConstruct
struct USkillTreeDetailsQuestRequirements_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsQuestRequirements.SkillTreeDetailsQuestRequirements_C.ExecuteUbergraph_SkillTreeDetailsQuestRequirements
struct USkillTreeDetailsQuestRequirements_C_ExecuteUbergraph_SkillTreeDetailsQuestRequirements_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
