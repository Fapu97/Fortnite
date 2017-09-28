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

// BlueprintGeneratedClass AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C
// 0x005C (0x06DC - 0x0680)
class AAOE_Ninja_SmokeBomb_Cloud_C : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0680(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UPostProcessComponent*                       SmokePP;                                                  // 0x0688(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    SmokePersist;                                             // 0x0690(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCapsuleComponent*                           Capsule1;                                                 // 0x0698(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeIn_Alpha_9E8A507645603872B5DEF2BFE57392D1;            // 0x06A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeIn__Direction_9E8A507645603872B5DEF2BFE57392D1;       // 0x06A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          FadeIn;                                                   // 0x06A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PPFade_PPWeight_A4DD1BCE429C2F31EB8EB5856B27E063;         // 0x06B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PPFade__Direction_A4DD1BCE429C2F31EB8EB5856B27E063;       // 0x06B4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          PPFade;                                                   // 0x06B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TX_Size;                                                  // 0x06C0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FadeInTime;                                               // 0x06CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x06D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      FadingInOrOut_ : 1;                                       // 0x06D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AOELifespan;                                              // 0x06D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C");
		return ptr;
	}


	void OnRep_AOELifespan();
	void OnRep_Lifespan();
	void UserConstructionScript();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void PPFade__FinishedFunc();
	void PPFade__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExtraLifespan(float AOELifespan);
	void ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
