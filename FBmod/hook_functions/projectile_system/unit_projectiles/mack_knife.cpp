#include "mack_knife.h"

#include "ida_macros.h"
#include "stdafx.h"
#include "helpers/helpers.h"
#include "hook_functions/registers.h"

int mack_knife_hook_spawn_script_pointers[500];
bool is_mack_knife_hook_initialized = false;

unsigned int mack_knife_hook_spawn_model_hash()
{
    return 0xDC094175;
}

void mack_knife_hook_spawn()
{
    _DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

    char list[4];
    list[0] = -1;
    list[1] = 0;
    const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
    const unsigned int result = GameCall<int>(0x7E83B4, 0xd8fe60)(reinterpret_cast<uint32*>(temp_memory_ptr));
	
    if (is_mack_knife_hook_initialized == false) {
        copyJumptable(reinterpret_cast<int*>(0xcc3018), mack_knife_hook_spawn_script_pointers);
        mack_knife_hook_spawn_script_pointers[58] = reinterpret_cast<int>(mack_knife_hook_spawn_model_hash);
        is_mack_knife_hook_initialized = true;
    }

    const unsigned int script_pointer = reinterpret_cast<unsigned int>(mack_knife_hook_spawn_script_pointers);
    *reinterpret_cast<unsigned int*>(temp_memory_ptr) = script_pointer;

    *r3_pointer = temp_memory_ptr;
    temp_registers[3] = result;
}