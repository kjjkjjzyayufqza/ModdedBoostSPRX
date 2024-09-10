#include "forbidden_gundam.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

unsigned int forbidden_gundam_calamity_raider_combined_assist_spawn_model_hash()
{
	return 0x5320E28B;
}

unsigned int forbidden_gundam_calamity_gundam_assist_spawn_model_hash()
{
	return 0xBA21E30A;
}

int forbidden_gundam_gerobi_assist_spawn_script_pointers[500];
bool is_forbidden_gundam_gerobi_assist_initialized = false;

unsigned int forbidden_gundam_gerobi_assist_animation_script(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
	const unsigned int working_memory = create_working_memory(156);
	GameCall<void>(0x6F819C, 0xD7FF30)(working_memory);

	add_projectile(working_memory, 0xFB57E641, static_cast<unsigned int>(a3));
	add_projectile(working_memory, 0x2F16D99E, static_cast<unsigned int>(a3));
	add_projectile(working_memory, 0xD3E601A5, static_cast<unsigned int>(a3));
	
	const int anim_start_index = 8;
	const int anim_loop_index = 9;
	const int anim_end_index = 9;

	const float aim_animation_frame = 5.0f;
	const float aim_animation_multiplier = 1.0f;
	const float float3 = 0.0f;
	const float float4 = 1.0f;

	// We need to use this method to properly pass the float into the function, GameCall will incorrectly puts the float at flipped f30 and f29 onwards
	int opd[2] = { 0x9F2008, 0xd8fe60 };
	
	return reinterpret_cast<int(*)(unsigned int*, int, int, int, int, float, unsigned int, int, unsigned int, float, float, float, int)>(&opd)(
		a2,
		static_cast<int>(a3),
		anim_start_index,
		anim_loop_index,
		anim_end_index,
		aim_animation_frame,
		0xFB57E641,
		a4,
		static_cast<unsigned int>(working_memory),
		aim_animation_multiplier,
		float3,
		float4,
		-1
	);
}

unsigned int forbidden_gundam_gerobi_assist_main(_DWORD* a1)
{
	if (is_forbidden_gundam_gerobi_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xcc7c40), forbidden_gundam_gerobi_assist_spawn_script_pointers);
		forbidden_gundam_gerobi_assist_spawn_script_pointers[58] = reinterpret_cast<int>(forbidden_gundam_calamity_gundam_assist_spawn_model_hash);
		forbidden_gundam_gerobi_assist_spawn_script_pointers[157] = reinterpret_cast<int>(forbidden_gundam_gerobi_assist_animation_script);
		
		is_forbidden_gundam_gerobi_assist_initialized = true;
	}
	
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(forbidden_gundam_gerobi_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void forbidden_gundam_gerobi_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = forbidden_gundam_gerobi_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

float forbidden_gundam_flight_machine_gun_assist_size_multiplier()
{
	return 0.7f; // probably not working
}

unsigned int forbidden_gundam_flight_machine_gun_assist_right_gattling_projectile_hash()
{
	return 0x80526319;
}

unsigned int forbidden_gundam_flight_machine_gun_assist_left_gattling_projectile_hash()
{
	return 0x54135CC6;
}

int forbidden_gundam_flight_machine_gun_assist_spawn_script_pointers[500];
bool is_forbidden_gundam_flight_machine_gun_assist_initialized = false;

void forbidden_gundam_flight_machine_gun_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);

	hide_bone(a1, 0xb);
}

unsigned int forbidden_gundam_flight_machine_gun_assist_main(_DWORD* a1)
{
	if (is_forbidden_gundam_flight_machine_gun_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD08C00), forbidden_gundam_flight_machine_gun_assist_spawn_script_pointers);
		forbidden_gundam_flight_machine_gun_assist_spawn_script_pointers[37] = reinterpret_cast<int>(forbidden_gundam_flight_machine_gun_assist_spawn_model_effects);
		forbidden_gundam_flight_machine_gun_assist_spawn_script_pointers[58] = reinterpret_cast<int>(forbidden_gundam_calamity_raider_combined_assist_spawn_model_hash);
		forbidden_gundam_flight_machine_gun_assist_spawn_script_pointers[147] = reinterpret_cast<int>(forbidden_gundam_flight_machine_gun_assist_size_multiplier);
		forbidden_gundam_flight_machine_gun_assist_spawn_script_pointers[168] = reinterpret_cast<int>(forbidden_gundam_flight_machine_gun_assist_right_gattling_projectile_hash);
		forbidden_gundam_flight_machine_gun_assist_spawn_script_pointers[169] = reinterpret_cast<int>(forbidden_gundam_flight_machine_gun_assist_left_gattling_projectile_hash);
		is_forbidden_gundam_flight_machine_gun_assist_initialized = true;
	}
	
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(forbidden_gundam_flight_machine_gun_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void forbidden_gundam_flight_machine_gun_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = forbidden_gundam_flight_machine_gun_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}