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

// BlueprintGeneratedClass HuskPawn_Bombshell.HuskPawn_Bombshell_C
// 0x0028 (0x1F00 - 0x1ED8)
class AHuskPawn_Bombshell_C : public AHuskPawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1ED8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystem*                             Effect_Head_Fire;                                         // 0x1EE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Head_Fire_Emitter;                                 // 0x1EE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceConstant*>           FemaleMaterialVariants;                                   // 0x1EF0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn_Bombshell.HuskPawn_Bombshell_C");
		return ptr;
	}


	void SpawnHeadFX(class UParticleSystemComponent** Output_Get);
	void UserConstructionScript();
	void PawnUniqueIDSet();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnBeginSleepEffects();
	void OnEndSleepEffects();
	void ActivateEffectsPostSpawnIn();
	void DeactivateEffectsPreDespawn();
	void ExecuteUbergraph_HuskPawn_Bombshell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
