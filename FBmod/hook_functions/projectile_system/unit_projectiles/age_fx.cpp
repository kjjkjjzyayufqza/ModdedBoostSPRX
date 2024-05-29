#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"
#include "hook_functions/projectile_system/projectile_common.h"

int AGE_spawn_script_pointers_test1[500];
int AGE_spawn_script_pointers_test2[500];
bool AGE_spawn_script_pointers_initialized;

void AGE_spawn_Funnel_model_hash()
{
	//int hash = 0xD753C3E6;  //妖天使浮游剑模型
	int hash = 0x2BA6D4D2; //AGE-FX浮游剑模型
}


void AGE_FX_Funnel_SwordType_spawn() // 测试
{
	_DWORD* v2 = (_DWORD*)temp_registers[3];
	char v2189[4];
	__int64 result;
	__int64 v1319; // r3
	unsigned __int64 v1320; // r28
	_DWORD* v1321; // r25
	__int64 v1322; // r2
	int v1323; // r26
	int v1324; // r4
	int v1325; // r5



	if (AGE_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int*)0xC9CD40, AGE_spawn_script_pointers_test1);
		AGE_spawn_script_pointers_test1[0] = 0x00D4C108;
		AGE_spawn_script_pointers_test1[1] = 0x00D4C0C8;
		AGE_spawn_script_pointers_test1[5] = 0x00D43738;
		AGE_spawn_script_pointers_test1[8] = 0x00D45550;//是否读取projectile的aleo信息，并且读取更多projectile信息，读取方向
		AGE_spawn_script_pointers_test1[12] = 0x00D4C0D0;
		AGE_spawn_script_pointers_test1[14] = 0x00D49620;//射击结束是否消失
		AGE_spawn_script_pointers_test1[15] = 0x00D49618;//射击结束回到身上是否有回归动画
		AGE_spawn_script_pointers_test1[17] = 0x00D45540;
		AGE_spawn_script_pointers_test1[19] = 0x00D45548;
		AGE_spawn_script_pointers_test1[26] = 0x00D43778;
		AGE_spawn_script_pointers_test1[27] = 0x00D4C0F8;//移动轨迹 直线 | 乱数
		AGE_spawn_script_pointers_test1[28] = 0x00D4C100;
		AGE_spawn_script_pointers_test1[30] = 0x00D45420;
		AGE_spawn_script_pointers_test1[31] = 0x00D45458;
		AGE_spawn_script_pointers_test1[33] = 0x00D45530;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		//AGE_spawn_script_pointers_test1[0] = 0;
		copyJumptable((int*)0xC9CAE8, AGE_spawn_script_pointers_test2); //CDABA8
		AGE_spawn_script_pointers_test2[58] = (int)AGE_spawn_Funnel_model_hash;



		AGE_spawn_script_pointers_initialized = true;
	}

	v2189[1] = 0;
	v2189[0] = -1;
	v1319 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2189);
	v1320 = (unsigned int)v1319;
	v1321 = (_DWORD*)v1319;
	GameCall<int>(0x7DA0D4, 0xd8fe60)((unsigned int)v1319);
	result = (__int64)(v1321 + 4408);
	v1323 = (int)AGE_spawn_script_pointers_test1;
	v1324 = (int)AGE_spawn_script_pointers_test2;
	v1325 = *(_DWORD*)(0xd8fe60 - 17396);
	*(_DWORD*)v1320 = *(_DWORD*)(0xd8fe60 - 17404);
	*v1321 = v1324;
	*(_DWORD*)(unsigned int)((_DWORD)v1321 + 17632) = v1325;
	*(_DWORD*)((unsigned int)((_DWORD)v1321 + 17632) + 4LL) = (_DWORD)v1321;
	v1321[4408] = v1323;
	*v2 = (_DWORD)v1321;
	// set return
	temp_registers[3] = result;
}

unsigned int age_fx_age_1_full_glansa_assist_spawn_model_hash()
{
	return 0x3D8AD85D;
}

int age_fx_melee_assist_spawn_script_pointers[500];
bool is_age_fx_melee_assist_initialized = false;

void age_fx_melee_assist_hitbox_script(__int64 a1, __int64 a2)
{
	GameCall<void>(0x77C69C, 0xD8FE60)(a1, static_cast<unsigned int>(a2));
	GameCall<void>(0x7654B0, 0xD8FE60)(static_cast<unsigned int>(a2), 5LL, 0LL);
	
	*reinterpret_cast<float*>(a2 + 20) = 4.0f;
	*reinterpret_cast<float*>(a2 + 32) = 0.0f;
	*reinterpret_cast<float*>(a2 + 36) = 0.0f;
	*reinterpret_cast<float*>(a2 + 40) = 19.0f;
	*reinterpret_cast<float*>(a2 + 44) = 1.0f;
	*reinterpret_cast<uint32*>(a2 + 48) = 1;
	*reinterpret_cast<float*>(a2 + 52) = 11.0f;
	*reinterpret_cast<uint32*>(a2 + 80) = 1;
	*reinterpret_cast<float*>(a2 + 84) = 7.0f;
	*reinterpret_cast<uint32*>(a2 + 96) = 0xBA397645; // 2nd hit hash
	
	*reinterpret_cast<float*>(a2 + 64) = 0.0f;
	*reinterpret_cast<float*>(a2 + 64 + 4) = 0.0f;
	*reinterpret_cast<float*>(a2 + 64 + 8) = 10.0f;
	*reinterpret_cast<float*>(a2 + 64 + 12) = 1.0f;
}

void age_fx_melee_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);
	
	// Hide missile PDMS
	hide_bone(a1, 0x23);
}

unsigned int age_fx_melee_assist_approach_spawn_animation()
{
	return 1;
}

void age_fx_melee_assist_second_hit_animation_script(__int64 a1, unsigned int *a2)
{
	GameCall<void>(0x96E080,0xDAFDFC)(a1, a2);

	const unsigned int working_memory = create_working_memory(56LL);
	
	const int animation_index = 2;
	GameCall<void>(0x6EBB78,0xD7FF30)(working_memory, a1, animation_index);
	*reinterpret_cast<uint*>(working_memory + 44) = 1;
	
	execute_working_memory(a2, working_memory);
}

unsigned int age_fx_melee_assist_main(_DWORD* a1)
{
	if (is_age_fx_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xceeb00), age_fx_melee_assist_spawn_script_pointers);
		age_fx_melee_assist_spawn_script_pointers[37] = reinterpret_cast<int>(age_fx_melee_assist_spawn_model_effects);
		age_fx_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(age_fx_age_1_full_glansa_assist_spawn_model_hash);
		age_fx_melee_assist_spawn_script_pointers[65] = reinterpret_cast<int>(age_fx_melee_assist_hitbox_script);
		age_fx_melee_assist_spawn_script_pointers[155] = reinterpret_cast<int>(age_fx_melee_assist_approach_spawn_animation);
		age_fx_melee_assist_spawn_script_pointers[166] = reinterpret_cast<int>(age_fx_melee_assist_second_hit_animation_script);
		is_age_fx_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2D38, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(age_fx_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void age_fx_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = age_fx_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int age_fx_gerobi_assist_spawn_script_pointers[500];
bool is_age_fx_gerobi_assist_initialized = false;

void age_fx_gerobi_assist_spawn_model_effects(unsigned int* a1, unsigned int a2)
{
	GameCall<int>(0x763D0C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x77E46C, 0xD8FE60)(reinterpret_cast<unsigned int>(a1), a2);
	
	// Hide missile PDMS
	hide_bone(a1, 0x23);

	// position backpack
	rotate_bone(a1, 0x26, 0.0f, 0.0f, 1.57f, 1.0f, 0);
	rotate_bone(a1, 0x28, 0.0f, 0.0f, -1.57f, 1.0f, 0);
}

void age_fx_gerobi_assist_animation_script(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
	const unsigned int working_memory = create_working_memory(156);
	GameCall<void>(0x6F819C, 0xD7FF30)(working_memory);

	// another gerobi
	add_projectile(working_memory, 0x8934AC67, static_cast<unsigned int>(a3));

	// missiles
	add_projectile(working_memory, 0x583EFB56, static_cast<unsigned int>(a3));
	add_projectile(working_memory, 0x57C9493C, static_cast<unsigned int>(a3));
	add_projectile(working_memory, 0xEF3CB6D4, static_cast<unsigned int>(a3));
	add_projectile(working_memory, 0x9611210F, static_cast<unsigned int>(a3));
	add_projectile(working_memory, 0xA1F2FA2F, static_cast<unsigned int>(a3));
	add_projectile(working_memory, 0x44DBC4CD, static_cast<unsigned int>(a3));
	
	const int anim_start_index = 4;
	const int anim_loop_index = 5;
	const int anim_end_index = 5;

	const float aim_animation_frame = 15.0f;
	const float aim_animation_multiplier = 1.0f;
	const float float3 = 0.0f;
	const float float4 = 1.0f;

	// We need to use this method to properly pass the float into the function, GameCall will incorrectly puts the float at flipped f30 and f29 onwards
	int opd[2] = { 0x9F2008, 0xd8fe60 };

	reinterpret_cast<int(*)(unsigned int*, int, int, int, int, float, unsigned int, int, unsigned int, float, float, float, int)>(&opd)(
		a2,
		static_cast<int>(a3),
		anim_start_index,
		anim_loop_index,
		anim_end_index,
		aim_animation_frame,
		0x5D7593B8, // main projectile hash
		a4,
		static_cast<unsigned int>(working_memory),
		aim_animation_multiplier,
		float3,
		float4,
		-1
	);
}

unsigned int age_fx_gerobi_assist_main(_DWORD* a1)
{
	if (is_age_fx_gerobi_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xcc7c40), age_fx_gerobi_assist_spawn_script_pointers);
		age_fx_gerobi_assist_spawn_script_pointers[37] = reinterpret_cast<int>(age_fx_gerobi_assist_spawn_model_effects);
		age_fx_gerobi_assist_spawn_script_pointers[58] = reinterpret_cast<int>(age_fx_age_1_full_glansa_assist_spawn_model_hash);
		age_fx_gerobi_assist_spawn_script_pointers[157] = reinterpret_cast<int>(age_fx_gerobi_assist_animation_script);
		is_age_fx_gerobi_assist_initialized = true;
	}
	
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(age_fx_gerobi_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void age_fx_gerobi_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = age_fx_gerobi_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}