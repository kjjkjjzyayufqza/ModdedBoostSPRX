#include "g_self.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"
#include "hook_functions/projectile_system/projectile_common.h"

int g_self_melee_assist_spawn_script_pointers[500];
bool is_g_self_melee_assist_initialized = false;

unsigned int g_self_high_tourque_pack_assist_spawn_model_hash()
{
	return 0x8C2CC535;
}

// initial
unsigned int g_self_melee_assist_spawn_animation_1()
{
	return 0x1;
}

// approaching
unsigned int g_self_melee_assist_spawn_animation_2()
{
	return 0x2;
}

// 84A6F4
unsigned int g_self_melee_assist_main(__int64 a1)
{
	if (is_g_self_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xcc0368), g_self_melee_assist_spawn_script_pointers);
		g_self_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(g_self_high_tourque_pack_assist_spawn_model_hash);
		g_self_melee_assist_spawn_script_pointers[155] = reinterpret_cast<int>(g_self_melee_assist_spawn_animation_2);
		g_self_melee_assist_spawn_script_pointers[156] = reinterpret_cast<int>(g_self_melee_assist_spawn_animation_1);
		is_g_self_melee_assist_initialized = true;
	}

	__int64 v1 = a1;

	const unsigned int script_pointers = reinterpret_cast<unsigned int>(g_self_melee_assist_spawn_script_pointers);

	GameCall<int>(0x7EC200, 0xd8fe60)(reinterpret_cast<uint32*>(static_cast<unsigned int>(a1)), 420100);
	*reinterpret_cast<uint32*>(v1) = script_pointers;

	GameCall<int>(0x9F1CA8, 0xd8fe60)(static_cast<unsigned int>(v1 + 18224));
	*reinterpret_cast<uint32*>(a1 + 216) |= 0xFu;

	__int64 result = *reinterpret_cast<unsigned int*>(v1 + 172);
	*reinterpret_cast<uint8*>(v1 + 19024) = 0;
	*reinterpret_cast<uint32*>(v1 + 172) = result | 3;

	return result;
}

void g_self_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = g_self_melee_assist_main(temp_memory_ptr);
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}