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

// BlueprintGeneratedClass Parent_StopLight.Parent_StopLight_C
// 0x0177 (0x120C - 0x1095)
class AParent_StopLight_C : public AParent_BuildingPropActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1098(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      DebugWind_1 : 1;                                          // 0x10A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  OriginalMaterials_1;                                      // 0x10A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  IntenseWindMaterialsForPreview_1;                         // 0x10B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh_1;                              // 0x10C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Debug_TempMaterial_1;                                     // 0x10D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Debug_Wind_Intensity_1;                                   // 0x10D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugWindYaw_1;                                           // 0x10DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDayPhaseFloats                             Light_Intensity_Over_Time_of_Day__1;                      // 0x10E0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FDayPhaseFloats                             Emissive_Intensity_Over_Time_of_Day_1;                    // 0x10F0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	int                                                CodeControlled_NumberOfMaterials_1;                       // 0x1100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FLinearColor>                        CodeControlled_EmissiveColor_1;                           // 0x1108(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class ULightComponent*>                     TimeOfDayControlledLightsArray_1;                         // 0x1118(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<float>                                      CodeControlled_LightConeOpacity_1;                        // 0x1128(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      Animate_Emissive_and_Lights_Over_Time_1 : 1;              // 0x1138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Day_Phase_Transition_Length_1;                            // 0x113C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      NewVar_1 : 1;                                             // 0x1140(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Last_successful_index;                                    // 0x1144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FVector>                             Light_Vector;                                             // 0x1148(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FStopLight_Struct>                   LightArrays;                                              // 0x1158(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class ULightComponent*>                     TempLightArray;                                           // 0x1168(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<int>                                        IncrementingNumber;                                       // 0x1178(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                Mod_Number;                                               // 0x1188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NewVar_2;                                                 // 0x118C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              light_intensity;                                          // 0x1190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                IntersectionID;                                           // 0x1194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomIntersectionTimeOffset;                             // 0x1198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FStopLight_Struct                           Temp_Variable;                                            // 0x11A0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                NewVar_3;                                                 // 0x11D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Light_has_run_once : 1;                                   // 0x11D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FStopLight_Struct                           NewVar_4;                                                 // 0x11D8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              Time_Per_Light_Phase;                                     // 0x1208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Parent_StopLight.Parent_StopLight_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Begin_Working();
	void Switchlights();
	void ExecuteUbergraph_Parent_StopLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
