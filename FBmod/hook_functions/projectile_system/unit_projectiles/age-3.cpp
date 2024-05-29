#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"
#include "hook_functions/projectile_system/projectile_common.h"

int age3_net_throw_spawn_script_pointers[500];

bool age3_net_throw_spawn_script_pointers_initialized;

void age3_net_throw_spawn_model_hash()
{
	int hash = 0xD55B6CA0;
}

__int64 age3_net_throw_spawn_helper(__int64 a1, __int64 a2) // 8FF7E0
{
	int TOC = 0xD9FE1C;

	if (age3_net_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xCF47D8, age3_net_throw_spawn_script_pointers); // spiegel's net throw
		age3_net_throw_spawn_script_pointers_initialized = true;

		age3_net_throw_spawn_script_pointers[58] = (int)age3_net_throw_spawn_model_hash;
	}

	__int64 result; // r3
	unsigned int v2; // r29

	v2 = a1 + 17536;
	GameCall<int>(0x9F2228, TOC)((unsigned int)a1, a2);
	*(_DWORD *)a1 = (unsigned int)age3_net_throw_spawn_script_pointers;
	GameCall<int>(0x9F39C8, TOC)(v2, 8LL, 6LL);
	result = 0;
	*(_BYTE *)(a1 + 17920) = 0;
	*(_DWORD *)(a1 + 17928) = 12;
	*(_DWORD *)(a1 + 17924) = 0;

	return result;
}

void age3_net_throw_spawn() // 7CBF30
{
	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = age3_net_throw_spawn_helper((__int64)temporaryPointer, 18420LL);
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}

int age_3_melee_assist_spawn_script_pointers[500];
bool is_age_3_melee_assist_initialized = false;

void age_3_melee_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x763C3C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), saber_pink_effect_hash, 0x20, 0);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);
}

unsigned int age_3_clanche_assist_spawn_model_hash()
{
	return 0x5969C836;
}

unsigned int age_3_melee_assist_spawn_animation_1()
{
	return 0x4;
}

unsigned int age_3_melee_assist_spawn_animation_2()
{
	return 0x5;
}

unsigned int age_3_melee_assist_spawn_animation_3()
{
	return 0x6;
}

unsigned int age_3_melee_assist_spawn_animation_4()
{
	return 0x7;
}

unsigned int age_3_melee_assist_main(_DWORD* a1)
{
	if (is_age_3_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD1D500), age_3_melee_assist_spawn_script_pointers);
		age_3_melee_assist_spawn_script_pointers[37] = reinterpret_cast<int>(age_3_melee_assist_spawn_model_effects);
		age_3_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(age_3_clanche_assist_spawn_model_hash);
		age_3_melee_assist_spawn_script_pointers[156] = reinterpret_cast<int>(age_3_melee_assist_spawn_animation_1);
		age_3_melee_assist_spawn_script_pointers[168] = reinterpret_cast<int>(age_3_melee_assist_spawn_animation_2);
		age_3_melee_assist_spawn_script_pointers[169] = reinterpret_cast<int>(age_3_melee_assist_spawn_animation_3);
		age_3_melee_assist_spawn_script_pointers[176] = reinterpret_cast<int>(age_3_melee_assist_spawn_animation_4);
		is_age_3_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(age_3_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void age_3_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = age_3_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int age_3_shoot_assist_spawn_script_pointers[500];
bool is_age_3_shoot_assist_initialized = false;

void age_3_shoot_assist_aim_animation_script(unsigned int a1, unsigned int *a2)
{
	assist_shoot_initial_animation_script(a1, a2, 0x2, 1.0f);
}

unsigned int age_3_shoot_assist_aim_animation_index()
{
	return 2;
}

unsigned int age_3_shoot_assist_loop_animation_index()
{
	return 3;
}

unsigned int age_3_shoot_assist_sub_936FC0(_DWORD* a1)
{
	if (is_age_3_shoot_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xd1a5b0), age_3_shoot_assist_spawn_script_pointers);
		age_3_shoot_assist_spawn_script_pointers[58] = reinterpret_cast<int>(age_3_clanche_assist_spawn_model_hash);
		age_3_shoot_assist_spawn_script_pointers[144] = reinterpret_cast<int>(age_3_shoot_assist_aim_animation_index); // aiming animation
		age_3_shoot_assist_spawn_script_pointers[165] = reinterpret_cast<int>(age_3_shoot_assist_aim_animation_script); // initial animation script
		age_3_shoot_assist_spawn_script_pointers[167] = reinterpret_cast<int>(age_3_shoot_assist_loop_animation_index); // looping shoot animation
		is_age_3_shoot_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(age_3_shoot_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void age_3_shoot_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = age_3_shoot_assist_sub_936FC0(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}