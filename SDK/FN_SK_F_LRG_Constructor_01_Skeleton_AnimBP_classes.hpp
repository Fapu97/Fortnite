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

// AnimBlueprintGeneratedClass SK_F_LRG_Constructor_01_Skeleton_AnimBP.SK_F_LRG_Constructor_01_Skeleton_AnimBP_C
// 0x2334 (0x2744 - 0x0410)
class USK_F_LRG_Constructor_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BBB13A1043E829C1CC58D9A49D49F566;      // 0x0418(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_A0A7862C41D58A2D7BA59DB29DC489F6;// 0x0460(0x0098)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A14060684EA36E6A38C64C9CC3B1D9AB;// 0x04F8(0x0268)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DAA1FFE44162B99482DFA5B4159C7405;// 0x0760(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_ECD817444DCDA9467A6F8BBBF6A2EFA0;// 0x07A8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CB3D6B164B59E44D18B490B3841357B8;// 0x07F0(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F74199DA4EA69D7DDF67BCADDD574900;// 0x0A58(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DA9E260A4D1351ED0E17E58B79953B20;// 0x0CC0(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EAC240C941C5FF15BA213E8AAE7D17F3;// 0x0F28(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CF18CD1F453F70B994906BAD08D8FE6B;// 0x1190(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CD1FE29D46CD2DE2B656CC945C67F8FE;// 0x13F8(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_92E1B7D74567C03375E012B851D8CD81;// 0x1660(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DBA4FC8449C310563A81A095EE9AC303;// 0x18C8(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4858A3D249AA3874A2388D912273B290;// 0x1B30(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_42944FB54D814E3C274720A692DF63CA;// 0x1D98(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_31F5F26747E828356CE78D849F177EEB;// 0x2000(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6057D72E42852A339E4F66840D894B6D;// 0x2268(0x0268)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B6385FE84A87BF3442422786D1AB2689;// 0x24D0(0x0268)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x2738(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HammerDynamicsOK;                                         // 0x2740(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_F_LRG_Constructor_01_Skeleton_AnimBP.SK_F_LRG_Constructor_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_A0A7862C41D58A2D7BA59DB29DC489F6();
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_A14060684EA36E6A38C64C9CC3B1D9AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_B6385FE84A87BF3442422786D1AB2689();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
