#include "projectile_common.h"

#include "ida_macros.h"
#include "stdafx.h"

__int64 assist_shoot_projectile(
    const unsigned int *a2,
    const int a3,
    const uint projectile_hash)
{
    char list[4];
    list[0] = -1;
    list[1] = 0;
	
    const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a2 + 0x34LL));
    const unsigned int working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list));
	
    GameCall<int>(0x6D54A0, 0xD7FF30)(static_cast<unsigned int>(working_memory));
	
    // Write to the working memory
    *reinterpret_cast<uint32*>(working_memory) = 0xc83a78;
    *reinterpret_cast<uint32*>(working_memory + 16) = a3;
    *reinterpret_cast<uint32*>(working_memory + 20) = -241;
    *reinterpret_cast<uint32*>(working_memory + 24) = projectile_hash;
	
    return GameCall<__int64>(*script_func_ptr, script_func_ptr[1])(a2, working_memory);
}

__int64 delay(
	const unsigned int *a2,
	const int a3,
	const uint delay_frame)
{
	char list[4];
	list[0] = -1;
	list[1] = 0;
	
	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a2 + 0x34LL));
	const unsigned int working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list));
	
	GameCall<int>(0x6D54A0, 0xD7FF30)(static_cast<unsigned int>(working_memory));
	
	// Write to the working memory
	*reinterpret_cast<uint32*>(working_memory) = 0xc84150;
	*reinterpret_cast<uint32*>(working_memory + 16) = a3;
	*reinterpret_cast<uint32*>(working_memory + 20) = -241;
	*reinterpret_cast<uint32*>(working_memory + 24) = delay_frame;
	
	return GameCall<__int64>(*script_func_ptr, script_func_ptr[1])(a2, working_memory);
}

unsigned int hide_bone(
	const unsigned int* a1,
	const int bone_index)
{
	return scale_bone(a1, bone_index, 0.0, 0.0, 0.0, 0.0, 0);
}

unsigned int rotate_bone(
	const unsigned int* a1, 
	const int bone_index,
	const double x,
	const double y,
	const double z,
	const double w,
	const int unknown)
{
	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a1 + 0x60LL));
	const unsigned int v6 = GameCall<unsigned int>(*script_func_ptr, script_func_ptr[1])(a1);
	
	const unsigned int var1 = static_cast<unsigned int>(reinterpret_cast<int>(a1) + 14860);
	const unsigned int var2 = *reinterpret_cast<unsigned int*>(
		*reinterpret_cast<unsigned int*>(
			*reinterpret_cast<unsigned int*>(
				v6 + static_cast<long long>(
					28 * *reinterpret_cast<uint32*>(v6 + 0x98CLL)
				) + 4
			) + 0xCLL
		) + 0xCLL
	);

	// We need to use this method to properly pass the float into the function, GameCall will incorrectly puts the float at flipped f30 and f29 onwards
	int opd[2] = { 0x9F4138, 0xd8fe60 };

	return reinterpret_cast<int(*)(_DWORD, unsigned int, int, double, double, double, unsigned int, double, int, int)>(&opd)(
		var1, var2, bone_index, x, y, z, unknown, w, -1 , 0
	);
}

unsigned int scale_bone(
	const unsigned int* a1, 
	const int bone_index,
	const double x,
	const double y,
	const double z,
	const double w,
	const int unknown)
{
	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a1 + 0x60LL));
	const unsigned int v6 = GameCall<unsigned int>(*script_func_ptr, script_func_ptr[1])(a1);
	
	const unsigned int var1 = static_cast<unsigned int>(reinterpret_cast<int>(a1) + 14860);
	const unsigned int var2 = *reinterpret_cast<unsigned int*>(
		*reinterpret_cast<unsigned int*>(
			*reinterpret_cast<unsigned int*>(
				v6 + static_cast<long long>(
					28 * *reinterpret_cast<uint32*>(v6 + 0x98CLL)
				) + 4
			) + 0xCLL
		) + 0xCLL
	);

	// We need to use this method to properly pass the float into the function, GameCall will incorrectly puts the float at flipped f30 and f29 onwards
	int opd[2] = { 0x9F40C8, 0x9F40C8 }; // I have no idea why this typo is making this work, but well

	return reinterpret_cast<int(*)(long long, long long, long long, double, double, double, unsigned int, double)>(&opd)(
		var1, var2, bone_index, x, y, z, unknown, w
	);
}

__int64 assist_shoot_initial_animation_script(
	unsigned int a1,
	unsigned int *a2,
	const unsigned int toc,
	const int animation_index,
	const float aim_animation_speed_multiplier)
{
	char list[12];
	list[1] = 0;
	list[0] = -1;
	const unsigned int working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(56LL, reinterpret_cast<long long>(list));
	GameCall<unsigned int>(0x9F44C8, toc)(static_cast<unsigned int>(working_memory), a1, animation_index);

	// Clear 0x2c
	*reinterpret_cast<uint32*>(working_memory + 0x2c) = 0;
	
	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a2 + 0x34LL));
	GameCall<unsigned int>(*script_func_ptr, script_func_ptr[1])(reinterpret_cast<unsigned int>(a2), static_cast<unsigned int>(working_memory));

	char list2[12];
	list2[0] = -1;
	list2[1] = 0;
	const unsigned int working_memory_2 = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list2));
	GameCall<unsigned int>(0x9F40E8, toc)(working_memory_2);

	const unsigned int script = *reinterpret_cast<unsigned int*>(toc - 0x6858);
	
	*reinterpret_cast<uint32*>(working_memory_2) = script;
	*reinterpret_cast<uint32*>(working_memory_2 + 16) = a1;
	*reinterpret_cast<uint32*>(working_memory_2 + 20) = -241;
	*reinterpret_cast<float*>(working_memory_2 + 24) = aim_animation_speed_multiplier;
	
	GameCall<unsigned int>(*script_func_ptr, script_func_ptr[1])(reinterpret_cast<unsigned int>(a2), static_cast<unsigned int>(working_memory_2));
	return GameCall<unsigned int>(0x9F4648, toc)(a1, reinterpret_cast<unsigned int>(a2));
}

unsigned int create_working_memory(int size)
{
	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(size, reinterpret_cast<long long>(list));
	return working_memory;
}

void add_projectile(
	unsigned int working_memory,
	unsigned int projectile_hash,
	unsigned int a3)
{
	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int projectile_working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list));
	GameCall<int>(0x6D54A0, 0xD7FF30)(projectile_working_memory);
	
	*reinterpret_cast<uint32*>(projectile_working_memory) = 0xc83a78;
	*reinterpret_cast<uint32*>(projectile_working_memory + 16) = a3;
	*reinterpret_cast<uint32*>(projectile_working_memory + 20) = -241;
	*reinterpret_cast<uint32*>(projectile_working_memory + 24) = projectile_hash;

	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(
		*reinterpret_cast<unsigned int*>(
				*reinterpret_cast<unsigned int*>(working_memory) + 0x34LL
			)
		);
	GameCall<__int64>(*script_func_ptr, script_func_ptr[1])(working_memory, projectile_working_memory);
}

void add_delay(
	unsigned int working_memory,
	unsigned int delay_frame,
	unsigned int a3)
{
	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int delay_working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list));
	GameCall<int>(0x6D54A0, 0xD7FF30)(delay_working_memory);
	
	*reinterpret_cast<uint32*>(delay_working_memory) = 0xc84150;
	*reinterpret_cast<uint32*>(delay_working_memory + 16) = a3;
	*reinterpret_cast<uint32*>(delay_working_memory + 20) = -241;
	*reinterpret_cast<uint32*>(delay_working_memory + 24) = delay_frame;

	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(
		*reinterpret_cast<unsigned int*>(
				*reinterpret_cast<unsigned int*>(working_memory) + 0x34LL
			)
		);
	GameCall<__int64>(*script_func_ptr, script_func_ptr[1])(working_memory, delay_working_memory);
}

void execute_working_memory(unsigned int* a2, unsigned int working_memory)
{
	const unsigned int* main_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a2 + 0x34LL));
	GameCall<__int64>(*main_func_ptr, main_func_ptr[1])(reinterpret_cast<unsigned int>(a2), working_memory);
}

// A reference to how to configure stuff on the 158th script, where you can chain a lot of stuff together
// Might not be needed in the future, but this is the rosetta stone of understanding how the game runs scripts
// Taken from decompilation of Gaia Gundam's one shot beam assist, 0x91287C, with exception of the shooting loop part
void rosetta_stone_shoot_assist_script(__int64 a1, unsigned int *a2, int a3)
{
	// If we wish to chain stuff together in a shooting animation, like adding ALEO while shooting, we need to configure it based on the working memory
	// Helper function's function is just one off shoot / delay animation, and it ends with calling the a2 + 0x34 script
	// To chain stuff, you need to manually create different working memory region, and chain them together using (working_memory + 0x34) function pointers

	// Creates the main working memory, which will tie everything together at the end
	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(156LL, reinterpret_cast<long long>(list));
	GameCall<int>(0x6F819C, 0xD7FF30)(working_memory);

	// -------------------- Effects configuration -------------------- 
	// This region is for "spawning" effect on the same frame where the projectile comes out
	char list2[4];
	list2[0] = -1;
	list2[1] = 0;
	const unsigned int effect_working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(44LL, reinterpret_cast<long long>(list2));
	GameCall<int>(0x6d54a0, 0xD7FF30)(static_cast<unsigned int>(effect_working_memory));
	
	*reinterpret_cast<uint32*>(effect_working_memory) = 0xC86120;
	*reinterpret_cast<uint32*>(effect_working_memory + 16) = a3;
	*reinterpret_cast<uint32*>(effect_working_memory + 20) = -241;
	*reinterpret_cast<uint32*>(effect_working_memory + 24) = 0xE8384EB9; // Any ALEO effect hash
	*reinterpret_cast<uint32*>(effect_working_memory + 28) = 0;
	*reinterpret_cast<float*>(effect_working_memory + 32) = 1.0f;
	*reinterpret_cast<uint32*>(effect_working_memory + 36) = *reinterpret_cast<uint32*>(a3 + 16);
	*reinterpret_cast<uint32*>(effect_working_memory + 40) = *reinterpret_cast<uint32*>(a1 + 68);

	// To execute the effect configuration above, we need to use working_memory as a base to get the script_func_ptr, which is retrieved like this:
	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(
		*reinterpret_cast<unsigned int*>(
				*reinterpret_cast<unsigned int*>(working_memory) + 0x34LL
			)
		);

	// By passing the effect_working_memory as the 2nd arg, it'll tie the effect with working_memory, or else it won't execute
	GameCall<__int64>(*script_func_ptr, script_func_ptr[1])(working_memory, effect_working_memory);

	// -------------------- Projectile configuration --------------------
	// This region is for "spawning" projectile
	// Note, if you wish to have multiple projectile firing at once with the same configuration, please duplicate this section
	char list_projectile[4];
	list_projectile[0] = -1;
	list_projectile[1] = 0;
	const unsigned int projectile_working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list_projectile));
	GameCall<int>(0x6D54A0, 0xD7FF30)(projectile_working_memory);
	
	// Write to the working memory
	*reinterpret_cast<uint32*>(projectile_working_memory) = 0xc83a78;
	*reinterpret_cast<uint32*>(projectile_working_memory + 16) = a3;
	*reinterpret_cast<uint32*>(projectile_working_memory + 20) = -241;
	*reinterpret_cast<uint32*>(projectile_working_memory + 24) = 0xAD138793; // Any projectile hash

	// By passing the projectile_working_memory as the 2nd arg, it'll tie the projectile with working_memory, or else it won't execute
	GameCall<__int64>(*script_func_ptr, script_func_ptr[1])(working_memory, projectile_working_memory);

	// You may also make a "sub" working header where you group another set of configuration under this one, before tying it to the main working_memory
	char list_sub[4];
	list_sub[0] = -1;
	list_sub[1] = 0;
	const unsigned int sub_working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(100LL, reinterpret_cast<long long>(list_sub));
	GameCall<int>(0x6f82b8, 0xD7FF30)(sub_working_memory);

	// -------------------- Recoil (movement) configuration --------------------
	char list_movement[4];
	list_movement[0] = -1;
	list_movement[1] = 0;
	const unsigned int movement_memory_region = GameCall<unsigned int>(0x1C240, 0xd60138)(52LL, reinterpret_cast<long long>(list_movement));
	GameCall<int>(0x79B548, 0xD8FE60)(movement_memory_region, a3);

	// These are all related to recoil
	*reinterpret_cast<uint32*>(movement_memory_region) = 0xC84DB0;
	*reinterpret_cast<float*>(movement_memory_region + 32) = -4.5f;
	*reinterpret_cast<uint32*>(movement_memory_region + 36) = 0;
	*reinterpret_cast<float*>(movement_memory_region + 40) = 0.8f;
	*reinterpret_cast<float*>(movement_memory_region + 44) = -0.8f;
	*reinterpret_cast<float*>(movement_memory_region + 48) = -10.0f;

	// Not really sure what this does, but need to add if there's a sub?
	GameCall<int>(0x6D54C0, 0xD7FF30)(movement_memory_region, 1LL);

	// For these part, the script func ptr is using the sub's
	const unsigned int* sub_script_func_ptr = reinterpret_cast<unsigned int*>(
		*reinterpret_cast<unsigned int*>(
			*reinterpret_cast<unsigned int*>(sub_working_memory) + 0x34LL
			)
		);
	
	// Same as above, you need to tie the memory region with the parent to have it executed
	GameCall<__int64>(*sub_script_func_ptr, sub_script_func_ptr[1])(sub_working_memory, movement_memory_region);

	// -------------------- Delay configuration --------------------
	// Note: This delay stops all motion all together, it does not delay the projectile firing
	char list_delay[4];
	list_delay[0] = -1;
	list_delay[1] = 0;
	const unsigned int delay_working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list_delay));
	GameCall<int>(0x6D54A0, 0xD7FF30)(delay_working_memory);
	
	*reinterpret_cast<uint32*>(delay_working_memory) = 0xc84150;
	*reinterpret_cast<uint32*>(delay_working_memory + 16) = a3;
	*reinterpret_cast<uint32*>(delay_working_memory + 20) = -241;
	*reinterpret_cast<uint32*>(delay_working_memory + 24) = 10; // delay by 10 frame
	
	GameCall<int>(0x6D54C0, 0xD7FF30)(delay_working_memory, 2LL);
	GameCall<__int64>(*sub_script_func_ptr, sub_script_func_ptr[1])(sub_working_memory, delay_working_memory);

	// Now all subs are done, we need to tie the sub to the main working memory
	GameCall<__int64>(*script_func_ptr, script_func_ptr[1])(working_memory, sub_working_memory);

	// This is the ultimate executing func ptr, which is constant from (*a2 + 0x34LL), we pass in the working_memory here to execute everything we configured just now
	const unsigned int* main_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a2 + 0x34LL));
	GameCall<__int64>(*main_func_ptr, main_func_ptr[1])(reinterpret_cast<unsigned int>(a2), working_memory);
}