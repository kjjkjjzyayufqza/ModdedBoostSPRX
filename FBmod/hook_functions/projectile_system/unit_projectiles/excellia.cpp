#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int excellia_boomerang_spawn_script_pointers[500];

bool excellia_boomerang_spawn_script_pointers_initialized;

void excellia_boomerang_spawn_model_hash()
{
	int hash = 0xF382F15D;
}

//0120e92c
__int64 sub_80C6E4_Excellia(unsigned int *a1)
{
	GameCall<int>(0x9F2518, 0xd9fe1c)(a1);
	GameCall<int>(0x9F21B8, 0xd9fe1c)((__int64)a1, 2u);
	GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, 0x91315D18, 2u, -1);
	return GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, 0xAA65448E, 3u, -1); // originally 2411CB3B
}

__int64 sub_8F9068(_DWORD *a1)
{
	if (excellia_boomerang_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xcf3170, excellia_boomerang_spawn_script_pointers);
		excellia_boomerang_spawn_script_pointers_initialized = true;

		/*excellia_boomerang_spawn_script_pointers[37] = (int)sub_80C6E4_Excellia; */// 8f8f7c
		excellia_boomerang_spawn_script_pointers[58] = (int)excellia_boomerang_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F2538, 0xd9fe1c)(a1, 15510LL);
	result = (unsigned int)excellia_boomerang_spawn_script_pointers;
	*a1 = (unsigned int)excellia_boomerang_spawn_script_pointers;

	return result;
}

void excellia_boomerang_spawn() // originally lacus infinite justice's boomerang, 0x5596, 0x7D2604
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	unsigned int v34;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v34 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2175);
	result = sub_8F9068((_DWORD *)v34); // 0xd9fe1c
	*v2 = v34;

	// set return
	temp_registers[3] = result;
}