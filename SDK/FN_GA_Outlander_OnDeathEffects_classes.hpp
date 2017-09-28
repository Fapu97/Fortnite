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

// BlueprintGeneratedClass GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C
// 0x0036 (0x0B40 - 0x0B0A)
class UGA_Outlander_OnDeathEffects_C : public UGAT_OutlanderTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FGameplayTagContainer                       TC_InTheZone;                                             // 0x0B18(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                Event_InTheZoneDeactivate;                                // 0x0B38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_Outlander_OnDeathEffects(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
