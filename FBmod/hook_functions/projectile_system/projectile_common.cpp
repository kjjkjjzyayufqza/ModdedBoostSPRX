#include "projectile_common.h"

#include "ida_macros.h"
#include "stdafx.h"

__int64 assist_shoot_projectile(
    const unsigned int *a2,
    const int a3,
    const unsigned int toc,
    const unsigned int script,
    const uint projectile_hash)
{
    char list[4];
    list[0] = -1;
    list[1] = 0;
	
    const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a2 + 0x34LL));
    const unsigned int working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list));
	
    GameCall<int>(0x9F21A8, toc)(static_cast<unsigned int>(working_memory));
	
    // Write to the working memory
    *reinterpret_cast<uint32*>(working_memory) = script;
    *reinterpret_cast<uint32*>(working_memory + 16) = a3;
    *reinterpret_cast<uint32*>(working_memory + 20) = -241;
    *reinterpret_cast<uint32*>(working_memory + 24) = projectile_hash;
	
    return GameCall<__int64>(*script_func_ptr, script_func_ptr[1])(a2, working_memory);
}

__int64 delay(
	const unsigned int *a2,
	const int a3,
	const unsigned int toc,
	const uint delay_frame)
{
	char list[4];
	list[0] = -1;
	list[1] = 0;
	
	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a2 + 0x34LL));
	const unsigned int working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list));
	
	GameCall<int>(0x9F21A8, toc)(static_cast<unsigned int>(working_memory));
	
	// Write to the working memory
	*reinterpret_cast<uint32*>(working_memory) = 0xc84150;
	*reinterpret_cast<uint32*>(working_memory + 16) = a3;
	*reinterpret_cast<uint32*>(working_memory + 20) = -241;
	*reinterpret_cast<uint32*>(working_memory + 24) = delay_frame;
	
	return GameCall<__int64>(*script_func_ptr, script_func_ptr[1])(a2, working_memory);
}

unsigned int hide_bone(const unsigned int* a1, const int bone_index)
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
	int opd[2] = { 0x9F40C8, 0x9F40C8 };

	return reinterpret_cast<int(*)(long long, long long, long long, double, double, double, unsigned int, double)>(&opd)(
		var1, var2, bone_index, 0.0, 0.0, 0.0, 0, 0.0
	);
}