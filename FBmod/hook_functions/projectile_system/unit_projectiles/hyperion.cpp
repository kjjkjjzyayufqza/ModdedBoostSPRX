#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int hyperion_sword_throw_spawn_script_pointers[500];

bool hyperion_sword_throw_spawn_script_pointers_initialized;

void hyperion_sword_throw_spawn_model_hash()
{
	int hash = 0x667D9B96;
}

__int64 OnHitSaberInEnemyEffectScriptHyperion(__int64 a1, unsigned int *a2) // originally Double X's saber throw, sub_8551B4
{
	int TOC = 0xd8fe60;
	unsigned int aleoHash = 0x2607EE10; // saber stick ALEO effect

	unsigned int *v4; // r26
	int v5; // r23
	__int64 v6; // r3
	unsigned __int64 v7; // r29
	__int64 v8; // r28
	int v9; // r0
	int v10; // r22
	__int64 v11; // r2
	int v12; // r23
	unsigned int *v13; // r26
	__int64 v14; // r3
	unsigned __int64 v15; // r28
	__int64 v16; // r29
	double v17; // fp0
	double v18; // fp13
	int v19; // r4
	__int64 v20; // r2
	char v22[4]; // [sp+70h] [-80h] BYREF
	char v23[20]; // [sp+74h] [-7Ch] BYREF

	v4 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
	v5 = *(_DWORD *)(a1 + 72);
	v23[1] = 0;
	v23[0] = -1;
	v6 = GameCall<int>(0x9EE118, TOC)(44LL, (__int64)v23);
	v7 = (unsigned int)v6;
	v8 = v6;
	GameCall<int>(0x9EE998, TOC)((unsigned int)v6);
	v9 = *(int *)(TOC + 0x572C);
	v10 = *(int *)(TOC + 0x5728);
	*(_DWORD *)(v7 + 24) = v5;
	*(_DWORD *)v7 = v10;
	*(_DWORD *)(v7 + 16) = a1;
	*(_DWORD *)v8 = v9;
	*(_DWORD *)(v7 + 20) = -241;
	*(_DWORD *)(v7 + 28) = 0;
	*(_DWORD *)(v7 + 32) = 0;
	*(_BYTE *)(v8 + 40) = 0;
	*(_DWORD *)(v8 + 36) = 0;
	v11 = v4[1];
	GameCall<int>(*v4, v11)(a2, v7);
	v12 = *(_DWORD *)(a1 + 72);
	v13 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
	v22[0] = -1;
	v22[1] = 0;
	v14 = GameCall<int>(0x9EE118, TOC)(96LL, (__int64)v22);
	v15 = (unsigned int)v14;
	v16 = v14;
	GameCall<int>(0x9EE998, TOC)((unsigned int)v14);
	v17 = *(float *)(TOC + 0x5708);
	v18 = *(float *)(TOC + 0x5734);
	v19 = *(int *)(TOC + 0x5730);
	*(_DWORD *)v15 = v10;
	*(_DWORD *)(v15 + 16) = a1;
	*(_DWORD *)(v15 + 20) = -241;
	*(_DWORD *)(v15 + 24) = v12;
	*(_DWORD *)(v15 + 32) = 0;
	*(_DWORD *)(v15 + 28) = 0;
	*(float *)(v16 + 80) = v18;
	*(float *)(v16 + 48) = v17;
	*(float *)(v16 + 64) = v17;
	*(_DWORD *)v16 = v19;
	*(_DWORD *)(v16 + 40) = 2;
	*(_DWORD *)(v16 + 36) = aleoHash; // ALEO hash
	*(float *)(v16 + 60) = v18;
	*(float *)(v16 + 52) = v17;
	*(float *)(v16 + 56) = v17;
	*(float *)(v16 + 76) = v18;
	*(float *)(v16 + 72) = v17;
	*(float *)(v16 + 68) = v17;
	*(float *)(v16 + 92) = v18;
	*(float *)(v16 + 88) = v18;
	*(float *)(v16 + 84) = v18;
	v20 = v13[1];
	return GameCall<int>(*v13, v20)(a2, v15);
}

__int64 FlyingSaberEffectScriptHyperion(unsigned int *a1, unsigned int a2)
{
	int TOC = 0xd8fe60;
	unsigned int aleoHash = 0xBF0EBFAA; // saber wave ALEO effect

	GameCall<int>(0x763D0C, TOC)((__int64)a1, 1u);
	GameCall<int>(0x763C3C, TOC)(a1, aleoHash, 2u, 0);
	return GameCall<int>(0x7EB5EC, TOC)(a1, a2);
}

__int64 hyperion_sword_throw_spawn_helper(int *a1, __int64 a2) // 855110
{
	if (hyperion_sword_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xCC37A0, hyperion_sword_throw_spawn_script_pointers); // double x's sword throw
		hyperion_sword_throw_spawn_script_pointers_initialized = true;

		hyperion_sword_throw_spawn_script_pointers[37] = (int)FlyingSaberEffectScriptHyperion;
		hyperion_sword_throw_spawn_script_pointers[58] = (int)hyperion_sword_throw_spawn_model_hash;
		hyperion_sword_throw_spawn_script_pointers[115] = (int)OnHitSaberInEnemyEffectScriptHyperion;
	}

	__int64 result; // r3

	GameCall<int>(0x7EB570, 0xd8fe60)((unsigned int)a1, a2);
	result = (unsigned int)hyperion_sword_throw_spawn_script_pointers;
	*a1 = (unsigned int)hyperion_sword_throw_spawn_script_pointers;
	return result;
}

void hyperion_sword_throw_spawn()
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = hyperion_sword_throw_spawn_helper(temporaryPointer, 0x35D54);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}
