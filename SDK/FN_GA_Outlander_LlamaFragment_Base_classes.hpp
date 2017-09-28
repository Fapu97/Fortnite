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

// BlueprintGeneratedClass GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C
// 0x01CE (0x0CD8 - 0x0B0A)
class UGA_Outlander_LlamaFragment_Base_C : public UGAT_OutlanderActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAnimMontage*                                M_GrenadeThrow;                                           // 0x0B18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AFortAbilityDecoTool*                        DecoTool;                                                 // 0x0B20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortAmmoItemDefinition*                     FragmentAmmoData;                                         // 0x0B28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                EventFragmentAbility;                                     // 0x0B30(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTagContainer                       TC_LlamaFragment;                                         // 0x0B38(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                          // 0x0B58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                EventLlamaFragment;                                       // 0x0B60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0B68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                GCN_ActivateFragment;                                     // 0x0B70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_Outlander_LlamaFragment;                         // 0x0B78(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_DiamondLlama;                                          // 0x0B90(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ActivateFailedMissingFragment;                         // 0x0BB0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_FindersKeepers;                                        // 0x0BD0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LlamaForOne;                                           // 0x0BF0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FAbilityToolSpawnParameters                 SpawnParameters;                                          // 0x0C10(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0C38(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0C40(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x0C70(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // 0x0C7C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    Spawn_Direction;                                          // 0x0C88(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_Hack_Llama_AntiMaterialResist;                         // 0x0C98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Prop_Outlander_Fragment_Llama;                            // 0x0CA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FragmentOrbProjectile;                                    // 0x0CA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      FindersKeepers : 1;                                       // 0x0CB0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DiamondLlama : 1;                                         // 0x0CB1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      LlamaForOne : 1;                                          // 0x0CB2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaximumNumberOfChargeFragmentsWithoutLlama;               // 0x0CB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      PlayerIsCurrentlyHoldingLlamaFragment : 1;                // 0x0CB8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        FF_FragmentPlacement;                                     // 0x0CC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture2D*                                  LlamaSmallPreviewImage;                                   // 0x0CC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture2D*                                  AbilitySmallPreviewImage;                                 // 0x0CD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C");
		return ptr;
	}


	bool SetupPreviewImageOverride();
	void Authority(bool* Auth);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	bool K2_ShouldUseDecoTool(struct FGameplayAbilityActorInfo* ActorInfo);
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void LlamaFragment();
	void ActivateFragment(struct FGameplayTag* ActivateEvent);
	void OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254();
	void OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254();
	void OnBlendOut_AEBC8CA9454DB4A76A8336BD4EE30254();
	void OnCompleted_AEBC8CA9454DB4A76A8336BD4EE30254();
	void K2_ActivateAbility();
	void SpawnFragment();
	void ProjectileStop(const struct FHitResult& ImpactResult);
	void SpawnProjectile();
	void ExecuteUbergraph_GA_Outlander_LlamaFragment_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
