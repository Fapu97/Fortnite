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

// Function SkillTreeDetailsPrerequisites.SkillTreeDetailsPrerequisites_C.Initialize
struct USkillTreeDetailsPrerequisites_C_Initialize_Params
{
	class USkillTreeNodeDetailsPanel_C*                ParentDetailsPanel;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsPrerequisites.SkillTreeDetailsPrerequisites_C.Update
struct USkillTreeDetailsPrerequisites_C_Update_Params
{
	struct FHomebaseNode                               HomebaseNode;                                             // (CPF_Parm)
};

// Function SkillTreeDetailsPrerequisites.SkillTreeDetailsPrerequisites_C.PreConstruct
struct USkillTreeDetailsPrerequisites_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsPrerequisites.SkillTreeDetailsPrerequisites_C.ExecuteUbergraph_SkillTreeDetailsPrerequisites
struct USkillTreeDetailsPrerequisites_C_ExecuteUbergraph_SkillTreeDetailsPrerequisites_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
