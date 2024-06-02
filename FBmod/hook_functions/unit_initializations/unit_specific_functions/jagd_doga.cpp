#include "jagd_doga.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"

int jagd_doga_unit_initializations_func_scripts[16]; // Size is always 0x40
bool is_jagd_doga_unit_initializations_func_scripts_initialized = false;

int jagd_doga_unit_main_memory_region_func_scripts[68];
bool is_jagd_doga_unit_main_memory_region_func_scripts_initialized = false;

int jagd_doga_funnel_initialization_scripts[500];
bool is_jagd_doga_funnel_initialization_scripts_initialized = false;

int jagd_doga_funnel_model_hash_count()
{
	return 0x6;
}

int jagd_doga_funnel_model_hash()
{
	return 0x3A77FF70;
}

unsigned int jagd_doga_funnel_model_initialization(unsigned int *working_pointer)
{
	const unsigned int jagd_doga_main_model_hash = 0xB99AE916;
	
	const unsigned int working_memory = reinterpret_cast<uint32>(working_pointer) + 0x10000;
	unsigned int* working_pointer_offset = reinterpret_cast<unsigned int*>(reinterpret_cast<uint32>(working_pointer) + 20);

	GameCall<void>(0x576E7C, 0xD7FF30)(reinterpret_cast<unsigned int>(working_pointer));
	
	if (is_jagd_doga_funnel_initialization_scripts_initialized == false) {
		// the main func that'll fetch the model hash to be used for funnel
		copyJumptable(reinterpret_cast<int*>(0xC78860), jagd_doga_funnel_initialization_scripts);
		jagd_doga_funnel_initialization_scripts[57] = reinterpret_cast<unsigned int>(jagd_doga_funnel_model_hash_count);
		jagd_doga_funnel_initialization_scripts[58] = reinterpret_cast<unsigned int>(jagd_doga_funnel_model_hash);
		is_jagd_doga_funnel_initialization_scripts_initialized = true;
	}
	*working_pointer = reinterpret_cast<unsigned int>(jagd_doga_funnel_initialization_scripts); 
	
	working_pointer_offset[315] = 42;
	working_pointer_offset[144] = 2;

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

	GameCall<void>(0x6A1DDC, 0xD7FF30)(working_memory_offset, 0, jagd_doga_main_model_hash, 3, 16, 17, 18, 19, 0);
	GameCall<void>(0x6A1DDC, 0xD7FF30)(working_memory_offset, 1, jagd_doga_main_model_hash, 2, 20, 21, 22, 23, 0);
	
	const unsigned int working_memory_offset_2 = working_memory + 5856;
	const float float_1 = 1.570796251297f;
	const float float_2 = -3.14159250259399f;
	const float float_3 = -1.570796251297f;
	const float float_4 = 3.14159250259399f;
	const float float_5 = 0.400000005960464f;
	const float float_6 = 0.200000002980232f;
	const float float_7 = 1.0f;
	GameCall<unsigned int>(0x9EC518, 0xD7FF30)(working_memory_offset_2, 0LL, jagd_doga_main_model_hash, 4LL, float_5, float_3, float_1, float_2, float_4);
	GameCall<unsigned int>(0x9EC518, 0xD7FF30)(working_memory_offset_2, 1LL, jagd_doga_main_model_hash, 14LL, float_6, float_3, float_1, float_2, float_4);
	return GameCall<unsigned int>(0x9EC518, 0xD7FF30)(
			 working_memory_offset_2,
			 2LL,
			 jagd_doga_main_model_hash,
			 42LL,
			 float_7,
			 0.0f,
			 0.0f,
			 -1.39626336097717f,
			 1.39626336097717f);
}

// 0x4DEC60
unsigned int jagd_doga_model_initialization(const unsigned int a1)
{
	// one of the weirder decompilation, the args needs to be loaded from r1, and usually it is not "retrievable" from decompiled code
	const unsigned int v1 = temp_registers[1];
	const unsigned int r1_offset = v1 + 116;
	
	GameCall<int>(0x4DE430, 0xd6ff70)(r1_offset);
	GameCall<int>(0xB176B8, 0xd6ff70)(static_cast<unsigned int>(a1), r1_offset);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int* working_pointer = reinterpret_cast<unsigned int*>(GameCall<int>(0xB176C8, 0xd6ff70)(0x2B900LL, 128LL, list));
	GameCall<void>(0x9EA848, 0xd6ff70)(working_pointer);
	
	const unsigned int* script_func_ptr =
		reinterpret_cast<unsigned int*>(
			*reinterpret_cast<unsigned int*>(
				*working_pointer + 0x78LL)
		);
	GameCall<unsigned int>(*script_func_ptr, script_func_ptr[1])(reinterpret_cast<unsigned int>(working_pointer), r1_offset);
	*reinterpret_cast<uint32*>(a1 + 4) = reinterpret_cast<uint32>(working_pointer);
	return GameCall<unsigned int>(0x4DE424, 0xd6ff70)(reinterpret_cast<uint32*>(r1_offset));
}

unsigned int jagd_doga_initialize(const unsigned long a1)
{
	// fill default (taken from Gundam Mk-II) 0xc78200
	if (is_jagd_doga_unit_main_memory_region_func_scripts_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xc78200), jagd_doga_unit_main_memory_region_func_scripts);
		is_jagd_doga_unit_main_memory_region_func_scripts_initialized = true;
	}

	// taken from sazabi (0xc73cb8)
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
