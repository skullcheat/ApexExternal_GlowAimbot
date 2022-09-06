#pragma once
#include "Struct.h"
#include "BaseOffset.h"
#include "Driver.h"
#include "GameView.h"

class CEntity	
{
public:
	DWORD64 Address = 0;	
	int Health = 0;			
	int	Team = -1;			
	Vec3 Pos{ 0,0,0 };		
	Vec3 HeadPos{ 0,0,0 };	
	Vec2 HeadScreenPos{ -1,-1 };
	std::string Name;		
	int DyingState = 0;		


	bool Update(DWORD64 ObjAddress);

	bool IsVisible(float WorldTime);
private:

	bool GetDyingState();

	bool GetName();

	bool GetPos();

	bool GetHeadPos();

	bool GetHealth();

	bool GetTeam();

	int GetLifeState();
};