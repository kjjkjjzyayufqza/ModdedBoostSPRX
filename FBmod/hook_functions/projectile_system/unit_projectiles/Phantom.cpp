#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int phantom_sword_throw_spawn_script_pointers[500];

bool phantom_sword_throw_spawn_script_pointers_initialized;

void phantom_sword_throw_spawn_model_hash()
{
	int hash = 0x64067F34;
}

__int64 phantom_sword_throw_spawn_helper(int *a1, __int64 a2)
{
	int TOC = 0xdafdfc;

	if (phantom_sword_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xd1bc00, phantom_sword_throw_spawn_script_pointers);
		phantom_sword_throw_spawn_script_pointers_initialized = true;

		phantom_sword_throw_spawn_script_pointers[58] = (int)phantom_sword_throw_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F4188, TOC)((unsigned int)a1, a2);
	result = (unsigned int)phantom_sword_throw_spawn_script_pointers;
	*a1 = (unsigned int)phantom_sword_throw_spawn_script_pointers;
	return result;
}

void phantom_sword_throw_spawn() 
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = phantom_sword_throw_spawn_helper(temporaryPointer, 220601);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}