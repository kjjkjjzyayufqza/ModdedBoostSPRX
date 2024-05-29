#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int infinite_justice_lacus_shoot_assist_spawn_script_pointers[500];

bool infinite_justice_lacus_shoot_assist_spawn_script_pointers_initialized;

void infinite_justice_lacus_shoot_assist_spawn_model_hash()
{
	int hash = 0x3D94992;
}

__int64 infinite_justice_lacus_shoot_assist_spawn_helper(int *a1, __int64 a2)
{
	int TOC = 0xd9fe1c;

	if (infinite_justice_lacus_shoot_assist_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xd0d200, infinite_justice_lacus_shoot_assist_spawn_script_pointers);
		infinite_justice_lacus_shoot_assist_spawn_script_pointers_initialized = true;

		infinite_justice_lacus_shoot_assist_spawn_script_pointers[58] = (int)infinite_justice_lacus_shoot_assist_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F2998, TOC)((unsigned int)a1, a2);
	result = (unsigned int)infinite_justice_lacus_shoot_assist_spawn_script_pointers;
	*a1 = (unsigned int)infinite_justice_lacus_shoot_assist_spawn_script_pointers;
	return result;
}

void infinite_justice_lacus_shoot_assist_spawn()
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = infinite_justice_lacus_shoot_assist_spawn_helper(temporaryPointer, 21950);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}