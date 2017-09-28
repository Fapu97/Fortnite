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

// BlueprintGeneratedClass GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C
// 0x0070 (0x0AB0 - 0x0A40)
class UGAB_HuskDwarfLeap_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      Debug : 1;                                                // 0x0A48(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxUpwardLeapAngle;                                       // 0x0A4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxLeapHeght;                                             // 0x0A50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxLeapRange;                                             // 0x0A54(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IgnoreObstructionTestAfterThisHeightDifference;           // 0x0A58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class AActor*>                              AllHitActors;                                             // 0x0A60(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class AActor*                                      LandedOrHitPawnActor;                                     // 0x0A70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortFeedbackHandle                         FeedBack_Jump_Event;                                      // 0x0A78(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAnimMontage*                                HuskJumpAnticipationMontage;                              // 0x0A90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                HuskJumpUpMontage;                                        // 0x0A98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                HuskJumpDownMontage;                                      // 0x0AA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                HuskJumpLandMontage;                                      // 0x0AA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void Cancelled_CBB06DD545B56595CFFF06B2E6D07800(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_CBB06DD545B56595CFFF06B2E6D07800(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_48EF415F4112E88BA579DDB3E574B1B2();
	void OnInterrupted_48EF415F4112E88BA579DDB3E574B1B2();
	void OnBlendOut_48EF415F4112E88BA579DDB3E574B1B2();
	void OnCompleted_48EF415F4112E88BA579DDB3E574B1B2();
	void OnCancelled_0A17B1564ADD76C7619FAFA6E9826AEF();
	void OnInterrupted_0A17B1564ADD76C7619FAFA6E9826AEF();
	void OnBlendOut_0A17B1564ADD76C7619FAFA6E9826AEF();
	void OnCompleted_0A17B1564ADD76C7619FAFA6E9826AEF();
	void OnCancelled_8DE1E2DE4743A41F47677B999617BA52();
	void OnInterrupted_8DE1E2DE4743A41F47677B999617BA52();
	void OnBlendOut_8DE1E2DE4743A41F47677B999617BA52();
	void OnCompleted_8DE1E2DE4743A41F47677B999617BA52();
	void OnCancelled_666B7CB24770D78F310B59B3BCC27DDB();
	void OnInterrupted_666B7CB24770D78F310B59B3BCC27DDB();
	void OnBlendOut_666B7CB24770D78F310B59B3BCC27DDB();
	void OnCompleted_666B7CB24770D78F310B59B3BCC27DDB();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void CommitAndEndAbility();
	void OnPawnLanded(const struct FHitResult& Hit);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void UnbindEvents();
	void BindEvents();
	void OnReachedJumpApex();
	void ResetDoOnce();
	void ExecuteUbergraph_GAB_HuskDwarfLeap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
