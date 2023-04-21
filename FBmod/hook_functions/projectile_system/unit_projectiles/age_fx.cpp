#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int test_spawn_script_pointers_test1[500];
int test_spawn_script_pointers_test2[500];
bool test_spawn_script_pointers_initialized;

void test_spawn_model_hash()
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



	if (test_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int*)0xC9CD40, test_spawn_script_pointers_test1);
		test_spawn_script_pointers_test1[0] = 0x00D4C108;
		test_spawn_script_pointers_test1[1] = 0x00D4C0C8;
		test_spawn_script_pointers_test1[5] = 0x00D43738;
		test_spawn_script_pointers_test1[8] = 0x00D45550;//是否读取projectile的aleo信息，并且读取更多projectile信息，读取方向
		test_spawn_script_pointers_test1[12] = 0x00D4C0D0;
		test_spawn_script_pointers_test1[14] = 0x00D49620;//射击结束是否消失
		test_spawn_script_pointers_test1[15] = 0x00D49618;//射击结束回到身上是否有回归动画
		test_spawn_script_pointers_test1[17] = 0x00D45540;
		test_spawn_script_pointers_test1[19] = 0x00D45548;
		test_spawn_script_pointers_test1[26] = 0x00D43778;
		test_spawn_script_pointers_test1[27] = 0x00D4C0F8;//移动轨迹 直线 | 乱数
		test_spawn_script_pointers_test1[28] = 0x00D4C100;
		test_spawn_script_pointers_test1[30] = 0x00D45420;
		test_spawn_script_pointers_test1[31] = 0x00D45458;
		test_spawn_script_pointers_test1[33] = 0x00D45530;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		//test_spawn_script_pointers_test1[0] = 0;
		copyJumptable((int*)0xC9CAE8, test_spawn_script_pointers_test2); //CDABA8
		test_spawn_script_pointers_test2[58] = (int)test_spawn_model_hash;



		test_spawn_script_pointers_initialized = true;
	}

	v2189[1] = 0;
	v2189[0] = -1;
	v1319 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2189);
	v1320 = (unsigned int)v1319;
	v1321 = (_DWORD*)v1319;
	GameCall<int>(0x7DA0D4, 0xd8fe60)((unsigned int)v1319);
	result = (__int64)(v1321 + 4408);
	v1323 = (int)test_spawn_script_pointers_test1;
	v1324 = (int)test_spawn_script_pointers_test2;
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