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

// BlueprintGeneratedClass GAB_HuskMelee.GAB_HuskMelee_C
// 0x0028 (0x0A78 - 0x0A50)
class UGAB_HuskMelee_C : public UGAB_AIBaseMelee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UFortAbilityTask_MoveAI*                     HuskMove;                                                 // 0x0A58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class AActor*>                              HitActors;                                                // 0x0A60(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UClass*                                      GE_AIBaseMeleeFrustration_Reset;                          // 0x0A70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskMelee.GAB_HuskMelee_C");
		return ptr;
	}


	void Completed_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_3012237E40D07AA69417C79DC2677F69();
	void OnInterrupted_3012237E40D07AA69417C79DC2677F69();
	void OnComplete_3012237E40D07AA69417C79DC2677F69();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ContinuousMoveTowardsTarget();
	void GameplayEffectContainerApplied(const struct FGameplayAbilityTargetDataHandle& Target_Data);
	void ExecuteUbergraph_GAB_HuskMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
