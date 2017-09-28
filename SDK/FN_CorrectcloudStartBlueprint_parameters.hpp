#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.PlayRandomLightingFlashAudio
struct ACorrectcloudStartBlueprint_C_PlayRandomLightingFlashAudio_Params
{
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.RotateDirectionalLightToPlayer
struct ACorrectcloudStartBlueprint_C_RotateDirectionalLightToPlayer_Params
{
	struct FRotator                                    RotateToPlayer;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.DestroyParticleSystems
struct ACorrectcloudStartBlueprint_C_DestroyParticleSystems_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.SpawnParticleSystemsActive
struct ACorrectcloudStartBlueprint_C_SpawnParticleSystemsActive_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.Set Lightning parameters on clouds
struct ACorrectcloudStartBlueprint_C_Set_Lightning_parameters_on_clouds_Params
{
	struct FVector                                     Lightning_starting_point;                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.UserConstructionScript
struct ACorrectcloudStartBlueprint_C_UserConstructionScript_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.Timeline_CloudFadeIn__FinishedFunc
struct ACorrectcloudStartBlueprint_C_Timeline_CloudFadeIn__FinishedFunc_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.Timeline_CloudFadeIn__UpdateFunc
struct ACorrectcloudStartBlueprint_C_Timeline_CloudFadeIn__UpdateFunc_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.Timeline_CloudFadeOut__FinishedFunc
struct ACorrectcloudStartBlueprint_C_Timeline_CloudFadeOut__FinishedFunc_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.Timeline_CloudFadeOut__UpdateFunc
struct ACorrectcloudStartBlueprint_C_Timeline_CloudFadeOut__UpdateFunc_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.Capture Light Flash Epic Quality__FinishedFunc
struct ACorrectcloudStartBlueprint_C_Capture_Light_Flash_Epic_Quality__FinishedFunc_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.Capture Light Flash Epic Quality__UpdateFunc
struct ACorrectcloudStartBlueprint_C_Capture_Light_Flash_Epic_Quality__UpdateFunc_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.Light Flash Epic Quality__FinishedFunc
struct ACorrectcloudStartBlueprint_C_Light_Flash_Epic_Quality__FinishedFunc_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.Light Flash Epic Quality__UpdateFunc
struct ACorrectcloudStartBlueprint_C_Light_Flash_Epic_Quality__UpdateFunc_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.DEBUG-ShowThreatVolume
struct ACorrectcloudStartBlueprint_C_DEBUG_ShowThreatVolume_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.DebugSpawnLoc
struct ACorrectcloudStartBlueprint_C_DebugSpawnLoc_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.OnBeginDeath
struct ACorrectcloudStartBlueprint_C_OnBeginDeath_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.OnCloudStart
struct ACorrectcloudStartBlueprint_C_OnCloudStart_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.OnLightningStrike
struct ACorrectcloudStartBlueprint_C_OnLightningStrike_Params
{
	struct FVector*                                    StartLocation;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector*                                    EndLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class ABuildingRift**                              Rift;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bLightningStruckRift;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.OnCloudDeactivated
struct ACorrectcloudStartBlueprint_C_OnCloudDeactivated_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.OnCloudActivated
struct ACorrectcloudStartBlueprint_C_OnCloudActivated_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.ReceiveDestroyed
struct ACorrectcloudStartBlueprint_C_ReceiveDestroyed_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.CloudFadeIn
struct ACorrectcloudStartBlueprint_C_CloudFadeIn_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.CloudFadeOut
struct ACorrectcloudStartBlueprint_C_CloudFadeOut_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.OnCloudHiddenChange
struct ACorrectcloudStartBlueprint_C_OnCloudHiddenChange_Params
{
	bool*                                              bCloudsAreHidden;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.StopCloudFadeIn
struct ACorrectcloudStartBlueprint_C_StopCloudFadeIn_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.StopCloudFadeOut
struct ACorrectcloudStartBlueprint_C_StopCloudFadeOut_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.Spawn Particles Manual
struct ACorrectcloudStartBlueprint_C_Spawn_Particles_Manual_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.On Cloud Start Manual
struct ACorrectcloudStartBlueprint_C_On_Cloud_Start_Manual_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.AutoFadeOutReached
struct ACorrectcloudStartBlueprint_C_AutoFadeOutReached_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.SpoutSmallRepeat
struct ACorrectcloudStartBlueprint_C_SpoutSmallRepeat_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.VortexReturnedToCloudFXPool
struct ACorrectcloudStartBlueprint_C_VortexReturnedToCloudFXPool_Params
{
	class AB_CloudVortex_01_C*                         Vortex;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.BigSpoutRepeat
struct ACorrectcloudStartBlueprint_C_BigSpoutRepeat_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.RestartLightningTimer
struct ACorrectcloudStartBlueprint_C_RestartLightningTimer_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.RandomLightningFlashEvent
struct ACorrectcloudStartBlueprint_C_RandomLightningFlashEvent_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.BigLightning
struct ACorrectcloudStartBlueprint_C_BigLightning_Params
{
	struct FVector                                     Flash_Location;                                           // (CPF_Parm, CPF_IsPlainOldData)
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.ManualLightningFlash
struct ACorrectcloudStartBlueprint_C_ManualLightningFlash_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.EpicLightningSafetyKill
struct ACorrectcloudStartBlueprint_C_EpicLightningSafetyKill_Params
{
};

// Function CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C.ExecuteUbergraph_CorrectcloudStartBlueprint
struct ACorrectcloudStartBlueprint_C_ExecuteUbergraph_CorrectcloudStartBlueprint_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
