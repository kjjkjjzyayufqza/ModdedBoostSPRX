#include "gunner_zaku_warrior.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

unsigned int gunner_zaku_warrior_impulse_assist_model_hash()
{
	return 0xA3C12EA9;
}

int gunner_zaku_warrior_gerobi_assist_spawn_script_pointers[500];
bool is_gunner_zaku_warrior_gerobi_assist_initialized = false;

unsigned int gunner_zaku_warrior_gerobi_assist_animation_script(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
	const unsigned int working_memory = create_working_memory(156);
	GameCall<void>(0x6F819C, 0xD7FF30)(working_memory);
	
	add_projectile(working_memory, 0x69EE2368, static_cast<unsigned int>(a3));
	add_projectile(working_memory, 0xBDAF1CB7, static_cast<unsigned int>(a3));
	
	const int anim_start_index = 7LL;
	const int anim_loop_index = 8LL;
	const int anim_end_index = 8LL;

	const float aim_animation_frame = 5.0f;
	const float aim_animation_multiplier = 1.0f;
	const float float3 = 0.0f;
	const float float4 = 1.0f;

	// We need to use this method to properly pass the float into the function, GameCall will incorrectly puts the float at flipped f30 and f29 onwards
	int opd[2] = { 0x9F2008, 0xd8fe60 };

	// Read projectile:
	// unsigned int projectile_hash = *reinterpret_cast<uint32*>(*reinterpret_cast<unsigned int*>(a1 + 164) + 0xC8LL);
	
	return reinterpret_cast<int(*)(unsigned int*, int, int, int, int, float, unsigned int, int, unsigned int, float, float, float, int)>(&opd)(
		a2,
		static_cast<int>(a3),
		anim_start_index,
		anim_loop_index,
		anim_end_index,
		aim_animation_frame,
		0x69EE2368, // Projectile hash
		a4,
		static_cast<unsigned int>(working_memory),
		aim_animation_multiplier,
		float3,
		float4,
		-1
	);
}

unsigned int gunner_zaku_warrior_gerobi_assist_main(_DWORD* a1)
{
	if (is_gunner_zaku_warrior_gerobi_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xcc7c40), gunner_zaku_warrior_gerobi_assist_spawn_script_pointers);
		gunner_zaku_warrior_gerobi_assist_spawn_script_pointers[58] = reinterpret_cast<int>(gunner_zaku_warrior_impulse_assist_model_hash);
		gunner_zaku_warrior_gerobi_assist_spawn_script_pointers[157] = reinterpret_cast<int>(gunner_zaku_warrior_gerobi_assist_animation_script);
		
		is_gunner_zaku_warrior_gerobi_assist_initialized = true;
	}
	
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(gunner_zaku_warrior_gerobi_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void gunner_zaku_warrior_gerobi_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = gunner_zaku_warrior_gerobi_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

unsigned int gunner_zaku_warrior_savior_assist_spawn_model_hash()
{
	return 0xBA160C93;
}

int gunner_zaku_warrior_melee_assist_spawn_script_pointers[500];
bool is_gunner_zaku_warrior_melee_assist_initialized = false;

void gunner_zaku_warrior_melee_assist_hitbox_script(__int64 a1, __int64 a2)
{
	GameCall<void>(0x77C69C, 0xD8FE60)(a1, static_cast<unsigned int>(a2));
	GameCall<void>(0x7654B0, 0xD8FE60)(static_cast<unsigned int>(a2), 5LL, 0LL);
	
	*reinterpret_cast<float*>(a2 + 20) = 4.0f;
	*reinterpret_cast<float*>(a2 + 32) = 0.0f;
	*reinterpret_cast<float*>(a2 + 36) = 0.0f;
	*reinterpret_cast<float*>(a2 + 40) = 19.0f;
	*reinterpret_cast<float*>(a2 + 44) = 1.0f;
	*reinterpret_cast<uint32*>(a2 + 48) = 1;
	*reinterpret_cast<float*>(a2 + 52) = 11.0f;
	*reinterpret_cast<uint32*>(a2 + 80) = 1;
	*reinterpret_cast<float*>(a2 + 84) = 7.0f;
	*reinterpret_cast<uint32*>(a2 + 96) = 0xBA397645; // 2nd hit hash

	*reinterpret_cast<float*>(a2 + 64) = 0.0f;
	*reinterpret_cast<float*>(a2 + 64 + 4) = 0.0f;
	*reinterpret_cast<float*>(a2 + 64 + 8) = 10.0f;
	*reinterpret_cast<float*>(a2 + 64 + 12) = 1.0f;
}

void gunner_zaku_warrior_melee_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x763C3C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), saber_pink_effect_hash, 0x1f, 0);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);
}

unsigned int gunner_zaku_warrior_melee_assist_approach_spawn_animation()
{
	return 11;
}

// Taken from throne drei's melee assist, which has two hits, originally derived from 0x8EC3E0
void gunner_zaku_warrior_melee_assist_second_hit_animation_script(__int64 a1, unsigned int *a2)
{
	GameCall<void>(0x96E080,0xDAFDFC)(a1, a2);

	const unsigned int working_memory = create_working_memory(56LL);
	
	const int animation_index = 12;
	GameCall<void>(0x6EBB78,0xD7FF30)(working_memory, a1, animation_index);
	*reinterpret_cast<uint*>(working_memory + 44) = 0;

	execute_working_memory(a2, working_memory);
}

unsigned int gunner_zaku_warrior_melee_assist_main(_DWORD* a1)
{
	if (is_gunner_zaku_warrior_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xceeb00), gunner_zaku_warrior_melee_assist_spawn_script_pointers);
		gunner_zaku_warrior_melee_assist_spawn_script_pointers[37] = reinterpret_cast<int>(gunner_zaku_warrior_melee_assist_spawn_model_effects);
		gunner_zaku_warrior_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(gunner_zaku_warrior_savior_assist_spawn_model_hash);
		gunner_zaku_warrior_melee_assist_spawn_script_pointers[65] = reinterpret_cast<int>(gunner_zaku_warrior_melee_assist_hitbox_script);
		gunner_zaku_warrior_melee_assist_spawn_script_pointers[155] = reinterpret_cast<int>(gunner_zaku_warrior_melee_assist_approach_spawn_animation);
		gunner_zaku_warrior_melee_assist_spawn_script_pointers[166] = reinterpret_cast<int>(gunner_zaku_warrior_melee_assist_second_hit_animation_script);
		is_gunner_zaku_warrior_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2D38, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(gunner_zaku_warrior_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void gunner_zaku_warrior_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = gunner_zaku_warrior_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}