#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"


int leos_II_vs_boomerang_throw_spawn_script_pointers[500];

bool leos_II_vs_boomerang_throw_spawn_script_pointers_initialized;

void leos_II_vs_boomerang_throw_spawn_model_hash()
{
	int hash = 0x4A02F892;
}

__int64 leos_II_vs_boomerang_throw_spawn_helper(int *a1, __int64 a2) // 95A214
{
	if (leos_II_vs_boomerang_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xD19E68, leos_II_vs_boomerang_throw_spawn_script_pointers); // sandrock's boomerang throw
		leos_II_vs_boomerang_throw_spawn_script_pointers_initialized = true;

		leos_II_vs_boomerang_throw_spawn_script_pointers[58] = (int)leos_II_vs_boomerang_throw_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F40F8, 0xDAFDFC)((unsigned int)a1, a2);
	result = (unsigned int)leos_II_vs_boomerang_throw_spawn_script_pointers;
	*a1 = (unsigned int)leos_II_vs_boomerang_throw_spawn_script_pointers;
	return result;
}

void leos_II_vs_boomerang_throw_spawn() // 7CBF30
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = leos_II_vs_boomerang_throw_spawn_helper(temporaryPointer, 0x509A1);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}

int leos_II_vs_wave_spawn_script_pointers[500];

bool leos_II_vs_wave_spawn_script_pointers_initialized;

int leos_II_vs_wave_spawn_effect_hash()
{
	return 0x7F3FF526; // 090.ALEO
}

void leos_II_vs_wave_spawn()
{
	if (leos_II_vs_wave_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xc9dc80, leos_II_vs_wave_spawn_script_pointers); // eclipse's wave
		leos_II_vs_wave_spawn_script_pointers_initialized = true;

		leos_II_vs_wave_spawn_script_pointers[143] = (int)leos_II_vs_wave_spawn_effect_hash;
	}

	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = GameCall<int>(0x9F0168, 0xd8fe60)(temporaryPointer, 0x531E2);
	*temporaryPointer = (int)leos_II_vs_wave_spawn_script_pointers;
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}
