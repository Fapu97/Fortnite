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

// Function SkillTreeDetailsAttributes.SkillTreeDetailsAttributes_C.Update
struct USkillTreeDetailsAttributes_C_Update_Params
{
	TArray<struct FFortDisplayAttribute>               DisplayAttributes;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function SkillTreeDetailsAttributes.SkillTreeDetailsAttributes_C.PreConstruct
struct USkillTreeDetailsAttributes_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsAttributes.SkillTreeDetailsAttributes_C.ExecuteUbergraph_SkillTreeDetailsAttributes
struct USkillTreeDetailsAttributes_C_ExecuteUbergraph_SkillTreeDetailsAttributes_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
