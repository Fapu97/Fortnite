#pragma once
#include <Windows.h>
#include "SDK.hpp"

HANDLE mainThread									= NULL;

bool isInitialized									= false;

DWORD_PTR BaseAddress								;
SDK::UWorld* m_UWorld								;
SDK::UGameInstance* m_OwningGameInstance			;
SDK::TArray<SDK::ULocalPlayer*> m_LocalPlayers		;
SDK::ULocalPlayer* m_LocalPlayer					;


WCHAR ptrBuf[1000];
WCHAR ptrData[] = L"m_UWorld: 0x%016X\n";
WCHAR ptrBuf2[1000];
WCHAR ptrData2[] = L"m_OwningGameInstance: 0x%016X\n";
WCHAR ptrBuf3[1000];
WCHAR ptrData3[] = L"m_LocalPlayers: 0x%016X\n";
WCHAR ptrBuf4[1000];
WCHAR ptrData4[] = L"m_LocalPlayer Size: %f\n";
//WCHAR ptrData4[] = L"m_LocalPlayer: 0x%016X\n";
WCHAR ptrData4_[] = L"m_LocalPlayer: null\n";