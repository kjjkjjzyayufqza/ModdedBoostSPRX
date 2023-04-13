#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int perfect_strike_boomerang_spawn_script_pointers[500];
int perfect_strike_boomerang_spawn_script_pointers_2[500];

bool perfect_strike_boomerang_spawn_script_pointers_initialized;
bool perfect_strike_boomerang_spawn_script_pointers_2_initialized;

void perfect_strike_boomerang_spawn_model_hash()
{
	int hash = 0x2C28811D;
}

__int64 sub_80C6E4_Perfect_Strike(unsigned int *a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
	GameCall<int>(0x7F18A0, 0xd8fe60)(a1, a2, a3, a4);
	GameCall<int>(0x763D0C, 0xd8fe60)((__int64)a1, 1u);
	return GameCall<int>(0x763C3C, 0xd8fe60)(a1, 0x77C3F62F, 2u, -1); // originally 2411CB3B
}

__int64 sub_80C77C_Perfect_Strike(int *a1, __int64 a2)
{
	if (perfect_strike_boomerang_spawn_script_pointers_2_initialized == false)
	{
		copyJumptable((int *)0xcabef8, perfect_strike_boomerang_spawn_script_pointers_2);
		perfect_strike_boomerang_spawn_script_pointers_2_initialized = true;

		perfect_strike_boomerang_spawn_script_pointers_2[37] = (int)sub_80C6E4_Perfect_Strike;
	}

	int v3; // r8
	__int64 result; // r3

	GameCall<int>(0x7F1824, 0xd8fe60)((unsigned int)a1, a2);
	v3 = (int)perfect_strike_boomerang_spawn_script_pointers_2;
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

void perfect_strike_boomerang_spawn() // originally lacus infinite justice's boomerang, 0x5596, 0x7D2604
{
	if (perfect_strike_boomerang_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xc9b5c0, perfect_strike_boomerang_spawn_script_pointers);
		perfect_strike_boomerang_spawn_script_pointers_initialized = true;

		perfect_strike_boomerang_spawn_script_pointers[58] = (int)perfect_strike_boomerang_spawn_model_hash;
		perfect_strike_boomerang_spawn_script_pointers[37] = (int)sub_80C6E4_Perfect_Strike; // 0x01218020
	}

	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	int *v855;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v855 = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2175);
	result = sub_80C77C_Perfect_Strike((int *)v855, 0xA00006);
	*v855 = (int)perfect_strike_boomerang_spawn_script_pointers;
	*v2 = (_DWORD)v855;

	// set return
	temp_registers[3] = result;
}