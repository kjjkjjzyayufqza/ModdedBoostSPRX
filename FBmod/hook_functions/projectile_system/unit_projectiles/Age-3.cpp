#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int age3_net_throw_spawn_script_pointers[500];

bool age3_net_throw_spawn_script_pointers_initialized;

void age3_net_throw_spawn_model_hash()
{
	int hash = 0xD55B6CA0;
}

__int64 age3_net_throw_spawn_helper(__int64 a1, __int64 a2) // 8FF7E0
{
	int TOC = 0xD9FE1C;

	if (age3_net_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xCF47D8, age3_net_throw_spawn_script_pointers); // spiegel's net throw
		age3_net_throw_spawn_script_pointers_initialized = true;

		age3_net_throw_spawn_script_pointers[58] = (int)age3_net_throw_spawn_model_hash;
	}

	__int64 result; // r3
	unsigned int v2; // r29

	v2 = a1 + 17536;
	GameCall<int>(0x9F2228, TOC)((unsigned int)a1, a2);
	*(_DWORD *)a1 = (unsigned int)age3_net_throw_spawn_script_pointers;
	GameCall<int>(0x9F39C8, TOC)(v2, 8LL, 6LL);
	result = 0;
	*(_BYTE *)(a1 + 17920) = 0;
	*(_DWORD *)(a1 + 17928) = 12;
	*(_DWORD *)(a1 + 17924) = 0;

	return result;
}

void age3_net_throw_spawn() // 7CBF30
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = age3_net_throw_spawn_helper((__int64)temporaryPointer, 18420LL);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}
