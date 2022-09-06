#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <atlconv.h>

namespace Function {
	
	DWORD GetProcessID(const char* ProcessName);
}