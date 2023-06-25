#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

//int test_spawn_script_pointers[500];
//int test_spawn_script_pointers2[500];
//int test_spawn_script_pointers3[500];

int test_spawn_script_pointers_test1[500];
int test_spawn_script_pointers_test2[500];

void test_spawn_model_hash()
{
	int hash = 0x71908BA1;
}

void test_spawn_wep_L()
{
	int hash = 0x73FCF825;
}

void test_spawn_wep_R()
{
	int hash = 0xA7BDC7FA;
}

unsigned int sub_851C34(__int64 a1, unsigned int* a2, int a3)
{
	unsigned int* v5; // r27
	__int64 v6; // r3
	unsigned __int64 v7; // r29
	_DWORD* v8; // r28
	int v9; // r25
	int v10; // r24
	unsigned int* v11; // r27
	__int64 v12; // r3
	unsigned __int64 v13; // r29
	_DWORD* v14; // r28
	__int64 saved_toc; // [sp+28h] [-B8h]
	char v17[4]; // [sp+70h] [-70h] BYREF
	char v18[12]; // [sp+74h] [-6Ch] BYREF


	//3
	unsigned int* v100; // r27
	char v101[4]; // [sp+70h] [-70h] BYREF
	__int64 v102; // r3
	unsigned __int64 v103; // r29
	_DWORD* v104; // r28



	v5 = (unsigned int*)*(unsigned int*)(*a2 + 0x34LL);
	v18[0] = -1;
	v18[1] = 0;
	v6 = GameCall<int>(0x9EE118, 0xd8fe60)(28LL, v18);
	v7 = (unsigned int)v6;
	v8 = (_DWORD*)v6;
	GameCall<int>(0x9EE998, 0xd8fe60)((unsigned int)v6);
	v9 = *(_DWORD*)(0xd8fe60 + 21056);
	v10 = *(_DWORD*)(0xd8fe60 + 21060);
	*(_DWORD*)v7 = v9;
	*(_DWORD*)(v7 + 16) = a3;
	*(_DWORD*)(v7 + 20) = -241;
	*v8 = v10;
	v8[6] = 0x73FCF825;//要射出去的武装id
	((void(__fastcall*)(unsigned int*, unsigned __int64)) * v5)(a2, v7);
	//2
	v11 = (unsigned int*)*(unsigned int*)(*a2 + 0x34LL);
	v17[0] = -1;
	v17[1] = 0;
	v12 = GameCall<int>(0x9EE118, 0xd8fe60)(28LL, v17);
	v13 = (unsigned int)v12;
	v14 = (_DWORD*)v12;
	GameCall<int>(0x9EE998, 0xd8fe60)((unsigned int)v12);
	*(_DWORD*)v13 = v9;
	*(_DWORD*)(v13 + 16) = a3;
	*(_DWORD*)(v13 + 20) = -241;
	*v14 = v10;
	v14[6] = 0xA7BDC7FA;//要射出去的武装id
	((__int64(__fastcall*)(unsigned int*, unsigned __int64)) * v11)(a2, v13);

	//3
	v100 = (unsigned int*)*(unsigned int*)(*a2 + 0x34LL);
	v101[0] = -1;
	v101[1] = 0;
	v102 = GameCall<int>(0x9EE118, 0xd8fe60)(28LL, v101);
	v103 = (unsigned int)v102;
	v104 = (_DWORD*)v102;
	GameCall<int>(0x9EE998, 0xd8fe60)((unsigned int)v102);
	*(_DWORD*)v103 = v9;
	*(_DWORD*)(v103 + 16) = a3;
	*(_DWORD*)(v103 + 20) = -241;
	*v104 = v10;
	v104[6] = 0xA7BDC7FA;//要射出去的武装id
	return ((__int64(__fastcall*)(unsigned int*, unsigned __int64)) * v100)(a2, v103);
}


unsigned int sub_851BB4(__int64 a1)
{
	copyJumptable((int*)0xCC2D68, test_spawn_script_pointers_test1);//钢坦克0xCC25B0，小飞机0xCC2D68
	//test_spawn_script_pointers_test1[5] = 0x00D424D0;//撞到东西就触发暴风id
	test_spawn_script_pointers_test1[58] = (int)test_spawn_model_hash;//模型id
	//test_spawn_script_pointers_test1[65] = 0x00D499F0;//撞到东西就触发暴风id
	//test_spawn_script_pointers_test1[66] = 0x00D499F0;//座天使两下近战援护
	//test_spawn_script_pointers_test1[71] = 0x00D499B8;//撞到东西就触发暴风id
	//test_spawn_script_pointers_test1[88] = 0x00D49990;//撞到东西就触发暴风id
	//test_spawn_script_pointers_test1[89] = 0x00D49998;//撞到东西就触发暴风id
	//test_spawn_script_pointers_test1[98] = 0x00D499A0;//撞到东西就触发暴风id
	//test_spawn_script_pointers_test1[154] = (int)sub_851C34;//鋼伊吉 先射击，后近战，可能是用来是否混合动作的func    正常都是用00D45A30
	//test_spawn_script_pointers_test1[158] = (int)sub_851C34;//控制射出什么，和怎么读取射出多少   正常都是用00D42548
	test_spawn_script_pointers_test1[166] = 0x00D45AA0;//DX 高达 6发火箭筒援护同时射出6发00D49CE8  钢坦克00D498E0    正常都是用00D45AA0
	test_spawn_script_pointers_test1[168] = (int)test_spawn_wep_R;//控制射出什么
	test_spawn_script_pointers_test1[169] = (int)test_spawn_wep_L;//控制射出什么

	__int64 result; // r3
	double v3; // fp0
	int v4; // r8
	__int64 saved_toc; // [sp+28h] [-68h]

	GameCall<int>(0x9F1BE8, 0xd8fe60)((unsigned int)a1, 1190LL);
	result = (unsigned int)test_spawn_script_pointers_test1;//处理模型，和运作逻辑
	v3 = *(float*)(0xd8fe60 + 21024);
	v4 = *(_DWORD*)(0xd8fe60 + 21032);
	*(_DWORD*)a1 = result;
	*(float*)(a1 + 18256) = v3;
	*(float*)(a1 + 18240) = v3;
	*(_DWORD*)(a1 + 18224) = v4;
	*(_DWORD*)(a1 + 18252) = 1065353216;
	*(float*)(a1 + 18244) = v3;
	*(float*)(a1 + 18248) = v3;
	*(_DWORD*)(a1 + 18268) = 1065353216;
	*(float*)(a1 + 18264) = v3;
	*(float*)(a1 + 18260) = v3;
	return result;
}


void test_spawn() // 测试
{
	_DWORD* v2 = (_DWORD*)temp_registers[3];
	char v1959[4];
	__int64 result;
	unsigned int v1062;
	v1959[0] = -1;
	v1959[1] = 0;
	v1062 = GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v1959);
	result = sub_851BB4(v1062);
	*v2 = v1062;
	// set return
	temp_registers[3] = result;
}