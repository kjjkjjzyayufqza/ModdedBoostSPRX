#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int barbatos_lupus_anti_ship_mace_spawn_script_pointers[500];
int barbatos_lupus_twin_mace_throw_spawn_script_pointers[500];

void barbatos_lupus_anti_ship_mace_spawn_model_hash()
{
	int hash = 0x980FCD22;
}

__int64 __fastcall barbatos_lupus_anti_ship_mace_spawn_supp(_DWORD *a1) // sub_916B54
{
	__int64 result; // r3

	barbatos_lupus_anti_ship_mace_spawn_script_pointers[0] = 0x00D510D8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[1] = 0x00D510D0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[2] = 0x00D3B608;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[3] = 0x00D3E608;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[4] = 0x00D42328;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[5] = 0x00D422B0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[6] = 0x00D3E610;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[7] = 0x00D3E618;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[8] = 0x00D422B8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[9] = 0x00D422C0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[10] = 0x00D42330;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[11] = 0x00D42340;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[12] = 0x00D422C8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[13] = 0x00D422D0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[14] = 0x00D422D8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[15] = 0x00D3E620;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[16] = 0x00D422F8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[17] = 0x00D42238;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[18] = 0x00D421C8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[19] = 0x00D3E5D8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[20] = 0x00D42258;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[21] = 0x00D3E628;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[22] = 0x00D422F0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[23] = 0x00D3E5E0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[24] = 0x00D3E5E8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[25] = 0x00D39E10;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[26] = 0x00D39E18;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[27] = 0x00D3E630;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[28] = 0x00D42298;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[29] = 0x00D3E490;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[30] = 0x00D3E498;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[31] = 0x00D3E4A0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[32] = 0x00D3E4A8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[33] = 0x00D3E4B0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[34] = 0x00D3E4B8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[35] = 0x00D42050;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[36] = 0x00D3E720;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[37] = 0x00D510C8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[38] = 0x00D3E600;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[39] = 0x00D420F0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[40] = 0x00D42228;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[41] = 0x00D420D0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[42] = 0x00D42270;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[43] = 0x00D42068;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[44] = 0x00D42090;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[45] = 0x00D3E4C0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[46] = 0x00D42278;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[47] = 0x00D420C8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[48] = 0x00D420A8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[49] = 0x00D42260;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[50] = 0x00D42308;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[51] = 0x00D42248;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[52] = 0x00D42250;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[53] = 0x00D422E0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[54] = 0x00D422E8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[55] = 0x00D3E4C8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[56] = 0x00D3E4D0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[57] = 0x00D42110;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[58] = (int)barbatos_lupus_anti_ship_mace_spawn_model_hash; // 0x00D51098;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[59] = 0x00D3E4D8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[60] = 0x00D3E4E0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[61] = 0x00D510A0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[62] = 0x00D3E4E8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[63] = 0x00D3E4F0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[64] = 0x00D459D0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[65] = 0x00D459B0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[66] = 0x00D421F8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[67] = 0x00D510C0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[68] = 0x00D42200;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[69] = 0x00D3E500;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[70] = 0x00D3E508;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[71] = 0x00D3E510;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[72] = 0x00D3E518;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[73] = 0x00D3E520;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[74] = 0x00D3E528;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[75] = 0x00D3E530;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[76] = 0x00D3E538;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[77] = 0x00D3E540;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[78] = 0x00D3E8A0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[79] = 0x00D3E548;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[80] = 0x00D3E550;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[81] = 0x00D3E558;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[82] = 0x00D3E560;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[83] = 0x00D3E568;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[84] = 0x00D3E570;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[85] = 0x00D3E578;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[86] = 0x00D3E580;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[87] = 0x00D3E588;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[88] = 0x00D510A8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[89] = 0x00D510B0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[90] = 0x00D3E5A0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[91] = 0x00D421D8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[92] = 0x00D3E5A8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[93] = 0x00D45990;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[94] = 0x00D3E5B8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[95] = 0x00D3E5C0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[96] = 0x00D3E5C8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[97] = 0x00D3E5D0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[98] = 0x00D510B8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[99] = 0x00D3E5F0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[100] = 0x00D3E5F8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[101] = 0x00D42240;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[102] = 0x00D421F0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[103] = 0x00D421E0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[104] = 0x00D42230;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[105] = 0x00D423B8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[106] = 0x00D42370;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[107] = 0x00D3E638;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[108] = 0x00D3E640;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[109] = 0x00D42320;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[110] = 0x00D423C8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[111] = 0x00D42358;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[112] = 0x00D42360;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[113] = 0x00D42368;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[114] = 0x00D423B0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[115] = 0x00D510E8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[116] = 0x00D42380;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[117] = 0x00D42398;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[118] = 0x00D510E0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[119] = 0x00D42388;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[120] = 0x00D42390;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[121] = 0x00D422A0;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[122] = 0x00D42268;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[123] = 0x00D421E8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[124] = 0x00D42338;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[125] = 0x00D42280;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[126] = 0x00D43680;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[127] = 0x00D43688;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[128] = 0x00D459D8;
	barbatos_lupus_anti_ship_mace_spawn_script_pointers[129] = 0x00D45998;

	GameCall<int>(0x9F2228, 0xD9FE1C)(a1, 29120LL);
	result = (unsigned int)barbatos_lupus_anti_ship_mace_spawn_script_pointers;
	*a1 = (unsigned int)barbatos_lupus_anti_ship_mace_spawn_script_pointers;
	a1[54] = 8;
	return result;
}

void barbatos_lupus_anti_ship_mace_spawn() // 0x7cde04
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1797[4];
	int v496;
	int result;

	v1797[0] = -1;
	v1797[1] = 0;
	v496 = GameCall<int>(0x9EE338, 0xd8fe60)(17536LL, 128LL, (unsigned int)v1797);
	result = barbatos_lupus_anti_ship_mace_spawn_supp((_DWORD *)v496);
	*v2 = v496;

	// set return
	temp_registers[3] = result;
}

void barbatos_lupus_twin_mace_throw_spawn_model_hash_1()
{
	int hash = 0x2BFCD076;
}

void barbatos_lupus_twin_mace_throw_spawn_model_hash_2()
{
	int hash = 0xFFBDEFA9;
}

__int64 __fastcall barbatos_lupus_twin_mace_throw_spawn_supp_1(_DWORD *a1, int model_index)
{
	__int64 result; // r3

	int model_pointer = (int)barbatos_lupus_twin_mace_throw_spawn_model_hash_1;

	if (model_index == 2)
	{
		model_pointer = (int)barbatos_lupus_twin_mace_throw_spawn_model_hash_2;
	}

	barbatos_lupus_twin_mace_throw_spawn_script_pointers[0] = 0x00D54C38;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[1] = 0x00D54C30;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[2] = 0x00D3B608;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[3] = 0x00D3E608;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[4] = 0x00D42328;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[5] = 0x00D422B0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[6] = 0x00D3E610;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[7] = 0x00D3E618;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[8] = 0x00D422B8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[9] = 0x00D422C0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[10] = 0x00D42330;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[11] = 0x00D42340;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[12] = 0x00D422C8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[13] = 0x00D422D0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[14] = 0x00D422D8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[15] = 0x00D3E620;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[16] = 0x00D422F8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[17] = 0x00D42238;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[18] = 0x00D421C8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[19] = 0x00D3E5D8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[20] = 0x00D42258;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[21] = 0x00D3E628;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[22] = 0x00D422F0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[23] = 0x00D3E5E0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[24] = 0x00D3E5E8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[25] = 0x00D39E10;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[26] = 0x00D39E18;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[27] = 0x00D3E630;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[28] = 0x00D42298;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[29] = 0x00D3E490;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[30] = 0x00D3E498;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[31] = 0x00D3E4A0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[32] = 0x00D3E4A8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[33] = 0x00D3E4B0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[34] = 0x00D3E4B8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[35] = 0x00D42050;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[36] = 0x00D3E720;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[37] = 0x00D54C28;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[38] = 0x00D3E600;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[39] = 0x00D420F0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[40] = 0x00D42228;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[41] = 0x00D420D0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[42] = 0x00D42270;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[43] = 0x00D42068;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[44] = 0x00D42090;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[45] = 0x00D3E4C0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[46] = 0x00D42278;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[47] = 0x00D420C8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[48] = 0x00D420A8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[49] = 0x00D42260;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[50] = 0x00D42308;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[51] = 0x00D42248;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[52] = 0x00D42250;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[53] = 0x00D422E0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[54] = 0x00D422E8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[55] = 0x00D3E4C8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[56] = 0x00D3E4D0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[57] = 0x00D42110;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[58] = (int)model_pointer; //0x00D54BF8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[59] = 0x00D3E4D8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[60] = 0x00D3E4E0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[61] = 0x00D43668;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[62] = 0x00D3E4E8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[63] = 0x00D3E4F0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[64] = 0x00D459D0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[65] = 0x00D459B0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[66] = 0x00D421F8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[67] = 0x00D54C18;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[68] = 0x00D42200;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[69] = 0x00D3E500;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[70] = 0x00D3E508;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[71] = 0x00D3E510;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[72] = 0x00D3E518;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[73] = 0x00D3E520;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[74] = 0x00D3E528;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[75] = 0x00D3E530;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[76] = 0x00D3E538;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[77] = 0x00D3E540;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[78] = 0x00D3E8A0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[79] = 0x00D3E548;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[80] = 0x00D3E550;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[81] = 0x00D3E558;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[82] = 0x00D3E560;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[83] = 0x00D3E568;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[84] = 0x00D3E570;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[85] = 0x00D3E578;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[86] = 0x00D3E580;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[87] = 0x00D3E588;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[88] = 0x00D54C00;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[89] = 0x00D54C08;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[90] = 0x00D3E5A0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[91] = 0x00D421D8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[92] = 0x00D3E5A8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[93] = 0x00D45990;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[94] = 0x00D3E5B8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[95] = 0x00D3E5C0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[96] = 0x00D3E5C8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[97] = 0x00D3E5D0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[98] = 0x00D54C10;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[99] = 0x00D3E5F0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[100] = 0x00D3E5F8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[101] = 0x00D42240;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[102] = 0x00D421F0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[103] = 0x00D421E0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[104] = 0x00D42230;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[105] = 0x00D423B8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[106] = 0x00D42370;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[107] = 0x00D3E638;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[108] = 0x00D3E640;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[109] = 0x00D42320;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[110] = 0x00D423C8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[111] = 0x00D42358;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[112] = 0x00D42360;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[113] = 0x00D42368;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[114] = 0x00D423B0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[115] = 0x00D54C20;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[116] = 0x00D42380;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[117] = 0x00D42398;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[118] = 0x00D423A8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[119] = 0x00D42388;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[120] = 0x00D42390;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[121] = 0x00D422A0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[122] = 0x00D42268;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[123] = 0x00D421E8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[124] = 0x00D42338;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[125] = 0x00D42280;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[126] = 0x00D43680;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[127] = 0x00D43688;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[128] = 0x00D459D8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[129] = 0x00D45998;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[130] = 0x00000000;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[131] = 0x00000000;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[132] = 0x00D54C88;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[133] = 0x00D54C80;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[134] = 0x00D3B608;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[135] = 0x00D3E608;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[136] = 0x00D42328;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[137] = 0x00D422B0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[138] = 0x00D3E610;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[139] = 0x00D3E618;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[140] = 0x00D422B8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[141] = 0x00D422C0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[142] = 0x00D42330;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[143] = 0x00D42340;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[144] = 0x00D422C8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[145] = 0x00D422D0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[146] = 0x00D422D8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[147] = 0x00D3E620;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[148] = 0x00D422F8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[149] = 0x00D42238;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[150] = 0x00D421C8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[151] = 0x00D3E5D8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[152] = 0x00D42258;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[153] = 0x00D3E628;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[154] = 0x00D422F0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[155] = 0x00D3E5E0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[156] = 0x00D3E5E8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[157] = 0x00D39E10;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[158] = 0x00D39E18;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[159] = 0x00D3E630;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[160] = 0x00D42298;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[161] = 0x00D3E490;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[162] = 0x00D3E498;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[163] = 0x00D3E4A0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[164] = 0x00D3E4A8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[165] = 0x00D3E4B0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[166] = 0x00D3E4B8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[167] = 0x00D42050;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[168] = 0x00D3E720;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[169] = 0x00D54C78;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[170] = 0x00D3E600;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[171] = 0x00D420F0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[172] = 0x00D42228;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[173] = 0x00D420D0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[174] = 0x00D42270;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[175] = 0x00D42068;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[176] = 0x00D42090;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[177] = 0x00D3E4C0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[178] = 0x00D42278;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[179] = 0x00D420C8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[180] = 0x00D420A8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[181] = 0x00D42260;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[182] = 0x00D42308;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[183] = 0x00D42248;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[184] = 0x00D42250;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[185] = 0x00D422E0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[186] = 0x00D422E8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[187] = 0x00D3E4C8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[188] = 0x00D3E4D0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[189] = 0x00D42110;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[190] = 0x00D54C40;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[191] = 0x00D3E4D8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[192] = 0x00D3E4E0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[193] = 0x00D43668;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[194] = 0x00D3E4E8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[195] = 0x00D3E4F0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[196] = 0x00D459D0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[197] = 0x00D459B0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[198] = 0x00D421F8;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[199] = 0x00D54C60;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[200] = 0x00D42200;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[201] = 0x00D3E500;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[202] = 0x00D3E508;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[203] = 0x00D3E510;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[204] = 0x00D3E518;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[205] = 0x00D3E520;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[206] = 0x00D3E528;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[207] = 0x00D3E530;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[208] = 0x00D3E538;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[209] = 0x00D3E540;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[210] = 0x00D3E8A0;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[211] = 0x00D3E548;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[212] = 0x00D3E550;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[213] = 0x00D3E558;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[214] = 0x00D3E560;
	barbatos_lupus_twin_mace_throw_spawn_script_pointers[215] = 0x00D3E568;

	GameCall<int>(0x9F4188, 0xdafdfc)(a1, 141210LL);
	result = (unsigned int)barbatos_lupus_twin_mace_throw_spawn_script_pointers;
	*a1 = (unsigned int)barbatos_lupus_twin_mace_throw_spawn_script_pointers;
	return result;
}

void barbatos_lupus_twin_mace_throw_spawn() // 0x7D4964
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1492[4];
	int v1058;
	int result;

	v1492[0] = -1;
	v1492[1] = 0;
	v1058 = GameCall<int>(0x9EE338, 0xd8fe60)(17536LL, 128LL, v1492);
	result = barbatos_lupus_twin_mace_throw_spawn_supp_1((_DWORD *)v1058, 1); //GameCall<int>(0x9f1138, 0xd8fe60)((_DWORD *)v1058);
	*v2 = v1058;

	// set return
	temp_registers[3] = result;
}