#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

//int test_spawn_script_pointers[500];
//int test_spawn_script_pointers2[500];
//int test_spawn_script_pointers3[500];

int test_spawn_script_pointers_test1[500];
bool test_spawn_script_pointers_initialized;

void test_spawn_model_hash()
{
	int hash = 0x8D71B5D3;
}

//
//__int64 sub_7D9F08_test_func(__int64 a1)
//{
//	if (test_spawn_script_pointers_initialized == false)
//	{
//		copyJumptable((int*)0xCA2390, test_spawn_script_pointers);
//		copyJumptable((int*)0xCA25E8, test_spawn_script_pointers2);//有问题 v4 = *(float *)(v2 - 16704);
//		copyJumptable((int*)0xCA25E8, test_spawn_script_pointers3);
//		test_spawn_script_pointers_initialized = true;
//
//		//test_spawn_script_pointers[58] = (int)test_spawn_model_hash;
//	}
//	__int64 v2; // r2
//	int v3; // r6
//	double v4; // fp0
//	__int64 result; // r3
//
//	GameCall<int>(0x777288, 0xd8fe60)((_DWORD*)(unsigned int)a1);
//	v3 = (int)test_spawn_script_pointers;
//	v4 = *(float*)(0xd8fe60 - 16704);//这里有问题，所以用原本的
//	result = 8LL;
//	*(_DWORD*)a1 = (int)test_spawn_script_pointers3;
//	*(_DWORD*)(a1 + 17600) = 0;
//	*(_DWORD*)((unsigned int)(a1 + 17604) + 4LL) = -1;
//	*(_QWORD*)(unsigned int)(a1 + 17604) = 0xFFFFFFFFLL;
//	*(_DWORD*)(a1 + 17604) = 0;
//	*(_DWORD*)(a1 + 17616) = 0;
//	*(_DWORD*)(a1 + 17612) = 0;
//	*(_DWORD*)a1 = v3;
//	*(float*)(a1 + 17620) = v4;
//	*(_DWORD*)(a1 + 216) = 8;
//	*(_DWORD*)(a1 + 172) = 0;
//	*(float*)(a1 + 17628) = v4;
//	*(float*)(a1 + 17624) = v4;
//	return result;
//}

//void test_spawn() // ok版本
//{
//	_DWORD* v2 = (_DWORD*)temp_registers[3];
//	char v1916[4];
//	__int64 result;
//	_DWORD* v181; // r24
//	__int64 v182; // r2
//	int v183; // r28
//	int v184; // r8
//
//	copyJumptable((int*)0xCAD7B8, test_spawn_script_pointers_test1);
//
//
//	v1916[1] = 0;
//	v1916[0] = -1;
//	v181 = (_DWORD*)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v1916);
//	//GameCall<int>(0x7D9F08, 0xd8fe60)((unsigned int)v181);
//	sub_7D9F08_test_func((unsigned int)v181);
//	//v183 = *(_DWORD*)(0xd8fe60 - 18408);
//	v183 = (int)test_spawn_script_pointers_test1;
//	result = *(unsigned int*)(0xd8fe60 - 18420);
//	v184 = *(_DWORD*)(0xd8fe60 - 18412);
//	*v181 = result;
//	*(_DWORD*)(unsigned int)((_DWORD)v181 + 17632) = v184;
//	*(_DWORD*)((unsigned int)((_DWORD)v181 + 17632) + 4LL) = (_DWORD)v181;
//	v181[4408] = v183;
//	*v2 = (_DWORD)v181;
//	// set return
//	temp_registers[3] = result;
//}


//void test_spawn() // 刹帝利
//{
//	_DWORD* v2 = (_DWORD*)temp_registers[3];
//	char v1796[4];
//	__int64 result;
//	__int64 v1649; // r3
//	unsigned __int64 v1650; // r27
//	_DWORD* v1651; // r24
//	int v1653; // r29
//	int v1654; // r4
//	int v1655; // r26
//
//
//
//	if (test_spawn_script_pointers_initialized == false)
//	{
//		copyJumptable((int*)0xC971C0, test_spawn_script_pointers_test1);
//		test_spawn_script_pointers_test1[58] = (int)test_spawn_model_hash;
//		test_spawn_script_pointers_initialized = true;
//	}
//
//	v1796[1] = 0;
//	v1796[0] = -1;
//	v1649 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v1796);
//	v1650 = (unsigned int)v1649;
//	v1651 = (_DWORD*)v1649;
//	//result = sub_7D9F08_test_func((unsigned int)v1649);
//	result = GameCall<int>(0x7D9F08, 0xd8fe60)((unsigned int)v1649);
//	v1653 = *(_DWORD*)(0xd8fe60 - 17852);
//	v1654 = (int)test_spawn_script_pointers_test1;
//	v1655 = *(_DWORD*)(0xd8fe60 - 17856);
//	*(_DWORD*)v1650 = *(_DWORD*)(0xd8fe60 - 17864);
//	*v1651 = v1654;
//	*(_DWORD*)(unsigned int)((_DWORD)v1651 + 17632) = v1655;
//	*(_DWORD*)((unsigned int)((_DWORD)v1651 + 17632) + 4LL) = (_DWORD)v1651;
//	v1651[4408] = v1653;
//	*v2 = (_DWORD)v1651;
//	// set return
//	temp_registers[3] = result;
//}


void test_spawn() // 权天使 射击浮游
{
	_DWORD* v2 = (_DWORD*)temp_registers[3];
	char v1854[4];
	__int64 result;
	_DWORD *v4; // r27
	__int64 v5; // r2
	int v6; // r24
	int v7; // r26



	if (test_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int*)0xCDABA8, test_spawn_script_pointers_test1);
		test_spawn_script_pointers_test1[58] = (int)test_spawn_model_hash;
		test_spawn_script_pointers_initialized = true;
	}

	v1854[1] = 0;
	v1854[0] = -1;
	v4 = (_DWORD*)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v1854);
	GameCall<int>(0x7D9F08, 0xd8fe60)((unsigned int)v4);
	v6 = *(_DWORD*)(0xd8fe60 - 17968);
	result = (int)test_spawn_script_pointers_test1;
	v7 = *(_DWORD*)(0xd8fe60 - 17856);
	*v4 = result;
	*(_DWORD*)(unsigned int)((_DWORD)v4 + 17632) = v7;
	*(_DWORD*)((unsigned int)((_DWORD)v4 + 17632) + 4LL) = (_DWORD)v4;
	v4[4408] = v6;
	*v2 = (_DWORD)v4;
	// set return
	temp_registers[3] = result;
}