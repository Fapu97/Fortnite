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

// BlueprintGeneratedClass Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C
// 0x0130 (0x0930 - 0x0800)
class APrj_HuskBeeAOECloud_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            BeeAntiOverlapArea;                                       // 0x0808(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            BeeArea;                                                  // 0x0810(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             Bee_Loop_AudioComponent;                                  // 0x0818(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    BeeCloudFX;                                               // 0x0820(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Projectile_Decelerate_Quickly_Speed_Multiplier_C9B1D3E141AC3BAF371D21B289B86802;// 0x0828(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Projectile_Decelerate_Quickly__Direction_C9B1D3E141AC3BAF371D21B289B86802;// 0x082C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          Projectile_Decelerate_Quickly;                            // 0x0830(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Projectile_Decelerate_Speed_Multiplier_32C93F914436EAA1C924CA9F82E5B0BA;// 0x0838(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Projectile_Decelerate__Direction_32C93F914436EAA1C924CA9F82E5B0BA;// 0x083C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          Projectile_Decelerate;                                    // 0x0840(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  ImpactHitResult;                                          // 0x0848(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InitialMaxSpeed;                                          // 0x08D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AOEFXFadeTime;                                            // 0x08D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                TC_NPCCharacterTypeHuskBeehive;                           // 0x08D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCStatusAOEBees;                                      // 0x08E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UClass*                                      GE_HuskBeehiveAOE2StandingInBees;                         // 0x08E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_HuskBeehiveAOE3DOT;                                    // 0x08F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_HuskBeehiveAOE4Remove;                                 // 0x08F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_HuskBeehiveDisableTrail;                               // 0x0900(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      HitPawn : 1;                                              // 0x0908(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EFortTeam>                             InstigatorTeam;                                           // 0x0909(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FString                                     ContextString;                                            // 0x0910(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FCurveTableRowHandle                        NPCMiscCurves_HuskBeehiveCloudDuration;                   // 0x0920(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C");
		return ptr;
	}


	void UserConstructionScript();
	void Projectile_Decelerate__FinishedFunc();
	void Projectile_Decelerate__UpdateFunc();
	void Projectile_Decelerate_Quickly__FinishedFunc();
	void Projectile_Decelerate_Quickly__UpdateFunc();
	void ReceiveBeginPlay();
	void OnTouched(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FHitResult* HitResult);
	void StopProjectileSimulation();
	void GraduallySlowProjectile();
	void EndAOE();
	void BndEvt__BeeArea_K2Node_ComponentBoundEvent_73_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__BeeAntiOverlapArea_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BeeAntiOverlapArea_K2Node_ComponentBoundEvent_70_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void CancelGradualSlowing();
	void ExecuteUbergraph_Prj_HuskBeeAOECloud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
