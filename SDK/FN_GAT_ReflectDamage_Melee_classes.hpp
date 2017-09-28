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

// BlueprintGeneratedClass GAT_ReflectDamage_Melee.GAT_ReflectDamage_Melee_C
// 0x0028 (0x0A98 - 0x0A70)
class UGAT_ReflectDamage_Melee_C : public UGAT_ReflectDamage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A70(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FGameplayTagContainer                       RequiredTags;                                             // 0x0A78(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_ReflectDamage_Melee.GAT_ReflectDamage_Melee_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAT_ReflectDamage_Melee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
