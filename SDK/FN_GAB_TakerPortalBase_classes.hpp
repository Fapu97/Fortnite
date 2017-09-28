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

// BlueprintGeneratedClass GAB_TakerPortalBase.GAB_TakerPortalBase_C
// 0x0040 (0x0AE0 - 0x0AA0)
class UGAB_TakerPortalBase_C : public UFortGameplayAbility_AIPortal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      Debug : 1;                                                // 0x0AA8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     PortalInStartLocation;                                    // 0x0AAC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     PortalInEndLocation;                                      // 0x0AB8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     PortalOutEndLocation;                                     // 0x0AC4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     PortalInMove;                                             // 0x0AD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     PortalOutMove;                                            // 0x0AD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_TakerPortalBase.GAB_TakerPortalBase_C");
		return ptr;
	}


	void OnCancelled_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnInterrupted_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnComplete_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnCancelled_F402FFCD40B6F77E728220BFF4A37F11();
	void OnInterrupted_F402FFCD40B6F77E728220BFF4A37F11();
	void OnComplete_F402FFCD40B6F77E728220BFF4A37F11();
	void Completed_7D4D41B64C4603D73B5B158D82C73287(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_7D4D41B64C4603D73B5B158D82C73287(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_7D4D41B64C4603D73B5B158D82C73287(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_OnEndAbility();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_TakerPortalBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
