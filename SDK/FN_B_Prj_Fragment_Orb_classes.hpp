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

// BlueprintGeneratedClass B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C
// 0x0028 (0x0828 - 0x0800)
class AB_Prj_Fragment_Orb_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        Orb_Mesh;                                                 // 0x0808(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Target;                                                   // 0x0810(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             PS_OrbHit;                                                // 0x0820(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStop(struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void InitTarget(const struct FVector& In);
	void ExecuteUbergraph_B_Prj_Fragment_Orb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
