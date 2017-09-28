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

// Function SkillTreeDetailsQuestRequirementsEntry.SkillTreeDetailsQuestRequirementsEntry_C.Initialize
struct USkillTreeDetailsQuestRequirementsEntry_C_Initialize_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsQuestRequirementsEntry.SkillTreeDetailsQuestRequirementsEntry_C.PreConstruct
struct USkillTreeDetailsQuestRequirementsEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsQuestRequirementsEntry.SkillTreeDetailsQuestRequirementsEntry_C.PreConstructFromParent
struct USkillTreeDetailsQuestRequirementsEntry_C_PreConstructFromParent_Params
{
};

// Function SkillTreeDetailsQuestRequirementsEntry.SkillTreeDetailsQuestRequirementsEntry_C.ExecuteUbergraph_SkillTreeDetailsQuestRequirementsEntry
struct USkillTreeDetailsQuestRequirementsEntry_C_ExecuteUbergraph_SkillTreeDetailsQuestRequirementsEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
