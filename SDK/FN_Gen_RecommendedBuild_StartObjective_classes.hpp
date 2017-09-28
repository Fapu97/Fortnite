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

// BlueprintGeneratedClass Gen_RecommendedBuild_StartObjective.Gen_RecommendedBuild_StartObjective_C
// 0x005C (0x0084 - 0x0028)
class UGen_RecommendedBuild_StartObjective_C : public UFortMissionEventParams
{
public:
	float                                              ObjectiveStartDelay;                                      // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BuildLimit;                                               // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       ObjectiveTextPrefix;                                      // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       RewardTags;                                               // 0x0048(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      bReuseableBonusObjective : 1;                             // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class AActor*>                              TargetArray;                                              // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	float                                              BuildDistance;                                            // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen_RecommendedBuild_StartObjective.Gen_RecommendedBuild_StartObjective_C");
		return ptr;
	}


	void BreakParams(float* ObjectiveStartDelay, int* BuildLimit, struct FText* ObjectiveTextPrefix, float* BuildDistance, struct FGameplayTagContainer* RewardTags, TArray<class AActor*>* TargetArray);
	void SetParams(float ObjectiveStartDelay, int BuildLimit, const struct FText& ObjectiveTextPrefix, const struct FGameplayTagContainer& RewardTags, float BuildDistanceLimt, class AActor* Target, TArray<class AActor*>* Targets, class UGen_RecommendedBuild_StartObjective_C** ThisObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
