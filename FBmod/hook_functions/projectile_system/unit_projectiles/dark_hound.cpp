#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"
#include "hook_functions/projectile_system/projectile_common.h"

int dark_hound_boomerang_spawn_script_pointers[500];
int dark_hound_boomerang_spawn_script_pointers_2[500];

bool dark_hound_boomerang_spawn_script_pointers_initialized;
bool dark_hound_boomerang_spawn_script_pointers_2_initialized;

void dark_hound_boomerang_spawn_model_hash()
{
	int hash = 0x9A761A01;
}

__int64 sub_80C6E4_dark_hound(unsigned int *a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
	GameCall<int>(0x7F18A0, 0xd8fe60)(a1, a2, a3, a4);
	GameCall<int>(0x9F21B8, 0xd9fe1c)((__int64)a1, 2u);
	GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, 0x91315D18, 2u, -1);
	return GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, 0xAA65448E, 3u, -1); // originally 2411CB3B

	//GameCall<int>(0x763D0C, 0xd8fe60)((__int64)a1, 1u);
	//return GameCall<int>(0x763C3C, 0xd8fe60)(a1, 0x77C3F62F, 2u, -1); // originally 2411CB3B
}

__int64 sub_80C77C_dark_hound(int *a1, __int64 a2)
{
	if (dark_hound_boomerang_spawn_script_pointers_2_initialized == false)
	{
		copyJumptable((int *)0xcabef8, dark_hound_boomerang_spawn_script_pointers_2);
		dark_hound_boomerang_spawn_script_pointers_2_initialized = true;

		dark_hound_boomerang_spawn_script_pointers_2[37] = (int)sub_80C6E4_dark_hound;
	}

	int v3; // r8
	__int64 result; // r3

	GameCall<int>(0x7F1824, 0xd8fe60)((unsigned int)a1, a2);
	v3 = (int)dark_hound_boomerang_spawn_script_pointers_2;
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

void dark_hound_boomerang_spawn() // originally lacus infinite justice's boomerang, 0x5596, 0x7D2604
{
	if (dark_hound_boomerang_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xc9b5c0, dark_hound_boomerang_spawn_script_pointers);
		dark_hound_boomerang_spawn_script_pointers_initialized = true;

		dark_hound_boomerang_spawn_script_pointers[58] = (int)dark_hound_boomerang_spawn_model_hash;
		dark_hound_boomerang_spawn_script_pointers[37] = (int)sub_80C6E4_dark_hound; 
	}

	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	int *v855;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v855 = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2175);
	result = sub_80C77C_dark_hound((int *)v855, 0x50C3A);
	*v855 = (int)dark_hound_boomerang_spawn_script_pointers;
	*v2 = (_DWORD)v855;

	// set return
	temp_registers[3] = result;
}


int dark_hound_sword_throw_spawn_script_pointers[500];

bool dark_hound_sword_throw_spawn_script_pointers_initialized;

void dark_hound_sword_throw_spawn_model_hash()
{
	int hash = 0xD834D057;
}

__int64 sub_9F1138_dark_hound(int *a1, __int64 a2)
{
	if (dark_hound_sword_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xcce700, dark_hound_sword_throw_spawn_script_pointers);
		dark_hound_sword_throw_spawn_script_pointers_initialized = true;

		dark_hound_sword_throw_spawn_script_pointers[58] = (int)dark_hound_sword_throw_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F1C78, 0xd8fe60)((unsigned int)a1, a2);
	result = (unsigned int)dark_hound_sword_throw_spawn_script_pointers;
	*a1 = (unsigned int)dark_hound_sword_throw_spawn_script_pointers;
	a1[54] = 8;
	return result;
}

void dark_hound_sword_throw_spawn() // originally strike rouge's sword throw, 0x33928, 0x7D2604
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	int *v855;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v855 = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17536LL, 128LL, v2175);
	result = sub_9F1138_dark_hound(v855, 0x50C30);
	*v2 = (_DWORD)v855;

	// set return
	temp_registers[3] = result;
}

// Shooting model
unsigned int dark_hound_shaldoll_rogue_assist_spawn_model_hash()
{
	return 0xBEEFA20D;
}

// Melee model
unsigned int dark_hound_jackedge_assist_spawn_model_hash()
{
	return 0x0DCB3DD0;
}

int dark_hound_melee_assist_spawn_script_pointers[500];
bool is_dark_hound_melee_assist_initialized = false;

void dark_hound_melee_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);

	// This does animation??
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);
}

unsigned int dark_hound_melee_assist_spawn_animation_1()
{
	return 0x4;
}

unsigned int dark_hound_melee_assist_spawn_animation_2()
{
	return 0x5;
}

unsigned int dark_hound_melee_assist_spawn_animation_3()
{
	return 0x6;
}

unsigned int dark_hound_melee_assist_spawn_animation_4()
{
	return 0x7;
}

void dark_hound_melee_assist_hitbox_script(__int64 a1, __int64 a2)
{
	GameCall<void>(0x77C69C, 0xD8FE60)(a1, static_cast<unsigned int>(a2));
	GameCall<void>(0x7654B0, 0xD8FE60)(static_cast<unsigned int>(a2), 5, 0);
	
	*reinterpret_cast<float*>(a2 + 20) = 4.0f;
	*reinterpret_cast<float*>(a2 + 32) = 0.0f;
	*reinterpret_cast<float*>(a2 + 36) = 0.0f;
	*reinterpret_cast<float*>(a2 + 40) = 19.0f;
	*reinterpret_cast<float*>(a2 + 44) = 1.0f;
	*reinterpret_cast<uint32*>(a2 + 48) = 1;
	*reinterpret_cast<float*>(a2 + 52) = 11.0f;
	*reinterpret_cast<uint32*>(a2 + 80) = 1;
	*reinterpret_cast<float*>(a2 + 84) = 7.0f;
	*reinterpret_cast<uint32*>(a2 + 96) = 0x6C43E803; // 2nd hit hash

	*reinterpret_cast<float*>(a2 + 64) = 0.0f;
	*reinterpret_cast<float*>(a2 + 64 + 4) = 0.0f;
	*reinterpret_cast<float*>(a2 + 64 + 8) = 10.0f;
	*reinterpret_cast<float*>(a2 + 64 + 12) = 1.0f;
}

// TODO: The animation for the first hit should be 7, and the second 8, however fb there's no animation that allows 3 step two hit
unsigned int dark_hound_melee_assist_approach_spawn_animation()
{
	return 6;
}

void dark_hound_melee_assist_second_hit_animation_script(__int64 a1, unsigned int *a2)
{
	GameCall<void>(0x96E080,0xDAFDFC)(a1, a2);

	const unsigned int working_memory = create_working_memory(56LL);
	
	const int animation_index = 7;
	GameCall<void>(0x6EBB78,0xD7FF30)(working_memory, a1, animation_index);
	*reinterpret_cast<uint*>(working_memory + 44) = 0;
	
	execute_working_memory(a2, working_memory);
}

unsigned int dark_hound_melee_assist_main(_DWORD* a1)
{
	if (is_dark_hound_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xceeb00), dark_hound_melee_assist_spawn_script_pointers);
		dark_hound_melee_assist_spawn_script_pointers[37] = reinterpret_cast<int>(dark_hound_melee_assist_spawn_model_effects);
		dark_hound_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(dark_hound_jackedge_assist_spawn_model_hash);
		dark_hound_melee_assist_spawn_script_pointers[65] = reinterpret_cast<int>(dark_hound_melee_assist_hitbox_script);
		dark_hound_melee_assist_spawn_script_pointers[155] = reinterpret_cast<int>(dark_hound_melee_assist_approach_spawn_animation);
		dark_hound_melee_assist_spawn_script_pointers[166] = reinterpret_cast<int>(dark_hound_melee_assist_second_hit_animation_script);
		is_dark_hound_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(dark_hound_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void dark_hound_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = dark_hound_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int dark_hound_shoot_assist_spawn_script_pointers[500];
bool is_dark_hound_shoot_assist_initialized = false;

void dark_hound_shoot_assist_aim_animation_script(unsigned int a1, unsigned int *a2)
{
	// The animation index should be the same as the aim animation index
	assist_shoot_initial_animation_script(a1, a2, 0x1, 1.0f);
}

unsigned int dark_hound_shoot_assist_aim_animation_index()
{
	return 0x1;
}

unsigned int dark_hound_shoot_assist_loop_animation_index()
{
	return 0x2;
}

unsigned int dark_hound_shoot_assist_main(_DWORD* a1)
{
	if (is_dark_hound_shoot_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xd1a5b0), dark_hound_shoot_assist_spawn_script_pointers);
		dark_hound_shoot_assist_spawn_script_pointers[58] = reinterpret_cast<int>(dark_hound_shaldoll_rogue_assist_spawn_model_hash);
		dark_hound_shoot_assist_spawn_script_pointers[144] = reinterpret_cast<int>(dark_hound_shoot_assist_aim_animation_index); // aiming animation
		dark_hound_shoot_assist_spawn_script_pointers[167] = reinterpret_cast<int>(dark_hound_shoot_assist_loop_animation_index); // looping shoot animation
		is_dark_hound_shoot_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(dark_hound_shoot_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void dark_hound_shoot_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = dark_hound_shoot_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int dark_hound_hook_spawn_script_pointers[500];
bool is_dark_hound_hook_initialized = false;

unsigned int dark_hound_hook_spawn_model_hash()
{
	return 0xE097BF00;
}

void dark_hound_hook_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = GameCall<int>(0x7E83B4, 0xd8fe60)(reinterpret_cast<uint32*>(temp_memory_ptr));
	
	if (is_dark_hound_hook_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xcc3018), dark_hound_hook_spawn_script_pointers);
		dark_hound_hook_spawn_script_pointers[58] = reinterpret_cast<int>(dark_hound_hook_spawn_model_hash);
		is_dark_hound_hook_initialized = true;
	}

	const unsigned int script_pointer = reinterpret_cast<unsigned int>(dark_hound_hook_spawn_script_pointers);
	*reinterpret_cast<unsigned int*>(temp_memory_ptr) = script_pointer;

	*r3_pointer = temp_memory_ptr;
	temp_registers[3] = result;
}