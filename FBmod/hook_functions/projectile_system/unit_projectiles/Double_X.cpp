#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int double_x_javelin_throw_spawn_script_pointers[500];

bool double_x_javelin_throw_spawn_script_pointers_initialized;

void double_x_javelin_throw_spawn_model_hash()
{
	int hash = 0x24D4240F;
}

__int64 double_x_javelin_throw_on_hit_effect_script(__int64 a1, unsigned int *a2) // originally Double X's saber throw, sub_8551B4
{
	int TOC = 0xd9fe1c;

	int v3; // r25
	unsigned int *v4; // r27
	int v5; // r24
	__int64 v6; // r3
	unsigned __int64 v7; // r29
	__int64 v8; // r28
	int v9; // r8
	int v10; // r7
	__int64 v11; // r2
	char v13[16]; // [sp+70h] [-50h] BYREF

	v3 = a1;
	v4 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
	v5 = *(_DWORD *)(a1 + 72);
	v13[0] = -1;
	v13[1] = 0;
	v6 = GameCall<int>(0x9F2198, TOC)(44LL, (__int64)v13);
	v7 = (unsigned int)v6;
	v8 = v6;
	GameCall<int>(0x9F21A8, TOC)((unsigned int)v6);
	v9 = *(int *)(TOC + 0x22a8);
	v10 = *(int *)(TOC + 0x22aC);
	*(_DWORD *)(v7 + 16) = v3;
	*(_DWORD *)(v7 + 20) = -241;
	*(_DWORD *)(v7 + 24) = v5;
	*(_DWORD *)v7 = v9;
	*(_DWORD *)(v7 + 32) = 1;
	*(_DWORD *)(v7 + 28) = 0;
	*(_DWORD *)v8 = v10;
	*(_BYTE *)(v8 + 40) = 0;
	*(_DWORD *)(v8 + 36) = 0;
	v11 = v4[1];
	return GameCall<int>(*v4, v11)(a2, v7);
}

__int64 double_x_javelin_throw_flying_effect_script(unsigned int *a1, unsigned int a2)
{
	int TOC = 0xd9fe1c;
	unsigned int aleoHash = 0xCD2F00A2;

	GameCall<int>(0x9F21B8, TOC)((__int64)a1, 2u);
	GameCall<int>(0x9F21C8, TOC)(a1, aleoHash, 2u, 0);
	GameCall<int>(0x9F21C8, TOC)(a1, aleoHash, 2u, 1);
	return GameCall<int>(0x9F21D8, TOC)(a1, a2);
}

__int64 double_x_javelin_throw_spawn_helper(int *a1, __int64 a2) // 855110
{
	if (double_x_javelin_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xcce700, double_x_javelin_throw_spawn_script_pointers);
		double_x_javelin_throw_spawn_script_pointers_initialized = true;

		double_x_javelin_throw_spawn_script_pointers[37] = (int)double_x_javelin_throw_flying_effect_script;
		double_x_javelin_throw_spawn_script_pointers[58] = (int)double_x_javelin_throw_spawn_model_hash;
		double_x_javelin_throw_spawn_script_pointers[115] = (int)double_x_javelin_throw_on_hit_effect_script;
	}

	__int64 result; // r3

	GameCall<int>(0x9F2228, 0xd9fe1c)((unsigned int)a1, a2);
	result = (unsigned int)double_x_javelin_throw_spawn_script_pointers;
	*a1 = (unsigned int)double_x_javelin_throw_spawn_script_pointers;
	a1[54] = 8;
	return result;
}

void double_x_javelin_throw_spawn()
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = double_x_javelin_throw_spawn_helper(temporaryPointer, 0x1BF8);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}