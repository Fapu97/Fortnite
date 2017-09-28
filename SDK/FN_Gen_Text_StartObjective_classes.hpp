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

// BlueprintGeneratedClass Gen_Text_StartObjective.Gen_Text_StartObjective_C
// 0x00B0 (0x00D8 - 0x0028)
class UGen_Text_StartObjective_C : public UFortMissionEventParams
{
public:
	struct FText                                       ObjectiveText;                                            // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                DisplayedRewardTag;                                       // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 DisplayedIcon;                                            // 0x0048(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen_Text_StartObjective.Gen_Text_StartObjective_C");
		return ptr;
	}


	void BreakParams(struct FText* ObjectiveText, struct FGameplayTag* DisplayedRewardTag, struct FSlateBrush* DisplayedIcon);
	void SetParams(const struct FText& ObjectiveText, const struct FGameplayTag& DisplayedRewardTag, const struct FSlateBrush& DisplayedIcon, class UGen_Text_StartObjective_C** ThisObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
