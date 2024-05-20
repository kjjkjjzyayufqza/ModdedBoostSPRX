#include "gundam_x_divider.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

int x_divider_melee_assist_spawn_script_pointers[500];
bool is_x_divider_melee_assist_initialized = false;

void x_divider_melee_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	const unsigned int toc = 0xdafdfc;

	GameCall<int>(0x9F4108, toc)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x9F4118, toc)(reinterpret_cast<unsigned int>(a1), saber_green_effect_hash, 0x21, 0);
	GameCall<int>(0x9F44E8, toc)(reinterpret_cast<unsigned int>(a1), a2);

	// hide twin bazookas
	hide_bone(a1, 0x2a);
	hide_bone(a1, 0x2b);

	// hide beam rifle
	hide_bone(a1, 0x1e);
	
	// this cheeky bone ATH_S_BSPAT is just weighted against the back side of the wings,
	// if we hide it it'll retain the original non deployed version
	hide_bone(a1, 0x30); 
}

unsigned int x_divider_double_x_assist_spawn_model_hash()
{
	return 0xABA01107;
}

unsigned int x_divider_melee_assist_spawn_animation_1()
{
	return 0x4;
}

unsigned int x_divider_melee_assist_spawn_animation_2()
{
	return 0x5;
}

unsigned int x_divider_melee_assist_spawn_animation_3()
{
	return 0x6;
}

unsigned int x_divider_melee_assist_spawn_animation_4()
{
	return 0x7;
}

unsigned int x_divider_melee_assist_main(_DWORD* a1)
{
	if (is_x_divider_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD1D500), x_divider_melee_assist_spawn_script_pointers);
		x_divider_melee_assist_spawn_script_pointers[37] = reinterpret_cast<int>(x_divider_melee_assist_spawn_model_effects);
		x_divider_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(x_divider_double_x_assist_spawn_model_hash);
		x_divider_melee_assist_spawn_script_pointers[156] = reinterpret_cast<int>(x_divider_melee_assist_spawn_animation_1);
		x_divider_melee_assist_spawn_script_pointers[168] = reinterpret_cast<int>(x_divider_melee_assist_spawn_animation_2);
		x_divider_melee_assist_spawn_script_pointers[169] = reinterpret_cast<int>(x_divider_melee_assist_spawn_animation_3);
		x_divider_melee_assist_spawn_script_pointers[176] = reinterpret_cast<int>(x_divider_melee_assist_spawn_animation_4);
		is_x_divider_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(x_divider_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void x_divider_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = x_divider_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int x_divider_shoot_assist_spawn_script_pointers[500];
bool is_x_divider_shoot_assist_initialized = false;

void x_divider_shoot_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	const unsigned int toc = 0xdafdfc;

	GameCall<int>(0x9F4108, toc)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x9F44E8, toc)(reinterpret_cast<unsigned int>(a1), a2);

	// hide twin bazookas
	hide_bone(a1, 0x2a);
	hide_bone(a1, 0x2b);

	// hide beam saber
	hide_bone(a1, 0x20);
	
	// this cheeky bone ATH_S_BSPAT is just weighted against the back side of the wings,
	// if we hide it it'll retain the original non deployed version
	hide_bone(a1, 0x30); 
}

void x_divider_shoot_assist_aim_animation_script(unsigned int a1, unsigned int *a2)
{
	// The animation index should be the same as the aim animation index
	assist_shoot_initial_animation_script(a1, a2, 0xdafdfc, 0x9, 1.57f);
}

unsigned int x_divider_shoot_assist_aim_animation_index()
{
	return 0x9;
}

unsigned int x_divider_shoot_assist_loop_animation_index()
{
	return 0xa;
}

unsigned int x_divider_shoot_assist_main(_DWORD* a1)
{
	if (is_x_divider_shoot_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xd1a5b0), x_divider_shoot_assist_spawn_script_pointers);
		x_divider_shoot_assist_spawn_script_pointers[37] = reinterpret_cast<int>(x_divider_shoot_assist_spawn_model_effects);
		x_divider_shoot_assist_spawn_script_pointers[58] = reinterpret_cast<int>(x_divider_double_x_assist_spawn_model_hash);
		x_divider_shoot_assist_spawn_script_pointers[144] = reinterpret_cast<int>(x_divider_shoot_assist_aim_animation_index); // aiming animation
		x_divider_shoot_assist_spawn_script_pointers[165] = reinterpret_cast<int>(x_divider_shoot_assist_aim_animation_script); // initial animation script
		x_divider_shoot_assist_spawn_script_pointers[167] = reinterpret_cast<int>(x_divider_shoot_assist_loop_animation_index); // looping shoot animation
		is_x_divider_shoot_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(x_divider_shoot_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void x_divider_shoot_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = x_divider_shoot_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int x_divider_gerobi_assist_spawn_script_pointers[500];
bool is_x_divider_gerobi_assist_initialized = false;

void x_divider_gerobi_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	const unsigned int toc = 0xdafdfc;

	GameCall<int>(0x9F4108, toc)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x9F44E8, toc)(reinterpret_cast<unsigned int>(a1), a2);

	unsigned int debug = 0xDEEDBEAF;
	
	// position twin bazookas
	rotate_bone(a1, 0x2a, -3.14159f, -3.14159f, 1.5708f, 1.0f, 0);
	rotate_bone(a1, 0x2b, -3.14159f, -3.14159f, 1.5708f, 1.0f, 0);

	// hide beam saber
	hide_bone(a1, 0x20);

	// hide twin bazookas (un-deployed)
	hide_bone(a1, 0x31);
}

unsigned int x_divider_gerobi_assist_aim_animation_index()
{
	return 12;
}

unsigned int x_divider_gerobi_assist_recoil_animation_index()
{
	return 13;
}

unsigned int x_divider_gerobi_assist_main(_DWORD* a1)
{
	if (is_x_divider_gerobi_assist_initialized == false) {
		// 00 Quanta's Zabanya gerobi assist
		// This gerobi type is different, instead of shooting standstill after beam has fired, this has a recoil animation
		copyJumptable(reinterpret_cast<int*>(0xcd5a00), x_divider_gerobi_assist_spawn_script_pointers);
		x_divider_gerobi_assist_spawn_script_pointers[37] = reinterpret_cast<int>(x_divider_gerobi_assist_spawn_model_effects);
		x_divider_gerobi_assist_spawn_script_pointers[58] = reinterpret_cast<int>(x_divider_double_x_assist_spawn_model_hash);
		x_divider_gerobi_assist_spawn_script_pointers[156] = reinterpret_cast<int>(x_divider_gerobi_assist_aim_animation_index);

		// TODO: properly implement the initial delay before firing, for now to make it not crash we'll use the normal gerobi script
		// The original 0x00D4BF70 points to 0x88C268, and the crashing is caused by the custom projectile defined in r2 at 0x88c3d8, which points to 0xB4AA94
		x_divider_gerobi_assist_spawn_script_pointers[158] = 0x00D42550;
		x_divider_gerobi_assist_spawn_script_pointers[162] = reinterpret_cast<int>(x_divider_gerobi_assist_recoil_animation_index);
		
		// x_divider_gerobi_assist_spawn_script_pointers[157] = reinterpret_cast<int>(x_divider_gerobi_assist_animation_script);
		is_x_divider_gerobi_assist_initialized = true;
	}
	
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(x_divider_gerobi_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void x_divider_gerobi_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = x_divider_gerobi_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}