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

// BlueprintGeneratedClass B_Prj_Llama_Head.B_Prj_Llama_Head_C
// 0x0079 (0x0879 - 0x0800)
class AB_Prj_Llama_Head_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        HeadMesh;                                                 // 0x0808(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      WaterPhysMat;                                             // 0x0810(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Bounce_WaterSplash_PS;                                    // 0x0818(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Bounce_Generic_PS;                                        // 0x0820(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  BounceGenericSound;                                       // 0x0828(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  BounceWaterSound;                                         // 0x0830(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             SmokeTrailFX;                                             // 0x0838(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // 0x0840(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotTickDelta;                                             // 0x0848(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShouldRotate : 1;                                         // 0x084C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x0850(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             DeathExplodeFX;                                           // 0x0860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  BounceSound;                                              // 0x0868(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  ExplodeHeadSound;                                         // 0x0870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ProjectileActivated : 1;                                  // 0x0878(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Llama_Head.B_Prj_Llama_Head_C");
		return ptr;
	}


	void SpawnBounceFX(struct FHitResult* Hit, struct FHitResult* HitResult, TEnumAsByte<EPhysicalSurface>* SurfaceType, struct FRotator* HitResultRotation);
	void UserConstructionScript();
	void OnBounce(struct FHitResult* Hit);
	void ReceiveTick(float* DeltaSeconds);
	void OnProjectileStop_Event_1(const struct FHitResult& ImpactResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Prj_Llama_Head(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
