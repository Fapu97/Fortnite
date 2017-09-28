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

// BlueprintGeneratedClass HuskInterface.HuskInterface_C
// 0x0000 (0x0028 - 0x0028)
class UHuskInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuskInterface.HuskInterface_C");
		return ptr;
	}


	void ManageBurpEffect(bool Enabled);
	void BeeCloudDespawned(class AFortProjectileBase* Cloud);
	void FSMBeginPropaneTankMelee();
	void FSMFailedToSpawnTank();
	void FSMRemovePropaneTank();
	void IgnitePropaneTank(class AFortPawn* Pawn, float RemainingFuseTime, bool JustDrop);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
