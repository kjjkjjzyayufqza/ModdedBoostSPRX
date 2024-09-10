#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int excellia_boomerang_spawn_script_pointers[500];

bool excellia_boomerang_spawn_script_pointers_initialized;

void excellia_boomerang_spawn_model_hash()
{
	int hash = 0xF382F15D;
}

//0120e92c
__int64 sub_80C6E4_Excellia(unsigned int *a1)
{
	GameCall<int>(0x9F2518, 0xd9fe1c)(a1);
	GameCall<int>(0x9F21B8, 0xd9fe1c)((__int64)a1, 2u);
	GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, 0x91315D18, 2u, -1);
	return GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, 0xAA65448E, 3u, -1); // originally 2411CB3B
}

__int64 sub_8F9068(_DWORD *a1)
{
	if (excellia_boomerang_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xcf3170, excellia_boomerang_spawn_script_pointers);
		excellia_boomerang_spawn_script_pointers_initialized = true;

		/*excellia_boomerang_spawn_script_pointers[37] = (int)sub_80C6E4_Excellia; */// 8f8f7c
		excellia_boomerang_spawn_script_pointers[58] = (int)excellia_boomerang_spawn_model_hash;
	}

	__int64 result; // r3

	GameCall<int>(0x9F2538, 0xd9fe1c)(a1, 15510LL);
	result = (unsigned int)excellia_boomerang_spawn_script_pointers;
	*a1 = (unsigned int)excellia_boomerang_spawn_script_pointers;

	return result;
}

void excellia_boomerang_spawn() // originally lacus infinite justice's boomerang, 0x5596, 0x7D2604
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	unsigned int v34;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v34 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2175);
	result = sub_8F9068((_DWORD *)v34); // 0xd9fe1c
	*v2 = v34;

	// set return
	temp_registers[3] = result;
}

int excellia_link_rephaser_spawn_script_pointers[500];
bool is_excellia_link_rephaser_initialized = false;

unsigned int excellia_link_rephaser_spawn_model_hash()
{
	return 0xB84A01D0;
}

unsigned int excellia_link_rephaser_main(_DWORD* a1)
{
	if (is_excellia_link_rephaser_initialized == false) {
		// taken from gaia gundam's funnel assist
		copyJumptable(reinterpret_cast<int*>(0xCD0D68), excellia_link_rephaser_spawn_script_pointers);
		excellia_link_rephaser_spawn_script_pointers[58] = reinterpret_cast<int>(excellia_link_rephaser_spawn_model_hash);
		is_excellia_link_rephaser_initialized = true;
	}
	
	GameCall<int>(0x9F2228, 0xD9FE1C)(a1, 80300);
	const unsigned int result = reinterpret_cast<unsigned int>(excellia_link_rephaser_spawn_script_pointers);
	*a1 = result;
	a1[54] = 7;
	
	return result;
}

// Circular ice projectile 
void excellia_link_rephaser_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = excellia_link_rephaser_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

unsigned int excellia_shield_bits_spawn_model_hash()
{
	return 0xB7823D2F;
}

int excellia_shield_bits_spawn_script_pointers[500];
bool is_excellia_shield_bits_initialized = false;

// TODO: This is unusable since the game will crash trying to read the unit's model hash to "attach" the shield bits to.
// The only way to set the shield bits to yourself is to initialize the model hash when the unit is loaded, related to unit_initializations
// That part is quite complex, the only clue to solve it is to refer to Cherudim gundam's hash, which is 0x9D92E7BD located at 0xB46604
// Until that part is done, these bits is unusable
void excellia_shield_bits_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = GameCall<int>(0x7D9E7C, 0xd8fe60)(reinterpret_cast<uint32*>(temp_memory_ptr), 0x13854);
	
	if (is_excellia_shield_bits_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xC96150), excellia_shield_bits_spawn_script_pointers);
		excellia_shield_bits_spawn_script_pointers[58] = reinterpret_cast<int>(excellia_shield_bits_spawn_model_hash);
		is_excellia_shield_bits_initialized = true;
	}

	// 0x420b1808 // 0x4fff29c0 // 0x4fff2960 // 0x9d92e7bd
	// 0x6bc8e0
	const unsigned int script_pointer = reinterpret_cast<unsigned int>(excellia_shield_bits_spawn_script_pointers);
	*reinterpret_cast<unsigned int*>(temp_memory_ptr) = script_pointer;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x44f0) = 0xCBF018;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x44f0 + 4) = temp_memory_ptr;
    
	*reinterpret_cast<float*>(temp_memory_ptr + 0x44e0) = 0.0f;
	*reinterpret_cast<float*>(temp_memory_ptr + 0x44e0 + 0x4) = 0.0f;
	*reinterpret_cast<float*>(temp_memory_ptr + 0x44e0 + 0x8) = 0.0f;
	*reinterpret_cast<float*>(temp_memory_ptr + 0x44e0 + 0xc) = 1.0f;

	*r3_pointer = temp_memory_ptr;
	temp_registers[3] = result;
}

int excellia_ally_shield_bits_spawn_script_pointers[500];
bool is_excellia_ally_shield_bits_initialized = false;

void excellia_ally_shield_bits_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = GameCall<int>(0x7D9E7C, 0xd8fe60)(reinterpret_cast<uint32*>(temp_memory_ptr), 0x13854);
	
	if (is_excellia_ally_shield_bits_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xC963A8), excellia_ally_shield_bits_spawn_script_pointers);
		excellia_ally_shield_bits_spawn_script_pointers[58] = reinterpret_cast<int>(excellia_shield_bits_spawn_model_hash);
		is_excellia_ally_shield_bits_initialized = true;
	}
	
	const unsigned int script_pointer = reinterpret_cast<unsigned int>(excellia_ally_shield_bits_spawn_script_pointers);
	*reinterpret_cast<unsigned int*>(temp_memory_ptr) = script_pointer;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x44f0) = 0xCBEF98;
	*reinterpret_cast<unsigned int*>(temp_memory_ptr + 0x44f0 + 4) = temp_memory_ptr;
    
	*reinterpret_cast<float*>(temp_memory_ptr + 0x44e0) = 0.0f;
	*reinterpret_cast<float*>(temp_memory_ptr + 0x44e0 + 0x4) = 0.0f;
	*reinterpret_cast<float*>(temp_memory_ptr + 0x44e0 + 0x8) = 0.0f;
	*reinterpret_cast<float*>(temp_memory_ptr + 0x44e0 + 0xc) = 1.0f;

	*r3_pointer = temp_memory_ptr;
	temp_registers[3] = result;
}