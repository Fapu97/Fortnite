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

// BlueprintGeneratedClass TT_Ninja_ThrowingStars.TT_Ninja_ThrowingStars_C
// 0x0000 (0x0118 - 0x0118)
class UTT_Ninja_ThrowingStars_C : public UFortGameplayAbilityTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TT_Ninja_ThrowingStars.TT_Ninja_ThrowingStars_C");
		return ptr;
	}


	bool GetApplicationTag(class UGameplayAbility** AbilityInstance, struct FGameplayTag* OutTag);
	void InitializeAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, struct FGameplayTag* Tag, class UFortTooltipContext** Context, struct FGameplayTag* Token, struct FText* OutText);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
