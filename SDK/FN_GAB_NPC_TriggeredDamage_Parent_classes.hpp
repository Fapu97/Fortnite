#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C
// 0x0058 (0x0A98 - 0x0A40)
class UGAB_NPC_TriggeredDamage_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UClass*                                      GE_TriggeredDamage_VS_Pawns;                              // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortAIPawn*                                 TriggeredDamageAIPawn;                                    // 0x0A50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AActor*                                      TriggeredDamageTarget;                                    // 0x0A58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TriggeredDamageMagnitude;                                 // 0x0A60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TriggeredDamageTargetData;                                // 0x0A68(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UClass*                                      GE_TriggeredDamage_VS_Buildings;                          // 0x0A88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                TriggeredDamageAbilityTriggerEventTag;                    // 0x0A90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C");
		return ptr;
	}


	void TriggeredDamageBuilding(class ABuildingSMActor* TargetBuildingSM_Actor);
	void TriggeredDamagePawn(class AFortPawn* TargetFortPawn);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_NPC_TriggeredDamage_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
