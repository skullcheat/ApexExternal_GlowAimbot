#pragma once
#include <windows.h>

namespace Offset
{
	const DWORD64 ViewRender = 0x7599758;		
	const DWORD64 ViewMatrix = 0x11A210;		
	const DWORD64 LocalPlayer = 0x1E25418;		
	const DWORD64 cl_entitylist = 0x1A75038;	
	const DWORD	  LocalYaw = 0x24E4;		
	const DWORD   LocalPitch = 0x24E0;		
	struct EntityData_
	{
		const DWORD m_Pos = 0x14C;				
		const DWORD Bone = 0xED0;				
		const DWORD m_iTeamNum = 0x448;				
		const DWORD m_iSignifierName = 0x580;			
		const DWORD m_lifeState = 0x798;			
		const DWORD m_bleedoutState = 0x2688;			
		const DWORD m_iHealth = 0x438;				
		const DWORD m_vecPunchWeapon_Angle = 0x23F8;		
		const DWORD timeBase = 0x2050;				
		const DWORD lastVisibleTime = 0x1A44;			
	}EntityData;
}
