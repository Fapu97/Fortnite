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

// BlueprintGeneratedClass HuskPawn_Husky.HuskPawn_Husky_C
// 0x0008 (0x1EE0 - 0x1ED8)
class AHuskPawn_Husky_C : public AHuskPawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1ED8(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn_Husky.HuskPawn_Husky_C");
		return ptr;
	}


	void UserConstructionScript();
	void IgnitePropaneTank(class AFortPawn* Pawn, float RemainingFuseTime, bool JustDrop);
	void FSMRemovePropaneTank();
	void FSMFailedToSpawnTank();
	void FSMBeginPropaneTankMelee();
	void BeeCloudDespawned(class AFortProjectileBase* Cloud);
	void ManageBurpEffect(bool Enabled);
	void PlayAdditiveHitReacts(struct FVector* HitDirection);
	void SpawnDeathFX();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void KillDeathFX_2();
	void ExecuteUbergraph_HuskPawn_Husky(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
