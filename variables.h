#pragma once
#include <Windows.h>
#include "SDK.hpp"

class APlayerState
{
	public:
		char pad_0x0000[0x390]; //0x0000
		SDK::FString m_PawnName; //0x0390 
		char pad_0x0398[0x93C]; //0x0398
		float Health; //0x0CD4 
		float MaxHealth; //0x0CD8 
		float Armor; //0x0CDC 
		float MaxArmor; //0x0CE0 
		char pad_0x0CE4[0x75C]; //0x0CE4

};//Size=0x1440
class USceneComponent
{
public:
	char pad_0x0000[0x120]; //0x0000
	SDK::FVector Position; //0x0120 
	char pad_0x012C[0x314]; //0x012C

};//Size=0x0440
class USkeletalMeshComponent
{
public:
	char pad_0x0000[0x120]; //0x0000
	SDK::FVector RootPosition; //0x0120 
	char pad_0x012C[0x314]; //0x012C

};//Size=0x0440
class Player
{
public:
	char pad_0x0000[0x158]; //0x0000
	SDK::APawn* m_Pawn; //0x0158 
	char pad_0x0160[0x8]; //0x0160
	USceneComponent* m_rootComponent; //0x0168 
	char pad_0x0170[0x238]; //0x0170
	APlayerState* m_PlayerState; //0x03A8 
	USkeletalMeshComponent* m_Mesh; //0x03B0 
	char pad_0x03B8[0xC8]; //0x03B8

};//Size=0x0480
class ULevel
{
public:
	char pad_0x0000[0xA0]; //0x0000
	SDK::TArray<Player*>actors; //0x00A0 
	char pad_0x00A8[0x398]; //0x00A8

};//Size=0x0440
class ViewportClient
{
public:
	char pad_0x0000[0x80]; //0x0000
	void* m_World; //0x0080 
	char pad_0x0088[0x3B8]; //0x0088

};//Size=0x0440
class ULocalPlayer
{
public:
	char pad_0x0000[0x30]; //0x0000
	SDK::APlayerController* m_playerController; //0x0030 
	char pad_0x0038[0x20]; //0x0038
	ViewportClient* m_ViewportClient; //0x0058 
	char pad_0x0060[0x10]; //0x0060
	SDK::FVector Position; //0x0070 
	char pad_0x007C[0x1C]; //0x007C
	void* m_camera; //0x0098 
	char pad_0x00A0[0x3A0]; //0x00A0

};//Size=0x0440
class UGameInstance
{
public:
	char pad_0x0000[0x38]; //0x0000
	SDK::TArray<ULocalPlayer*>localPlayers; //0x0038 

};//Size=0x0040
class ViewLocationLastFrame
{
public:
	SDK::FVector ViewLocation; //0x0000 
	char pad_0x000C[0x34]; //0x000C

};//Size=0x0040
class cUWorld
{
public:
	char pad_0x0000[0x30]; //0x0000
	ULevel* m_persistentLevel;; //0x0030 
	char pad_0x0038[0x98]; //0x0038
	ViewLocationLastFrame* m_viewLocationRenderedLastFrame; //0x00D0 
	char pad_0x00D8[0x68]; //0x00D8
	UGameInstance* m_owningGameInstance; //0x0140 
	char pad_0x0148[0x2F8]; //0x0148

};//Size=0x0440
class UWorld
{
public:
	cUWorld* m_UWorld; //0x0000 
	char pad_0x0008[0x38]; //0x0008

};//Size=0x0040

HANDLE mainThread									= NULL;

bool isInitialized									= false;

DWORD_PTR BaseAddress								;
UWorld* m_UWorld									;
cUWorld* m_cUWorld									;
ULevel* m_persistentLevel							;
UGameInstance* m_owningGameInstance					;
SDK::TArray<ULocalPlayer*> LocalPlayers				;
ULocalPlayer* m_LocalPlayer							;
SDK::TArray<Player*>* m_Actors						;


WCHAR ptrBuf[1000];
WCHAR ptrData[] = L"m_UWorld: 0x%016X\n";
WCHAR ptrBuf2[1000];
WCHAR ptrData2[] = L"m_OwningGameInstance: 0x%016X\n";
WCHAR ptrBuf3[1000];
WCHAR ptrData3[] = L"m_LocalPlayers: 0x%016X\n";
WCHAR ptrBuf4[1000];
WCHAR ptrData4[] = L"Actors Count: %d\n";
//WCHAR ptrData4[] = L"m_LocalPlayer: 0x%016X\n";
WCHAR ptrData4_[] = L"m_LocalPlayer: null\n";
