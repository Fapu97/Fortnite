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

// AnimBlueprintGeneratedClass F_LRG_ASN_Harper_Head_01_Skeleton_AnimBP.F_LRG_ASN_Harper_Head_01_Skeleton_AnimBP_C
// 0x04A8 (0x08B8 - 0x0410)
class UF_LRG_ASN_Harper_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7234AF3941F2CA5B72BE7CAC37E31BDC;      // 0x0418(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_4B17F5914358A5D5A021A6B8DE43D205;// 0x0460(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EF06CFD846789D9BA4D8389D0690F3F2;      // 0x04F8(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_EB2CE6834A2A4B1D75C27A802889DD5D;// 0x0558(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9633298442DC0C5147B761BEA202C6DE;// 0x0608(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5C40AE4241C331EDAD721B8C2FE334B6;// 0x06B8(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_4C92B8BD44F270BD750F65A5A32B0B1F;// 0x0788(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_533476C345F35BD5626566ACC16B8678;// 0x0820(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9B55963444A396247DDD35B97F277B8E;// 0x0868(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_LRG_ASN_Harper_Head_01_Skeleton_AnimBP.F_LRG_ASN_Harper_Head_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_LRG_ASN_Harper_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_4C92B8BD44F270BD750F65A5A32B0B1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_LRG_ASN_Harper_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_5C40AE4241C331EDAD721B8C2FE334B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_LRG_ASN_Harper_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_4B17F5914358A5D5A021A6B8DE43D205();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_LRG_ASN_Harper_Head_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
