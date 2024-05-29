#include "xi_gundam.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

unsigned int xi_gundam_mensa_assist_spawn_model_hash()
{
    return 0x1D689D45;
}

int xi_gundam_shoot_assist_spawn_script_pointers[500];
bool is_xi_gundam_shoot_assist_initialized = false;

void xi_gundam_shoot_assist_aim_animation_script(unsigned int a1, unsigned int *a2)
{
    assist_shoot_initial_animation_script(a1, a2, 0x1, 1.57f);
}

unsigned int xi_gundam_shoot_assist_aim_animation_index()
{
    return 1;
}

unsigned int xi_gundam_shoot_assist_loop_animation_index()
{
    return 2;
}

unsigned int xi_gundam_shoot_assist_sub_936FC0(_DWORD* a1)
{
    if (is_xi_gundam_shoot_assist_initialized == false) {
        copyJumptable(reinterpret_cast<int*>(0xd1a5b0), xi_gundam_shoot_assist_spawn_script_pointers);
        xi_gundam_shoot_assist_spawn_script_pointers[58] = reinterpret_cast<int>(xi_gundam_mensa_assist_spawn_model_hash);
        xi_gundam_shoot_assist_spawn_script_pointers[144] = reinterpret_cast<int>(xi_gundam_shoot_assist_aim_animation_index); // aiming animation
        xi_gundam_shoot_assist_spawn_script_pointers[165] = reinterpret_cast<int>(xi_gundam_shoot_assist_aim_animation_script); // initial animation script
        xi_gundam_shoot_assist_spawn_script_pointers[167] = reinterpret_cast<int>(xi_gundam_shoot_assist_loop_animation_index); // looping shoot animation
        is_xi_gundam_shoot_assist_initialized = true;
    }
	
    GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
    const unsigned int result = reinterpret_cast<unsigned int>(xi_gundam_shoot_assist_spawn_script_pointers);
    *a1 = result;
    return result;
}

void xi_gundam_shoot_assist_spawn()
{
    _DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

    char list[4];
    list[0] = -1;
    list[1] = 0;
    const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
    const unsigned int result = xi_gundam_shoot_assist_sub_936FC0(reinterpret_cast<uint32*>(temp_memory_ptr));
    *r3_pointer = temp_memory_ptr;

    // set return
    temp_registers[3] = result;
}

int xi_gundam_melee_assist_spawn_script_pointers[500];
bool is_xi_gundam_melee_assist_initialized = false;

void xi_gundam_melee_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);
}

unsigned int xi_gundam_melee_assist_spawn_animation_1()
{
	return 0x3;
}

unsigned int xi_gundam_melee_assist_spawn_animation_2()
{
	return 0x4;
}

unsigned int xi_gundam_melee_assist_spawn_animation_3()
{
	return 0x5;
}

unsigned int xi_gundam_melee_assist_spawn_animation_4()
{
	return 0x6;
}

unsigned int xi_gundam_melee_assist_main(_DWORD* a1)
{
	if (is_xi_gundam_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD1D500), xi_gundam_melee_assist_spawn_script_pointers);
		xi_gundam_melee_assist_spawn_script_pointers[37] = reinterpret_cast<int>(xi_gundam_melee_assist_spawn_model_effects);
		xi_gundam_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(xi_gundam_mensa_assist_spawn_model_hash);
		xi_gundam_melee_assist_spawn_script_pointers[156] = reinterpret_cast<int>(xi_gundam_melee_assist_spawn_animation_1);
		xi_gundam_melee_assist_spawn_script_pointers[168] = reinterpret_cast<int>(xi_gundam_melee_assist_spawn_animation_2);
		xi_gundam_melee_assist_spawn_script_pointers[169] = reinterpret_cast<int>(xi_gundam_melee_assist_spawn_animation_3);
		xi_gundam_melee_assist_spawn_script_pointers[176] = reinterpret_cast<int>(xi_gundam_melee_assist_spawn_animation_4);
		is_xi_gundam_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(xi_gundam_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void xi_gundam_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = xi_gundam_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}