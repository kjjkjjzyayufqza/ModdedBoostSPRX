#include "cherudim_gundam.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

unsigned int cherudim_gundam_seravee_assist_model_hash()
{
    return 0x5BD83129;
}

int cherudim_gundam_shoot_assist_spawn_script_pointers[500];
bool is_cherudim_gundam_shoot_assist_initialized = false;

void cherudim_gundam_shoot_assist_aim_animation_script(unsigned int a1, unsigned int *a2)
{
    // The animation index should be the same as the aim animation index
    assist_shoot_initial_animation_script(a1, a2, 0x4, 1.0f);
}

// shoots two beams at once
void cherudim_gundam_shoot_assist_script(__int64 a1, unsigned int *a2, int a3)
{
	assist_shoot_projectile(a2, a3, 0x75D21852);
	assist_shoot_projectile(a2, a3, 0xA193278D);
}

unsigned int cherudim_gundam_shoot_assist_aim_animation_index()
{
    return 4;
}

unsigned int cherudim_gundam_shoot_assist_loop_animation_index()
{
    return 5;
}

unsigned int cherudim_gundam_shoot_assist_sub_936FC0(_DWORD* a1)
{
    if (is_cherudim_gundam_shoot_assist_initialized == false) {
        copyJumptable(reinterpret_cast<int*>(0xd1a5b0), cherudim_gundam_shoot_assist_spawn_script_pointers);
        cherudim_gundam_shoot_assist_spawn_script_pointers[58] = reinterpret_cast<int>(cherudim_gundam_seravee_assist_model_hash);
        cherudim_gundam_shoot_assist_spawn_script_pointers[144] = reinterpret_cast<int>(cherudim_gundam_shoot_assist_aim_animation_index); // aiming animation
        cherudim_gundam_shoot_assist_spawn_script_pointers[158] = reinterpret_cast<int>(cherudim_gundam_shoot_assist_script);
        cherudim_gundam_shoot_assist_spawn_script_pointers[165] = reinterpret_cast<int>(cherudim_gundam_shoot_assist_aim_animation_script); // initial animation script
        cherudim_gundam_shoot_assist_spawn_script_pointers[167] = reinterpret_cast<int>(cherudim_gundam_shoot_assist_loop_animation_index); // looping shoot animation
        is_cherudim_gundam_shoot_assist_initialized = true;
    }
	
    GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
    const unsigned int result = reinterpret_cast<unsigned int>(cherudim_gundam_shoot_assist_spawn_script_pointers);
    *a1 = result;
    return result;
}

void cherudim_gundam_shoot_assist_spawn()
{
    _DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

    char list[4];
    list[0] = -1;
    list[1] = 0;
    const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
    const unsigned int result = cherudim_gundam_shoot_assist_sub_936FC0(reinterpret_cast<uint32*>(temp_memory_ptr));
    *r3_pointer = temp_memory_ptr;

    // set return
    temp_registers[3] = result;
}

int cherudim_gundam_gerobi_assist_spawn_script_pointers[500];
bool is_cherudim_gundam_gerobi_assist_initialized = false;

unsigned int cherudim_gundam_gerobi_assist_animation_script(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
	const int anim_start_index = 1LL;
	const int anim_loop_index = 2LL;
	const int anim_end_index = 3LL;

	const float aim_animation_frame = 21.0f; // start to shoot at the 21th frame of the animation, which is at the end
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

unsigned int cherudim_gundam_gerobi_assist_main(_DWORD* a1)
{
	if (is_cherudim_gundam_gerobi_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xcc7c40), cherudim_gundam_gerobi_assist_spawn_script_pointers);
		cherudim_gundam_gerobi_assist_spawn_script_pointers[58] = reinterpret_cast<int>(cherudim_gundam_seravee_assist_model_hash);
		cherudim_gundam_gerobi_assist_spawn_script_pointers[157] = reinterpret_cast<int>(cherudim_gundam_gerobi_assist_animation_script);
		
		is_cherudim_gundam_gerobi_assist_initialized = true;
	}
	
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(cherudim_gundam_gerobi_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void cherudim_gundam_gerobi_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = cherudim_gundam_gerobi_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}