#include "sinanju.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

unsigned int sinanju_rozen_zulu_assist_model_hash()
{
	return 0x0B7F66DB;
}

int sinanju_gerobi_assist_spawn_script_pointers[500];
bool is_sinanju_gerobi_assist_initialized = false;

unsigned int sinanju_gerobi_assist_animation_script(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
	const int anim_start_index = 7;
	const int anim_loop_index = 8;
	const int anim_end_index = 9;

	const float aim_animation_frame = 22.0f;
	const float aim_animation_multiplier = 1.0f;
	const float float3 = 0.0f;
	const float float4 = 1.2f;

	// We need to use this method to properly pass the float into the function, GameCall will incorrectly puts the float at flipped f30 and f29 onwards
	int opd[2] = { 0x9F2008, 0xd8fe60 };

	return reinterpret_cast<int(*)(unsigned int*, int, int, int, int, float, int, int, int, float, float, float, int)>(&opd)(
		a2,
		static_cast<int>(a3),
		anim_start_index,
		anim_loop_index,
		anim_end_index,
		aim_animation_frame,
		*reinterpret_cast<uint32*>(*reinterpret_cast<unsigned int*>(a1 + 164) + 0xC8LL),
		a4,
		0,
		aim_animation_multiplier,
		float3,
		float4,
		-1
	);
}

unsigned int sinanju_gerobi_assist_main(_DWORD* a1)
{
	if (is_sinanju_gerobi_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xcc7c40), sinanju_gerobi_assist_spawn_script_pointers);
		sinanju_gerobi_assist_spawn_script_pointers[58] = reinterpret_cast<int>(sinanju_rozen_zulu_assist_model_hash);
		sinanju_gerobi_assist_spawn_script_pointers[157] = reinterpret_cast<int>(sinanju_gerobi_assist_animation_script);
		
		is_sinanju_gerobi_assist_initialized = true;
	}
	
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(sinanju_gerobi_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void sinanju_gerobi_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = sinanju_gerobi_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int sinanju_shoot_assist_spawn_script_pointers[500];
bool is_sinanju_shoot_assist_initialized = false;

void sinanju_shoot_assist_aim_animation_script(unsigned int a1, unsigned int *a2)
{
    // The animation index should be the same as the aim animation index
    assist_shoot_initial_animation_script(a1, a2, 0xdafdfc, 0x5, 1.57f);
}

void sinanju_shoot_assist_frame_script(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
	// a4 = the nth frame to execute your first shoot, which is taken from 57th slot in projectile
	// 58th slot and 59th slot configures the frame to wait before you shoot 2nd and 3rd shot
	GameCall<int>(0x77C868, 0xd8fe60)(
		reinterpret_cast<unsigned int*>(a1),
		a2,
		a3,
		a4,
		a5,
		0
	);

	// Configure the multiplier of the animation after the first shot
	// If this is not reduced, the 2nd shot will shoot too fast, the original
	const float animation_speed_multiplier = 0.5;
	
	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list));
	GameCall<int>(0x6d54a0, 0xD7FF30)(working_memory);
	
	*reinterpret_cast<uint32*>(working_memory) = 0xC852F8;
	*reinterpret_cast<uint32*>(working_memory + 16) = static_cast<unsigned int>(a3);
	*reinterpret_cast<uint32*>(working_memory + 20) = -241;
	*reinterpret_cast<float*>(working_memory + 24) = animation_speed_multiplier;

	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a2 + 0x34LL));
	GameCall<__int64>(*script_func_ptr, script_func_ptr[1])(reinterpret_cast<unsigned int>(a2), working_memory);
}

unsigned int sinanju_shoot_assist_aim_animation_index()
{
    return 5;
}

unsigned int sinanju_shoot_assist_loop_animation_index()
{
    return 6;
}

unsigned int sinanju_shoot_assist_sub_936FC0(_DWORD* a1)
{
    if (is_sinanju_shoot_assist_initialized == false) {
        copyJumptable(reinterpret_cast<int*>(0xd1a5b0), sinanju_shoot_assist_spawn_script_pointers);
        sinanju_shoot_assist_spawn_script_pointers[58] = reinterpret_cast<int>(sinanju_rozen_zulu_assist_model_hash);
        sinanju_shoot_assist_spawn_script_pointers[144] = reinterpret_cast<int>(sinanju_shoot_assist_aim_animation_index); // aiming animation
        sinanju_shoot_assist_spawn_script_pointers[157] = reinterpret_cast<int>(sinanju_shoot_assist_frame_script);
        sinanju_shoot_assist_spawn_script_pointers[165] = reinterpret_cast<int>(sinanju_shoot_assist_aim_animation_script); // initial animation script
        sinanju_shoot_assist_spawn_script_pointers[167] = reinterpret_cast<int>(sinanju_shoot_assist_loop_animation_index); // looping shoot animation
        is_sinanju_shoot_assist_initialized = true;
    }
	
    GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
    const unsigned int result = reinterpret_cast<unsigned int>(sinanju_shoot_assist_spawn_script_pointers);
    *a1 = result;
    return result;
}

void sinanju_shoot_assist_spawn()
{
    _DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

    char list[4];
    list[0] = -1;
    list[1] = 0;
    const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
    const unsigned int result = sinanju_shoot_assist_sub_936FC0(reinterpret_cast<uint32*>(temp_memory_ptr));
    *r3_pointer = temp_memory_ptr;

    // set return
    temp_registers[3] = result;
}