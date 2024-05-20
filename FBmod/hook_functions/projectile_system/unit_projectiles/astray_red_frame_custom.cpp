#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int astray_red_frame_custom_sword_throw_spawn_script_pointers[500];

bool astray_red_frame_custom_sword_throw_spawn_script_pointers_initialized;

void astray_red_frame_custom_sword_throw_spawn_model_hash()
{
	int hash = 0x15DC355C;
}

__int64 astray_red_frame_custom_sword_throw_spawn_helper(int *a1, __int64 a2) // 8752C4
{
	int TOC = 0xd8fe60;

	if (astray_red_frame_custom_sword_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xcce700, astray_red_frame_custom_sword_throw_spawn_script_pointers); // astray red frame's sword throw
		astray_red_frame_custom_sword_throw_spawn_script_pointers_initialized = true;

		astray_red_frame_custom_sword_throw_spawn_script_pointers[58] = (int)astray_red_frame_custom_sword_throw_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F1C78, TOC)((unsigned int)a1, a2);
	result = (unsigned int)astray_red_frame_custom_sword_throw_spawn_script_pointers;
	*a1 = (unsigned int)astray_red_frame_custom_sword_throw_spawn_script_pointers;
	return result;
}

void astray_red_frame_custom_sword_throw_spawn() // 7D7218
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = astray_red_frame_custom_sword_throw_spawn_helper(temporaryPointer, 220601);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}

int astray_red_frame_custom_boomerang_throw_spawn_script_pointers[500];

bool astray_red_frame_custom_boomerang_throw_spawn_script_pointers_initialized;

void astray_red_frame_custom_boomerang_throw_spawn_model_hash()
{
	int hash = 0xC19D0A83;
}

__int64 astray_red_frame_custom_boomerang_throw_spawn_helper(int *a1, __int64 a2) // 95A214
{
	if (astray_red_frame_custom_boomerang_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xD19E68, astray_red_frame_custom_boomerang_throw_spawn_script_pointers); // sandrock's boomerang throw
		astray_red_frame_custom_boomerang_throw_spawn_script_pointers_initialized = true;

		astray_red_frame_custom_boomerang_throw_spawn_script_pointers[58] = (int)astray_red_frame_custom_boomerang_throw_spawn_model_hash;

	}

	__int64 result; // r3

	GameCall<int>(0x9F40F8, 0xDAFDFC)((unsigned int)a1, a2);
	result = (unsigned int)astray_red_frame_custom_boomerang_throw_spawn_script_pointers;
	*a1 = (unsigned int)astray_red_frame_custom_boomerang_throw_spawn_script_pointers;
	return result;
}

void astray_red_frame_custom_boomerang_throw_spawn() // 7CBF30
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = astray_red_frame_custom_boomerang_throw_spawn_helper(temporaryPointer, 0x509A1);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}

int astray_red_frame_custom_sword_wave_spawn_script_pointers[500];

bool astray_red_frame_custom_sword_wave_spawn_script_pointers_initialized;

__int64 astray_red_frame_custom_sword_wave_spawn_effect_script(unsigned int *a1, unsigned int a2)
{
	__int64 v3; // r2
	__int64 v4; // r2
	__int64 res1;

	unsigned int effectHash = 0xBA15B675;

	GameCall<int>(0x9F21B8, 0xd9fe1c)((__int64)a1, 1u);
	GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, effectHash, 1u, -1);
	GameCall<int>(0x9F2518, 0xd9fe1c)(a1, a2);
	//v3 = *(unsigned int *)(*(unsigned int *)(*a1 + 0x18CLL) + 4LL);
	res1 = GameCall<int>(0xaae850, 0xd7ff30)(a1);
	*(_DWORD *)(res1 + 0x3CLL) = 0x41200000;

	//v4 = *(unsigned int *)(*(unsigned int *)(*a1 + 0x24CLL) + 4LL);
	GameCall<int>(0x7f6178, 0xd8fe60)(a1);
	return GameCall<int>(0x9F25C8, 0xd9fe1c)(a1, 0);
}

__int64 astray_red_frame_custom_sword_wave_spawn_helper(int *a1, __int64 a2)
{
	int TOC = 0xd9fe1c;

	if (astray_red_frame_custom_sword_wave_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xCD83D0, astray_red_frame_custom_sword_wave_spawn_script_pointers);
		astray_red_frame_custom_sword_wave_spawn_script_pointers_initialized = true;

		astray_red_frame_custom_sword_wave_spawn_script_pointers[37] = (int)astray_red_frame_custom_sword_wave_spawn_effect_script;
		astray_red_frame_custom_sword_wave_spawn_script_pointers[124] = (int)0x00D42338;
	}

	__int64 result; // r3

	GameCall<int>(0x9F2538, TOC)((unsigned int)a1, a2);
	result = (unsigned int)astray_red_frame_custom_sword_wave_spawn_script_pointers;
	*a1 = (unsigned int)astray_red_frame_custom_sword_wave_spawn_script_pointers;
	return result;
}

void astray_red_frame_custom_sword_wave_spawn() 
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = astray_red_frame_custom_sword_wave_spawn_helper(temporaryPointer, 0x35DCC);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}