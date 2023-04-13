#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int heine_destiny_boomerang_spawn_script_pointers[500];

bool heine_destiny_boomerang_spawn_script_pointers_initialized;

void heine_destiny_boomerang_spawn_model_hash()
{
	int hash = 0x7A2F7689;
}

__int64 sub_874B7C_heine_destiny(unsigned int *a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
	GameCall<int>(0x7F18A0, 0xd8fe60)(a1, a2, a3, a4);
	GameCall<int>(0x9F21B8, 0xd9fe1c)((__int64)a1, 2u);
	GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, 0x62A04394, 2u, -1);
	return GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, 0x45A4ACD9, 3u, -1); // originally 0xC84C5633
}


__int64 sub_874C5C_heine_destiny(int *a1, __int64 a2)
{
	if (heine_destiny_boomerang_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xcabef8, heine_destiny_boomerang_spawn_script_pointers);
		heine_destiny_boomerang_spawn_script_pointers_initialized = true;

		heine_destiny_boomerang_spawn_script_pointers[37] = (int)sub_874B7C_heine_destiny;
		heine_destiny_boomerang_spawn_script_pointers[58] = (int)heine_destiny_boomerang_spawn_model_hash;
	}

	int v2; // r8
	__int64 result; // r3

	GameCall<int>(0x7F1824, 0xd8fe60)((unsigned int)a1, a2);
	v2 = (int)heine_destiny_boomerang_spawn_script_pointers;
	result = 0LL;
	*a1 = 0xD97C6C;
	a1[4400] = 0;
	*a1 = v2;
	a1[4402] = 0;
	a1[4401] = 0;
	a1[4404] = 0;
	a1[4403] = 0;
	return result;
}

void heine_destiny_boomerang_spawn() // originally lacus infinite justice's boomerang, 0x5596, 0x7D2604
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	int *v855;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v855 = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2175);
	result = sub_874C5C_heine_destiny(v855, 0x3396E);
	*v2 = (_DWORD)v855;

	// set return
	temp_registers[3] = result;
}


int heine_destiny_sword_throw_spawn_script_pointers[500];

bool heine_destiny_sword_throw_spawn_script_pointers_initialized;

void heine_destiny_sword_throw_spawn_model_hash()
{
	int hash = 0x4A3A0C71;
}

__int64 sub_94B8C8_heine_destiny(int *a1, __int64 a2)
{
	if (heine_destiny_sword_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xd12cb8, heine_destiny_sword_throw_spawn_script_pointers);
		heine_destiny_sword_throw_spawn_script_pointers_initialized = true;

		heine_destiny_sword_throw_spawn_script_pointers[58] = (int)heine_destiny_sword_throw_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F2228, 0xD9FE1C)((unsigned int)a1, a2);
	result = (unsigned int)heine_destiny_sword_throw_spawn_script_pointers;
	*a1 = (unsigned int)heine_destiny_sword_throw_spawn_script_pointers;
	a1[54] = 8;
	return result;
}

void heine_destiny_sword_throw_spawn() // originally strike rouge's sword throw, 0x33928, 0x7D2604
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	int *v855;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v855 = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17536LL, 128LL, v2175);
	result = sub_94B8C8_heine_destiny(v855, 0x3396E);
	*v2 = (_DWORD)v855;

	// set return
	temp_registers[3] = result;
}