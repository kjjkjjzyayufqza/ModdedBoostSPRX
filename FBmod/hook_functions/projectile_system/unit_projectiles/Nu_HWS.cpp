#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[500];
int nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers[500];
int nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers_2[500];

bool nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers_initialized;
bool nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers_2_initialized;


void nu_gundam_hws_re_gz_shoot_assist_spawn_model_hash()
{
	int hash = 0xE22E8826;
}

unsigned int sub_95F870(__int64 a1, unsigned int *a2, int a3)
{
	unsigned int *v5; // r27
	__int64 v6; // r3
	int *v7; // r29
	_DWORD *v8; // r28
	int v9; // r11
	int v10; // r10
	__int64 v11; // r2
	char v13[24]; // [sp+70h] [-50h] BYREF

	v5 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
	v13[0] = -1;
	v13[1] = 0;
	v6 = GameCall<int>(0x9F40D8, 0xdafdfc)(28LL, v13); // sub_9F40D8(28LL, v13);
	v7 = (int *)(unsigned int)v6;
	v8 = (_DWORD *)v6;
	GameCall<int>(0x9F40E8, 0xdafdfc)((unsigned int)v6); // sub_9F40E8((unsigned int)v6);
	v9 = 0xc83818;
	v10 = 0xc83a78;
	v7[4] = a3;
	*v7 = v9;
	v7[5] = -241;
	*v8 = v10;
	v8[6] = 548288727; // Projectile_ID
	v11 = v5[1];
	return ((__int64(__fastcall *)(unsigned int *, int *))*v5)(a2, v7);
}

__int64 __fastcall sub_95F9B4(_DWORD *a1)
{
	__int64 result; // r3

	int model_pointer = (int)nu_gundam_hws_re_gz_shoot_assist_spawn_model_hash;

	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[0] = 0x00D54FA8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[1] = 0x00D54FA0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[2] = 0x00D3B608;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[3] = 0x00D3E608;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[4] = 0x00D42328;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[5] = 0x00D424D0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[6] = 0x00D3E610;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[7] = 0x00D3E618;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[8] = 0x00D422B8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[9] = 0x00D422C0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[10] = 0x00D42330;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[11] = 0x00D425F8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[12] = 0x00D422C8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[13] = 0x00D422D0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[14] = 0x00D425D0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[15] = 0x00D3E620;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[16] = 0x00D422F8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[17] = 0x00D42238;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[18] = 0x00D3E660;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[19] = 0x00D3E5D8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[20] = 0x00D42258;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[21] = 0x00D3E628;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[22] = 0x00D422F0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[23] = 0x00D3E5E0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[24] = 0x00D3E5E8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[25] = 0x00D39E10;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[26] = 0x00D39E18;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[27] = 0x00D3E630;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[28] = 0x00D42450;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[29] = 0x00D3E490;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[30] = 0x00D3E498;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[31] = 0x00D3E8B0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[32] = 0x00D3E4A8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[33] = 0x00D3E4B0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[34] = 0x00D3E4B8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[35] = 0x00D3E648;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[36] = 0x00D3E720;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[37] = 0x00D425F0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[38] = 0x00D3E600;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[39] = 0x00D420F0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[40] = 0x00D42228;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[41] = 0x00D420D0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[42] = 0x00D42270;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[43] = 0x00D424F0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[44] = 0x00D42090;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[45] = 0x00D3E4C0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[46] = 0x00D42278;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[47] = 0x00D420C8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[48] = 0x00D424C0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[49] = 0x00D42260;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[50] = 0x00D42308;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[51] = 0x00D42248;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[52] = 0x00D42250;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[53] = 0x00D422E0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[54] = 0x00D422E8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[55] = 0x00D3E4C8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[56] = 0x00D3E4D0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[57] = 0x00D42110;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[58] = (int)model_pointer; // 0x00D54F80;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[59] = 0x00D3E4D8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[60] = 0x00D3E4E0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[61] = 0x00D3E898;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[62] = 0x00D3E4E8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[63] = 0x00D3E4F0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[64] = 0x00D3E4F8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[65] = 0x00D45A88;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[66] = 0x00D42500;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[67] = 0x00D42208;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[68] = 0x00D42200;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[69] = 0x00D3E500;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[70] = 0x00D3E508;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[71] = 0x00D54F88;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[72] = 0x00D3E518;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[73] = 0x00D3E520;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[74] = 0x00D3E528;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[75] = 0x00D3E530;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[76] = 0x00D3E538;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[77] = 0x00D3E540;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[78] = 0x00D43618;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[79] = 0x00D3E548;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[80] = 0x00D3E550;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[81] = 0x00D3E8C0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[82] = 0x00D3E560;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[83] = 0x00D3E8C8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[84] = 0x00D3E570;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[85] = 0x00D3E578;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[86] = 0x00D3E580;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[87] = 0x00D3E588;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[88] = 0x00D3E590;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[89] = 0x00D3E598;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[90] = 0x00D3E5A0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[91] = 0x00D3E8D0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[92] = 0x00D3E5A8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[93] = 0x00D42540;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[94] = 0x00D3E5B8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[95] = 0x00D3E5C0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[96] = 0x00D3E5C8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[97] = 0x00D3E5D0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[98] = 0x00D42210;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[99] = 0x00D3E5F0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[100] = 0x00D3E5F8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[101] = 0x00D42240;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[102] = 0x00D421F0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[103] = 0x00D42498;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[104] = 0x00D42230;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[105] = 0x00D423B8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[106] = 0x00D42478;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[107] = 0x00D425E8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[108] = 0x00D3E640;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[109] = 0x00D42320;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[110] = 0x00D42518;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[111] = 0x00D42358;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[112] = 0x00D42360;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[113] = 0x00D42448;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[114] = 0x00D42510;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[115] = 0x00D42378;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[116] = 0x00D42380;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[117] = 0x00D42398;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[118] = 0x00D42460;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[119] = 0x00D42388;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[120] = 0x00D42390;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[121] = 0x00D422A0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[122] = 0x00D42268;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[123] = 0x00D42428;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[124] = 0x00D42410;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[125] = 0x00D42280;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[126] = 0x00D42408;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[127] = 0x00D3E668;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[128] = 0x00D3E650;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[129] = 0x00D3E658;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[130] = 0x00D42470;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[131] = 0x00D3E8B8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[132] = 0x00D3E670;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[133] = 0x00D3E678;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[134] = 0x00D3E680;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[135] = 0x00D3E688;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[136] = 0x00D3E690;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[137] = 0x00D3E698;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[138] = 0x00D3E6A0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[139] = 0x00D3E8A8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[140] = 0x00D424B8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[141] = 0x00D42468;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[142] = 0x00D424C8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[143] = 0x00D54F90;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[144] = 0x00D3E8E0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[145] = 0x00D3E8E8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[146] = 0x00D3E8F0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[147] = 0x00D424F8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[148] = 0x00D43620;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[149] = 0x00D3E900;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[150] = 0x00D3E908;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[151] = 0x00D3E910;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[152] = 0x00D42558;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[153] = 0x00D45A30;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[154] = 0x00D42568;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[155] = 0x00D3E918;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[156] = 0x00D3E920;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[157] = 0x00D42548;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[158] = (int)sub_95F870; // 0x00D54F98;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[159] = 0x00D425B8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[160] = 0x00D425C0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[161] = 0x00D425C8;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[162] = 0x00D43628;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[163] = 0x00D45A28;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[164] = 0x00D45A20;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[165] = 0x00D45AA0;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[166] = 0x00D45A08;
	nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers[167] = 0x00D43630;

	GameCall<int>(0x9F4508, 0xdafdfc)(a1, 281320LL);
	result = (unsigned int)nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers;
	*a1 = (unsigned int)nu_gundam_hws_re_gz_shoot_assist_spawn_script_pointers;
	return result;
}

void nu_gundam_hws_re_gz_shoot_assist_spawn() 
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1492[4];
	int v1058;
	int result;

	v1492[0] = -1;
	v1492[1] = 0;
	v1058 = GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v1492);
	result = sub_95F9B4((_DWORD *)v1058); //GameCall<int>(0x9f1138, 0xd8fe60)((_DWORD *)v1058);
	*v2 = v1058;

	// set return
	temp_registers[3] = result;
}

void nu_gundam_hws_re_gz_saber_throw_spawn_model_hash()
{
	int hash = 0x74560A0E;
}

__int64 sub_80C6E4(unsigned int *a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
	GameCall<int>(0x7F18A0, 0xd8fe60)(a1, a2, a3, a4);
	GameCall<int>(0x763D0C, 0xd8fe60)((__int64)a1, 1u);
	return GameCall<int>(0x763C3C, 0xd8fe60)(a1, 0xb6cf76b7, 2u, -1);
}

// 0x1218160
__int64 sub_80C77C(int *a1, __int64 a2)
{
	if (nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers_2_initialized == false)
	{
		copyJumptable((int *)0xcabef8, nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers_2);
		nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers_2_initialized = true;

		nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers_2[37] = (int)sub_80C6E4;
	}

	int v3; // r8
	__int64 result; // r3

	GameCall<int>(0x7F1824, 0xd8fe60)((unsigned int)a1, a2);
	v3 = (int)nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers_2;
	result = 0LL;
	*a1 = 0xD8EFCC;
	a1[4400] = 0;
	*a1 = v3;
	a1[4402] = 0;
	a1[4401] = 0;
	a1[4404] = 0;
	a1[4403] = 0;
	return result;
}

// 0x1218310
void nu_gundam_hws_saber_throw_spawn() // originally lacus infinite justice's boomerang, 0x5596, 0x7D2604
{
	if (nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xc9b5c0, nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers);
		nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers_initialized = true;

		nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers[58] = (int)nu_gundam_hws_re_gz_saber_throw_spawn_model_hash;
		nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers[37] = (int)sub_80C6E4; // 0x01218020
	}

	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2175[4];
	int *v855;
	int result;

	v2175[0] = -1;
	v2175[1] = 0;
	v855 = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2175);
	result = sub_80C77C((int *)v855, 0xA00006);
	*v855 = (int)nu_gundam_hws_re_gz_sbaer_throw_spawn_script_pointers;
	*v2 = (_DWORD)v855;

	// set return
	temp_registers[3] = result;
}

