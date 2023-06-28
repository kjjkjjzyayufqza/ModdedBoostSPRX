#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int test_spawn_script_pointers_test[500];
bool init_test_bool = false;

void test_spawn_model_hash()
{
	int hex = 0x77A231D7;
}

// Script for reading projectile ID and such
__int64 test_sub_7EC3DC(unsigned int* a1, unsigned int* a2) // accessed from 0x00d4a530
{
	__int64 v4; // r29
	__int64 v5; // r2
	__int64 v6; // r2
	__int64 v7; // r3
	__int64 v8; // r27
	unsigned int* v9; // r22
	__int64 v10; // r2
	__int64 v11; // r3
	int* v12; // r29
	_DWORD* v13; // r25
	int v14; // r5
	int v15; // r4
	__int64 v16; // r2
	__int64 v17; // r2
	__int64 v18; // r2
	__int64 v19; // r2
	char v21[4]; // [sp+70h] [-70h] BYREF
	char v22[4]; // [sp+74h] [-6Ch] BYREF
	char v23[16]; // [sp+78h] [-68h] BYREF

	v23[0] = -1;
	v23[1] = 0;
	v4 = (unsigned int)GameCall<int>(0x9EE118, 0xd8fe60)(156LL, v23);
	GameCall<int>(0x9EE278, 0xd8fe60)(v4);
	v5 = *(unsigned int*)(*(unsigned int*)(*a1 + 0x28CLL) + 4LL);
	GameCall<int>(*(unsigned int*)*(unsigned int*)(*a1 + 0x28CLL), v5)((unsigned int)a1, v4);
	GameCall<int>(0x9EE9E8, 0xd8fe60)(v4, 1LL);
	v6 = *(unsigned int*)(*(unsigned int*)(*a2 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int*)*(unsigned int*)(*a2 + 0x34LL), v6)((unsigned int)a2, v4);
	v22[0] = -1;
	v22[1] = 0;
	v7 = GameCall<int>(0x9EE118, 0xd8fe60)(156LL, v22);
	v8 = (unsigned int)v7;
	v9 = (unsigned int*)v7;
	GameCall<int>(0x9EE278, 0xd8fe60)((unsigned int)v7);
	v10 = *(unsigned int*)(*(unsigned int*)(*a1 + 0x290LL) + 4LL);
	GameCall<int>(*(unsigned int*)*(unsigned int*)(*a1 + 0x290LL), v10)((unsigned int)a1, v8);
	v21[0] = -1;
	v21[1] = 0;
	v11 = GameCall<int>(0x9EE118, 0xd8fe60)(28LL, v21);
	v12 = (int*)(unsigned int)v11;
	v13 = (_DWORD*)v11;
	GameCall<int>(0x9EE998, 0xd8fe60)((unsigned int)v11);
	v14 = 0xc81c18;
	v15 = 0xc85e48;
	v12[5] = -241;
	*v12 = v14;
	v12[4] = (int)a1;
	*v13 = v15;
	v13[6] = 0; // dealy frame
	v16 = *(unsigned int*)(*(unsigned int*)(*v9 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int*)*(unsigned int*)(*v9 + 0x34LL), v16)(v8, v12);
	v17 = *(unsigned int*)(*(unsigned int*)(*a1 + 0x298LL) + 4LL);
	GameCall<int>(*(unsigned int*)*(unsigned int*)(*a1 + 0x298LL), v17)((unsigned int)a1, v8);
	GameCall<int>(0x9EE9E8, 0xd8fe60)(v8, 2LL);
	v18 = *(unsigned int*)(*(unsigned int*)(*a2 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int*)*(unsigned int*)(*a2 + 0x34LL), v18)((unsigned int)a2, v8);
	v19 = *(unsigned int*)(*(unsigned int*)(*a1 + 0x294LL) + 4LL);
	return (GameCall<int>(*(unsigned int*)*(unsigned int*)(*a1 + 0x294LL), v19)(
		(unsigned int)a1,
		(unsigned int)a2)
		);
}


__int64 test_sub_85E534(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	// set animation (nth index of the animation in the second folder in OMO PAC)
	// arg1 = starting animation
	// arg2 = the looping animation (shoot)
	// arg3 = ending animation
	int anim_start_index = 1LL;
	int anim_loop_index = 2LL;
	int anim_end_index = 3LL;

	float float1 = 30; // starting anim frame to start shoot
	float float2 = 1; // starting anim multiplier
	float float3 = 13; // ending anim frame?
	float float4 = 1; // ending anime frame multiplier?

	// We need to use this method to properly pass the float into the function, GameCall will incorrectly puts the float at flipped f30 and f29 onwards
	int opd[2] = { 0x9F2008, 0xd8fe60 };

	return ((int(*)(unsigned int*, int, int, int, int, float, int, int, int, float, float, float, int)) & opd)(
		(unsigned int*)a2,
		a3,
		anim_start_index,
		anim_loop_index,
		anim_end_index,
		float1,
		*(_DWORD*)(*(unsigned int*)(a1 + 164) + 0xC8LL),
		a4,
		0,
		float2,
		float3,
		float4,
		-1);
}

__int64 test_sub_82E504(__int64 a1, unsigned int* a2, __int64 a3) // 0x1250238
{
	__int64 v5; // r27
	__int64 v6; // r26
	__int64 v7; // r2
	unsigned int* v8; // r27
	__int64 v9; // r3
	int* v10; // r29
	_DWORD* v11; // r28
	int v12; // r8
	int v13; // r21
	__int64 v14; // r2
	unsigned int* v15; // r27
	__int64 v16; // r3
	_DWORD* v17; // r29
	_DWORD* v18; // r28
	int v19; // r3
	__int64 v20; // r2
	char v22[4]; // [sp+70h] [-70h] BYREF
	char v23[4]; // [sp+74h] [-6Ch] BYREF
	char v24[8]; // [sp+78h] [-68h] BYREF

	// --------------------------------------------------------
	v24[1] = 0;
	v24[0] = -1;

	v5 = GameCall<int>(0x9EE118, 0xd8fe60)(56LL, (__int64)v24); // Find these if you want to find if the pointer func is doing animation shit

	v6 = (unsigned int)a2;

	// set animation (nth index of the animation in the second folder in OMO PAC)
	// arg1 = starting animation
	// arg2 = the looping animation (shoot)
	// arg3 = ending animation
	int anim_start_index = 1LL;
	int anim_loop_index = 2LL;
	int anim_end_index = 3LL;
	GameCall<int>(0x9F1828, 0xd8fe60)((unsigned int)v5, (unsigned int)a3, anim_start_index, anim_loop_index, anim_end_index);
	*(_DWORD*)(v5 + 44) = 0;

	// 0x6f4a00, 0xd7ff30
	v7 = *(unsigned int*)(*(unsigned int*)(*a2 + 0x34LL) + 4LL);
	GameCall<int>((*(unsigned int*)*(unsigned int*)(*a2 + 0x34LL)), 0xd7ff30)((unsigned int)a2, (unsigned int)v5);

	// --------------------------------------------------------
	v8 = (unsigned int*)*(unsigned int*)(*a2 + 0x34LL);
	v23[0] = -1;
	v23[1] = 0;

	v9 = GameCall<int>(0x9EE118, 0xd8fe60)(32LL, (__int64)v23);

	v10 = (int*)(unsigned int)v9;
	v11 = (_DWORD*)v9;

	// populate the temp 0x4ffff type with the 0xc837d8
	GameCall<int>(0x9EE998, 0xd8fe60)((unsigned int)v9); // 0xd7ff30

	v12 = 0xc853d0; // 0xc853d0
	v13 = 0xc86240; // 0xc86240

	// this decompilation is quite wrong, but is it is okay since the toc is ovewritten on *v11 = v12 (no idea why)
	*v10 = 0xc83818; // 0xc83818 

	v10[4] = a3;
	*v11 = v12; // write the toc for 0x4fff temp address with 0xc853d0
	v10[5] = -241;
	v11[7] = 0;
	v11[6] = 1;

	// wrong decompilation of r2 toc assign
	v14 = v8[1];

	// 0x6f4a00, 0xd7ff30
	GameCall<int>(*v8, 0xd7ff30)((unsigned int)a2, v10);

	// --------------------------------------------------------
	v15 = (unsigned int*)*(unsigned int*)(*a2 + 0x34LL);

	// Read the continue hash in the projectile properties
	LODWORD(a2) = *(_DWORD*)(*(unsigned int*)(a3 + 164) + 0xC8LL);
	v22[0] = -1;
	v22[1] = 0;

	v16 = GameCall<int>(0x9EE118, 0xd8fe60)(28LL, (__int64)v22);

	v17 = (_DWORD*)(unsigned int)v16;
	v18 = (_DWORD*)v16;

	GameCall<int>(0x9EE998, 0xd8fe60)((unsigned int)v16);

	v19 = 0xc83a78; // 0xc83a78

	// wrong decompilation, should be writing 0xc83818 instead, but is okay since it is overwritten later by (*v18 = v19)
	*v17 = v13;

	v17[4] = a3;

	v17[5] = -241;

	*v18 = v19; // write new TOC, 0xc83a78

	v18[6] = (_DWORD)a2; // write continue projectile hash

	// wrong decompilation of r2 toc assign
	v20 = v15[1];

	// 0x6f4a00, 0xd7ff30
	return GameCall<int>((*v15), 0xd7ff30)(v6, v17);
}


void test_spawn_omo_1()
{
	int hex = 0x2;
}

void test_spawn_omo_2()
{
	int hex = 0x3;
}

void test_spawn_omo_3()
{
	int hex = 0x4;
}

void test_spawn_omo_4()
{
	int hex = 0x5;
}

unsigned int test_sub_95F830(_DWORD* a1)
{
	printf("Hello world");

	if (init_test_bool == false) {
		printf("Hello world2");

		copyJumptable((int*)0xD1D500, test_spawn_script_pointers_test);
		//test_spawn_script_pointers_test[37] = (int)test_spawn_model_hash;//ALEO ? ALEO接在什么地方，和什么aleo ？
		test_spawn_script_pointers_test[58] = (int)test_spawn_model_hash;//模型id
		//test_spawn_script_pointers_test[143] = (int)test_spawn_model_hash;//模型 大小 ??
		test_spawn_script_pointers_test[153] = (int)test_sub_7EC3DC;//sub_7EC3DC //0x00D45A30
		test_spawn_script_pointers_test[154] = 0x00D42568;
		test_spawn_script_pointers_test[156] = (int)test_spawn_omo_1;//可能是这个   //95F6A8 这里的值是 开始动画 r3, 0
		test_spawn_script_pointers_test[157] = 0;//0x00D42548 //不是omo 
		test_spawn_script_pointers_test[158] = 0;//0x00D42550 //不是omo
		test_spawn_script_pointers_test[162] = 0x00D45B28;
		test_spawn_script_pointers_test[163] = 0x00D55400;
		test_spawn_script_pointers_test[164] = 0x00D55410;
		test_spawn_script_pointers_test[165] = 0x00D45A00;
		test_spawn_script_pointers_test[166] = 0x00D45A08;
		test_spawn_script_pointers_test[167] = 0x00D43630;
		test_spawn_script_pointers_test[168] = (int)test_spawn_omo_2;//可能是这个   //95F6A8 这里的值是 r3, 1
		test_spawn_script_pointers_test[169] = (int)test_spawn_omo_3;//可能是这个 飞行中的动画 r3, 2
		test_spawn_script_pointers_test[170] = 0x00D45B70; 
		test_spawn_script_pointers_test[171] = 0x00D54F28;
		test_spawn_script_pointers_test[172] = 0x00D54F30;
		test_spawn_script_pointers_test[173] = 0x00D54F38;
		test_spawn_script_pointers_test[174] = 0x00D54F40;
		test_spawn_script_pointers_test[175] = 0x00D45B50;
		test_spawn_script_pointers_test[176] = (int)test_spawn_omo_4;//可能是这个 结束动画 r3, 3
		test_spawn_script_pointers_test[177] = 0x00D45B80;
		test_spawn_script_pointers_test[178] = 0x00D45B78;
		test_spawn_script_pointers_test[179] = 0x00000000;

		init_test_bool = true;
	}
	

	__int64 result; // r3

	GameCall<int>(0x9F46C8, 0xDAFDFC)(a1, 281321LL);
	result = (unsigned int)test_spawn_script_pointers_test;
	*a1 = result;
	return result;
}

void test_spawn()
{
	_DWORD* v2 = (_DWORD*)temp_registers[3];
	char v2146[4];
	unsigned int v1215; // r26
	__int64 result;

	v2146[0] = -1;
	v2146[1] = 0;
	v1215 = GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v2146);
	result = test_sub_95F830((_DWORD*)v1215);
	*v2 = v1215;

	// set return
	temp_registers[3] = result;
}