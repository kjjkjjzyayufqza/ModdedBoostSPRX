#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"


int kimaris_trooper_mine_field_spawn_script_pointers[500];

bool kimaris_trooper_mine_field_spawn_script_pointers_initialized;

void kimaris_trooper_mine_field_spawn_model_hash()
{
	int hash = 0x25636939;
}

__int64 kimaris_trooper_mine_field_spawn_helper(int *a1, __int64 a2) // 8BE728
{
	if (kimaris_trooper_mine_field_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xCE23D8, kimaris_trooper_mine_field_spawn_script_pointers);
		kimaris_trooper_mine_field_spawn_script_pointers_initialized = true;

		kimaris_trooper_mine_field_spawn_script_pointers[58] = (int)kimaris_trooper_mine_field_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F2228, 0xD9FE1C)((unsigned int)a1, a2);
	result = (unsigned int)kimaris_trooper_mine_field_spawn_script_pointers;
	*a1 = (unsigned int)kimaris_trooper_mine_field_spawn_script_pointers;
	a1[54] = 7;
	return result;
}

void kimaris_trooper_mine_field_spawn() // originally strike rouge's sword throw, 0x33928, 0x7D2604
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	int *v855;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v855 = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17536LL, 128LL, v2175);
	result = kimaris_trooper_mine_field_spawn_helper(v855, 0x69140);
	*v2 = (_DWORD)v855;

	// set return
	temp_registers[3] = result;
}