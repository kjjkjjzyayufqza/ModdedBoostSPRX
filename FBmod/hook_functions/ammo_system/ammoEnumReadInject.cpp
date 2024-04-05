#include "ammoEnumReadInject.h"
#include "stdafx.h"
#include "../registers.h"

void ammoRead5thEnum()
{
	int r22 = temp_registers[22];
	int r29 = temp_registers[29];
	int r30 = temp_registers[30];
	int r31 = temp_registers[31];

	// instead of putting at the 0x20 and onwards, the 5th ammo enum I place at the 0xc of the data start since it is unused, and the code fixed 0x30 to read number of ammo most of the time.
	int pointer = temp_registers[25] - 0x50 + 0x4d20;
	int ammoData5thEnumPointer = *(int*)(pointer + 0x4) + 0xc;
	int ammoHashPointer = *(int*)(pointer + 0x4) + 0x30;
	int ammoData5thEnum = *(int*)(ammoHashPointer);

	if (ammoData5thEnum != 0)
	{
		int ammoHash = *(int*)(ammoHashPointer + (ammoData5thEnum * 0x4) + 0x14);
		temp_registers[7] = ammoHash;
	}

	temp_registers[3] = r31;
	temp_registers[5] = r29;
	temp_registers[6] = r30;

	temp_registers[4] = 4;
	temp_registers[8] = 0;
	temp_registers[9] = 0;

	temp_registers[31] = r22;

	retrieve_registers();

	GameCall<int>(0x00127318, 0xd60138)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();

	*(int*)(temp_registers[25] + 0xC11) = 0;

	temp_registers[4] = 0xBEA0FBC9;
}