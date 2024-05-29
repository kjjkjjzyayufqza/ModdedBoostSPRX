#include "fazz.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

unsigned int fazz_zeta_assist_spawn_model_hash()
{
	return 0xC59E248E;
}

int fazz_melee_assist_spawn_script_pointers[500];
bool is_fazz_melee_assist_initialized = false;

void fazz_melee_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);
	
	// hide hi mega launcher
	hide_bone(a1, 0x1d);
}

unsigned int fazz_melee_assist_spawn_initial_loop_animation()
{
	return 4;
}

unsigned int fazz_melee_assist_spawn_start_animation()
{
	return 5;
}

unsigned int fazz_melee_assist_spawn_approach_loop_animation()
{
	return 6;
}

unsigned int fazz_melee_assist_spawn_slash_animation()
{
	return 7;
}

unsigned int fazz_melee_assist_main(_DWORD* a1)
{
	if (is_fazz_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD1D500), fazz_melee_assist_spawn_script_pointers);
		fazz_melee_assist_spawn_script_pointers[37] = reinterpret_cast<int>(fazz_melee_assist_spawn_model_effects);
		fazz_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(fazz_zeta_assist_spawn_model_hash);
		fazz_melee_assist_spawn_script_pointers[156] = reinterpret_cast<int>(fazz_melee_assist_spawn_initial_loop_animation);
		fazz_melee_assist_spawn_script_pointers[168] = reinterpret_cast<int>(fazz_melee_assist_spawn_start_animation);
		fazz_melee_assist_spawn_script_pointers[169] = reinterpret_cast<int>(fazz_melee_assist_spawn_approach_loop_animation);
		fazz_melee_assist_spawn_script_pointers[176] = reinterpret_cast<int>(fazz_melee_assist_spawn_slash_animation);
		is_fazz_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(fazz_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void fazz_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = fazz_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int fazz_left_shoot_assist_spawn_script_pointers[500];
bool is_fazz_left_shoot_assist_initialized = false;

void fazz_left_shoot_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x7F05B4, 0xD8FE60)(a1, a2);

	// hide hi mega launcher
	hide_bone(a1, 0x1d);
}

unsigned int fazz_left_shoot_assist_spawn_initial_shoot_animation()
{
	return 8;
}

unsigned int fazz_left_shoot_assist_spawn_move_animation()
{
	return 9;
}

unsigned int fazz_left_shoot_assist_spawn_move_loop_animation()
{
	return 10;
}

unsigned int fazz_left_shoot_assist_spawn_shoot_animation()
{
	return 11;
}

void fazz_left_moving_shoot_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = GameCall<int>(0x77C7C8, 0xd8fe60)(reinterpret_cast<uint32*>(temp_memory_ptr), 0xf3c);

	// 0x11FBD4A
	// 0x6BB570
	if (is_fazz_left_shoot_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD0B868), fazz_left_shoot_assist_spawn_script_pointers);
		// fazz_left_shoot_assist_spawn_script_pointers[37] = reinterpret_cast<int>(fazz_left_shoot_assist_spawn_model_effects);
		fazz_left_shoot_assist_spawn_script_pointers[58] = reinterpret_cast<int>(fazz_zeta_assist_spawn_model_hash);
		fazz_left_shoot_assist_spawn_script_pointers[163] = reinterpret_cast<int>(fazz_left_shoot_assist_spawn_initial_shoot_animation);
		fazz_left_shoot_assist_spawn_script_pointers[164] = reinterpret_cast<int>(fazz_left_shoot_assist_spawn_move_animation);
		fazz_left_shoot_assist_spawn_script_pointers[165] = reinterpret_cast<int>(fazz_left_shoot_assist_spawn_move_loop_animation);
		fazz_left_shoot_assist_spawn_script_pointers[167] = reinterpret_cast<int>(fazz_left_shoot_assist_spawn_shoot_animation);
		is_fazz_left_shoot_assist_initialized = true;
	}

	const unsigned int script_pointer = reinterpret_cast<unsigned int>(fazz_left_shoot_assist_spawn_script_pointers);
	*reinterpret_cast<unsigned int*>(temp_memory_ptr) = script_pointer;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x4720) = 0;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x4720 + 4) = 0;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x4720 + 8) = 0;
	*reinterpret_cast<float*>(temp_memory_ptr + 0x4720 + 12) = 1.0f;

	*r3_pointer = temp_memory_ptr;
	temp_registers[3] = result;
}

int fazz_right_shoot_assist_spawn_script_pointers[500];
bool is_fazz_right_shoot_assist_initialized = false;

void fazz_right_shoot_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x7F05B4, 0xD8FE60)(a1, a2);
	
	// hide hi mega launcher
	hide_bone(a1, 0x1d);
}

unsigned int fazz_right_shoot_assist_spawn_initial_shoot_animation()
{
	return 12;
}

unsigned int fazz_right_shoot_assist_spawn_move_animation()
{
	return 13;
}

unsigned int fazz_right_shoot_assist_spawn_move_loop_animation()
{
	return 14;
}

unsigned int fazz_right_shoot_assist_spawn_shoot_animation()
{
	return 15;
}

void fazz_right_moving_shoot_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = GameCall<int>(0x77C7C8, 0xd8fe60)(reinterpret_cast<uint32*>(temp_memory_ptr), 0xf3c);

	// 0x11FBD4A
	// 0x6BB570
	if (is_fazz_right_shoot_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD0B868), fazz_right_shoot_assist_spawn_script_pointers);
		// fazz_right_shoot_assist_spawn_script_pointers[37] = reinterpret_cast<int>(fazz_right_shoot_assist_spawn_model_effects);
		fazz_right_shoot_assist_spawn_script_pointers[58] = reinterpret_cast<int>(fazz_zeta_assist_spawn_model_hash);
		fazz_right_shoot_assist_spawn_script_pointers[163] = reinterpret_cast<int>(fazz_right_shoot_assist_spawn_initial_shoot_animation);
		fazz_right_shoot_assist_spawn_script_pointers[164] = reinterpret_cast<int>(fazz_right_shoot_assist_spawn_move_animation);
		fazz_right_shoot_assist_spawn_script_pointers[165] = reinterpret_cast<int>(fazz_right_shoot_assist_spawn_move_loop_animation);
		fazz_right_shoot_assist_spawn_script_pointers[167] = reinterpret_cast<int>(fazz_right_shoot_assist_spawn_shoot_animation);
		is_fazz_right_shoot_assist_initialized = true;
	}

	const unsigned int script_pointer = reinterpret_cast<unsigned int>(fazz_right_shoot_assist_spawn_script_pointers);
	*reinterpret_cast<unsigned int*>(temp_memory_ptr) = script_pointer;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x4720) = 0;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x4720 + 4) = 0;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x4720 + 8) = 0;
	*reinterpret_cast<float*>(temp_memory_ptr + 0x4720 + 12) = 1.0f;

	*r3_pointer = temp_memory_ptr;
	temp_registers[3] = result;
}