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

// BlueprintGeneratedClass TT_Ninja_SmokeBomb.TT_Ninja_SmokeBomb_C
// 0x0010 (0x0128 - 0x0118)
class UTT_Ninja_SmokeBomb_C : public UFortGameplayAbilityTooltip
{
public:
	TArray<struct FText>                               FinalDescription;                                         // 0x0118(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TT_Ninja_SmokeBomb.TT_Ninja_SmokeBomb_C");
		return ptr;
	}


	bool GetApplicationTag(class UGameplayAbility** AbilityInstance, struct FGameplayTag* OutTag);
	bool BP_GetTokenizedDescriptionText(class UObject** ObjectToDescribe, struct FGameplayTag* Tag, class UFortTooltipContext** Context, TArray<struct FText>* OutDescription);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, struct FGameplayTag* Tag, class UFortTooltipContext** Context, struct FGameplayTag* Token, struct FText* OutText);
	void InitializeAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
