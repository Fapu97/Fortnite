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

WCHAR 