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

// BlueprintGeneratedClass BlasterPawn.BlasterPawn_C
// 0x0078 (0x1F50 - 0x1ED8)
class ABlasterPawn_C : public AHuskPawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1ED8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             BlastSound;                                               // 0x1EE0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LaserBeamAnims_SweepIn_7FCEC9324E8E720D5074A492D0DE4346;  // 0x1EE8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LaserBeamAnims_Scale_7FCEC9324E8E720D5074A492D0DE4346;    // 0x1EEC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LaserBeamAnims_AnimateIn_7FCEC9324E8E720D5074A492D0DE4346;// 0x1EF0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LaserBeamAnims__Direction_7FCEC9324E8E720D5074A492D0DE4346;// 0x1EF4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          LaserBeamAnims;                                           // 0x1EF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    HeadEffect;                                               // 0x1F00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             HeadEffectTemplate;                                       // 0x1F08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      HeadEffectStatus : 1;                                     // 0x1F10(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PushDuration;                                             // 0x1F14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PushYawAngle;                                             // 0x1F18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PushVelocity;                                             // 0x1F1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AFortPawn*                                   PawnBumpedByBlaster;                                      // 0x1F20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Laser_Beam_Mesh;                                          // 0x1F28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                DestroyLaserBeamMeshSafetyHandle;                         // 0x1F30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              LaserBeamThickness;                                       // 0x1F38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Laser_Beam_MID;                                           // 0x1F40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Laser_Beam_Particles;                                     // 0x1F48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BlasterPawn.BlasterPawn_C");
		return ptr;
	}


	void DestroyLaserBeam();
	void CreateLaserBeam(const struct FVector& Socket_Location__World_, const struct FVector& Impact_Point__World_);
	void HideLaserBeam(bool Hidden);
	void OnRep_HeadEffectStatus();
	void UserConstructionScript();
	void LaserBeamAnims__FinishedFunc();
	void LaserBeamAnims__UpdateFunc();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void GameplayCue_Impact_Physical_Energy(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DestroyLaserBeamMeshSafety();
	void OnEndSleepEffects();
	void ActivateEffectsPostSpawnIn();
	void DeactivateEffectsPreDespawn();
	void OnBeginSleepEffects();
	void ExecuteUbergraph_BlasterPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
