#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int Zabanya_type_script_pointers[500];
int Zabanya_spawn_script_pointers[500];

void Zabanya_spawn_Funnel_model_hash()
{
	int hash = 0x8D71B5D3;
}


void Zabanya_Funnel_TypeNormal_spawn()
{
	_DWORD* v2 = (_DWORD*)temp_registers[3];
	char v1796[4];
	__int64 result;
	__int64 v1649; // r3
	unsigned __int64 v1650; // r27
	_DWORD* v1651; // r24
	int v1653; // r29
	int v1654; // r4
	int v1655; // r26




	copyJumptable((int*)0xCDABA8, Zabanya_spawn_script_pointers);
	Zabanya_spawn_script_pointers[58] = (int)Zabanya_spawn_Funnel_model_hash;

	copyJumptable((int*)0xCC1538, Zabanya_type_script_pointers);//先读取原本刹帝利的指针
	//下面按照需要换成其他的
	//test_spawn_script_pointers_test0[0] = 0x00D4F560;
	//test_spawn_script_pointers_test0[1] = 0x00D4F5A0;
	//test_spawn_script_pointers_test0[5] = 0x00D43738;
	Zabanya_type_script_pointers[8] = 0x00D46170;//是否读取projectile的aleo信息，并且读取更多projectile信息
	//test_spawn_script_pointers_test0[10] = 0x00D45460;
	//test_spawn_script_pointers_test0[12] = 0x00D45410;
	//test_spawn_script_pointers_test0[14] = 0x00D45468;//射击结束是否消失
	//test_spawn_script_pointers_test0[15] = 0x00D45428;//射击结束回到身上是否有回归动画
	//test_spawn_script_pointers_test0[20] = 0x00D453F0;
	//test_spawn_script_pointers_test0[23] = 0x00D43768;
	//test_spawn_script_pointers_test0[25] = 0x00D44E08;
	Zabanya_type_script_pointers[27] = 0x00D4F5B0;//移动轨迹 直线 | 乱数
	//test_spawn_script_pointers_test0[31] = 0x00D4F5A8;
	//test_spawn_script_pointers_test0[32] = 0;
	//test_spawn_script_pointers_test0[33] = 0;
	//test_spawn_script_pointers_test0[34] = 0x00D4F5B8;
	//test_spawn_script_pointers_test0[35] = 0x00D4F5C0;
	//test_spawn_script_pointers_test0[36] = 0x00D3B608;
	//test_spawn_script_pointers_test0[37] = 0x00D3E608;
	//test_spawn_script_pointers_test0[38] = 0x00D42328;
	//test_spawn_script_pointers_test0[39] = 0x00D4F568;
	//test_spawn_script_pointers_test0[40] = 0x00D3E610;
	//test_spawn_script_pointers_test0[41] = 0x00D3E618;
	//test_spawn_script_pointers_test0[42] = 0x00D422B8;
	//test_spawn_script_pointers_test0[43] = 0x00D422C0;
	//test_spawn_script_pointers_test0[44] = 0x00D42330;
	//test_spawn_script_pointers_test0[45] = 0x00D42340;
	//test_spawn_script_pointers_test0[46] = 0x00D422C8;
	//test_spawn_script_pointers_test0[47] = 0x00D422D0;

	v1796[1] = 0;
	v1796[0] = -1;
	v1649 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v1796);
	v1650 = (unsigned int)v1649;
	v1651 = (_DWORD*)v1649;
	//result = sub_7D9F08_test_func((unsigned int)v1649);
	result = GameCall<int>(0x7D9F08, 0xd8fe60)((unsigned int)v1649);
	v1653 = (int)Zabanya_type_script_pointers;
	v1654 = (int)Zabanya_spawn_script_pointers;
	v1655 = *(_DWORD*)(0xd8fe60 - 17856);
	*(_DWORD*)v1650 = *(_DWORD*)(0xd8fe60 - 17864);
	*v1651 = v1654;
	*(_DWORD*)(unsigned int)((_DWORD)v1651 + 17632) = v1655;
	*(_DWORD*)((unsigned int)((_DWORD)v1651 + 17632) + 4LL) = (_DWORD)v1651;
	v1651[4408] = v1653;
	*v2 = (_DWORD)v1651;
	// set return
	temp_registers[3] = result;
}