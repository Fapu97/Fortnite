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

// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.TriggeredDamageBuilding
struct UGAB_NPC_TriggeredDamage_Parent_C_TriggeredDamageBuilding_Params
{
	class ABuildingSMActor*                            TargetBuildingSM_Actor;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.TriggeredDamagePawn
struct UGAB_NPC_TriggeredDamage_Parent_C_TriggeredDamagePawn_Params
{
	class AFortPawn*                                   TargetFortPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.K2_ActivateAbilityFromEvent
struct UGAB_NPC_TriggeredDamage_Parent_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.ExecuteUbergraph_GAB_NPC_TriggeredDamage_Parent
struct UGAB_NPC_TriggeredDamage_Parent_C_ExecuteUbergraph_GAB_NPC_TriggeredDamage_Parent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
