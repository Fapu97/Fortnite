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

// BlueprintGeneratedClass TT_Outlander_BearFragment.TT_Outlander_BearFragment_C
// 0x0008 (0x0120 - 0x0118)
class UTT_Outlander_BearFragment_C : public UFortGameplayAbilityTooltip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TT_Outlander_BearFragment.TT_Outlander_BearFragment_C");
		return ptr;
	}


	bool GetApplicationTag(class UGameplayAbility** AbilityInstance, struct FGameplayTag* OutTag);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, struct FGameplayTag* Tag, class UFortTooltipContext** Context, struct FGameplayTag* Token, struct FText* OutText);
	void InitializeAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context);
	void ExecuteUbergraph_TT_Outlander_BearFragment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
