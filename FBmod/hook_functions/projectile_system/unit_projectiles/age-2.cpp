#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"
#include "hook_functions/projectile_system/projectile_common.h"

int age2_spawn_script_pointers[500];
bool is_age2_melee_assist_initialized = false;

void age2_assist_spawn_model_hash()
{
	int hex = 0x77A231D7;
}

__int64 age2_sub_95F6C0(unsigned int* a1, unsigned int a2)
{
	// r29
	// r28
	// r3

	__int64 v2 = reinterpret_cast<unsigned int>(a1);
	int v5 = reinterpret_cast<int>(a1);

	__int64 TOC = 0xdafdfc; // r2

	GameCall<int>(0x9F4108, TOC)(reinterpret_cast<unsigned int>(a1), 2LL);

	//v2 maybe is model name, args2 is Aleo, args3 is bone index, args4 is unknown
	GameCall<int>(0x9F4118, TOC)(v2, 0x9BA6C32F, 27LL, 0LL);

	GameCall<int>(0x9F44E8, TOC)(v2, a2);
	
	const unsigned int v6 = GameCall<int>(*(unsigned int*)*(unsigned int*)(*a1 + 0x60LL), TOC)(v2);
	//v6 = ((__int64(__fastcall*)(__int64)) * (unsigned int*)*(unsigned int*)(*a1 + 0x60LL))(v2);

	return GameCall<int>(0x9F40C8, TOC)(
		(unsigned int)(v5 + 14860),
		*(unsigned int*)(*(unsigned int*)(*(unsigned int*)(v6 + (__int64)(28 * *(_DWORD*)(v6 + 0x98CLL)) + 4)
			+ 0xCLL)
			+ 0xCLL),
		28LL);
}

void age2_melee_assist_spawn_animation_1()
{
	int hex = 0x2;
}

void age2_melee_assist_spawn_animation_2()
{
	int hex = 0x3;
}

void age2_melee_assist_spawn_animation_3()
{
	int hex = 0x4;
}

void age2_melee_assist_spawn_animation_4()
{
	int hex = 0x5;
}

unsigned int age2_melee_assist_sub_95F830(_DWORD* a1)
{
	if (is_age2_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD1D500), age2_spawn_script_pointers);
		age2_spawn_script_pointers[37] = reinterpret_cast<int>(age2_sub_95F6C0); // ALEO ? ALEO接在什么地方，和什么aleo ？
		age2_spawn_script_pointers[58] = reinterpret_cast<int>(age2_assist_spawn_model_hash); // 模型id
		//age2_spawn_script_pointers_test[143] = (int)test_spawn_model_hash; // 模型 大小 ??
		age2_spawn_script_pointers[156] = reinterpret_cast<int>(age2_melee_assist_spawn_animation_1); // 可能是这个   //95F6A8 这里的值是 开始动画 r3, 0
		age2_spawn_script_pointers[168] = reinterpret_cast<int>(age2_melee_assist_spawn_animation_2); // 可能是这个   //95F6A8 这里的值是 r3, 1
		age2_spawn_script_pointers[169] = reinterpret_cast<int>(age2_melee_assist_spawn_animation_3); // 可能是这个 飞行中的动画 r3, 2
		age2_spawn_script_pointers[176] = reinterpret_cast<int>(age2_melee_assist_spawn_animation_4); // 可能是这个 结束动画 r3, 3

		is_age2_melee_assist_initialized = true;
	}


	__int64 result; // r3

	GameCall<int>(0x9F46C8, 0xDAFDFC)(a1, 281321LL);
	result = (unsigned int)age2_spawn_script_pointers;
	*a1 = result;
	return result;
}

void age2_melee_assist_spawn()
{
	_DWORD* v2 = (_DWORD*)temp_registers[3];
	char v2146[4];
	unsigned int v1215; // r26
	__int64 result;

	v2146[0] = -1;
	v2146[1] = 0;
	v1215 = GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v2146);
	result = age2_melee_assist_sub_95F830((_DWORD*)v1215);
	*v2 = v1215;

	// set return
	temp_registers[3] = result;
}

int age2_three_shoot_assist_script_pointers[500];
bool is_age2_three_shoot_assist_initialized = false;

void age2_three_shoot_assist_spawn_animation_1()
{
	int hex = 0;
}

unsigned int age2_three_shoot_assist_sub_95F830(_DWORD* a1)
{
	if (is_age2_three_shoot_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xCCD720), age2_three_shoot_assist_script_pointers);
		age2_three_shoot_assist_script_pointers[58] = reinterpret_cast<int>(age2_assist_spawn_model_hash); // 模型id
		age2_three_shoot_assist_script_pointers[156] = reinterpret_cast<int>(age2_three_shoot_assist_spawn_animation_1); // 可能是这个   //95F6A8 这里的值是 开始动画 r3, 0
		age2_three_shoot_assist_script_pointers[168] = reinterpret_cast<int>(age2_melee_assist_spawn_animation_2); // 可能是这个   //95F6A8 这里的值是 r3, 1
		age2_three_shoot_assist_script_pointers[169] = reinterpret_cast<int>(age2_melee_assist_spawn_animation_3); // 可能是这个 飞行中的动画 r3, 2
		age2_three_shoot_assist_script_pointers[176] = reinterpret_cast<int>(age2_melee_assist_spawn_animation_4); // 可能是这个 结束动画 r3, 3
		is_age2_three_shoot_assist_initialized = true;
	}

	__int64 result; // r3

	GameCall<int>(0x9F46C8, 0xDAFDFC)(a1, 281321LL);
	result = reinterpret_cast<unsigned int>(age2_three_shoot_assist_script_pointers);
	*a1 = result;
	//a1[4553] = 0;
	return result;
}

void age2_three_shoot_assist_spawn()
{
	_DWORD* v2 = reinterpret_cast<uint32*>(temp_registers[3]);
	char v2146[4];
	unsigned int v1215; // r26
	__int64 result;

	v2146[0] = -1;
	v2146[1] = 0;
	v1215 = GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v2146);
	result = age2_three_shoot_assist_sub_95F830(reinterpret_cast<uint32*>(v1215));
	*v2 = v1215;

	// set return
	temp_registers[3] = result;
}