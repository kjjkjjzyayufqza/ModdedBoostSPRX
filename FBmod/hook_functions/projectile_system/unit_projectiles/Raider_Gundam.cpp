#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int raider_nuclear_missile_spawn_script_pointers[500];

void raider_nuclear_missile_spawn_model_hash()
{
	int hash = 0x7C36E7CE;
}

__int64 __fastcall sub_8C0680(_DWORD *a1)
{
	__int64 result; // r3

	raider_nuclear_missile_spawn_script_pointers[0] = 0x00D4DF08;
	raider_nuclear_missile_spawn_script_pointers[1] = 0x00D4DF00;
	raider_nuclear_missile_spawn_script_pointers[2] = 0x00D3B608;
	raider_nuclear_missile_spawn_script_pointers[3] = 0x00D3E608;
	raider_nuclear_missile_spawn_script_pointers[4] = 0x00D42328;
	raider_nuclear_missile_spawn_script_pointers[5] = 0x00D422B0;
	raider_nuclear_missile_spawn_script_pointers[6] = 0x00D3E610;
	raider_nuclear_missile_spawn_script_pointers[7] = 0x00D3E618;
	raider_nuclear_missile_spawn_script_pointers[8] = 0x00D422B8;
	raider_nuclear_missile_spawn_script_pointers[9] = 0x00D422C0;
	raider_nuclear_missile_spawn_script_pointers[10] = 0x00D42330;
	raider_nuclear_missile_spawn_script_pointers[11] = 0x00D42340;
	raider_nuclear_missile_spawn_script_pointers[12] = 0x00D422C8;
	raider_nuclear_missile_spawn_script_pointers[13] = 0x00D422D0;
	raider_nuclear_missile_spawn_script_pointers[14] = 0x00D422D8;
	raider_nuclear_missile_spawn_script_pointers[15] = 0x00D3E620;
	raider_nuclear_missile_spawn_script_pointers[16] = 0x00D422F8;
	raider_nuclear_missile_spawn_script_pointers[17] = 0x00D42238;
	raider_nuclear_missile_spawn_script_pointers[18] = 0x00D421C8;
	raider_nuclear_missile_spawn_script_pointers[19] = 0x00D3E5D8;
	raider_nuclear_missile_spawn_script_pointers[20] = 0x00D42258;
	raider_nuclear_missile_spawn_script_pointers[21] = 0x00D3E628;
	raider_nuclear_missile_spawn_script_pointers[22] = 0x00D422F0;
	raider_nuclear_missile_spawn_script_pointers[23] = 0x00D3E5E0;
	raider_nuclear_missile_spawn_script_pointers[24] = 0x00D3E5E8;
	raider_nuclear_missile_spawn_script_pointers[25] = 0x00D39E10;
	raider_nuclear_missile_spawn_script_pointers[26] = 0x00D39E18;
	raider_nuclear_missile_spawn_script_pointers[27] = 0x00D3E630;
	raider_nuclear_missile_spawn_script_pointers[28] = 0x00D42298;
	raider_nuclear_missile_spawn_script_pointers[29] = 0x00D3E490;
	raider_nuclear_missile_spawn_script_pointers[30] = 0x00D3E498;
	raider_nuclear_missile_spawn_script_pointers[31] = 0x00D3E4A0;
	raider_nuclear_missile_spawn_script_pointers[32] = 0x00D3E4A8;
	raider_nuclear_missile_spawn_script_pointers[33] = 0x00D3E4B0;
	raider_nuclear_missile_spawn_script_pointers[34] = 0x00D3E4B8;
	raider_nuclear_missile_spawn_script_pointers[35] = 0x00D42050;
	raider_nuclear_missile_spawn_script_pointers[36] = 0x00D3E720;
	raider_nuclear_missile_spawn_script_pointers[37] = 0x00D4DEF8;
	raider_nuclear_missile_spawn_script_pointers[38] = 0x00D3E600;
	raider_nuclear_missile_spawn_script_pointers[39] = 0x00D420F0;
	raider_nuclear_missile_spawn_script_pointers[40] = 0x00D42228;
	raider_nuclear_missile_spawn_script_pointers[41] = 0x00D420D0;
	raider_nuclear_missile_spawn_script_pointers[42] = 0x00D42270;
	raider_nuclear_missile_spawn_script_pointers[43] = 0x00D42068;
	raider_nuclear_missile_spawn_script_pointers[44] = 0x00D42090;
	raider_nuclear_missile_spawn_script_pointers[45] = 0x00D3E4C0;
	raider_nuclear_missile_spawn_script_pointers[46] = 0x00D42278;
	raider_nuclear_missile_spawn_script_pointers[47] = 0x00D420C8;
	raider_nuclear_missile_spawn_script_pointers[48] = 0x00D420A8;
	raider_nuclear_missile_spawn_script_pointers[49] = 0x00D42260;
	raider_nuclear_missile_spawn_script_pointers[50] = 0x00D42308;
	raider_nuclear_missile_spawn_script_pointers[51] = 0x00D42248;
	raider_nuclear_missile_spawn_script_pointers[52] = 0x00D42250;
	raider_nuclear_missile_spawn_script_pointers[53] = 0x00D422E0;
	raider_nuclear_missile_spawn_script_pointers[54] = 0x00D422E8;
	raider_nuclear_missile_spawn_script_pointers[55] = 0x00D3E4C8;
	raider_nuclear_missile_spawn_script_pointers[56] = 0x00D3E4D0;
	raider_nuclear_missile_spawn_script_pointers[57] = 0x00D42110;
	raider_nuclear_missile_spawn_script_pointers[58] = (int)raider_nuclear_missile_spawn_model_hash; // 0x00D4DEE8;
	raider_nuclear_missile_spawn_script_pointers[59] = 0x00D3E4D8;
	raider_nuclear_missile_spawn_script_pointers[60] = 0x00D3E4E0;
	raider_nuclear_missile_spawn_script_pointers[61] = 0x00D43668;
	raider_nuclear_missile_spawn_script_pointers[62] = 0x00D3E4E8;
	raider_nuclear_missile_spawn_script_pointers[63] = 0x00D3E4F0;
	raider_nuclear_missile_spawn_script_pointers[64] = 0x00D459D0;
	raider_nuclear_missile_spawn_script_pointers[65] = 0x00D459B0;
	raider_nuclear_missile_spawn_script_pointers[66] = 0x00D421F8;
	raider_nuclear_missile_spawn_script_pointers[67] = 0x00D42208;
	raider_nuclear_missile_spawn_script_pointers[68] = 0x00D42200;
	raider_nuclear_missile_spawn_script_pointers[69] = 0x00D3E500;
	raider_nuclear_missile_spawn_script_pointers[70] = 0x00D3E508;
	raider_nuclear_missile_spawn_script_pointers[71] = 0x00D3E510;
	raider_nuclear_missile_spawn_script_pointers[72] = 0x00D3E518;
	raider_nuclear_missile_spawn_script_pointers[73] = 0x00D3E520;
	raider_nuclear_missile_spawn_script_pointers[74] = 0x00D3E528;
	raider_nuclear_missile_spawn_script_pointers[75] = 0x00D3E530;
	raider_nuclear_missile_spawn_script_pointers[76] = 0x00D3E538;
	raider_nuclear_missile_spawn_script_pointers[77] = 0x00D3E540;
	raider_nuclear_missile_spawn_script_pointers[78] = 0x00D3E8A0;
	raider_nuclear_missile_spawn_script_pointers[79] = 0x00D3E548;
	raider_nuclear_missile_spawn_script_pointers[80] = 0x00D3E550;
	raider_nuclear_missile_spawn_script_pointers[81] = 0x00D3E558;
	raider_nuclear_missile_spawn_script_pointers[82] = 0x00D3E560;
	raider_nuclear_missile_spawn_script_pointers[83] = 0x00D3E568;
	raider_nuclear_missile_spawn_script_pointers[84] = 0x00D3E570;
	raider_nuclear_missile_spawn_script_pointers[85] = 0x00D3E578;
	raider_nuclear_missile_spawn_script_pointers[86] = 0x00D3E580;
	raider_nuclear_missile_spawn_script_pointers[87] = 0x00D3E588;
	raider_nuclear_missile_spawn_script_pointers[88] = 0x00D43670;
	raider_nuclear_missile_spawn_script_pointers[89] = 0x00D43678;
	raider_nuclear_missile_spawn_script_pointers[90] = 0x00D3E5A0;
	raider_nuclear_missile_spawn_script_pointers[91] = 0x00D421D8;
	raider_nuclear_missile_spawn_script_pointers[92] = 0x00D3E5A8;
	raider_nuclear_missile_spawn_script_pointers[93] = 0x00D45990;
	raider_nuclear_missile_spawn_script_pointers[94] = 0x00D3E5B8;
	raider_nuclear_missile_spawn_script_pointers[95] = 0x00D3E5C0;
	raider_nuclear_missile_spawn_script_pointers[96] = 0x00D3E5C8;
	raider_nuclear_missile_spawn_script_pointers[97] = 0x00D3E5D0;
	raider_nuclear_missile_spawn_script_pointers[98] = 0x00D42210;
	raider_nuclear_missile_spawn_script_pointers[99] = 0x00D3E5F0;
	raider_nuclear_missile_spawn_script_pointers[100] = 0x00D3E5F8;
	raider_nuclear_missile_spawn_script_pointers[101] = 0x00D42240;
	raider_nuclear_missile_spawn_script_pointers[102] = 0x00D421F0;
	raider_nuclear_missile_spawn_script_pointers[103] = 0x00D421E0;
	raider_nuclear_missile_spawn_script_pointers[104] = 0x00D42230;
	raider_nuclear_missile_spawn_script_pointers[105] = 0x00D423B8;
	raider_nuclear_missile_spawn_script_pointers[106] = 0x00D42370;
	raider_nuclear_missile_spawn_script_pointers[107] = 0x00D3E638;
	raider_nuclear_missile_spawn_script_pointers[108] = 0x00D3E640;
	raider_nuclear_missile_spawn_script_pointers[109] = 0x00D42320;
	raider_nuclear_missile_spawn_script_pointers[110] = 0x00D423C8;
	raider_nuclear_missile_spawn_script_pointers[111] = 0x00D42358;
	raider_nuclear_missile_spawn_script_pointers[112] = 0x00D42360;
	raider_nuclear_missile_spawn_script_pointers[113] = 0x00D42368;
	raider_nuclear_missile_spawn_script_pointers[114] = 0x00D423B0;
	raider_nuclear_missile_spawn_script_pointers[115] = 0x00D42378;
	raider_nuclear_missile_spawn_script_pointers[116] = 0x00D42380;
	raider_nuclear_missile_spawn_script_pointers[117] = 0x00D42398;
	raider_nuclear_missile_spawn_script_pointers[118] = 0x00D423A8;
	raider_nuclear_missile_spawn_script_pointers[119] = 0x00D42388;
	raider_nuclear_missile_spawn_script_pointers[120] = 0x00D42390;
	raider_nuclear_missile_spawn_script_pointers[121] = 0x00D422A0;
	raider_nuclear_missile_spawn_script_pointers[122] = 0x00D42268;
	raider_nuclear_missile_spawn_script_pointers[123] = 0x00D421E8;
	raider_nuclear_missile_spawn_script_pointers[124] = 0x00D42338;
	raider_nuclear_missile_spawn_script_pointers[125] = 0x00D42280;
	raider_nuclear_missile_spawn_script_pointers[126] = 0x00D43680;
	raider_nuclear_missile_spawn_script_pointers[127] = 0x00D43688;
	raider_nuclear_missile_spawn_script_pointers[128] = 0x00D459D8;
	raider_nuclear_missile_spawn_script_pointers[129] = 0x00D4DEF0;

	GameCall<int>(0x9F2228, 0xD9FE1C)(a1, 1580LL);
	result = (unsigned int)raider_nuclear_missile_spawn_script_pointers;
	*a1 = (unsigned int)raider_nuclear_missile_spawn_script_pointers;
	a1[54] = 7; // makes the temp memory read the 0xc8 th hash, (explosion)
	return result;
}

void raider_nuclear_missile_spawn() // 0x7D1528
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1672[4];
	int v753;
	int result;

	v1672[0] = -1;
	v1672[1] = 0;
	v753 = GameCall<int>(0x9EE338, 0xd8fe60)(17536LL, 128LL, v1672);
	result = sub_8C0680((_DWORD *)v753);
	*v2 = v753;

	// set return
	temp_registers[3] = result;
}

