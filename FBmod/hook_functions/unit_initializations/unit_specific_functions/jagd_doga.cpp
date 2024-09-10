#include "jagd_doga.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/projectile_system/projectile_common.h"
#include "hook_functions/unit_initializations/unit_initialization_common.h"

int jagd_doga_unit_initializations_func_scripts[16]; // Size is always 0x40
bool is_jagd_doga_unit_initializations_func_scripts_initialized = false;

int jagd_doga_unit_main_memory_region_func_scripts[68];
bool is_jagd_doga_unit_main_memory_region_func_scripts_initialized = false;

// 0x121a2a4
void jagd_doga_funnel_initial_placement(unsigned int *a1)
{
	const unsigned int jagd_doga_main_model_hash = 0xB99AE916;
	const unsigned int jagd_doga_left_shoulder_model_hash = 0x771f5545;
	const unsigned int jagd_doga_right_shoulder_model_hash = 0x92366BA7;
	const unsigned int jagd_doga_funnel_1_model_hash = 0xF5D0CC74;
	const unsigned int jagd_doga_funnel_2_model_hash = 0xE95F4218;
	const unsigned int jagd_doga_funnel_3_model_hash = 0xA98D3BD4;
	const unsigned int jagd_doga_funnel_4_model_hash = 0x16F3BD9C;
	const unsigned int jagd_doga_funnel_5_model_hash = 0x98944DF7;
	const unsigned int jagd_doga_funnel_6_model_hash = 0xAA08C929;
	
	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a1 + 0x5CLL));
	const unsigned int working_memory = GameCall<unsigned int>(*script_func_ptr, script_func_ptr[1])(reinterpret_cast<unsigned int>(a1));

	// these are the constant models that are attached to the hands and main bone, for some reason
	GameCall<void>(0x6BB2B4, 0xD7FF30)(working_memory, 0x9823D7DALL, jagd_doga_main_model_hash, 0xCLL);
	GameCall<void>(0x6BB2B4, 0xD7FF30)(working_memory, 0x9823D7DALL, jagd_doga_main_model_hash, 8LL);
	GameCall<void>(0x6BB2B4, 0xD7FF30)(working_memory, 0xF633964ELL, jagd_doga_main_model_hash, 1LL);

	const unsigned int attachable_working_memory = reinterpret_cast<uint32>(a1) + 0x11800;
	GameCall<void>(0x709FD4, 0xD7FF30)(attachable_working_memory, a1[15], jagd_doga_funnel_1_model_hash, jagd_doga_left_shoulder_model_hash, 0x5LL);
	GameCall<void>(0x709FD4, 0xD7FF30)(attachable_working_memory, a1[15], jagd_doga_funnel_2_model_hash, jagd_doga_left_shoulder_model_hash, 0x6LL);
	GameCall<void>(0x709FD4, 0xD7FF30)(attachable_working_memory, a1[15], jagd_doga_funnel_3_model_hash, jagd_doga_left_shoulder_model_hash, 0x7LL);
	GameCall<void>(0x709FD4, 0xD7FF30)(attachable_working_memory, a1[15], jagd_doga_funnel_4_model_hash, jagd_doga_right_shoulder_model_hash, 0x5LL);
	GameCall<void>(0x709FD4, 0xD7FF30)(attachable_working_memory, a1[15], jagd_doga_funnel_5_model_hash, jagd_doga_right_shoulder_model_hash, 0x6LL);
	GameCall<void>(0x709FD4, 0xD7FF30)(attachable_working_memory, a1[15], jagd_doga_funnel_6_model_hash, jagd_doga_right_shoulder_model_hash, 0x7LL);
}

int jagd_doga_funnel_model_hash_count()
{
	return 0x6;
}

unsigned int jagd_doga_funnel_model_hash(unsigned int a1, int a2)
{
	switch (a2)
	{
		case 1:
			return 0xF5D0CC74;
		case 2:
			return 0xE95F4218;
		case 3:
			return 0xA98D3BD4;
		case 4:
			return 0x16F3BD9C;
		case 5:
			return 0x98944DF7;
		default:
			return 0xAA08C929;
	}
}

// derived from 0x59A9B8, sazabi's initialization
void jagd_doga_funnel_model_initialization(unsigned int* working_pointer)
{
	const unsigned int jagd_doga_main_model_hash = 0xB99AE916;
	
	const unsigned int working_memory = reinterpret_cast<uint32>(working_pointer) + 0x10000;
	GameCall<void>(0x576E7C, 0xD7FF30)(reinterpret_cast<uint32*>(reinterpret_cast<unsigned int>(working_pointer)));

	// default (taken from Gundam Mk-II) 0xc78200, but the differences can be done by comparing Sazabi's 0xc78860
	if (is_jagd_doga_unit_main_memory_region_func_scripts_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xc78200), jagd_doga_unit_main_memory_region_func_scripts);
		jagd_doga_unit_main_memory_region_func_scripts[45] = reinterpret_cast<int>(jagd_doga_funnel_initial_placement);
		jagd_doga_unit_main_memory_region_func_scripts[57] = reinterpret_cast<int>(jagd_doga_funnel_model_hash_count);
		jagd_doga_unit_main_memory_region_func_scripts[58] = reinterpret_cast<int>(jagd_doga_funnel_model_hash);
		is_jagd_doga_unit_main_memory_region_func_scripts_initialized = true;
	}

	*working_pointer = reinterpret_cast<int>(jagd_doga_unit_main_memory_region_func_scripts);
	// working_pointer[315] = 42;
	// working_pointer[144] = 2;
	
	// no idea what this is, but using the above 2 will cause the unit to not aim at all
	working_pointer[164] = 2;
	
	const unsigned int working_memory_offset = working_memory + 8620;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x8LL) = 6;
	*reinterpret_cast<uint32*>(working_memory_offset + 0xCLL) = 10;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x10LL) = -10;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x14LL) = 10;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x18LL) = 10;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x1CLL) = -10;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x20LL) = 22;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x24LL) = 10;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x28LL) = -10;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x2CLL) = 18;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x30LL) = 10;
	*reinterpret_cast<uint32*>(working_memory_offset + 0x34LL) = -10;

	const unsigned int working_memory_offset_2 = working_memory + 8960;
	GameCall<void>(0x6A1DDC, 0xD7FF30)(working_memory_offset_2, 0, jagd_doga_main_model_hash, 3, 16, 17, 18, 19, 0);
	GameCall<void>(0x6A1DDC, 0xD7FF30)(working_memory_offset_2, 1, jagd_doga_main_model_hash, 2, 20, 21, 22, 23, 0);
	
	const unsigned int working_memory_offset_3 = working_memory + 5856;
	initialize_model(working_memory_offset_3, 0LL, jagd_doga_main_model_hash, 4LL, 0.300000011920929f);
	initialize_model(working_memory_offset_3, 1LL, jagd_doga_main_model_hash, 14LL, 0.200000002980232f);

	// only found in Sazabi's unit initialization, will load 05 type models
	initialize_model(working_memory_offset_3, 2LL, jagd_doga_main_model_hash, 42LL, 1.0f, 0.0f, 0.0f, -1.39626336097717f, 1.39626336097717f);
}

// 0x4DEC60
unsigned int jagd_doga_model_initialization(const unsigned int a1)
{
	char v5[84];
	
	GameCall<int>(0x4DE430, 0xd6ff70)(v5);
	GameCall<int>(0xB176B8, 0xd6ff70)(static_cast<int>(a1), v5);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	unsigned int working_pointer = GameCall<unsigned int>(0xB176C8, 0xd6ff70)(0x2B900LL, 128LL, list);
	// GameCall<unsigned int>(0x596C0C, 0xD7FF30)(reinterpret_cast<unsigned int*>(working_pointer), 0xB99AE916); // original
	jagd_doga_funnel_model_initialization(reinterpret_cast<unsigned int*>(working_pointer));
	
	const unsigned int* script_func_ptr =
		reinterpret_cast<unsigned int*>(
			*reinterpret_cast<unsigned int*>(
				*reinterpret_cast<unsigned int*>(working_pointer) + 0x78LL)
		);
	GameCall<void>(*script_func_ptr, script_func_ptr[1])(working_pointer, v5);
	*reinterpret_cast<uint32*>(a1 + 4) = working_pointer;

	return GameCall<unsigned int>(0x4DE424, 0xd6ff70)(v5);
}

unsigned int jagd_doga_initialize(const unsigned long a1)
{
	// taken from sazabi (0xC73E38)
	if (is_jagd_doga_unit_initializations_func_scripts_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xc73cb8), jagd_doga_unit_initializations_func_scripts);
		jagd_doga_unit_initializations_func_scripts[6] = reinterpret_cast<int>(jagd_doga_model_initialization);
		is_jagd_doga_unit_initializations_func_scripts_initialized = true;
	}
	
	short temp = -256;
	const unsigned int working_memory = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &temp, HIDWORD(a1));
	
	*reinterpret_cast<uint32*>(working_memory) = reinterpret_cast<int>(jagd_doga_unit_initializations_func_scripts);
	*reinterpret_cast<uint32*>(working_memory + 4) = 0;
	*reinterpret_cast<uint32*>(working_memory + 8) = 0;
	*reinterpret_cast<uint32*>(working_memory + 12) = 0;
	*reinterpret_cast<uint32*>(working_memory + 16) = 0;
	*reinterpret_cast<uint32*>(working_memory + 20) = 0;
	*reinterpret_cast<uint32*>(working_memory + 24) = *reinterpret_cast<int*>(HIDWORD(a1));
	*reinterpret_cast<uint8*>(working_memory + 32) = 0;
	*reinterpret_cast<uint32*>(working_memory + 28) = 0;
	*reinterpret_cast<uint32*>(working_memory + 36) = 0;
	*reinterpret_cast<uint8*>(working_memory + 40) = 0;
	*reinterpret_cast<uint32*>(working_memory + 44) = 0;
	*reinterpret_cast<uint32*>(working_memory + 48) = 0;
	*reinterpret_cast<uint32*>(working_memory + 52) = -1;
	*reinterpret_cast<uint32*>(working_memory + 64) = 0;
	*reinterpret_cast<uint32*>(working_memory + 68) = 0;
	*reinterpret_cast<uint32*>(working_memory + 72) = 0;
	*reinterpret_cast<float*>(working_memory + 76) = 1.0f;
	*reinterpret_cast<uint32*>(working_memory + 80) = 0;
	*reinterpret_cast<uint32*>(working_memory + 84) = 0;
	*reinterpret_cast<uint32*>(working_memory + 88) = 0;
	*reinterpret_cast<float*>(working_memory + 92) = 1.0f;
	*reinterpret_cast<uint32*>(working_memory + 96) = 0;
	*reinterpret_cast<uint32*>(working_memory + 100) = 0;
	
	GameCall<int>(0xaa364c, 0xd6ff70)(working_memory, 16);
	return working_memory;
}
