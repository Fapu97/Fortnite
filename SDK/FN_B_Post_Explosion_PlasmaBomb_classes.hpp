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

// BlueprintGeneratedClass B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C
// 0x0018 (0x08B8 - 0x08A0)
class AB_Post_Explosion_PlasmaBomb_C : public AB_Post_Explosion_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	float                                              Timeline_0_BlendWeight_64EA2F03409D67812CF4F287A76739D4;  // 0x08A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_64EA2F03409D67812CF4F287A76739D4;   // 0x08AC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          Timeline_1;                                               // 0x08B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void SpawnPostFX(float PostFX_BoxScaleDyn, const struct FVector& PostFX_CamShakeLoc, bool PostFX_UseCamShake, float PostFX_DeactivateDelay, bool PostFX_UseForceFeedback);
	void ExecuteUbergraph_B_Post_Explosion_PlasmaBomb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
