#include "f91.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

int f91_melee_assist_spawn_script_pointers[500];
bool is_f91_melee_assist_initialized = false;

unsigned int f91_vigna_ghina_rogue_assist_spawn_model_hash()
{
	return 0x981AAD80;
}

void f91_melee_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x763C3C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), saber_pink_effect_hash, 0x1e, 0);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);

	// Hide beam rifle
	hide_bone(a1, 0x20);
}

unsigned int f91_melee_assist_spawn_animation_1()
{
	return 0x3;
}

unsigned int f91_melee_assist_spawn_animation_2()
{
	return 0x4;
}

unsigned int f91_melee_assist_spawn_animation_3()
{
	return 0x5;
}

unsigned int f91_melee_assist_spawn_animation_4()
{
	return 0x6;
}

unsigned int f91_melee_assist_main(_DWORD* a1)
{
	if (is_f91_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD1D500), f91_melee_assist_spawn_script_pointers);
		f91_melee_assist_spawn_script_pointers[37] = reinterpret_cast<int>(f91_melee_assist_spawn_model_effects);
		f91_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(f91_vigna_ghina_rogue_assist_spawn_model_hash);
		f91_melee_assist_spawn_script_pointers[156] = reinterpret_cast<int>(f91_melee_assist_spawn_animation_1);
		f91_melee_assist_spawn_script_pointers[168] = reinterpret_cast<int>(f91_melee_assist_spawn_animation_2);
		f91_melee_assist_spawn_script_pointers[169] = reinterpret_cast<int>(f91_melee_assist_spawn_animation_3);
		f91_melee_assist_spawn_script_pointers[176] = reinterpret_cast<int>(f91_melee_assist_spawn_animation_4);
		is_f91_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(f91_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void f91_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = f91_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}