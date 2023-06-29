#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"


int age2_spawn_script_pointers_test[500];
bool init_age2_Melee_Aid_bool = false;

void age2_Aid_spawn_model_hash()
{
	int hex = 0x77A231D7;
}

__int64 age2_sub_95F6C0(unsigned int* a1, unsigned int a2)
{
	__int64 v2; // r29
	int v5; // r28
	unsigned int v6; // r3

	v2 = (unsigned int)a1;
	v5 = (int)a1;

	__int64 TOC = 0xdafdfc; // r2

	GameCall<int>(0x9F4108, TOC)((unsigned int)a1, 2LL);
	//sub_9F4108((unsigned int)a1, 2LL);

	//v2 maybe is model name, args2 is aleo, args3 is bone index, args4 is unknow
	GameCall<int>(0x9F4118, TOC)(v2, 0x9BA6C32F, 27LL, 0LL);
	//sub_9F4118(v2, 0x965C9901, 31LL, 0LL);

	GameCall<int>(0x9F44E8, TOC)(v2, a2);
	//sub_9F44E8(v2, a2);


	v6 = GameCall<int>(*(unsigned int*)*(unsigned int*)(*a1 + 0x60LL), TOC)(v2);
	//v6 = ((__int64(__fastcall*)(__int64)) * (unsigned int*)*(unsigned int*)(*a1 + 0x60LL))(v2);

	return GameCall<int>(0x9F40C8, TOC)(
		(unsigned int)(v5 + 14860),
		*(unsigned int*)(*(unsigned int*)(*(unsigned int*)(v6 + (__int64)(28 * *(_DWORD*)(v6 + 0x98CLL)) + 4)
			+ 0xCLL)
			+ 0xCLL),
		28LL);

	//return sub_9F40C8(
	//	(unsigned int)(v5 + 14860),
	//	*(unsigned int*)(*(unsigned int*)(*(unsigned int*)(v6 + (__int64)(28 * *(_DWORD*)(v6 + 0x98CLL)) + 4)
	//		+ 0xCLL)
	//		+ 0xCLL),
	//	28LL);
}


void age2_Melee_Aid_spawn_omo_1()
{
	int hex = 0x2;
}

void age2_Melee_Aid_spawn_omo_2()
{
	int hex = 0x3;
}

void age2_Melee_Aid_spawn_omo_3()
{
	int hex = 0x4;
}

void age2_Melee_Aid_spawn_omo_4()
{
	int hex = 0x5;
}

unsigned int age2_Melee_Aid_sub_95F830(_DWORD* a1)
{
	if (init_age2_Melee_Aid_bool == false) {
		copyJumptable((int*)0xD1D500, age2_spawn_script_pointers_test);
		age2_spawn_script_pointers_test[37] = (int)age2_sub_95F6C0;//ALEO ? ALEO接在什么地方，和什么aleo ？
		age2_spawn_script_pointers_test[58] = (int)age2_Aid_spawn_model_hash;//模型id
		//age2_spawn_script_pointers_test[143] = (int)test_spawn_model_hash;//模型 大小 ??
		age2_spawn_script_pointers_test[156] = (int)age2_Melee_Aid_spawn_omo_1;//可能是这个   //95F6A8 这里的值是 开始动画 r3, 0
		age2_spawn_script_pointers_test[168] = (int)age2_Melee_Aid_spawn_omo_2;//可能是这个   //95F6A8 这里的值是 r3, 1
		age2_spawn_script_pointers_test[169] = (int)age2_Melee_Aid_spawn_omo_3;//可能是这个 飞行中的动画 r3, 2
		age2_spawn_script_pointers_test[176] = (int)age2_Melee_Aid_spawn_omo_4;//可能是这个 结束动画 r3, 3

		init_age2_Melee_Aid_bool = true;
	}


	__int64 result; // r3

	GameCall<int>(0x9F46C8, 0xDAFDFC)(a1, 281321LL);
	result = (unsigned int)age2_spawn_script_pointers_test;
	*a1 = result;
	return result;
}



void age2_Melee_Aid_spawn()
{
	_DWORD* v2 = (_DWORD*)temp_registers[3];
	char v2146[4];
	unsigned int v1215; // r26
	__int64 result;

	v2146[0] = -1;
	v2146[1] = 0;
	v1215 = GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v2146);
	result = age2_Melee_Aid_sub_95F830((_DWORD*)v1215);
	*v2 = v1215;

	// set return
	temp_registers[3] = result;
}


int age2_Three_Shoot_spawn_script_pointers_test[500];
bool init_age2_Three_Shoot_Aid_bool = false;

void age2_Three_Shoot_Aid_spawn_omo_1()
{
	int hex = 0;
}

unsigned int age2_Three_Shoot_Aid_sub_95F830(_DWORD* a1)
{
	if (init_age2_Three_Shoot_Aid_bool == false) {
		copyJumptable((int*)0xCCD720, age2_Three_Shoot_spawn_script_pointers_test);
		age2_Three_Shoot_spawn_script_pointers_test[58] = (int)age2_Aid_spawn_model_hash;//模型id
		age2_Three_Shoot_spawn_script_pointers_test[156] = (int)age2_Three_Shoot_Aid_spawn_omo_1;//可能是这个   //95F6A8 这里的值是 开始动画 r3, 0
		age2_Three_Shoot_spawn_script_pointers_test[168] = (int)age2_Melee_Aid_spawn_omo_2;//可能是这个   //95F6A8 这里的值是 r3, 1
		age2_Three_Shoot_spawn_script_pointers_test[169] = (int)age2_Melee_Aid_spawn_omo_3;//可能是这个 飞行中的动画 r3, 2
		age2_Three_Shoot_spawn_script_pointers_test[176] = (int)age2_Melee_Aid_spawn_omo_4;//可能是这个 结束动画 r3, 3
		init_age2_Three_Shoot_Aid_bool = true;
	}

	__int64 result; // r3

	GameCall<int>(0x9F46C8, 0xDAFDFC)(a1, 281321LL);
	result = (unsigned int)age2_Three_Shoot_spawn_script_pointers_test;
	*a1 = result;
	//a1[4553] = 0;
	return result;
}



void age2_Three_Shoot_Aid_spawn()
{
	_DWORD* v2 = (_DWORD*)temp_registers[3];
	char v2146[4];
	unsigned int v1215; // r26
	__int64 result;

	v2146[0] = -1;
	v2146[1] = 0;
	v1215 = GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v2146);
	result = age2_Three_Shoot_Aid_sub_95F830((_DWORD*)v1215);
	*v2 = v1215;

	// set return
	temp_registers[3] = result;
}
