#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int akatsuki_spawn_script_pointers_akatsuki1[500];
int akatsuki_spawn_script_pointers_akatsuki2[500];

void akatsuki_spawn_model_hash()
{
	int hash = 0xC5997F0B;
}


void akatsuki_NormalType_spawn() // 测试
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




	copyJumptable((int*)0xCDABA8, akatsuki_spawn_script_pointers_akatsuki2);
	akatsuki_spawn_script_pointers_akatsuki2[58] = (int)akatsuki_spawn_model_hash;

	copyJumptable((int*)0xCC1538, akatsuki_spawn_script_pointers_akatsuki1);//先读取原本刹帝利的指针
	//下面按照需要换成其他的
	//akatsuki_spawn_script_pointers_akatsuki1[0] = 0x00D4F560;
	//akatsuki_spawn_script_pointers_akatsuki1[1] = 0x00D4F5A0;
	//akatsuki_spawn_script_pointers_akatsuki1[5] = 0x00D43738;
	akatsuki_spawn_script_pointers_akatsuki1[8] = 0x00D46170;//是否读取projectile的aleo信息，并且读取更多projectile信息
	//akatsuki_spawn_script_pointers_akatsuki1[10] = 0x00D45460;
	//akatsuki_spawn_script_pointers_akatsuki1[12] = 0x00D45410;
	//akatsuki_spawn_script_pointers_akatsuki1[14] = 0x00D45468;//射击结束是否消失
	//akatsuki_spawn_script_pointers_akatsuki1[15] = 0x00D45428;//射击结束回到身上是否有回归动画
	//akatsuki_spawn_script_pointers_akatsuki1[20] = 0x00D453F0;
	//akatsuki_spawn_script_pointers_akatsuki1[23] = 0x00D43768;
	//akatsuki_spawn_script_pointers_akatsuki1[25] = 0x00D44E08;
	akatsuki_spawn_script_pointers_akatsuki1[27] = 0x00D4F5B0;//移动轨迹 直线 | 乱数
	//akatsuki_spawn_script_pointers_akatsuki1[31] = 0x00D4F5A8;
	//akatsuki_spawn_script_pointers_akatsuki1[32] = 0;
	//akatsuki_spawn_script_pointers_akatsuki1[33] = 0;
	//akatsuki_spawn_script_pointers_akatsuki1[34] = 0x00D4F5B8;
	//akatsuki_spawn_script_pointers_akatsuki1[35] = 0x00D4F5C0;
	//akatsuki_spawn_script_pointers_akatsuki1[36] = 0x00D3B608;
	//akatsuki_spawn_script_pointers_akatsuki1[37] = 0x00D3E608;
	//akatsuki_spawn_script_pointers_akatsuki1[38] = 0x00D42328;
	//akatsuki_spawn_script_pointers_akatsuki1[39] = 0x00D4F568;
	//akatsuki_spawn_script_pointers_akatsuki1[40] = 0x00D3E610;
	//akatsuki_spawn_script_pointers_akatsuki1[41] = 0x00D3E618;
	//akatsuki_spawn_script_pointers_akatsuki1[42] = 0x00D422B8;
	//akatsuki_spawn_script_pointers_akatsuki1[43] = 0x00D422C0;
	//akatsuki_spawn_script_pointers_akatsuki1[44] = 0x00D42330;
	//akatsuki_spawn_script_pointers_akatsuki1[45] = 0x00D42340;
	//akatsuki_spawn_script_pointers_akatsuki1[46] = 0x00D422C8;
	//akatsuki_spawn_script_pointers_akatsuki1[47] = 0x00D422D0;

	v1796[1] = 0;
	v1796[0] = -1;
	v1649 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v1796);
	v1650 = (unsigned int)v1649;
	v1651 = (_DWORD*)v1649;
	//result = sub_7D9F08_akatsuki_func((unsigned int)v1649);
	result = GameCall<int>(0x7D9F08, 0xd8fe60)((unsigned int)v1649);
	v1653 = (int)akatsuki_spawn_script_pointers_akatsuki1;
	v1654 = (int)akatsuki_spawn_script_pointers_akatsuki2;
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






int akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[500];
int akatsuki_spawn_script_pointers_akatsuki_NotMoveType_2[500];


void akatsuki_NotMoveType_spawn() // 测试
{
	_DWORD* v2 = (_DWORD*)temp_registers[3];
	char v1795[4];
	__int64 result;
	__int64 v523; // r3
	unsigned __int64 v524; // r25
	_DWORD* v525; // r24
	__int64 v526; // r2
	int v527; // r4
	int v528; // r12
	int v529; // r10




	copyJumptable((int*)0xC96F68, akatsuki_spawn_script_pointers_akatsuki_NotMoveType_2);
	akatsuki_spawn_script_pointers_akatsuki_NotMoveType_2[58] = (int)akatsuki_spawn_model_hash;

	copyJumptable((int*)0xCC1B98, akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1);//先读取原本刹帝利的指针
	//下面按照需要换成其他的
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[0] = 0x00D4F560;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[1] = 0x00D4F5A0;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[5] = 0x00D43738;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[8] = 0x00D46170;//是否读取projectile的aleo信息，并且读取更多projectile信息
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[10] = 0x00D45460;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[12] = 0x00D45410;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[14] = 0x00D45468;//射击结束是否消失
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[15] = 0x00D45428;//射击结束回到身上是否有回归动画
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[20] = 0x00D453F0;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[23] = 0x00D43768;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[25] = 0x00D44E08;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[27] = 0x00D4F5B0;//移动轨迹 直线 | 乱数
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[31] = 0x00D4F5A8;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[32] = 0;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[33] = 0;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[34] = 0x00D4F5B8;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[35] = 0x00D4F5C0;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[36] = 0x00D3B608;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[37] = 0x00D3E608;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[38] = 0x00D42328;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[39] = 0x00D4F568;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[40] = 0x00D3E610;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[41] = 0x00D3E618;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[42] = 0x00D422B8;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[43] = 0x00D422C0;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[44] = 0x00D42330;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[45] = 0x00D42340;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[46] = 0x00D422C8;
	//akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1[47] = 0x00D422D0;

	v1795[1] = 0;
	v1795[0] = -1;
	v523 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v1795);
	v524 = (unsigned int)v523;
	v525 = (_DWORD*)v523;
	GameCall<int>(0x7D9E7C, 0xd8fe60)((_DWORD*)(unsigned int)v523);
	v527 = (int)akatsuki_spawn_script_pointers_akatsuki_NotMoveType_1;
	result = (unsigned int)((_DWORD)0xd8fe60 + 17632);
	v528 = (int)akatsuki_spawn_script_pointers_akatsuki_NotMoveType_2;
	v529 = *(_DWORD*)(0xd8fe60 - 18592);
	*(_DWORD*)v524 = *(_DWORD*)(0xd8fe60 - 18588);
	*(_DWORD*)(result + 0xC) = 1065353216;
	*(_DWORD*)(result + 8) = 0;
	*(_DWORD*)result = 0;
	*(_DWORD*)(result + 4) = 0;
	*v525 = v528;
	*(_DWORD*)(unsigned int)((_DWORD)v525 + 17648) = v529;
	*(_DWORD*)((unsigned int)((_DWORD)v525 + 17648) + 4LL) = (_DWORD)v525;
	v525[4412] = v527;
	*v2 = (_DWORD)v525;
	// set return
	temp_registers[3] = result;
}