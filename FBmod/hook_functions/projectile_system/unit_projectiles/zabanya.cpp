#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int Zabanya_type_script_pointers[500];
int Zabanya_spawn_script_pointers[500];
bool init_Zabanya_spawn = false;
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


	if (init_Zabanya_spawn == false) {


		copyJumptable((int*)0xCDABA8, Zabanya_spawn_script_pointers);
		Zabanya_spawn_script_pointers[58] = (int)Zabanya_spawn_Funnel_model_hash;

		copyJumptable((int*)0xCDA5A0, Zabanya_type_script_pointers);//先读取原本刹帝利的指针  //射两发0xCDA5A0 会卡

		Zabanya_type_script_pointers[18] = 0x00D45478;//这个会卡

		//Zabanya_type_script_pointers[8] = 0x00D46170;//是否读取projectile的aleo信息，并且读取更多projectile信息
		Zabanya_type_script_pointers[14] = 0x00D45468;//射击结束是否消失
		Zabanya_type_script_pointers[15] = 0x00D45428;//射击结束回到身上是否有回归动画
		Zabanya_type_script_pointers[20] = 0x00D49648;//这个会卡
		//Zabanya_type_script_pointers[27] = 0x00D4F5B0;//移动轨迹 直线 | 乱数
		init_Zabanya_spawn = true;
	}


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