#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int gato_gelgoog_naginata_throw_spawn_script_pointers[500];

bool gato_gelgoog_naginata_throw_spawn_script_pointers_initialized;

__int64 gato_gelgoog_naginata_effect_assigner_script(unsigned int *a1) // 83CEA0
{
	GameCall<int>(0x763D0C, 0xd8fe60)((__int64)a1, 4u);
	GameCall<int>(0x763C3C, 0xd8fe60)(a1, 0x2C9E8DC3, 2u, -1);
	GameCall<int>(0x763C3C, 0xd8fe60)(a1, 0x2C9E8DC3, 4u, -1);
	GameCall<int>(0x763C3C, 0xd8fe60)(a1, 0xEA663EB4, 3u, -1);
	return GameCall<int>(0x763C3C, 0xd8fe60)(a1, 0xEA663EB4, 5u, -1);
}

__int64 gato_gelgoog_naginata_effect_script(__int64 a1, __int64 a2) // char's gelgoog effect pointer, 83CF54
{
	GameCall<int>(0x7F28D4, 0xd8fe60)(a1, a2);
	return gato_gelgoog_naginata_effect_assigner_script((unsigned int *)a1);
}

void gato_gelgoog_naginata_throw_spawn()
{
	if (gato_gelgoog_naginata_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xc95ad0, gato_gelgoog_naginata_throw_spawn_script_pointers);
		gato_gelgoog_naginata_throw_spawn_script_pointers_initialized = true;

		gato_gelgoog_naginata_throw_spawn_script_pointers[37] = (int)gato_gelgoog_naginata_effect_script;
	}

	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = GameCall<int>(0x83D128, 0xd8fe60)(temporaryPointer, 0x35D54);
	*temporaryPointer = (int)gato_gelgoog_naginata_throw_spawn_script_pointers;
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}
