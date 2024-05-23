#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"
#include "helpers/helpers.h"
#include "hook_functions/projectile_system/projectile_common.h"

int barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[500];
int barbatos_lupus_rex_mace_throw_spawn_script_pointers[500];
int barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[500];

void barbatos_lupus_rex_tomahawk_throw_spawn_model_hash()
{
	int hash = 0x8C927C84;
}

__int64 __fastcall sub_800964(_DWORD *a1) // Sazabi's 2N
{
	__int64 result; // r3

	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[0] = 0x00D46538;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[1] = 0x00D46530;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[2] = 0x00D3B608;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[3] = 0x00D3E608;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[4] = 0x00D42328;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[5] = 0x00D422B0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[6] = 0x00D3E610;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[7] = 0x00D3E618;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[8] = 0x00D422B8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[9] = 0x00D422C0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[10] = 0x00D42330;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[11] = 0x00D42340;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[12] = 0x00D422C8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[13] = 0x00D422D0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[14] = 0x00D422D8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[15] = 0x00D3E620;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[16] = 0x00D422F8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[17] = 0x00D42238;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[18] = 0x00D421C8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[19] = 0x00D3E5D8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[20] = 0x00D42258;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[21] = 0x00D3E628;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[22] = 0x00D422F0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[23] = 0x00D3E5E0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[24] = 0x00D3E5E8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[25] = 0x00D39E10;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[26] = 0x00D39E18;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[27] = 0x00D3E630;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[28] = 0x00D42298;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[29] = 0x00D3E490;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[30] = 0x00D3E498;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[31] = 0x00D3E4A0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[32] = 0x00D3E4A8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[33] = 0x00D3E4B0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[34] = 0x00D3E4B8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[35] = 0x00D42050;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[36] = 0x00D3E720;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[37] = 0x00D46528;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[38] = 0x00D3E600;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[39] = 0x00D420F0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[40] = 0x00D42228;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[41] = 0x00D420D0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[42] = 0x00D42270;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[43] = 0x00D42068;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[44] = 0x00D42090;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[45] = 0x00D3E4C0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[46] = 0x00D42278;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[47] = 0x00D420C8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[48] = 0x00D420A8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[49] = 0x00D42260;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[50] = 0x00D42308;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[51] = 0x00D42248;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[52] = 0x00D42250;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[53] = 0x00D422E0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[54] = 0x00D422E8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[55] = 0x00D3E4C8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[56] = 0x00D3E4D0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[57] = 0x00D42110;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[58] = (int)barbatos_lupus_rex_tomahawk_throw_spawn_model_hash; // 0x00D464F0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[59] = 0x00D3E4D8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[60] = 0x00D3E4E0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[61] = 0x00D43668;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[62] = 0x00D3E4E8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[63] = 0x00D3E4F0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[64] = 0x00D459D0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[65] = 0x00D459B0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[66] = 0x00D421F8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[67] = 0x00D46520;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[68] = 0x00D42200;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[69] = 0x00D3E500;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[70] = 0x00D3E508;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[71] = 0x00D3E510;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[72] = 0x00D3E518;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[73] = 0x00D3E520;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[74] = 0x00D3E528;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[75] = 0x00D3E530;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[76] = 0x00D3E538;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[77] = 0x00D3E540;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[78] = 0x00D3E8A0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[79] = 0x00D3E548;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[80] = 0x00D3E550;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[81] = 0x00D3E558;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[82] = 0x00D3E560;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[83] = 0x00D3E568;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[84] = 0x00D3E570;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[85] = 0x00D3E578;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[86] = 0x00D3E580;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[87] = 0x00D3E588;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[88] = 0x00D464F8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[89] = 0x00D46500;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[90] = 0x00D3E5A0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[91] = 0x00D421D8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[92] = 0x00D3E5A8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[93] = 0x00D45990;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[94] = 0x00D3E5B8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[95] = 0x00D3E5C0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[96] = 0x00D3E5C8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[97] = 0x00D3E5D0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[98] = 0x00D46508;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[99] = 0x00D3E5F0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[100] = 0x00D3E5F8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[101] = 0x00D42240;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[102] = 0x00D421F0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[103] = 0x00D421E0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[104] = 0x00D42230;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[105] = 0x00D423B8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[106] = 0x00D42370;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[107] = 0x00D3E638;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[108] = 0x00D3E640;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[109] = 0x00D42320;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[110] = 0x00D423C8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[111] = 0x00D42358;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[112] = 0x00D42360;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[113] = 0x00D42368;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[114] = 0x00D423B0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[115] = 0x00D459E0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[116] = 0x00D42380;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[117] = 0x00D42398;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[118] = 0x00D423A8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[119] = 0x00D42388;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[120] = 0x00D42390;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[121] = 0x00D422A0;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[122] = 0x00D42268;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[123] = 0x00D421E8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[124] = 0x00D42338;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[125] = 0x00D42280;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[126] = 0x00D43680;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[127] = 0x00D45980;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[128] = 0x00D459D8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[129] = 0x00D459E8;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[130] = 0x00D46510;
	barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers[131] = 0x00D46518;

	GameCall<int>(0x7EBC04, 0xd8fe60)(a1, 17200LL);
	result = (unsigned int)barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers;
	*a1 = (unsigned int)barbatos_lupus_rex_tomahawk_throw_spawn_script_pointers;
	return result;
}

void barbatos_lupus_rex_tomahawk_throw_spawn() // 0x7D6594
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2080[4];
	int v1226;
	int result;

	v2080[0] = -1;
	v2080[1] = 0;
	v1226 = GameCall<int>(0x9EE338, 0xd8fe60)(0x4480u, 0x80u, (unsigned int)v2080);
	result = sub_800964((_DWORD *)v1226);
	*v2 = v1226;

	// set return
	temp_registers[3] = result;
}

void barbatos_lupus_rex_mace_throw_spawn_model_Hash()
{
	int hash = 0x3ff2e2fb;
}

__int64 __fastcall sub_85D038_barbatos(_DWORD *a1)
{
	__int64 result; // r3

	barbatos_lupus_rex_mace_throw_spawn_script_pointers[0] = 0x00D4A078;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[1] = 0x00D4A070;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[2] = 0x00D3B608;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[3] = 0x00D3E608;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[4] = 0x00D42328;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[5] = 0x00D422B0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[6] = 0x00D3E610;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[7] = 0x00D3E618;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[8] = 0x00D422B8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[9] = 0x00D422C0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[10] = 0x00D42330;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[11] = 0x00D42340;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[12] = 0x00D422C8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[13] = 0x00D422D0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[14] = 0x00D422D8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[15] = 0x00D3E620;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[16] = 0x00D422F8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[17] = 0x00D42238;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[18] = 0x00D421C8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[19] = 0x00D3E5D8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[20] = 0x00D42258;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[21] = 0x00D3E628;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[22] = 0x00D422F0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[23] = 0x00D3E5E0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[24] = 0x00D3E5E8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[25] = 0x00D39E10;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[26] = 0x00D39E18;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[27] = 0x00D3E630;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[28] = 0x00D42298;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[29] = 0x00D3E490;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[30] = 0x00D3E498;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[31] = 0x00D3E4A0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[32] = 0x00D3E4A8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[33] = 0x00D3E4B0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[34] = 0x00D3E4B8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[35] = 0x00D42050;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[36] = 0x00D3E720;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[37] = 0x00D4A068;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[38] = 0x00D3E600;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[39] = 0x00D420F0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[40] = 0x00D42228;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[41] = 0x00D420D0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[42] = 0x00D42270;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[43] = 0x00D42068;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[44] = 0x00D42090;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[45] = 0x00D3E4C0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[46] = 0x00D42278;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[47] = 0x00D420C8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[48] = 0x00D420A8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[49] = 0x00D42260;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[50] = 0x00D42308;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[51] = 0x00D42248;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[52] = 0x00D42250;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[53] = 0x00D422E0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[54] = 0x00D422E8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[55] = 0x00D3E4C8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[56] = 0x00D3E4D0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[57] = 0x00D42110;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[58] = (int)barbatos_lupus_rex_mace_throw_spawn_model_Hash; // 0x00D4A048;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[59] = 0x00D3E4D8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[60] = 0x00D3E4E0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[61] = 0x00D43668; // Rotate it so that the javelin is facing foward instead of boomerang horizontal // 0x00D4A058;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[62] = 0x00D3E4E8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[63] = 0x00D3E4F0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[64] = 0x00D459D0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[65] = 0x00D459B0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[66] = 0x00D421F8;

	// Taken from Astray red frame's big sword, so that javelin will retain on the ground
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[67] = 0x00D4AE58;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[68] = 0x00D42200;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[69] = 0x00D4AE48;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[70] = 0x00D3E508;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[71] = 0x00D3E510;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[72] = 0x00D3E518;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[73] = 0x00D3E520;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[74] = 0x00D3E528;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[75] = 0x00D3E530;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[76] = 0x00D3E538;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[77] = 0x00D3E540;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[78] = 0x00D3E8A0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[79] = 0x00D3E548;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[80] = 0x00D3E550;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[81] = 0x00D3E558;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[82] = 0x00D3E560;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[83] = 0x00D3E568;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[84] = 0x00D3E570;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[85] = 0x00D3E578;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[86] = 0x00D3E580;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[87] = 0x00D3E588;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[88] = 0x00D4AE30;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[89] = 0x00D4AE38;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[90] = 0x00D3E5A0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[91] = 0x00D421D8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[92] = 0x00D3E5A8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[93] = 0x00D55388;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[94] = 0x00D3E5B8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[95] = 0x00D3E5C0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[96] = 0x00D3E5C8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[97] = 0x00D3E5D0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[98] = 0x00D4AE40;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[99] = 0x00D3E5F0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[100] = 0x00D553A8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[101] = 0x00D42240;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[102] = 0x00D421F0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[103] = 0x00D421E0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[104] = 0x00D42230;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[105] = 0x00D423B8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[106] = 0x00D42370;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[107] = 0x00D3E638;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[108] = 0x00D3E640;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[109] = 0x00D42320;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[110] = 0x00D423C8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[111] = 0x00D42358;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[112] = 0x00D42360;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[113] = 0x00D42368;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[114] = 0x00D423B0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[115] = 0x00D4AE60;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[116] = 0x00D42380;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[117] = 0x00D42398;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[118] = 0x00D423A8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[119] = 0x00D42388;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[120] = 0x00D42390;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[121] = 0x00D422A0;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[122] = 0x00D42268;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[123] = 0x00D421E8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[124] = 0x00D42338;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[125] = 0x00D42280;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[126] = 0x00D47F50;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[127] = 0x00D43688;

	// this is the same as 00's boomerang as astray's will offset the height a lil bit
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[128] = 0x00D459D8;
	barbatos_lupus_rex_mace_throw_spawn_script_pointers[129] = 0x00D45998;

	GameCall<int>(0x7EB570, 0xd8fe60)(a1, 14210);
	result = (unsigned int)barbatos_lupus_rex_mace_throw_spawn_script_pointers;
	*a1 = (unsigned int)barbatos_lupus_rex_mace_throw_spawn_script_pointers;
	*(a1 + 17424) = 0;
	return result;
}

void barbatos_lupus_rex_mace_throw_spawn() // 0x7D544C 00 Gundam's 2N
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1408[4];
	int v1121;
	int result;

	v1408[0] = -1;
	v1408[1] = 0;
	v1121 = GameCall<int>(0x9EE338, 0xd8fe60)(17536LL, 128LL, v1408);
	result = sub_85D038_barbatos((_DWORD *)v1121);
	*v2 = v1121;

	// set return
	temp_registers[3] = result;
}

void barbatos_lupus_rex_tail_blade_one_time_spawn_model_hash()
{
	int hash = 0x0321DD5D;
}

__int64 __fastcall sub_94C438(_DWORD *a1)
{
	__int64 result; // r3

	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[0] = 0x00D53B20;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[1] = 0x00D53B18;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[2] = 0x00D3B608;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[3] = 0x00D3E608;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[4] = 0x00D42328;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[5] = 0x00D424D0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[6] = 0x00D3E610;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[7] = 0x00D3E618;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[8] = 0x00D422B8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[9] = 0x00D422C0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[10] = 0x00D42330;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[11] = 0x00D42340;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[12] = 0x00D422C8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[13] = 0x00D422D0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[14] = 0x00D424B0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[15] = 0x00D3E620;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[16] = 0x00D422F8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[17] = 0x00D42238;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[18] = 0x00D3E660;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[19] = 0x00D3E5D8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[20] = 0x00D42258;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[21] = 0x00D3E628;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[22] = 0x00D422F0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[23] = 0x00D3E5E0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[24] = 0x00D3E5E8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[25] = 0x00D39E10;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[26] = 0x00D39E18;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[27] = 0x00D3E630;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[28] = 0x00D42450;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[29] = 0x00D50E98;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[30] = 0x00D3E498;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[31] = 0x00D3E4A0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[32] = 0x00D3E4A8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[33] = 0x00D3E4B0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[34] = 0x00D3E4B8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[35] = 0x00D3E648;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[36] = 0x00D3E720;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[37] = 0x00D556B8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[38] = 0x00D3E600;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[39] = 0x00D420F0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[40] = 0x00D42228;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[41] = 0x00D420D0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[42] = 0x00D42270;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[43] = 0x00D424F0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[44] = 0x00D42090;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[45] = 0x00D3E4C0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[46] = 0x00D42278;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[47] = 0x00D420C8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[48] = 0x00D424C0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[49] = 0x00D42260;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[50] = 0x00D42308;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[51] = 0x00D42248;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[52] = 0x00D42250;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[53] = 0x00D422E0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[54] = 0x00D422E8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[55] = 0x00D3E4C8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[56] = 0x00D3E4D0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[57] = 0x00D42110;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[58] = (int)barbatos_lupus_rex_tail_blade_one_time_spawn_model_hash; // 0x00D53B10;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[59] = 0x00D3E4D8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[60] = 0x00D3E4E0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[61] = 0x00D53B08;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[62] = 0x00D3E4E8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[63] = 0x00D3E4F0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[64] = 0x00D45E10;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[65] = 0x00D45DF8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[66] = 0x00D421F8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[67] = 0x00D556A8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[68] = 0x00D42200;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[69] = 0x00D3E500;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[70] = 0x00D3E508;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[71] = 0x00D3E510;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[72] = 0x00D3E518;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[73] = 0x00D3E520;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[74] = 0x00D3E528;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[75] = 0x00D3E530;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[76] = 0x00D3E538;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[77] = 0x00D3E540;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[78] = 0x00D3E8A0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[79] = 0x00D3E548;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[80] = 0x00D3E550;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[81] = 0x00D3E558;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[82] = 0x00D3E560;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[83] = 0x00D3E568;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[84] = 0x00D3E570;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[85] = 0x00D3E578;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[86] = 0x00D3E580;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[87] = 0x00D3E588;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[88] = 0x00D50EA0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[89] = 0x00D50EA8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[90] = 0x00D3E5A0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[91] = 0x00D421D8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[92] = 0x00D3E5A8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[93] = 0x00D45DD8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[94] = 0x00D3E5B8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[95] = 0x00D3E5C0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[96] = 0x00D3E5C8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[97] = 0x00D3E5D0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[98] = 0x00D50EB0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[99] = 0x00D3E5F0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[100] = 0x00D3E5F8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[101] = 0x00D42240;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[102] = 0x00D421F0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[103] = 0x00D42498;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[104] = 0x00D42230;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[105] = 0x00D423B8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[106] = 0x00D42478;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[107] = 0x00D3E638;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[108] = 0x00D3E640;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[109] = 0x00D42320;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[110] = 0x00D423C8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[111] = 0x00D42358;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[112] = 0x00D42360;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[113] = 0x00D42448;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[114] = 0x00D423B0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[115] = 0x00D53B30;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[116] = 0x00D42380;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[117] = 0x00D42398;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[118] = 0x00D42460;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[119] = 0x00D42388;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[120] = 0x00D42390;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[121] = 0x00D422A0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[122] = 0x00D42268;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[123] = 0x00D42428;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[124] = 0x00D42338; // 0x00D42410; This is causing a very weird case of crashing if the script pointer address is not the actual ones. 
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[125] = 0x00D42280;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[126] = 0x00D42408;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[127] = 0x00D3E668;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[128] = 0x00D3E650;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[129] = 0x00D3E658;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[130] = 0x00D42470;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[131] = 0x00D42440;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[132] = 0x00D3E670;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[133] = 0x00D3E678;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[134] = 0x00D3E680;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[135] = 0x00D3E688;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[136] = 0x00D3E690;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[137] = 0x00D3E698;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[138] = 0x00D3E6A0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[139] = 0x00D3E8A8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[140] = 0x00D424B8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[141] = 0x00D42468;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[142] = 0x00D424C8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[143] = 0x00D436A0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[144] = 0x00D436A8;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[145] = 0x00D556E0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[146] = 0x00D45E20;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[147] = 0x00D45DE0;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[148] = 0x00D53B28;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[149] = 0x00D53B38;
	barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers[150] = 0x00D556D8;

	GameCall<int>(0x9709F0, 0xDAFDFC)(a1, 220920LL);
	result = (unsigned int)barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers;
	*a1 = (unsigned int)barbatos_lupus_rex_tail_blade_one_time_spawn_script_pointers;
	return result;
}

// the tail "funnels" functions the same as Astray Gold Frame Mina's sub
void barbatos_lupus_rex_tail_blade_one_time_spawn() // 0x7D3618 
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2114[4];
	int v950;
	int result;

	v2114[0] = -1;
	v2114[1] = 0;
	v950 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, (unsigned int)v2114);
	result = sub_94C438((_DWORD *)v950);
	*v2 = v950;

	// set return
	temp_registers[3] = result;
}

int barbatos_lupus_rex_twin_shoot_spawn_script_pointers[500];
bool is_barbatos_lupus_rex_twin_shoot_assist_initialized = false;

unsigned int barbatos_lupus_rex_gusion_assist_spawn_model_hash()
{
	return 0x5594E6E4;
}

void barbatos_lupus_rex_twin_shoot_double_hand_sub_936FFC(__int64 a1, unsigned int *a2, int a3)
{
	assist_shoot_projectile(a2, a3,0x341A1088);
	delay(a2, a3, 14);
	assist_shoot_projectile(a2, a3,0xE05B2F57);
}

void barbatos_lupus_rex_shoot_assist_initial_animation_script(unsigned int a1, unsigned int *a2)
{
	const unsigned int toc = 0xdafdfc;
	const unsigned int animation_index = 0x1;
	
	char list[12];
	list[1] = 0;
	list[0] = -1;
	const unsigned int working_memory = GameCall<unsigned int>(0x1C240, 0xd60138)(56LL, reinterpret_cast<long long>(list));
	GameCall<unsigned int>(0x9F44C8, toc)(static_cast<unsigned int>(working_memory), a1, animation_index);

	// Clear 0x2c
	*reinterpret_cast<uint32*>(working_memory + 0x2c) = 0;
	
	const unsigned int* script_func_ptr = reinterpret_cast<unsigned int*>(*reinterpret_cast<unsigned int*>(*a2 + 0x34LL));
	GameCall<unsigned int>(*script_func_ptr, script_func_ptr[1])(reinterpret_cast<unsigned int>(a2), static_cast<unsigned int>(working_memory));

	char list2[12];
	list2[0] = -1;
	list2[1] = 0;
	const unsigned int working_memory_2 = GameCall<unsigned int>(0x1C240, 0xd60138)(28LL, reinterpret_cast<long long>(list2));
	GameCall<unsigned int>(0x9F40E8, toc)(working_memory_2);

	const unsigned int script = *reinterpret_cast<unsigned int*>(toc - 0x6858);

	// 1.57 in this case
	// If set too high, it'll basically skip the aim phase, and if set too low the first shot will miss
	const float aim_animation_speed_multiplier = *reinterpret_cast<float*>(toc - 0x6854);
	
	*reinterpret_cast<uint32*>(working_memory_2) = script;
	*reinterpret_cast<uint32*>(working_memory_2 + 16) = a1;
	*reinterpret_cast<uint32*>(working_memory_2 + 20) = -241;
	*reinterpret_cast<float*>(working_memory_2 + 24) = aim_animation_speed_multiplier;

	unsigned int debug = 0xDEADBEEF;

	GameCall<unsigned int>(*script_func_ptr, script_func_ptr[1])(reinterpret_cast<unsigned int>(a2), static_cast<unsigned int>(working_memory_2));
	GameCall<unsigned int>(0x9F4648, toc)(a1, reinterpret_cast<unsigned int>(a2));
}

unsigned int barbatos_lupus_rex_twin_shoot_assist_spawn_model_effects(unsigned int* a1,unsigned int a2)
{
	const unsigned int toc = 0xdafdfc;

	GameCall<int>(0x9F4108, toc)(reinterpret_cast<unsigned int>(a1), 2LL);
	GameCall<int>(0x9F44E8, toc)(reinterpret_cast<unsigned int>(a1), a2);

	return hide_bone(a1, 31LL);
}

unsigned int barbatos_lupus_rex_twin_shoot_assist_sub_936FC0(_DWORD* a1)
{
	if (is_barbatos_lupus_rex_twin_shoot_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xd06d68), barbatos_lupus_rex_twin_shoot_spawn_script_pointers);
		barbatos_lupus_rex_twin_shoot_spawn_script_pointers[37] = reinterpret_cast<int>(barbatos_lupus_rex_twin_shoot_assist_spawn_model_effects); // 模型id
		barbatos_lupus_rex_twin_shoot_spawn_script_pointers[58] = reinterpret_cast<int>(barbatos_lupus_rex_gusion_assist_spawn_model_hash); // 模型id
		barbatos_lupus_rex_twin_shoot_spawn_script_pointers[158] = reinterpret_cast<int>(barbatos_lupus_rex_twin_shoot_double_hand_sub_936FFC);
		barbatos_lupus_rex_twin_shoot_spawn_script_pointers[165] = reinterpret_cast<int>(barbatos_lupus_rex_shoot_assist_initial_animation_script); // initial animation script
		is_barbatos_lupus_rex_twin_shoot_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(barbatos_lupus_rex_twin_shoot_spawn_script_pointers);
	*a1 = result;
	return result;
}

void barbatos_lupus_rex_twin_shoot_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = barbatos_lupus_rex_twin_shoot_assist_sub_936FC0(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}

int barbatos_lupus_rex_grab_melee_assist_spawn_script_pointers[500];
bool is_barbatos_lupus_rex_grab_melee_assist_initialized = false;

unsigned int barbatos_lupus_rex_grab_melee_assist_spawn_animation_1()
{
	return 0x4;
}

unsigned int barbatos_lupus_rex_grab_melee_assist_spawn_animation_2()
{
	return 0x5;
}

unsigned int barbatos_lupus_rex_grab_melee_assist_spawn_animation_3()
{
	return 0x6;
}

unsigned int barbatos_lupus_rex_grab_melee_assist_spawn_animation_4()
{
	return 0x7;
}

unsigned int barbatos_lupus_rex_grab_melee_assist_main(_DWORD* a1)
{
	if (is_barbatos_lupus_rex_grab_melee_assist_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xD1D500), barbatos_lupus_rex_grab_melee_assist_spawn_script_pointers);
		barbatos_lupus_rex_grab_melee_assist_spawn_script_pointers[58] = reinterpret_cast<int>(barbatos_lupus_rex_gusion_assist_spawn_model_hash);
		barbatos_lupus_rex_grab_melee_assist_spawn_script_pointers[156] = reinterpret_cast<int>(barbatos_lupus_rex_grab_melee_assist_spawn_animation_1);
		barbatos_lupus_rex_grab_melee_assist_spawn_script_pointers[168] = reinterpret_cast<int>(barbatos_lupus_rex_grab_melee_assist_spawn_animation_2);
		barbatos_lupus_rex_grab_melee_assist_spawn_script_pointers[169] = reinterpret_cast<int>(barbatos_lupus_rex_grab_melee_assist_spawn_animation_3);
		barbatos_lupus_rex_grab_melee_assist_spawn_script_pointers[176] = reinterpret_cast<int>(barbatos_lupus_rex_grab_melee_assist_spawn_animation_4);
		is_barbatos_lupus_rex_grab_melee_assist_initialized = true;
	}
	
	GameCall<int>(0x9F2998, 0xd9fe1c)(a1, 3400);
	const unsigned int result = reinterpret_cast<unsigned int>(barbatos_lupus_rex_grab_melee_assist_spawn_script_pointers);
	*a1 = result;
	return result;
}

void barbatos_lupus_rex_grab_melee_assist_spawn()
{
	_DWORD* r3_pointer = reinterpret_cast<uint32*>(temp_registers[3]);

	char list[4];
	list[0] = -1;
	list[1] = 0;
	const unsigned int temp_memory_ptr = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780, 0x80, list);
	const unsigned int result = barbatos_lupus_rex_grab_melee_assist_main(reinterpret_cast<uint32*>(temp_memory_ptr));
	*r3_pointer = temp_memory_ptr;

	// set return
	temp_registers[3] = result;
}