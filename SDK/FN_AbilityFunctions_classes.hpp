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

// BlueprintGeneratedClass AbilityFunctions.AbilityFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UAbilityFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AbilityFunctions.AbilityFunctions_C");
		return ptr;
	}


	void STATIC_ConvertRangeToTiles(float InRange, class UObject* __WorldContext, float* OutTile);
	void STATIC_SetArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class AActor*>* ArrayToSet);
	void STATIC_DoNOTUse_BuildArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class AActor*>* HitActors);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
