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

// BlueprintGeneratedClass HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C
// 0x0008 (0x1F08 - 0x1F00)
class AHuskPawn_Bombshell_Poison_C : public AHuskPawn_Bombshell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1F00(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnBeginSleepEffects();
	void OnEndSleepEffects();
	void ActivateEffectsPostSpawnIn();
	void DeactivateEffectsPreDespawn();
	void ExecuteUbergraph_HuskPawn_Bombshell_Poison(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
