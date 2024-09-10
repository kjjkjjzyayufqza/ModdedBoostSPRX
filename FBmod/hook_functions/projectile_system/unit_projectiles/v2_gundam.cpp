#include "v2_gundam.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

unsigned int v2_gundam_gunbluster_assist_spawn_model_hash()
{
    return 0xA6E80F74;
}

unsigned int v2_gundam_v_hexa_assist_spawn_model_hash()
{
	return 0x358C3F0C;
}

int v2_gundam_melee_assist_spawn_script_pointers[500];
bool is_v2_gundam_melee_assist_initialized = false;

void v2_gundam_melee_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x763C3C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), saber_pink_effect_hash, 0x1c, 0);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);
}

unsigned int v2_gundam_melee_assist_spawn_initial_loop_animation()
{
	return 0;
}

unsigned int v2_gundam_melee_assist_spawn_start_animation()
{
	return 1;
}

unsigned int v2_gundam_melee_assist_spawn_approach_loop_animation()
{
	return 2;
}

unsigned int v2_gundam_melee_assist_spawn_slash_animation()
{
	return 3;
}

unsigned int v2_gundam_melee_assist_main(_DWORD* a1)
{
	if (is_v2_gundam_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD1D500), v2_gundam_melee_assist_spawn_script_pointers);
		v2_gundam_melee_assist_spawn_script_pointers[37] = reinterpret_cast<int>(v2_gundam_melee_assist_spawn_model_effects);
		v2_gundam_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(v2_gundam_gunbluster_assist_spawn_model_hash);
		v2_gundam_melee_assist_spawn_script_pointers[156] = reinterpret_cast<int>(v2_gundam_melee_assist_spawn_initial_loop_animation);
		v2_gundam_melee_assist_spawn_script_pointers[168] = reinterpret_cast<int>(v2_gundam_melee_assist_spawn_start_animation);
		v2_gundam_melee_assist_spawn_script_pointers[169] = reinterpret_cast<int>(v2_gundam_melee_assist_spawn_approach_loop_animation);
		v2_gundam_melee_assist_spawn_script_pointers[176] = reinterpret_cast<int>(v2_gundam_melee_assist_spawn_slash_animation);
		is_v2_gundam_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(v2_gundam_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void v2_gundam_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = v2_gundam_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int v2_gundam_gerobi_assist_spawn_script_pointers[500];
bool is_v2_gundam_gerobi_assist_initialized = false;

unsigned int v2_gundam_gerobi_assist_animation_script(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
	const unsigned int working_memory = create_working_memory(156);
	GameCall<void>(0x6F819C, 0xD7FF30)(working_memory);
	
	const int anim_start_index = 5;
	const int anim_loop_index = 6;
	const int anim_end_index = 7;

	const float aim_animation_frame = 10.0f;
	const float aim_animation_multiplier = 1.0f;
	const float float3 = 0.0f;
	const float float4 = 1.0f;

	// We need to use this method to properly pass the float into the function, GameCall will incorrectly puts the float at flipped f30 and f29 onwards
	int opd[2] = { 0x9F2008, 0xd8fe60 };

	// Read projectile:
	unsigned int projectile_hash = *reinterpret_cast<uint32*>(*reinterpret_cast<unsigned int*>(a1 + 164) + 0xC8LL);
	
	return reinterpret_cast<int(*)(unsigned int*, int, int, int, int, float, unsigned int, int, unsigned int, float, float, float, int)>(&opd)(
		a2,
		static_cast<int>(a3),
		anim_start_index,
		anim_loop_index,
		anim_end_index,
		aim_animation_frame,
		projectile_hash,
		a4,
		static_cast<unsigned int>(working_memory),
		aim_animation_multiplier,
		float3,
		float4,
		-1
	);
}

unsigned int v2_gundam_gerobi_assist_main(_DWORD* a1)
{
	if (is_v2_gundam_gerobi_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xcc7c40), v2_gundam_gerobi_assist_spawn_script_pointers);
		v2_gundam_gerobi_assist_spawn_script_pointers[58] = reinterpret_cast<int>(v2_gundam_v_hexa_assist_spawn_model_hash);
		v2_gundam_gerobi_assist_spawn_script_pointers[157] = reinterpret_cast<int>(v2_gundam_gerobi_assist_animation_script);
		
		is_v2_gundam_gerobi_assist_initialized = true;
	}
	
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(v2_gundam_gerobi_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void v2_gundam_gerobi_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = v2_gundam_gerobi_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}