#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int exia_EX_Attack_despawn_script_pointers[500];
int exia_EX_Attack_no_hit_despawn_script_pointers[500];

void exia_EX_Attack_despawn_model_hash()
{
	int hash = 0xd05ba67f;
}

__int64 __fastcall sub_8006A8(_DWORD *a1)
{
	__int64 result; // r3

	exia_EX_Attack_despawn_script_pointers[0] = 0x00D46498;
	exia_EX_Attack_despawn_script_pointers[1] = 0x00D46490;
	exia_EX_Attack_despawn_script_pointers[2] = 0x00D3B608;
	exia_EX_Attack_despawn_script_pointers[3] = 0x00D3E608;
	exia_EX_Attack_despawn_script_pointers[4] = 0x00D42328;
	exia_EX_Attack_despawn_script_pointers[5] = 0x00D424D0;
	exia_EX_Attack_despawn_script_pointers[6] = 0x00D3E610;
	exia_EX_Attack_despawn_script_pointers[7] = 0x00D3E618;
	exia_EX_Attack_despawn_script_pointers[8] = 0x00D422B8;
	exia_EX_Attack_despawn_script_pointers[9] = 0x00D422C0;
	exia_EX_Attack_despawn_script_pointers[10] = 0x00D42330;
	exia_EX_Attack_despawn_script_pointers[11] = 0x00D42340;
	exia_EX_Attack_despawn_script_pointers[12] = 0x00D422C8;
	exia_EX_Attack_despawn_script_pointers[13] = 0x00D422D0;
	exia_EX_Attack_despawn_script_pointers[14] = 0x00D424B0;
	exia_EX_Attack_despawn_script_pointers[15] = 0x00D3E620;
	exia_EX_Attack_despawn_script_pointers[16] = 0x00D422F8;
	exia_EX_Attack_despawn_script_pointers[17] = 0x00D42238;
	exia_EX_Attack_despawn_script_pointers[18] = 0x00D3E660;
	exia_EX_Attack_despawn_script_pointers[19] = 0x00D3E5D8;
	exia_EX_Attack_despawn_script_pointers[20] = 0x00D42258;
	exia_EX_Attack_despawn_script_pointers[21] = 0x00D3E628;
	exia_EX_Attack_despawn_script_pointers[22] = 0x00D422F0;
	exia_EX_Attack_despawn_script_pointers[23] = 0x00D3E5E0;
	exia_EX_Attack_despawn_script_pointers[24] = 0x00D3E5E8;
	exia_EX_Attack_despawn_script_pointers[25] = 0x00D39E10;
	exia_EX_Attack_despawn_script_pointers[26] = 0x00D39E18;
	exia_EX_Attack_despawn_script_pointers[27] = 0x00D3E630;
	exia_EX_Attack_despawn_script_pointers[28] = 0x00D42450;
	exia_EX_Attack_despawn_script_pointers[29] = 0x00D3E490;
	exia_EX_Attack_despawn_script_pointers[30] = 0x00D3E498;
	exia_EX_Attack_despawn_script_pointers[31] = 0x00D3E4A0;
	exia_EX_Attack_despawn_script_pointers[32] = 0x00D3E4A8;
	exia_EX_Attack_despawn_script_pointers[33] = 0x00D3E4B0;
	exia_EX_Attack_despawn_script_pointers[34] = 0x00D3E4B8;
	exia_EX_Attack_despawn_script_pointers[35] = 0x00D3E648;
	exia_EX_Attack_despawn_script_pointers[36] = 0x00D3E720;
	exia_EX_Attack_despawn_script_pointers[37] = 0x00D46480;
	exia_EX_Attack_despawn_script_pointers[38] = 0x00D3E600;
	exia_EX_Attack_despawn_script_pointers[39] = 0x00D420F0;
	exia_EX_Attack_despawn_script_pointers[40] = 0x00D42228;
	exia_EX_Attack_despawn_script_pointers[41] = 0x00D420D0;
	exia_EX_Attack_despawn_script_pointers[42] = 0x00D42270;
	exia_EX_Attack_despawn_script_pointers[43] = 0x00D424F0;
	exia_EX_Attack_despawn_script_pointers[44] = 0x00D42090;
	exia_EX_Attack_despawn_script_pointers[45] = 0x00D3E4C0;
	exia_EX_Attack_despawn_script_pointers[46] = 0x00D42278;
	exia_EX_Attack_despawn_script_pointers[47] = 0x00D420C8;
	exia_EX_Attack_despawn_script_pointers[48] = 0x00D424C0;
	exia_EX_Attack_despawn_script_pointers[49] = 0x00D42260;
	exia_EX_Attack_despawn_script_pointers[50] = 0x00D42308;
	exia_EX_Attack_despawn_script_pointers[51] = 0x00D42248;
	exia_EX_Attack_despawn_script_pointers[52] = 0x00D42250;
	exia_EX_Attack_despawn_script_pointers[53] = 0x00D422E0;
	exia_EX_Attack_despawn_script_pointers[54] = 0x00D422E8;
	exia_EX_Attack_despawn_script_pointers[55] = 0x00D3E4C8;
	exia_EX_Attack_despawn_script_pointers[56] = 0x00D3E4D0;
	exia_EX_Attack_despawn_script_pointers[57] = 0x00D42110;
	exia_EX_Attack_despawn_script_pointers[58] = (int)exia_EX_Attack_despawn_model_hash; // 0x00D46458;
	exia_EX_Attack_despawn_script_pointers[59] = 0x00D3E4D8;
	exia_EX_Attack_despawn_script_pointers[60] = 0x00D3E4E0;
	exia_EX_Attack_despawn_script_pointers[61] = 0x00D46468;
	exia_EX_Attack_despawn_script_pointers[62] = 0x00D3E4E8;
	exia_EX_Attack_despawn_script_pointers[63] = 0x00D3E4F0;
	exia_EX_Attack_despawn_script_pointers[64] = 0x00D3E4F8;
	exia_EX_Attack_despawn_script_pointers[65] = 0x00D55770;
	exia_EX_Attack_despawn_script_pointers[66] = 0x00D421F8;
	exia_EX_Attack_despawn_script_pointers[67] = 0x00D46488;
	exia_EX_Attack_despawn_script_pointers[68] = 0x00D42200;
	exia_EX_Attack_despawn_script_pointers[69] = 0x00D3E500;
	exia_EX_Attack_despawn_script_pointers[70] = 0x00D3E508;
	exia_EX_Attack_despawn_script_pointers[71] = 0x00D46460;
	exia_EX_Attack_despawn_script_pointers[72] = 0x00D3E518;
	exia_EX_Attack_despawn_script_pointers[73] = 0x00D3E520;
	exia_EX_Attack_despawn_script_pointers[74] = 0x00D3E528;
	exia_EX_Attack_despawn_script_pointers[75] = 0x00D3E530;
	exia_EX_Attack_despawn_script_pointers[76] = 0x00D3E538;
	exia_EX_Attack_despawn_script_pointers[77] = 0x00D3E540;
	exia_EX_Attack_despawn_script_pointers[78] = 0x00D3E8A0;
	exia_EX_Attack_despawn_script_pointers[79] = 0x00D3E548;
	exia_EX_Attack_despawn_script_pointers[80] = 0x00D3E550;
	exia_EX_Attack_despawn_script_pointers[81] = 0x00D3E558;
	exia_EX_Attack_despawn_script_pointers[82] = 0x00D3E560;
	exia_EX_Attack_despawn_script_pointers[83] = 0x00D3E568;
	exia_EX_Attack_despawn_script_pointers[84] = 0x00D3E570;
	exia_EX_Attack_despawn_script_pointers[85] = 0x00D3E578;
	exia_EX_Attack_despawn_script_pointers[86] = 0x00D3E580;
	exia_EX_Attack_despawn_script_pointers[87] = 0x00D3E588;
	exia_EX_Attack_despawn_script_pointers[88] = 0x00D46430;
	exia_EX_Attack_despawn_script_pointers[89] = 0x00D46438;
	exia_EX_Attack_despawn_script_pointers[90] = 0x00D3E5A0;
	exia_EX_Attack_despawn_script_pointers[91] = 0x00D421D8;
	exia_EX_Attack_despawn_script_pointers[92] = 0x00D3E5A8;
	exia_EX_Attack_despawn_script_pointers[93] = 0x00D55740;
	exia_EX_Attack_despawn_script_pointers[94] = 0x00D3E5B8;
	exia_EX_Attack_despawn_script_pointers[95] = 0x00D3E5C0;
	exia_EX_Attack_despawn_script_pointers[96] = 0x00D3E5C8;
	exia_EX_Attack_despawn_script_pointers[97] = 0x00D3E5D0;
	exia_EX_Attack_despawn_script_pointers[98] = 0x00D46440;
	exia_EX_Attack_despawn_script_pointers[99] = 0x00D3E5F0;
	exia_EX_Attack_despawn_script_pointers[100] = 0x00D3E5F8;
	exia_EX_Attack_despawn_script_pointers[101] = 0x00D42240;
	exia_EX_Attack_despawn_script_pointers[102] = 0x00D421F0;
	exia_EX_Attack_despawn_script_pointers[103] = 0x00D42498;
	exia_EX_Attack_despawn_script_pointers[104] = 0x00D42230;
	exia_EX_Attack_despawn_script_pointers[105] = 0x00D423B8;
	exia_EX_Attack_despawn_script_pointers[106] = 0x00D42478;
	exia_EX_Attack_despawn_script_pointers[107] = 0x00D3E638;
	exia_EX_Attack_despawn_script_pointers[108] = 0x00D3E640;
	exia_EX_Attack_despawn_script_pointers[109] = 0x00D42320;
	exia_EX_Attack_despawn_script_pointers[110] = 0x00D423C8;
	exia_EX_Attack_despawn_script_pointers[111] = 0x00D42358;
	exia_EX_Attack_despawn_script_pointers[112] = 0x00D42360;
	exia_EX_Attack_despawn_script_pointers[113] = 0x00D42448;
	exia_EX_Attack_despawn_script_pointers[114] = 0x00D423B0;
	exia_EX_Attack_despawn_script_pointers[115] = 0x00D42378;
	exia_EX_Attack_despawn_script_pointers[116] = 0x00D42380;
	exia_EX_Attack_despawn_script_pointers[117] = 0x00D42398;
	exia_EX_Attack_despawn_script_pointers[118] = 0x00D42460;
	exia_EX_Attack_despawn_script_pointers[119] = 0x00D42388;
	exia_EX_Attack_despawn_script_pointers[120] = 0x00D42390;
	exia_EX_Attack_despawn_script_pointers[121] = 0x00D422A0;
	exia_EX_Attack_despawn_script_pointers[122] = 0x00D42268;
	exia_EX_Attack_despawn_script_pointers[123] = 0x00D42428;
	exia_EX_Attack_despawn_script_pointers[124] = 0x00D42338; // 0x00D42410;
	exia_EX_Attack_despawn_script_pointers[125] = 0x00D42280;
	exia_EX_Attack_despawn_script_pointers[126] = 0x00D42408;
	exia_EX_Attack_despawn_script_pointers[127] = 0x00D3E668;
	exia_EX_Attack_despawn_script_pointers[128] = 0x00D3E650;
	exia_EX_Attack_despawn_script_pointers[129] = 0x00D3E658;
	exia_EX_Attack_despawn_script_pointers[130] = 0x00D42470;
	exia_EX_Attack_despawn_script_pointers[131] = 0x00D46470;
	exia_EX_Attack_despawn_script_pointers[132] = 0x00D3E670;
	exia_EX_Attack_despawn_script_pointers[133] = 0x00D3E678;
	exia_EX_Attack_despawn_script_pointers[134] = 0x00D3E680;
	exia_EX_Attack_despawn_script_pointers[135] = 0x00D3E688;
	exia_EX_Attack_despawn_script_pointers[136] = 0x00D3E690;
	exia_EX_Attack_despawn_script_pointers[137] = 0x00D3E698;
	exia_EX_Attack_despawn_script_pointers[138] = 0x00D3E6A0;
	exia_EX_Attack_despawn_script_pointers[139] = 0x00D46448;
	exia_EX_Attack_despawn_script_pointers[140] = 0x00D424B8;
	exia_EX_Attack_despawn_script_pointers[141] = 0x00D42468;
	exia_EX_Attack_despawn_script_pointers[142] = 0x00D424C8;
	exia_EX_Attack_despawn_script_pointers[143] = 0x00D46450;
	exia_EX_Attack_despawn_script_pointers[144] = 0x00D46478;
	exia_EX_Attack_despawn_script_pointers[145] = 0x00000000;
	exia_EX_Attack_despawn_script_pointers[146] = 0x00000000;
	exia_EX_Attack_despawn_script_pointers[147] = 0x00000000;

	GameCall<int>(0x9F1998, 0xd8fe60)(a1, 14150LL);
	result = (unsigned int)exia_EX_Attack_despawn_script_pointers;
	*a1 = (unsigned int)exia_EX_Attack_despawn_script_pointers;
	return result;
}

void exia_EX_Attack_despawn()
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1405[4];
	int v437;
	int result;

	v1405[0] = -1;
	v1405[1] = 0;
	v437 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v1405);
	result = sub_8006A8((_DWORD *)v437);
	*v2 = v437;

	// set return
	temp_registers[3] = result;
}

__int64 __fastcall sub_800840(_DWORD *a1)
{
	__int64 result; // r3

	exia_EX_Attack_no_hit_despawn_script_pointers[0] = 0x00D464E8;
	exia_EX_Attack_no_hit_despawn_script_pointers[1] = 0x00D464E0;
	exia_EX_Attack_no_hit_despawn_script_pointers[2] = 0x00D3B608;
	exia_EX_Attack_no_hit_despawn_script_pointers[3] = 0x00D3E608;
	exia_EX_Attack_no_hit_despawn_script_pointers[4] = 0x00D42328;
	exia_EX_Attack_no_hit_despawn_script_pointers[5] = 0x00D424D0;
	exia_EX_Attack_no_hit_despawn_script_pointers[6] = 0x00D3E610;
	exia_EX_Attack_no_hit_despawn_script_pointers[7] = 0x00D3E618;
	exia_EX_Attack_no_hit_despawn_script_pointers[8] = 0x00D422B8;
	exia_EX_Attack_no_hit_despawn_script_pointers[9] = 0x00D422C0;
	exia_EX_Attack_no_hit_despawn_script_pointers[10] = 0x00D42330;
	exia_EX_Attack_no_hit_despawn_script_pointers[11] = 0x00D42340;
	exia_EX_Attack_no_hit_despawn_script_pointers[12] = 0x00D422C8;
	exia_EX_Attack_no_hit_despawn_script_pointers[13] = 0x00D422D0;
	exia_EX_Attack_no_hit_despawn_script_pointers[14] = 0x00D424B0;
	exia_EX_Attack_no_hit_despawn_script_pointers[15] = 0x00D3E620;
	exia_EX_Attack_no_hit_despawn_script_pointers[16] = 0x00D422F8;
	exia_EX_Attack_no_hit_despawn_script_pointers[17] = 0x00D42238;
	exia_EX_Attack_no_hit_despawn_script_pointers[18] = 0x00D3E660;
	exia_EX_Attack_no_hit_despawn_script_pointers[19] = 0x00D3E5D8;
	exia_EX_Attack_no_hit_despawn_script_pointers[20] = 0x00D42258;
	exia_EX_Attack_no_hit_despawn_script_pointers[21] = 0x00D3E628;
	exia_EX_Attack_no_hit_despawn_script_pointers[22] = 0x00D422F0;
	exia_EX_Attack_no_hit_despawn_script_pointers[23] = 0x00D3E5E0;
	exia_EX_Attack_no_hit_despawn_script_pointers[24] = 0x00D3E5E8;
	exia_EX_Attack_no_hit_despawn_script_pointers[25] = 0x00D39E10;
	exia_EX_Attack_no_hit_despawn_script_pointers[26] = 0x00D39E18;
	exia_EX_Attack_no_hit_despawn_script_pointers[27] = 0x00D3E630;
	exia_EX_Attack_no_hit_despawn_script_pointers[28] = 0x00D42450;
	exia_EX_Attack_no_hit_despawn_script_pointers[29] = 0x00D464A0;
	exia_EX_Attack_no_hit_despawn_script_pointers[30] = 0x00D3E498;
	exia_EX_Attack_no_hit_despawn_script_pointers[31] = 0x00D3E4A0;
	exia_EX_Attack_no_hit_despawn_script_pointers[32] = 0x00D3E4A8;
	exia_EX_Attack_no_hit_despawn_script_pointers[33] = 0x00D3E4B0;
	exia_EX_Attack_no_hit_despawn_script_pointers[34] = 0x00D3E4B8;
	exia_EX_Attack_no_hit_despawn_script_pointers[35] = 0x00D3E648;
	exia_EX_Attack_no_hit_despawn_script_pointers[36] = 0x00D3E720;
	exia_EX_Attack_no_hit_despawn_script_pointers[37] = 0x00D464D8;
	exia_EX_Attack_no_hit_despawn_script_pointers[38] = 0x00D3E600;
	exia_EX_Attack_no_hit_despawn_script_pointers[39] = 0x00D420F0;
	exia_EX_Attack_no_hit_despawn_script_pointers[40] = 0x00D42228;
	exia_EX_Attack_no_hit_despawn_script_pointers[41] = 0x00D420D0;
	exia_EX_Attack_no_hit_despawn_script_pointers[42] = 0x00D42270;
	exia_EX_Attack_no_hit_despawn_script_pointers[43] = 0x00D424F0;
	exia_EX_Attack_no_hit_despawn_script_pointers[44] = 0x00D42090;
	exia_EX_Attack_no_hit_despawn_script_pointers[45] = 0x00D3E4C0;
	exia_EX_Attack_no_hit_despawn_script_pointers[46] = 0x00D42278;
	exia_EX_Attack_no_hit_despawn_script_pointers[47] = 0x00D420C8;
	exia_EX_Attack_no_hit_despawn_script_pointers[48] = 0x00D424C0;
	exia_EX_Attack_no_hit_despawn_script_pointers[49] = 0x00D42260;
	exia_EX_Attack_no_hit_despawn_script_pointers[50] = 0x00D42308;
	exia_EX_Attack_no_hit_despawn_script_pointers[51] = 0x00D42248;
	exia_EX_Attack_no_hit_despawn_script_pointers[52] = 0x00D42250;
	exia_EX_Attack_no_hit_despawn_script_pointers[53] = 0x00D422E0;
	exia_EX_Attack_no_hit_despawn_script_pointers[54] = 0x00D422E8;
	exia_EX_Attack_no_hit_despawn_script_pointers[55] = 0x00D3E4C8;
	exia_EX_Attack_no_hit_despawn_script_pointers[56] = 0x00D3E4D0;
	exia_EX_Attack_no_hit_despawn_script_pointers[57] = 0x00D42110;
	exia_EX_Attack_no_hit_despawn_script_pointers[58] = (int)exia_EX_Attack_despawn_model_hash; // 0x00D46458;
	exia_EX_Attack_no_hit_despawn_script_pointers[59] = 0x00D3E4D8;
	exia_EX_Attack_no_hit_despawn_script_pointers[60] = 0x00D3E4E0;
	exia_EX_Attack_no_hit_despawn_script_pointers[61] = 0x00D464B0;
	exia_EX_Attack_no_hit_despawn_script_pointers[62] = 0x00D3E4E8;
	exia_EX_Attack_no_hit_despawn_script_pointers[63] = 0x00D3E4F0;
	exia_EX_Attack_no_hit_despawn_script_pointers[64] = 0x00D45E10;
	exia_EX_Attack_no_hit_despawn_script_pointers[65] = 0x00D464D0;
	exia_EX_Attack_no_hit_despawn_script_pointers[66] = 0x00D421F8;
	exia_EX_Attack_no_hit_despawn_script_pointers[67] = 0x00D42208;
	exia_EX_Attack_no_hit_despawn_script_pointers[68] = 0x00D42200;
	exia_EX_Attack_no_hit_despawn_script_pointers[69] = 0x00D3E500;
	exia_EX_Attack_no_hit_despawn_script_pointers[70] = 0x00D3E508;
	exia_EX_Attack_no_hit_despawn_script_pointers[71] = 0x00D464A8;
	exia_EX_Attack_no_hit_despawn_script_pointers[72] = 0x00D3E518;
	exia_EX_Attack_no_hit_despawn_script_pointers[73] = 0x00D3E520;
	exia_EX_Attack_no_hit_despawn_script_pointers[74] = 0x00D3E528;
	exia_EX_Attack_no_hit_despawn_script_pointers[75] = 0x00D3E530;
	exia_EX_Attack_no_hit_despawn_script_pointers[76] = 0x00D3E538;
	exia_EX_Attack_no_hit_despawn_script_pointers[77] = 0x00D3E540;
	exia_EX_Attack_no_hit_despawn_script_pointers[78] = 0x00D3E8A0;
	exia_EX_Attack_no_hit_despawn_script_pointers[79] = 0x00D3E548;
	exia_EX_Attack_no_hit_despawn_script_pointers[80] = 0x00D3E550;
	exia_EX_Attack_no_hit_despawn_script_pointers[81] = 0x00D3E558;
	exia_EX_Attack_no_hit_despawn_script_pointers[82] = 0x00D3E560;
	exia_EX_Attack_no_hit_despawn_script_pointers[83] = 0x00D3E568;
	exia_EX_Attack_no_hit_despawn_script_pointers[84] = 0x00D3E570;
	exia_EX_Attack_no_hit_despawn_script_pointers[85] = 0x00D3E578;
	exia_EX_Attack_no_hit_despawn_script_pointers[86] = 0x00D3E580;
	exia_EX_Attack_no_hit_despawn_script_pointers[87] = 0x00D3E588;
	exia_EX_Attack_no_hit_despawn_script_pointers[88] = 0x00D45DD0;
	exia_EX_Attack_no_hit_despawn_script_pointers[89] = 0x00D43698;
	exia_EX_Attack_no_hit_despawn_script_pointers[90] = 0x00D3E5A0;
	exia_EX_Attack_no_hit_despawn_script_pointers[91] = 0x00D421D8;
	exia_EX_Attack_no_hit_despawn_script_pointers[92] = 0x00D3E5A8;
	exia_EX_Attack_no_hit_despawn_script_pointers[93] = 0x00D464C0;
	exia_EX_Attack_no_hit_despawn_script_pointers[94] = 0x00D3E5B8;
	exia_EX_Attack_no_hit_despawn_script_pointers[95] = 0x00D3E5C0;
	exia_EX_Attack_no_hit_despawn_script_pointers[96] = 0x00D3E5C8;
	exia_EX_Attack_no_hit_despawn_script_pointers[97] = 0x00D3E5D0;
	exia_EX_Attack_no_hit_despawn_script_pointers[98] = 0x00D42210;
	exia_EX_Attack_no_hit_despawn_script_pointers[99] = 0x00D3E5F0;
	exia_EX_Attack_no_hit_despawn_script_pointers[100] = 0x00D3E5F8;
	exia_EX_Attack_no_hit_despawn_script_pointers[101] = 0x00D42240;
	exia_EX_Attack_no_hit_despawn_script_pointers[102] = 0x00D421F0;
	exia_EX_Attack_no_hit_despawn_script_pointers[103] = 0x00D42498;
	exia_EX_Attack_no_hit_despawn_script_pointers[104] = 0x00D42230;
	exia_EX_Attack_no_hit_despawn_script_pointers[105] = 0x00D423B8;
	exia_EX_Attack_no_hit_despawn_script_pointers[106] = 0x00D42478;
	exia_EX_Attack_no_hit_despawn_script_pointers[107] = 0x00D3E638;
	exia_EX_Attack_no_hit_despawn_script_pointers[108] = 0x00D3E640;
	exia_EX_Attack_no_hit_despawn_script_pointers[109] = 0x00D42320;
	exia_EX_Attack_no_hit_despawn_script_pointers[110] = 0x00D423C8;
	exia_EX_Attack_no_hit_despawn_script_pointers[111] = 0x00D42358;
	exia_EX_Attack_no_hit_despawn_script_pointers[112] = 0x00D42360;
	exia_EX_Attack_no_hit_despawn_script_pointers[113] = 0x00D42448;
	exia_EX_Attack_no_hit_despawn_script_pointers[114] = 0x00D423B0;
	exia_EX_Attack_no_hit_despawn_script_pointers[115] = 0x00D42378;
	exia_EX_Attack_no_hit_despawn_script_pointers[116] = 0x00D42380;
	exia_EX_Attack_no_hit_despawn_script_pointers[117] = 0x00D42398;
	exia_EX_Attack_no_hit_despawn_script_pointers[118] = 0x00D42460;
	exia_EX_Attack_no_hit_despawn_script_pointers[119] = 0x00D42388;
	exia_EX_Attack_no_hit_despawn_script_pointers[120] = 0x00D42390;
	exia_EX_Attack_no_hit_despawn_script_pointers[121] = 0x00D422A0;
	exia_EX_Attack_no_hit_despawn_script_pointers[122] = 0x00D42268;
	exia_EX_Attack_no_hit_despawn_script_pointers[123] = 0x00D42428;
	exia_EX_Attack_no_hit_despawn_script_pointers[124] = 0x00D42338; // 0x00D42410;
	exia_EX_Attack_no_hit_despawn_script_pointers[125] = 0x00D42280;
	exia_EX_Attack_no_hit_despawn_script_pointers[126] = 0x00D42408;
	exia_EX_Attack_no_hit_despawn_script_pointers[127] = 0x00D3E668;
	exia_EX_Attack_no_hit_despawn_script_pointers[128] = 0x00D3E650;
	exia_EX_Attack_no_hit_despawn_script_pointers[129] = 0x00D3E658;
	exia_EX_Attack_no_hit_despawn_script_pointers[130] = 0x00D42470;
	exia_EX_Attack_no_hit_despawn_script_pointers[131] = 0x00D42440;
	exia_EX_Attack_no_hit_despawn_script_pointers[132] = 0x00D3E670;
	exia_EX_Attack_no_hit_despawn_script_pointers[133] = 0x00D3E678;
	exia_EX_Attack_no_hit_despawn_script_pointers[134] = 0x00D3E680;
	exia_EX_Attack_no_hit_despawn_script_pointers[135] = 0x00D3E688;
	exia_EX_Attack_no_hit_despawn_script_pointers[136] = 0x00D3E690;
	exia_EX_Attack_no_hit_despawn_script_pointers[137] = 0x00D3E698;
	exia_EX_Attack_no_hit_despawn_script_pointers[138] = 0x00D3E6A0;
	exia_EX_Attack_no_hit_despawn_script_pointers[139] = 0x00D3E8A8;
	exia_EX_Attack_no_hit_despawn_script_pointers[140] = 0x00D424B8;
	exia_EX_Attack_no_hit_despawn_script_pointers[141] = 0x00D42468;
	exia_EX_Attack_no_hit_despawn_script_pointers[142] = 0x00D424C8;
	exia_EX_Attack_no_hit_despawn_script_pointers[143] = 0x00D464B8;
	exia_EX_Attack_no_hit_despawn_script_pointers[144] = 0x00D436A8;
	exia_EX_Attack_no_hit_despawn_script_pointers[145] = 0x00D45E18;
	exia_EX_Attack_no_hit_despawn_script_pointers[146] = 0x00D45E20;
	exia_EX_Attack_no_hit_despawn_script_pointers[147] = 0x00D464C8;
	exia_EX_Attack_no_hit_despawn_script_pointers[148] = 0x00000000;
	exia_EX_Attack_no_hit_despawn_script_pointers[149] = 0x00000000;

	GameCall<int>(0x7F62B4, 0xd8fe60)(a1);
	result = (unsigned int)exia_EX_Attack_no_hit_despawn_script_pointers;
	*a1 = (unsigned int)exia_EX_Attack_no_hit_despawn_script_pointers;
	return result;
}

void exia_EX_Attack_no_hit_despawn()
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1406[4];
	int v1114;
	int result;

	v1406[0] = -1;
	v1406[1] = 0;
	v1114 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v1406);
	result = sub_800840((_DWORD *)v1114);
	*v2 = v1114;

	// set return
	temp_registers[3] = result;
}