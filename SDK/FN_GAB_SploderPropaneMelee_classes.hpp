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

// BlueprintGeneratedClass GAB_SploderPropaneMelee.GAB_SploderPropaneMelee_C
// 0x0010 (0x0A88 - 0x0A78)
class UGAB_SploderPropaneMelee_C : public UGAB_HuskyHuskMelee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A78(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class AB_BGA_SploderPropaneTank_C*                 SploderPropaneTank;                                       // 0x0A80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SploderPropaneMelee.GAB_SploderPropaneMelee_C");
		return ptr;
	}


	void Completed_B859A3FB4799A1D447031885B89A89CE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B859A3FB4799A1D447031885B89A89CE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B859A3FB4799A1D447031885B89A89CE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_SploderPropaneMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
