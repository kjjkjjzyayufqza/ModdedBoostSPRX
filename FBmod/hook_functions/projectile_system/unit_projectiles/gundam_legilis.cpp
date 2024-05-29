#include "gundam_legilis.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

int gundam_legilis_bits_spawn_script_pointers[500];
bool is_gundam_legilis_bits_initialized = false;

unsigned int gundam_legilis_bits_spawn_model_hash()
{
    return 0x1779E5C9;
}

void gundam_legilis_bits_spawn()
{
    _DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

    char list[4];
    list[0] = -1;
    list[1] = 0;
    const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
    const unsigned int result = GameCall<int>(0x7D9E7C, 0xd8fe60)(reinterpret_cast<uint32*>(temp_memory_ptr), 0xCA3);
	
    if (is_gundam_legilis_bits_initialized == false) {
        copyJumptable(reinterpret_cast<int*>(0xCAE4F8), gundam_legilis_bits_spawn_script_pointers);
        gundam_legilis_bits_spawn_script_pointers[58] = reinterpret_cast<int>(gundam_legilis_bits_spawn_model_hash);
        is_gundam_legilis_bits_initialized = true;
    }

    const unsigned int script_pointer = reinterpret_cast<unsigned int>(gundam_legilis_bits_spawn_script_pointers);
    *reinterpret_cast<unsigned int*>(temp_memory_ptr) = script_pointer;
    *reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x44f0) = 0xCAE478;
    *reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x44f0 + 4) = temp_memory_ptr;
    
    *reinterpret_cast<float*>(temp_memory_ptr + 0x44e0) = 0.0f;
    *reinterpret_cast<float*>(temp_memory_ptr + 4) = 0.0f;
    *reinterpret_cast<float*>(temp_memory_ptr + 8) = 0.0f;
    *reinterpret_cast<float*>(temp_memory_ptr + 12) = 1.0f;

    *r3_pointer = temp_memory_ptr;
    temp_registers[3] = result;
}

unsigned int gundam_legilis_fawn_farsia_spawn_model_hash()
{
	return 0x69C7196D;
}

int gundam_legilis_gerobi_assist_spawn_script_pointers[500];
bool is_gundam_legilis_gerobi_assist_initialized = false;

void gundam_legilis_gerobi_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);
}

void gundam_legilis_gerobi_assist_spawn_script(__int64 a1, unsigned int *a2, unsigned int a3)
{
	const int recoil_animation_index = 1;
	const int loop_animation_index = 2;
	
	const unsigned int working_memory = create_working_memory(24);
	GameCall<int>(0x6D54A0, 0xD7FF30)(static_cast<unsigned int>(working_memory));
	
	*reinterpret_cast<uint32*>(working_memory) = 0xC85418;
	*reinterpret_cast<uint32*>(working_memory + 16) = a3;
	*reinterpret_cast<uint32*>(working_memory + 20) = -241;

	execute_working_memory(a2, working_memory);
	
	const unsigned int working_animation_memory = create_working_memory(56);
	GameCall<int>(0x6EB9F0, 0xD7FF30)(static_cast<unsigned int>(working_animation_memory), a3, recoil_animation_index, loop_animation_index, -1);
	
	*reinterpret_cast<uint32*>(working_animation_memory + 44) = 1;
	*reinterpret_cast<uint32*>(working_animation_memory + 48) = 1;

	execute_working_memory(a2, working_animation_memory);
	
	const unsigned int working_projectile_memory = create_working_memory(156);
	GameCall<int>(0x6F819C, 0xD7FF30)(working_projectile_memory);
	add_projectile(working_projectile_memory, 0x7155C866, a3);
	execute_working_memory(a2, working_projectile_memory);
}

unsigned int gundam_legilis_gerobi_assist_aim_animation_index()
{
	return 0;
}

unsigned int gundam_legilis_gerobi_assist_main(_DWORD* a1)
{
	if (is_gundam_legilis_gerobi_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xcd5a00), gundam_legilis_gerobi_assist_spawn_script_pointers);
		gundam_legilis_gerobi_assist_spawn_script_pointers[37] = reinterpret_cast<int>(gundam_legilis_gerobi_assist_spawn_model_effects);
		gundam_legilis_gerobi_assist_spawn_script_pointers[58] = reinterpret_cast<int>(gundam_legilis_fawn_farsia_spawn_model_hash);
		gundam_legilis_gerobi_assist_spawn_script_pointers[156] = reinterpret_cast<int>(gundam_legilis_gerobi_assist_aim_animation_index);
		gundam_legilis_gerobi_assist_spawn_script_pointers[158] = reinterpret_cast<int>(gundam_legilis_gerobi_assist_spawn_script);
		is_gundam_legilis_gerobi_assist_initialized = true;
	}
	
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(gundam_legilis_gerobi_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void gundam_legilis_gerobi_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = gundam_legilis_gerobi_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int gundam_legilis_funnel_assist_spawn_script_pointers[500];
bool is_gundam_legilis_funnel_assist_initialized = false;

void gundam_legilis_funnel_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);

	// hide the 5 funnels
	hide_bone(a1, 0x20);
	hide_bone(a1, 0x22);
	hide_bone(a1, 0x24);
	hide_bone(a1, 0x26);
	hide_bone(a1, 0x28);
}

void gundam_legilis_funnel_assist_spawn_script(__int64 a1, unsigned int *a2, unsigned int a3)
{
	const unsigned int working_projectile_memory = create_working_memory(156);
	GameCall<int>(0x6F819C, 0xD7FF30)(working_projectile_memory);

	// shoot funnels
	add_projectile(working_projectile_memory, 0xE2DD663D, a3);
	add_projectile(working_projectile_memory, 0xC9F035FE, a3);
	add_projectile(working_projectile_memory, 0xD0EB04BF, a3);
	add_projectile(working_projectile_memory, 0x9FAA9278, a3);
	add_projectile(working_projectile_memory, 0x86B1A339, a3);

	execute_working_memory(a2, working_projectile_memory);
}

unsigned int gundam_legilis_funnel_assist_initial_animation_index()
{
	return 4;
}

unsigned int gundam_legilis_funnel_assist_launch_animation_index()
{
	return 5;
}

unsigned int gundam_legilis_funnel_assist_main(_DWORD* a1)
{
	if (is_gundam_legilis_funnel_assist_initialized == false) {
		// taken from gaia gundam's funnel assist
		copyJumptable(reinterpret_cast<int*>(0xCF8D08), gundam_legilis_funnel_assist_spawn_script_pointers);
		gundam_legilis_funnel_assist_spawn_script_pointers[37] = reinterpret_cast<int>(gundam_legilis_funnel_assist_spawn_model_effects);
		gundam_legilis_funnel_assist_spawn_script_pointers[58] = reinterpret_cast<int>(gundam_legilis_fawn_farsia_spawn_model_hash);
		gundam_legilis_funnel_assist_spawn_script_pointers[155] = reinterpret_cast<int>(gundam_legilis_funnel_assist_initial_animation_index);
		gundam_legilis_funnel_assist_spawn_script_pointers[156] = reinterpret_cast<int>(gundam_legilis_funnel_assist_launch_animation_index);
		gundam_legilis_funnel_assist_spawn_script_pointers[158] = reinterpret_cast<int>(gundam_legilis_funnel_assist_spawn_script);
		is_gundam_legilis_funnel_assist_initialized = true;
	}
	
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(gundam_legilis_funnel_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void gundam_legilis_funnel_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = gundam_legilis_funnel_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int gundam_legilis_fawn_farsia_funnel_spawn_script_pointers[500];
bool is_gundam_legilis_fawn_farsia_funnel_initialized = false;

unsigned int gundam_legilis_fawn_farsia_funnel_spawn_model_effects(unsigned int *a1, __int64 a2)
{
	GameCall<int>(0x7D8A9C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);

    const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a1 + 0x60));
	const unsigned int result = GameCall<unsigned int>(*script_func_ptr, script_func_ptr[1])(reinterpret_cast<unsigned int>(a1));
	
	const unsigned int script_func_ptr_2 =
		*reinterpret_cast<unsigned int*>(
			*reinterpret_cast<unsigned int*>(
				*reinterpret_cast<unsigned int*>(
					result + static_cast<long long>(28 * *reinterpret_cast<uint32*>(result + 0x98CLL)) + 4)
				+ 0xCLL)
			+ 0xCLL);

	int opd[2] = { 0x6AF0CC, 0xD7FF30 };
	return reinterpret_cast<int(*)(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, double a6, unsigned int a7, double a8)>(&opd)(
		reinterpret_cast<uint32>(a1) + 0x3A0C, script_func_ptr_2, 1, 0.0f, 0.0f, 0.0f, 0, 0.0f
	);
}

unsigned int gundam_legilis_fawn_farsia_funnel_spawn_model_hash()
{
	return 0xE5F4764A;
}

unsigned int gundam_legilis_fawn_farsia_funnel_spawn_main(_DWORD* a1)
{
	if (is_gundam_legilis_fawn_farsia_funnel_initialized == false) {
		// taken from char's gelgoog's funnel assist
		copyJumptable(reinterpret_cast<int*>(0xCBAB78), gundam_legilis_fawn_farsia_funnel_spawn_script_pointers);
		// gundam_legilis_fawn_farsia_funnel_spawn_script_pointers[37] = reinterpret_cast<int>(gundam_legilis_fawn_farsia_funnel_spawn_model_effects);
		gundam_legilis_fawn_farsia_funnel_spawn_script_pointers[58] = reinterpret_cast<int>(gundam_legilis_fawn_farsia_funnel_spawn_model_hash);
		is_gundam_legilis_fawn_farsia_funnel_initialized = true;
	}
	
	GameCall<int>(0x7D9F08, 0xd8fe60)(a1, 0x500);
	const unsigned int result = reinterpret_cast<unsigned int>(gundam_legilis_fawn_farsia_funnel_spawn_script_pointers);
	*a1 = result;
	*reinterpret_cast<uint32*>(reinterpret_cast<uint32>(a1) + 0x44e0) = 0xCBAAF0;
	*reinterpret_cast<uint32*>(reinterpret_cast<uint32>(a1) + 0x44e0 + 4LL) = reinterpret_cast<uint32>(a1);
	
	return result;
}

void gundam_legilis_fawn_farsia_funnel_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = gundam_legilis_fawn_farsia_funnel_spawn_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}