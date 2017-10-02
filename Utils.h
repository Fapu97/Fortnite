#pragma once
#include "SDK.hpp"
#include "variables.h"
#include "FindPattern.h"
namespace Utils
{
	SDK::AActor* GetClosestPlayer()
	{
		float distance = 999999999;
		SDK::AActor* closestPlayer;
		SDK::FVector localPos;

		if (Variables::m_LocalPlayer->PlayerController != nullptr)
		{
			localPos = Variables::m_LocalPlayer->PlayerController->RootComponent->Location;
		}
		else
		{
			return nullptr;
		}

		for (int i = 0; i < Variables::m_persistentLevel->AActors.Num(); i++)
		{
			SDK::AActor* m_Player = 0;
			m_Player = Variables::m_persistentLevel->AActors[i];
			if (m_Player != nullptr )
			{
				float curDist = GetDistance(localPos, m_Player->RootComponent->Location);
				if (curDist < distance)
				{
					distance = curDist;
					closestPlayer = m_Player;
				}
			}
		}
	}

	float GetDistance(SDK::FVector point1, SDK::FVector point2)
	{
		SDK::FVector firstPosition = point1;
		SDK::FVector heading;
		float distanceSquared;
		float distance;

		heading.X = point1.X - point2.X;
		heading.Y = point1.Y - point2.Y;
		heading.Z = point1.Z - point2.Z;

		distanceSquared = point1.X * point1.X + point1.Y * point1.Y + point1.Z * point1.Z;
		distance = sqrt(distanceSquared);

		return distance;
	}

	void LookAt(SDK::APlayerController* m_Player, SDK::FVector position)
	{

	}

	namespace Engine
	{
		DWORD_PTR w2sAddress;
		bool w2s(SDK::APlayerController* m_Player, SDK::FVector WorldPosition, SDK::FVector2D* ScreenPosition)
		{
			return reinterpret_cast<char(__fastcall*)(SDK::APlayerController*, SDK::FVector, SDK::FVector2D *, char)>(w2sAddress)(m_Player, WorldPosition, ScreenPosition, 0);
		}
	}
}