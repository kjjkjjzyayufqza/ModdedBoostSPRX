#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int kampfer_chainmine_spawn_script_pointers[500];

bool kampfer_chainmine_spawn_script_pointers_initialized;

void kampfer_chainmine_spawn_model_hash()
{
	int hash = 0x69A7E937;
}

__int64 kampfer_chainmine_spawn_populate(int *ProjectileMemoryPointer) // 916B54
{
	if (kampfer_chainmine_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xCFB7C8, kampfer_chainmine_spawn_script_pointers); // strike noir's sword throw
		kampfer_chainmine_spawn_script_pointers_initialized = true;

		kampfer_chainmine_spawn_script_pointers[37] = (int)0xd54c28; // taken from seven sword's EX leg sabers throw 
		kampfer_chainmine_spawn_script_pointers[58] = (int)kampfer_chainmine_spawn_model_hash;
	}

	__int64 Result;

	GameCall<int>(0x9F2228, 0xd9fe1c)((unsigned int)ProjectileMemoryPointer, 0x1d650);
	Result = (unsigned int)kampfer_chainmine_spawn_script_pointers;
	*ProjectileMemoryPointer = (unsigned int)kampfer_chainmine_spawn_script_pointers;
	return Result;
}

void kampfer_chainmine_spawn()
{
	_DWORD *R3 = (_DWORD*)temp_registers[3];
	__int16 UnknownShort;
	int *ProjectileMemoryPointer;
	int Result;

	UnknownShort = -256;
	ProjectileMemoryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17536LL, 128LL, &UnknownShort);
	Result = kampfer_chainmine_spawn_populate(ProjectileMemoryPointer);
	*R3 = (_DWORD)ProjectileMemoryPointer;

	// set return
	temp_registers[3] = Result;
}

// Exploding swords
// good contender is strike noir's EX final sword throw
// 0x7bde04, 0x71C0
// Script pointers = 0xcfb7c8
// 0x9F2228, 0xd9fe1c

// strike rouge's EX final sword throw
// 0x7D0934, 0x33928
// Script pointers, 0xd12cb8
// 0x9F2228, 0xd9fe1c

// amatsu mina's BC 
// 0x7be254, amatsu mina's BC front deriative stab sword, 0x35ee4
// Script pointers, 0xd12ec8
// 0x9F40F8, 0xdafdfc

// Non exploding swords
// 0x7D1E24, FAUC's front melee 
// Script pointers, 0xd17570
// 0x9F2228, 0xd9fe1c

// If you ever need to reverse search, 
// Find the start pointer, and the pointer to the pointer
// e.g. Stike Noir's EX Burst attack, 0xcfb7c8 -> 00DA31D4
// check what 0x00DA31D4 is close to in terms of TOC
// 0xd8fe60, 0xd9fe1c, 0xdafdfc, remember the offset must be signed int 16, so -32768 <-> 32767
// in this case, the closest is 0xdafdfc, an offset of 0x00DA31D4 - 0xd9fe1c = 0x33B8
// search for r2 operation with 0x33B8, ?? ?2 33 B8
// find in the range of 80000 ~ 9fffff, if there's three close together then select the last one
// that's the function to the projectile helper func