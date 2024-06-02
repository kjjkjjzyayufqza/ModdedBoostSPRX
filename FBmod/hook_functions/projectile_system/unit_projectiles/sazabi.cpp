#include "sazabi.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

int sazabi_nuclear_missile_spawn_script_pointers[500];
bool is_sazabi_nuclear_missile_initialized = false;

unsigned int sazabi_nuclear_missile_spawn_model_hash()
{
	return 0x50AA6099;
}

unsigned int sazabi_nuclear_missile_main(_DWORD* a1)
{
	if (is_sazabi_nuclear_missile_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xCE3250), sazabi_nuclear_missile_spawn_script_pointers);
		sazabi_nuclear_missile_spawn_script_pointers[58] = reinterpret_cast<int>(sazabi_nuclear_missile_spawn_model_hash);
		is_sazabi_nuclear_missile_initialized = true;
	}
	
	GameCall<int>(0x9F2228, 0xd9fe1c)(a1, 1580LL);
	const unsigned int result = reinterpret_cast<unsigned int>(sazabi_nuclear_missile_spawn_script_pointers);
	*a1 = result;
	a1[54] = 7; // makes the temp memory read the 0xc8 th hash, (explosion)
	
	return result;
}

void sazabi_nuclear_missile_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = sazabi_nuclear_missile_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int sazabi_funnel_spawn_script_pointers[500];
bool is_sazabi_funnel_initialized = false;

void sazabi_funnel_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = GameCall<int>(0x7D9F08, 0xd8fe60)(reinterpret_cast<uint32*>(temp_memory_ptr), 0x4344);
	
	if (is_sazabi_funnel_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xCA9FF8), sazabi_funnel_spawn_script_pointers);
		is_sazabi_funnel_initialized = true;
	}

	const unsigned int script_pointer = reinterpret_cast<unsigned int>(sazabi_funnel_spawn_script_pointers);
	*reinterpret_cast<unsigned int*>(temp_memory_ptr) = script_pointer;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x44e0) = 0xCA9F70;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x44e0 + 4) = temp_memory_ptr;

	*r3_pointer = temp_memory_ptr;
	temp_registers[3] = result;
}