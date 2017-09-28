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

// Function SkillTreeDetailsPrerequisitesEntry.SkillTreeDetailsPrerequisitesEntry_C.IsIconValid
struct USkillTreeDetailsPrerequisitesEntry_C_IsIconValid_Params
{
	bool                                               bIsValid;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsPrerequisitesEntry.SkillTreeDetailsPrerequisitesEntry_C.Initialize
struct USkillTreeDetailsPrerequisitesEntry_C_Initialize_Params
{
	class USkillTreeNodeDetailsPanel_C*                ParentDetailsPanel;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHomebaseNodeInstancePrerequisites          Prerequisite;                                             // (CPF_Parm)
};

// Function SkillTreeDetailsPrerequisitesEntry.SkillTreeDetailsPrerequisitesEntry_C.PreConstruct
struct USkillTreeDetailsPrerequisitesEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsPrerequisitesEntry.SkillTreeDetailsPrerequisitesEntry_C.PreConstructFromParent
struct USkillTreeDetailsPrerequisitesEntry_C_PreConstructFromParent_Params
{
};

// Function SkillTreeDetailsPrerequisitesEntry.SkillTreeDetailsPrerequisitesEntry_C.ExecuteUbergraph_SkillTreeDetailsPrerequisitesEntry
struct USkillTreeDetailsPrerequisitesEntry_C_ExecuteUbergraph_SkillTreeDetailsPrerequisitesEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
