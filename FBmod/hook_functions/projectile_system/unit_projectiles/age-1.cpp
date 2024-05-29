#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"
#include "hook_functions/projectile_system/projectile_common.h"

int age1_boomerang_throw_spawn_script_pointers[500];

bool age1_boomerang_throw_spawn_script_pointers_initialized;

void age1_boomerang_throw_spawn_model_hash()
{
	int hash = 0x6374C298;
}

__int64 age1_boomerang_throw_spawn_helper(int *a1, __int64 a2) // 95A214
{
	if (age1_boomerang_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xD19E68, age1_boomerang_throw_spawn_script_pointers); // sandrock's boomerang throw
		age1_boomerang_throw_spawn_script_pointers_initialized = true;

		age1_boomerang_throw_spawn_script_pointers[58] = (int)age1_boomerang_throw_spawn_model_hash;

	}

	__int64 result; // r3

	GameCall<int>(0x9F40F8, 0xDAFDFC)((unsigned int)a1, a2);
	result = (unsigned int)age1_boomerang_throw_spawn_script_pointers;
	*a1 = (unsigned int)age1_boomerang_throw_spawn_script_pointers;
	return result;
}

void age1_boomerang_throw_spawn() // 7CBF30
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = age1_boomerang_throw_spawn_helper(temporaryPointer, 0x509A1);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}

int age1_sword_throw_spawn_script_pointers[500];

bool age1_sword_throw_spawn_script_pointers_initialized;

void age1_sword_throw_spawn_model_hash()
{
	int hash = 0x776738DD;
}

__int64 age1_sword_throw_on_hit_effect_script(__int64 a1, unsigned int *a2) // originally Double X's saber throw, sub_8551B4
{
	int TOC = 0xd8fe60;
	unsigned int aleoHash = 0x91315d18; // common pink saber ALEO effect

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

__int64 age1_sword_throw_flying_effect_script(unsigned int *a1, unsigned int a2)
{
	int TOC = 0xd8fe60;
	unsigned int aleoHash = 0x91315d18; // common pink saber ALEO effect

	GameCall<int>(0x763D0C, TOC)((__int64)a1, 1u);
	GameCall<int>(0x763C3C, TOC)(a1, aleoHash, 2u, 0);
	return GameCall<int>(0x7EB5EC, TOC)(a1, a2);
}

__int64 age1_sword_throw_spawn_helper(int *a1, __int64 a2) // 855110
{
	if (age1_sword_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xCC37A0, age1_sword_throw_spawn_script_pointers); // double x's sword throw
		age1_sword_throw_spawn_script_pointers_initialized = true;

		age1_sword_throw_spawn_script_pointers[37] = (int)age1_sword_throw_flying_effect_script;
		age1_sword_throw_spawn_script_pointers[58] = (int)age1_sword_throw_spawn_model_hash;
		age1_sword_throw_spawn_script_pointers[115] = (int)age1_sword_throw_on_hit_effect_script;
	}

	__int64 result; // r3

	GameCall<int>(0x7EB570, 0xd8fe60)((unsigned int)a1, a2);
	result = (unsigned int)age1_sword_throw_spawn_script_pointers;
	*a1 = (unsigned int)age1_sword_throw_spawn_script_pointers;
	return result;
}

void age1_sword_throw_spawn()
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = age1_sword_throw_spawn_helper(temporaryPointer, 0x5212);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}

int age1_wave_spawn_script_pointers[500];

bool age1_wave_spawn_script_pointers_initialized;

int age1_wave_spawn_effect_hash()
{
	return 0xE395870E; // 080.ALEO
}

void age1_wave_spawn()
{
	if (age1_wave_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xc9dc80, age1_wave_spawn_script_pointers); // eclipse's wave
		age1_wave_spawn_script_pointers_initialized = true;

		age1_wave_spawn_script_pointers[143] = (int)age1_wave_spawn_effect_hash;
	}

	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = GameCall<int>(0x9F0168, 0xd8fe60)(temporaryPointer, 0x531E2);
	*temporaryPointer = (int)age1_wave_spawn_script_pointers;
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}

int age1_small_rock_throw_spawn_script_pointers[500];

bool age1_small_rock_throw_spawn_script_pointers_initialized;

void age1_small_rock_throw_spawn_model_hash()
{
	int hash = 0x6EAB3EC3;
}

__int64 age1_small_rock_throw_spawn_on_hit_environment_effect_hash(__int64 a1) // 93BA58
{
	GameCall<int>(0x9F3EA8, 0xd9fe1c)(a1);
	// in theory we should change the hash found on sub_93B83C, but it has vector component which can't be decompiled for now
	return GameCall<int>((int)0x93B83C, 0xd9fe1c)(a1);
}

__int64 age1_small_rock_throw_spawn_on_hit_destroyed_effect_hash(__int64 a1) // 93BA8C
{
	GameCall<int>(0x9F3EB8, 0xd9fe1c)(a1);
	return GameCall<int>((int)0x93B83C, 0xd9fe1c)(a1);
}

__int64 age1_small_rock_throw_spawn_on_hit_enemy_effect_hash(__int64 a1) // 93BAC0
{
	GameCall<int>(0x9F2968, 0xd9fe1c)(a1);
	return GameCall<int>((int)0x93B83C, 0xd9fe1c)(a1);
}

__int64 age1_small_rock_throw_spawn_helper(int *a1, __int64 a2) // 855110
{
	if (age1_small_rock_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xD09108, age1_small_rock_throw_spawn_script_pointers); // doan's zaku small rock throw
		age1_small_rock_throw_spawn_script_pointers_initialized = true;

		age1_small_rock_throw_spawn_script_pointers[58] = (int)age1_small_rock_throw_spawn_model_hash;
		//age1_small_rock_throw_spawn_script_pointers[110] = (int)age1_small_rock_throw_spawn_on_hit_enemy_effect_hash;
		//age1_small_rock_throw_spawn_script_pointers[113] = (int)age1_small_rock_throw_spawn_on_hit_destroyed_effect_hash;
		//age1_small_rock_throw_spawn_script_pointers[114] = (int)age1_small_rock_throw_spawn_on_hit_environment_effect_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9f3ee8, 0xd9fe1c)((unsigned int)a1, a2);
	result = (unsigned int)age1_small_rock_throw_spawn_script_pointers;
	*a1 = (unsigned int)age1_small_rock_throw_spawn_script_pointers;
	return result;
}

void age1_small_rock_throw_spawn()
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = age1_small_rock_throw_spawn_helper(temporaryPointer, 0x5212);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}

int age1_big_rock_throw_spawn_script_pointers[500];

bool age1_big_rock_throw_spawn_script_pointers_initialized;

void age1_big_rock_throw_spawn_model_hash()
{
	int hash = 0x444014A8;
}

__int64 age1_big_rock_throw_spawn_helper(int *a1, __int64 a2) // 855110
{
	if (age1_big_rock_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xD08EB0, age1_big_rock_throw_spawn_script_pointers); // doan's zaku big rock throw
		age1_big_rock_throw_spawn_script_pointers_initialized = true;

		age1_big_rock_throw_spawn_script_pointers[58] = (int)age1_big_rock_throw_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F2538, 0xd9fe1c)((unsigned int)a1, a2);
	result = (unsigned int)age1_big_rock_throw_spawn_script_pointers;
	*a1 = (unsigned int)age1_big_rock_throw_spawn_script_pointers;
	return result;
}

void age1_big_rock_throw_spawn()
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = age1_big_rock_throw_spawn_helper(temporaryPointer, 0x5212);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}

int age_1_melee_assist_spawn_script_pointers[500];
bool is_age_1_melee_assist_initialized = false;

void age_1_melee_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x763C3C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), saber_pink_effect_hash, 0x1c, 0LL);
	GameCall<int>(0x763C3C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), saber_pink_effect_hash, 0x1e, 1LL);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);
}

unsigned int age_1_g_exes_assist_spawn_model_hash()
{
	return 0x5B2DE023;
}

unsigned int age_1_melee_assist_spawn_animation_1()
{
	return 0x5;
}

unsigned int age_1_melee_assist_spawn_animation_2()
{
	return 0x6;
}

unsigned int age_1_melee_assist_spawn_animation_3()
{
	return 0x7;
}

unsigned int age_1_melee_assist_spawn_animation_4()
{
	return 0x8;
}

unsigned int age_1_melee_assist_main(_DWORD* a1)
{
	if (is_age_1_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD1D500), age_1_melee_assist_spawn_script_pointers);
		age_1_melee_assist_spawn_script_pointers[37] = reinterpret_cast<int>(age_1_melee_assist_spawn_model_effects);
		age_1_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(age_1_g_exes_assist_spawn_model_hash);
		age_1_melee_assist_spawn_script_pointers[156] = reinterpret_cast<int>(age_1_melee_assist_spawn_animation_1);
		age_1_melee_assist_spawn_script_pointers[168] = reinterpret_cast<int>(age_1_melee_assist_spawn_animation_2);
		age_1_melee_assist_spawn_script_pointers[169] = reinterpret_cast<int>(age_1_melee_assist_spawn_animation_3);
		age_1_melee_assist_spawn_script_pointers[176] = reinterpret_cast<int>(age_1_melee_assist_spawn_animation_4);
		is_age_1_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(age_1_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void age_1_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = age_1_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}