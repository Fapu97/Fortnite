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

// BlueprintGeneratedClass Gen_BonusBuildLimit_StartObjective.Gen_BonusBuildLimit_StartObjective_C
// 0x0041 (0x0069 - 0x0028)
class UGen_BonusBuildLimit_StartObjective_C : public UFortMissionEventParams
{
public:
	float                                              ObjectiveStartDelay;                                      // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BuildLimit;                                               // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       ObjectiveTextPrefix;                                      // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       RewardTags;                                               // 0x0048(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      bReuseableBonusObjective : 1;                             // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen_BonusBuildLimit_StartObjective.Gen_BonusBuildLimit_StartObjective_C");
		return ptr;
	}


	void BreakParams(float* ObjectiveStartDelay, int* BuildLimit, struct FText* ObjectiveTextPrefix, struct FGameplayTagContainer* RewardTags, bool* bReuseableBonusObjective);
	void SetParams(float ObjectiveStartDelay, int BuildLimit, const struct FText& ObjectiveTextPrefix, const struct FGameplayTagContainer& RewardTags, bool bReuseableBonusObjective, class UGen_BonusBuildLimit_StartObjective_C** ThisObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
