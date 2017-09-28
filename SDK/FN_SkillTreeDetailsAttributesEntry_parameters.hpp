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

// Function SkillTreeDetailsAttributesEntry.SkillTreeDetailsAttributesEntry_C.Initialize
struct USkillTreeDetailsAttributesEntry_C_Initialize_Params
{
	struct FFortDisplayAttribute                       DisplayAttribute;                                         // (CPF_Parm)
};

// Function SkillTreeDetailsAttributesEntry.SkillTreeDetailsAttributesEntry_C.PreConstruct
struct USkillTreeDetailsAttributesEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsAttributesEntry.SkillTreeDetailsAttributesEntry_C.PreConstructFromParent
struct USkillTreeDetailsAttributesEntry_C_PreConstructFromParent_Params
{
};

// Function SkillTreeDetailsAttributesEntry.SkillTreeDetailsAttributesEntry_C.ExecuteUbergraph_SkillTreeDetailsAttributesEntry
struct USkillTreeDetailsAttributesEntry_C_ExecuteUbergraph_SkillTreeDetailsAttributesEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
