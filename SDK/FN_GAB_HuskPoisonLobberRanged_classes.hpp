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

// BlueprintGeneratedClass GAB_HuskPoisonLobberRanged.GAB_HuskPoisonLobberRanged_C
// 0x0010 (0x0A78 - 0x0A68)
class UGAB_HuskPoisonLobberRanged_C : public UGAB_AIBaseRanged_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A68(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FGameplayTag                                EC_NPCAbilityAttackAOE;                                   // 0x0A70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskPoisonLobberRanged.GAB_HuskPoisonLobberRanged_C");
		return ptr;
	}


	void K2_TriggerFromAnimation(struct FGameplayTag* ApplicationTag);
	void ExecuteUbergraph_GAB_HuskPoisonLobberRanged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
