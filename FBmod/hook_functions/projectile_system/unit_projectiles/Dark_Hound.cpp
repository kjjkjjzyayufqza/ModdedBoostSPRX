#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int dark_hound_boomerang_spawn_script_pointers[500];
int dark_hound_boomerang_spawn_script_pointers_2[500];

bool dark_hound_boomerang_spawn_script_pointers_initialized;
bool dark_hound_boomerang_spawn_script_pointers_2_initialized;

void dark_hound_boomerang_spawn_model_hash()
{
	int hash = 0x9A761A01;
}

__int64 sub_80C6E4_dark_hound(unsigned int *a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
	GameCall<int>(0x7F18A0, 0xd8fe60)(a1, a2, a3, a4);
	GameCall<int>(0x9F21B8, 0xd9fe1c)((__int64)a1, 2u);
	GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, 0x91315D18, 2u, -1);
	return GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, 0xAA65448E, 3u, -1); // originally 2411CB3B

	//GameCall<int>(0x763D0C, 0xd8fe60)((__int64)a1, 1u);
	//return GameCall<int>(0x763C3C, 0xd8fe60)(a1, 0x77C3F62F, 2u, -1); // originally 2411CB3B
}

__int64 sub_80C77C_dark_hound(int *a1, __int64 a2)
{
	if (dark_hound_boomerang_spawn_script_pointers_2_initialized == false)
	{
		copyJumptable((int *)0xcabef8, dark_hound_boomerang_spawn_script_pointers_2);
		dark_hound_boomerang_spawn_script_pointers_2_initialized = true;

		dark_hound_boomerang_spawn_script_pointers_2[37] = (int)sub_80C6E4_dark_hound;
	}

	int v3; // r8
	__int64 result; // r3

	GameCall<int>(0x7F1824, 0xd8fe60)((unsigned int)a1, a2);
	v3 = (int)dark_hound_boomerang_spawn_script_pointers_2;
	result = 0LL;
	*a1 = 0xD8EFCC;
	a1[4400] = 0;
	*a1 = v3;
	a1[4402] = 0;
	a1[4401] = 0;
	a1[4404] = 0;
	a1[4403] = 0;
	return result;
}

void dark_hound_boomerang_spawn() // originally lacus infinite justice's boomerang, 0x5596, 0x7D2604
{
	if (dark_hound_boomerang_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xc9b5c0, dark_hound_boomerang_spawn_script_pointers);
		dark_hound_boomerang_spawn_script_pointers_initialized = true;

		dark_hound_boomerang_spawn_script_pointers[58] = (int)dark_hound_boomerang_spawn_model_hash;
		dark_hound_boomerang_spawn_script_pointers[37] = (int)sub_80C6E4_dark_hound; 
	}

	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	int *v855;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v855 = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2175);
	result = sub_80C77C_dark_hound((int *)v855, 0x50C3A);
	*v855 = (int)dark_hound_boomerang_spawn_script_pointers;
	*v2 = (_DWORD)v855;

	// set return
	temp_registers[3] = result;
}


int dark_hound_sword_throw_spawn_script_pointers[500];

bool dark_hound_sword_throw_spawn_script_pointers_initialized;

void dark_hound_sword_throw_spawn_model_hash()
{
	int hash = 0xD834D057;
}

__int64 sub_9F1138_dark_hound(int *a1, __int64 a2)
{
	if (dark_hound_sword_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xcce700, dark_hound_sword_throw_spawn_script_pointers);
		dark_hound_sword_throw_spawn_script_pointers_initialized = true;

		dark_hound_sword_throw_spawn_script_pointers[58] = (int)dark_hound_sword_throw_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F1C78, 0xd8fe60)((unsigned int)a1, a2);
	result = (unsigned int)dark_hound_sword_throw_spawn_script_pointers;
	*a1 = (unsigned int)dark_hound_sword_throw_spawn_script_pointers;
	a1[54] = 8;
	return result;
}

void dark_hound_sword_throw_spawn() // originally strike rouge's sword throw, 0x33928, 0x7D2604
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	int *v855;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v855 = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17536LL, 128LL, v2175);
	result = sub_9F1138_dark_hound(v855, 0x50C30);
	*v2 = (_DWORD)v855;

	// set return
	temp_registers[3] = result;
}