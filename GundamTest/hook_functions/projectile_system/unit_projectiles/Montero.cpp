#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int montero_wave_beam_spawn_script_pointers[500];
int montero_JAVELIN_MADA_ARU_spawn_script_pointers[500];
int montero_EX_Burst_Javelin_spawn_script_pointers[500];
int montero_G_Self_shoot_melee_assist_spawn_script_pointers[500];
int montero_G_Self_gerobi_shoot_spawn_script_pointers[500];

unsigned int sub_89E3D0(unsigned int *a1, unsigned int a2)
{
	__int64 v3; // r2
	__int64 v4; // r2
	__int64 res1;

	GameCall<int>(0x9F21B8, 0xd9fe1c)((__int64)a1, 1u);
	GameCall<int>(0x9F21C8, 0xd9fe1c)(a1, (int)0x5F99C2A2, 1u, -1);
	GameCall<int>(0x9F2518, 0xd9fe1c)(a1, a2);
	//v3 = *(unsigned int *)(*(unsigned int *)(*a1 + 0x18CLL) + 4LL);
	res1 = GameCall<int>(0xaae850, 0xd7ff30)(a1);
	*(_DWORD *)(res1 + 0x3CLL) = 0x41200000;
	
	//v4 = *(unsigned int *)(*(unsigned int *)(*a1 + 0x24CLL) + 4LL);
	GameCall<int>(0x7f6178, 0xd8fe60)(a1);
	return GameCall<int>(0x9F25C8, 0xd9fe1c)(a1, 0);
}

__int64 __fastcall sub_9F0618(_DWORD *a1)
{
	__int64 result; // r3

	montero_wave_beam_spawn_script_pointers[0] = 0x00D4C668;
	montero_wave_beam_spawn_script_pointers[1] = 0x00D4C660;
	montero_wave_beam_spawn_script_pointers[2] = 0x00D3B608;
	montero_wave_beam_spawn_script_pointers[3] = 0x00D3E608;
	montero_wave_beam_spawn_script_pointers[4] = 0x00D42328;
	montero_wave_beam_spawn_script_pointers[5] = 0x00D424D0;
	montero_wave_beam_spawn_script_pointers[6] = 0x00D3E610;
	montero_wave_beam_spawn_script_pointers[7] = 0x00D3E618;
	montero_wave_beam_spawn_script_pointers[8] = 0x00D422B8;
	montero_wave_beam_spawn_script_pointers[9] = 0x00D422C0;
	montero_wave_beam_spawn_script_pointers[10] = 0x00D42330;
	montero_wave_beam_spawn_script_pointers[11] = 0x00D42340;
	montero_wave_beam_spawn_script_pointers[12] = 0x00D422C8;
	montero_wave_beam_spawn_script_pointers[13] = 0x00D422D0;
	montero_wave_beam_spawn_script_pointers[14] = 0x00D424B0;
	montero_wave_beam_spawn_script_pointers[15] = 0x00D3E620;
	montero_wave_beam_spawn_script_pointers[16] = 0x00D422F8;
	montero_wave_beam_spawn_script_pointers[17] = 0x00D42238;
	montero_wave_beam_spawn_script_pointers[18] = 0x00D3E660;
	montero_wave_beam_spawn_script_pointers[19] = 0x00D3E5D8;
	montero_wave_beam_spawn_script_pointers[20] = 0x00D42258;
	montero_wave_beam_spawn_script_pointers[21] = 0x00D3E628;
	montero_wave_beam_spawn_script_pointers[22] = 0x00D422F0;
	montero_wave_beam_spawn_script_pointers[23] = 0x00D3E5E0;
	montero_wave_beam_spawn_script_pointers[24] = 0x00D3E5E8;
	montero_wave_beam_spawn_script_pointers[25] = 0x00D39E10;
	montero_wave_beam_spawn_script_pointers[26] = 0x00D39E18;
	montero_wave_beam_spawn_script_pointers[27] = 0x00D3E630;
	montero_wave_beam_spawn_script_pointers[28] = 0x00D42450;
	montero_wave_beam_spawn_script_pointers[29] = 0x00D3E490;
	montero_wave_beam_spawn_script_pointers[30] = 0x00D3E498;
	montero_wave_beam_spawn_script_pointers[31] = 0x00D3E4A0;
	montero_wave_beam_spawn_script_pointers[32] = 0x00D3E4A8;
	montero_wave_beam_spawn_script_pointers[33] = 0x00D3E4B0;
	montero_wave_beam_spawn_script_pointers[34] = 0x00D3E4B8;
	montero_wave_beam_spawn_script_pointers[35] = 0x00D3E648;
	montero_wave_beam_spawn_script_pointers[36] = 0x00D3E720;
	montero_wave_beam_spawn_script_pointers[37] = (int)sub_89E3D0; // 0x00D4C658; // Wave ALEO
	montero_wave_beam_spawn_script_pointers[38] = 0x00D3E600;
	montero_wave_beam_spawn_script_pointers[39] = 0x00D420F0;
	montero_wave_beam_spawn_script_pointers[40] = 0x00D42228;
	montero_wave_beam_spawn_script_pointers[41] = 0x00D420D0;
	montero_wave_beam_spawn_script_pointers[42] = 0x00D42270;
	montero_wave_beam_spawn_script_pointers[43] = 0x00D424F0;
	montero_wave_beam_spawn_script_pointers[44] = 0x00D42090;
	montero_wave_beam_spawn_script_pointers[45] = 0x00D3E4C0;
	montero_wave_beam_spawn_script_pointers[46] = 0x00D42278;
	montero_wave_beam_spawn_script_pointers[47] = 0x00D420C8;
	montero_wave_beam_spawn_script_pointers[48] = 0x00D424C0;
	montero_wave_beam_spawn_script_pointers[49] = 0x00D42260;
	montero_wave_beam_spawn_script_pointers[50] = 0x00D4C670;
	montero_wave_beam_spawn_script_pointers[51] = 0x00D42248;
	montero_wave_beam_spawn_script_pointers[52] = 0x00D42250;
	montero_wave_beam_spawn_script_pointers[53] = 0x00D422E0;
	montero_wave_beam_spawn_script_pointers[54] = 0x00D422E8;
	montero_wave_beam_spawn_script_pointers[55] = 0x00D3E4C8;
	montero_wave_beam_spawn_script_pointers[56] = 0x00D3E4D0;
	montero_wave_beam_spawn_script_pointers[57] = 0x00D42110;
	montero_wave_beam_spawn_script_pointers[58] = 0x00D4C640;
	montero_wave_beam_spawn_script_pointers[59] = 0x00D3E4D8;
	montero_wave_beam_spawn_script_pointers[60] = 0x00D3E4E0;
	montero_wave_beam_spawn_script_pointers[61] = 0x00D4C628;
	montero_wave_beam_spawn_script_pointers[62] = 0x00D3E4E8;
	montero_wave_beam_spawn_script_pointers[63] = 0x00D3E4F0;
	montero_wave_beam_spawn_script_pointers[64] = 0x00D45E10;
	montero_wave_beam_spawn_script_pointers[65] = 0x00D4C650;
	montero_wave_beam_spawn_script_pointers[66] = 0x00D421F8;
	montero_wave_beam_spawn_script_pointers[67] = 0x00D42208;
	montero_wave_beam_spawn_script_pointers[68] = 0x00D42200;
	montero_wave_beam_spawn_script_pointers[69] = 0x00D3E500;
	montero_wave_beam_spawn_script_pointers[70] = 0x00D3E508;
	montero_wave_beam_spawn_script_pointers[71] = 0x00D3E510;
	montero_wave_beam_spawn_script_pointers[72] = 0x00D3E518;
	montero_wave_beam_spawn_script_pointers[73] = 0x00D3E520;
	montero_wave_beam_spawn_script_pointers[74] = 0x00D3E528;
	montero_wave_beam_spawn_script_pointers[75] = 0x00D3E530;
	montero_wave_beam_spawn_script_pointers[76] = 0x00D3E538;
	montero_wave_beam_spawn_script_pointers[77] = 0x00D3E540;
	montero_wave_beam_spawn_script_pointers[78] = 0x00D4C638;
	montero_wave_beam_spawn_script_pointers[79] = 0x00D4C630;
	montero_wave_beam_spawn_script_pointers[80] = 0x00D3E550;
	montero_wave_beam_spawn_script_pointers[81] = 0x00D3E558;
	montero_wave_beam_spawn_script_pointers[82] = 0x00D3E560;
	montero_wave_beam_spawn_script_pointers[83] = 0x00D3E568;
	montero_wave_beam_spawn_script_pointers[84] = 0x00D3E570;
	montero_wave_beam_spawn_script_pointers[85] = 0x00D3E578;
	montero_wave_beam_spawn_script_pointers[86] = 0x00D3E580;
	montero_wave_beam_spawn_script_pointers[87] = 0x00D3E588;
	montero_wave_beam_spawn_script_pointers[88] = 0x00D4C618;
	montero_wave_beam_spawn_script_pointers[89] = 0x00D4C620;
	montero_wave_beam_spawn_script_pointers[90] = 0x00D3E5A0;
	montero_wave_beam_spawn_script_pointers[91] = 0x00D4C648;
	montero_wave_beam_spawn_script_pointers[92] = 0x00D3E5A8;
	montero_wave_beam_spawn_script_pointers[93] = 0x00D45DD8;
	montero_wave_beam_spawn_script_pointers[94] = 0x00D3E5B8;
	montero_wave_beam_spawn_script_pointers[95] = 0x00D3E5C0;
	montero_wave_beam_spawn_script_pointers[96] = 0x00D3E5C8;
	montero_wave_beam_spawn_script_pointers[97] = 0x00D3E5D0;
	montero_wave_beam_spawn_script_pointers[98] = 0x00D42210;
	montero_wave_beam_spawn_script_pointers[99] = 0x00D3E5F0;
	montero_wave_beam_spawn_script_pointers[100] = 0x00D3E5F8;
	montero_wave_beam_spawn_script_pointers[101] = 0x00D42240;
	montero_wave_beam_spawn_script_pointers[102] = 0x00D421F0;
	montero_wave_beam_spawn_script_pointers[103] = 0x00D42498;
	montero_wave_beam_spawn_script_pointers[104] = 0x00D42230;
	montero_wave_beam_spawn_script_pointers[105] = 0x00D423B8;
	montero_wave_beam_spawn_script_pointers[106] = 0x00D42478;
	montero_wave_beam_spawn_script_pointers[107] = 0x00D3E638;
	montero_wave_beam_spawn_script_pointers[108] = 0x00D3E640;
	montero_wave_beam_spawn_script_pointers[109] = 0x00D42320;
	montero_wave_beam_spawn_script_pointers[110] = 0x00D423C8;
	montero_wave_beam_spawn_script_pointers[111] = 0x00D42358;
	montero_wave_beam_spawn_script_pointers[112] = 0x00D42360;
	montero_wave_beam_spawn_script_pointers[113] = 0x00D42448;
	montero_wave_beam_spawn_script_pointers[114] = 0x00D423B0;
	montero_wave_beam_spawn_script_pointers[115] = 0x00D42378;
	montero_wave_beam_spawn_script_pointers[116] = 0x00D42380;
	montero_wave_beam_spawn_script_pointers[117] = 0x00D42398;
	montero_wave_beam_spawn_script_pointers[118] = 0x00D42460;
	montero_wave_beam_spawn_script_pointers[119] = 0x00D42388;
	montero_wave_beam_spawn_script_pointers[120] = 0x00D42390;
	montero_wave_beam_spawn_script_pointers[121] = 0x00D422A0;
	montero_wave_beam_spawn_script_pointers[122] = 0x00D42268;
	montero_wave_beam_spawn_script_pointers[123] = 0x00D42428;
	montero_wave_beam_spawn_script_pointers[124] = 0x00D42338; // 0x00D42410; This is causing a very weird case of crashing if the script pointer address is not the actual ones. 
	montero_wave_beam_spawn_script_pointers[125] = 0x00D42280;
	montero_wave_beam_spawn_script_pointers[126] = 0x00D42408;
	montero_wave_beam_spawn_script_pointers[127] = 0x00D3E668;
	montero_wave_beam_spawn_script_pointers[128] = 0x00D3E650;
	montero_wave_beam_spawn_script_pointers[129] = 0x00D3E658;
	montero_wave_beam_spawn_script_pointers[130] = 0x00D42470;
	montero_wave_beam_spawn_script_pointers[131] = 0x00D42440;
	montero_wave_beam_spawn_script_pointers[132] = 0x00D3E670;
	montero_wave_beam_spawn_script_pointers[133] = 0x00D3E678;
	montero_wave_beam_spawn_script_pointers[134] = 0x00D3E680;
	montero_wave_beam_spawn_script_pointers[135] = 0x00D3E688;
	montero_wave_beam_spawn_script_pointers[136] = 0x00D3E690;
	montero_wave_beam_spawn_script_pointers[137] = 0x00D3E698;
	montero_wave_beam_spawn_script_pointers[138] = 0x00D3E6A0;
	montero_wave_beam_spawn_script_pointers[139] = 0x00D3E8A8;
	montero_wave_beam_spawn_script_pointers[140] = 0x00D424B8;
	montero_wave_beam_spawn_script_pointers[141] = 0x00D42468;
	montero_wave_beam_spawn_script_pointers[142] = 0x00D424C8;
	montero_wave_beam_spawn_script_pointers[143] = 0x00D436A0;
	montero_wave_beam_spawn_script_pointers[144] = 0x00D436A8;
	montero_wave_beam_spawn_script_pointers[145] = 0x00D45E18;
	montero_wave_beam_spawn_script_pointers[146] = 0x00D45E20;
	montero_wave_beam_spawn_script_pointers[147] = 0x00D45DE0;

	GameCall<int>(0x9F2538, 0xd9fe1c)(a1, 16410LL);
	result = (unsigned int)montero_wave_beam_spawn_script_pointers;
	*a1 = (unsigned int)montero_wave_beam_spawn_script_pointers;
	return result;
}

void montero_wave_beam_spawn() // 0x7CC02C
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2043[4];
	int v340;
	int result;

	v2043[0] = -1;
	v2043[1] = 0;
	v340 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2043);
	result = sub_9F0618((_DWORD *)v340);
	*v2 = v340;

	// set return
	temp_registers[3] = result;
}

void montero_JAVELIN_MADA_ARU_spawn_model_Hash()
{
	int hash = 0xF00A5F58;
}

__int64 __fastcall sub_85D038(_DWORD *a1)
{
	__int64 result; // r3

	montero_JAVELIN_MADA_ARU_spawn_script_pointers[0] = 0x00D4A078;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[1] = 0x00D4A070;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[2] = 0x00D3B608;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[3] = 0x00D3E608;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[4] = 0x00D42328;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[5] = 0x00D422B0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[6] = 0x00D3E610;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[7] = 0x00D3E618;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[8] = 0x00D422B8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[9] = 0x00D422C0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[10] = 0x00D42330;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[11] = 0x00D42340;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[12] = 0x00D422C8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[13] = 0x00D422D0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[14] = 0x00D422D8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[15] = 0x00D3E620;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[16] = 0x00D422F8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[17] = 0x00D42238;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[18] = 0x00D421C8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[19] = 0x00D3E5D8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[20] = 0x00D42258;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[21] = 0x00D3E628;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[22] = 0x00D422F0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[23] = 0x00D3E5E0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[24] = 0x00D3E5E8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[25] = 0x00D39E10;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[26] = 0x00D39E18;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[27] = 0x00D3E630;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[28] = 0x00D42298;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[29] = 0x00D3E490;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[30] = 0x00D3E498;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[31] = 0x00D3E4A0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[32] = 0x00D3E4A8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[33] = 0x00D3E4B0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[34] = 0x00D3E4B8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[35] = 0x00D42050;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[36] = 0x00D3E720;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[37] = 0x00D4A068;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[38] = 0x00D3E600;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[39] = 0x00D420F0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[40] = 0x00D42228;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[41] = 0x00D420D0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[42] = 0x00D42270;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[43] = 0x00D42068;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[44] = 0x00D42090;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[45] = 0x00D3E4C0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[46] = 0x00D42278;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[47] = 0x00D420C8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[48] = 0x00D420A8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[49] = 0x00D42260;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[50] = 0x00D42308;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[51] = 0x00D42248;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[52] = 0x00D42250;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[53] = 0x00D422E0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[54] = 0x00D422E8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[55] = 0x00D3E4C8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[56] = 0x00D3E4D0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[57] = 0x00D42110;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[58] = (int)montero_JAVELIN_MADA_ARU_spawn_model_Hash; // 0x00D4A048;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[59] = 0x00D3E4D8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[60] = 0x00D3E4E0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[61] = 0x00D43668; // Rotate it so that the javelin is facing foward instead of boomerang horizontal // 0x00D4A058;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[62] = 0x00D3E4E8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[63] = 0x00D3E4F0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[64] = 0x00D459D0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[65] = 0x00D459B0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[66] = 0x00D421F8;

	// Taken from Astray red frame's big sword, so that javelin will retain on the ground
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[67] = 0x00D4AE58;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[68] = 0x00D42200;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[69] = 0x00D4AE48;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[70] = 0x00D3E508;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[71] = 0x00D3E510;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[72] = 0x00D3E518;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[73] = 0x00D3E520;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[74] = 0x00D3E528;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[75] = 0x00D3E530;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[76] = 0x00D3E538;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[77] = 0x00D3E540;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[78] = 0x00D3E8A0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[79] = 0x00D3E548;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[80] = 0x00D3E550;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[81] = 0x00D3E558;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[82] = 0x00D3E560;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[83] = 0x00D3E568;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[84] = 0x00D3E570;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[85] = 0x00D3E578;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[86] = 0x00D3E580;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[87] = 0x00D3E588;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[88] = 0x00D4AE30;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[89] = 0x00D4AE38;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[90] = 0x00D3E5A0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[91] = 0x00D421D8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[92] = 0x00D3E5A8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[93] = 0x00D55388;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[94] = 0x00D3E5B8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[95] = 0x00D3E5C0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[96] = 0x00D3E5C8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[97] = 0x00D3E5D0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[98] = 0x00D4AE40;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[99] = 0x00D3E5F0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[100] = 0x00D553A8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[101] = 0x00D42240;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[102] = 0x00D421F0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[103] = 0x00D421E0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[104] = 0x00D42230;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[105] = 0x00D423B8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[106] = 0x00D42370;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[107] = 0x00D3E638;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[108] = 0x00D3E640;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[109] = 0x00D42320;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[110] = 0x00D423C8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[111] = 0x00D42358;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[112] = 0x00D42360;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[113] = 0x00D42368;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[114] = 0x00D423B0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[115] = 0x00D4AE60;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[116] = 0x00D42380;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[117] = 0x00D42398;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[118] = 0x00D423A8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[119] = 0x00D42388;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[120] = 0x00D42390;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[121] = 0x00D422A0;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[122] = 0x00D42268;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[123] = 0x00D421E8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[124] = 0x00D42338;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[125] = 0x00D42280;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[126] = 0x00D47F50;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[127] = 0x00D43688;

	// this is the same as 00's boomerang as astray's will offset the height a lil bit
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[128] = 0x00D459D8;
	montero_JAVELIN_MADA_ARU_spawn_script_pointers[129] = 0x00D45998;

	GameCall<int>(0x7EB570, 0xd8fe60)(a1, 14210);
	result = (unsigned int)montero_JAVELIN_MADA_ARU_spawn_script_pointers;
	*a1 = (unsigned int)montero_JAVELIN_MADA_ARU_spawn_script_pointers;
	*(a1 + 17424) = 0;
	return result;
}

void montero_JAVELIN_MADA_ARU_spawn() // 0x7D544C 00 Gundam's 2N
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1408[4];
	int v1121;
	int result;

	v1408[0] = -1;
	v1408[1] = 0;
	v1121 = GameCall<int>(0x9EE338, 0xd8fe60)(17536LL, 128LL, v1408);
	result = sub_85D038((_DWORD *)v1121);
	*v2 = v1121;

	// set return
	temp_registers[3] = result;
}

void montero_EX_Burst_Javelin_spawn_model_hash()
{
	int hash = 0xF00A5F58;
}

__int64 __fastcall sub_89EB44(_DWORD *a1)
{
	__int64 result; // r3

	// 0xcd8628
	montero_EX_Burst_Javelin_spawn_script_pointers[0] = 0x00D4C6C0;
	montero_EX_Burst_Javelin_spawn_script_pointers[1] = 0x00D4C6B8;
	montero_EX_Burst_Javelin_spawn_script_pointers[2] = 0x00D3B608;
	montero_EX_Burst_Javelin_spawn_script_pointers[3] = 0x00D3E608;
	montero_EX_Burst_Javelin_spawn_script_pointers[4] = 0x00D42328;
	montero_EX_Burst_Javelin_spawn_script_pointers[5] = 0x00D424D0;
	montero_EX_Burst_Javelin_spawn_script_pointers[6] = 0x00D3E610;
	montero_EX_Burst_Javelin_spawn_script_pointers[7] = 0x00D3E618;
	montero_EX_Burst_Javelin_spawn_script_pointers[8] = 0x00D422B8;
	montero_EX_Burst_Javelin_spawn_script_pointers[9] = 0x00D422C0;
	montero_EX_Burst_Javelin_spawn_script_pointers[10] = 0x00D42330;
	montero_EX_Burst_Javelin_spawn_script_pointers[11] = 0x00D42340;
	montero_EX_Burst_Javelin_spawn_script_pointers[12] = 0x00D422C8;
	montero_EX_Burst_Javelin_spawn_script_pointers[13] = 0x00D422D0;
	montero_EX_Burst_Javelin_spawn_script_pointers[14] = 0x00D424B0;
	montero_EX_Burst_Javelin_spawn_script_pointers[15] = 0x00D3E620;
	montero_EX_Burst_Javelin_spawn_script_pointers[16] = 0x00D422F8;
	montero_EX_Burst_Javelin_spawn_script_pointers[17] = 0x00D42238;
	montero_EX_Burst_Javelin_spawn_script_pointers[18] = 0x00D3E660;
	montero_EX_Burst_Javelin_spawn_script_pointers[19] = 0x00D3E5D8;
	montero_EX_Burst_Javelin_spawn_script_pointers[20] = 0x00D42258;
	montero_EX_Burst_Javelin_spawn_script_pointers[21] = 0x00D3E628;
	montero_EX_Burst_Javelin_spawn_script_pointers[22] = 0x00D422F0;
	montero_EX_Burst_Javelin_spawn_script_pointers[23] = 0x00D3E5E0;
	montero_EX_Burst_Javelin_spawn_script_pointers[24] = 0x00D3E5E8;
	montero_EX_Burst_Javelin_spawn_script_pointers[25] = 0x00D39E10;
	montero_EX_Burst_Javelin_spawn_script_pointers[26] = 0x00D39E18;
	montero_EX_Burst_Javelin_spawn_script_pointers[27] = 0x00D3E630;
	montero_EX_Burst_Javelin_spawn_script_pointers[28] = 0x00D42450;
	montero_EX_Burst_Javelin_spawn_script_pointers[29] = 0x00D3E490;
	montero_EX_Burst_Javelin_spawn_script_pointers[30] = 0x00D3E498;
	montero_EX_Burst_Javelin_spawn_script_pointers[31] = 0x00D3E4A0;
	montero_EX_Burst_Javelin_spawn_script_pointers[32] = 0x00D3E4A8;
	montero_EX_Burst_Javelin_spawn_script_pointers[33] = 0x00D3E4B0;
	montero_EX_Burst_Javelin_spawn_script_pointers[34] = 0x00D3E4B8;
	montero_EX_Burst_Javelin_spawn_script_pointers[35] = 0x00D3E648;
	montero_EX_Burst_Javelin_spawn_script_pointers[36] = 0x00D3E720;
	montero_EX_Burst_Javelin_spawn_script_pointers[37] = 0x00D4C700;
	montero_EX_Burst_Javelin_spawn_script_pointers[38] = 0x00D3E600;
	montero_EX_Burst_Javelin_spawn_script_pointers[39] = 0x00D420F0;
	montero_EX_Burst_Javelin_spawn_script_pointers[40] = 0x00D42228;
	montero_EX_Burst_Javelin_spawn_script_pointers[41] = 0x00D420D0;
	montero_EX_Burst_Javelin_spawn_script_pointers[42] = 0x00D42270;
	montero_EX_Burst_Javelin_spawn_script_pointers[43] = 0x00D424F0;
	montero_EX_Burst_Javelin_spawn_script_pointers[44] = 0x00D42090;
	montero_EX_Burst_Javelin_spawn_script_pointers[45] = 0x00D3E4C0;
	montero_EX_Burst_Javelin_spawn_script_pointers[46] = 0x00D42278;
	montero_EX_Burst_Javelin_spawn_script_pointers[47] = 0x00D420C8;
	montero_EX_Burst_Javelin_spawn_script_pointers[48] = 0x00D424C0;
	montero_EX_Burst_Javelin_spawn_script_pointers[49] = 0x00D42260;
	montero_EX_Burst_Javelin_spawn_script_pointers[50] = 0x00D42308;
	montero_EX_Burst_Javelin_spawn_script_pointers[51] = 0x00D42248;
	montero_EX_Burst_Javelin_spawn_script_pointers[52] = 0x00D42250;
	montero_EX_Burst_Javelin_spawn_script_pointers[53] = 0x00D422E0;
	montero_EX_Burst_Javelin_spawn_script_pointers[54] = 0x00D422E8;
	montero_EX_Burst_Javelin_spawn_script_pointers[55] = 0x00D3E4C8;
	montero_EX_Burst_Javelin_spawn_script_pointers[56] = 0x00D3E4D0;
	montero_EX_Burst_Javelin_spawn_script_pointers[57] = 0x00D42110;
	montero_EX_Burst_Javelin_spawn_script_pointers[58] = (int)montero_EX_Burst_Javelin_spawn_model_hash; // 0x00D4C678;
	montero_EX_Burst_Javelin_spawn_script_pointers[59] = 0x00D3E4D8;
	montero_EX_Burst_Javelin_spawn_script_pointers[60] = 0x00D3E4E0;
	montero_EX_Burst_Javelin_spawn_script_pointers[61] = 0x00D43690;
	montero_EX_Burst_Javelin_spawn_script_pointers[62] = 0x00D3E4E8;
	montero_EX_Burst_Javelin_spawn_script_pointers[63] = 0x00D3E4F0;
	montero_EX_Burst_Javelin_spawn_script_pointers[64] = 0x00D45E10;
	montero_EX_Burst_Javelin_spawn_script_pointers[65] = 0x00D4C6D0;
	montero_EX_Burst_Javelin_spawn_script_pointers[66] = 0x00D421F8;
	montero_EX_Burst_Javelin_spawn_script_pointers[67] = 0x00D4C6B0;
	montero_EX_Burst_Javelin_spawn_script_pointers[68] = 0x00D42200;
	montero_EX_Burst_Javelin_spawn_script_pointers[69] = 0x00D4C6A0;
	montero_EX_Burst_Javelin_spawn_script_pointers[70] = 0x00D3E508;
	montero_EX_Burst_Javelin_spawn_script_pointers[71] = 0x00D3E510;
	montero_EX_Burst_Javelin_spawn_script_pointers[72] = 0x00D3E518;
	montero_EX_Burst_Javelin_spawn_script_pointers[73] = 0x00D3E520;
	montero_EX_Burst_Javelin_spawn_script_pointers[74] = 0x00D3E528;
	montero_EX_Burst_Javelin_spawn_script_pointers[75] = 0x00D3E530;
	montero_EX_Burst_Javelin_spawn_script_pointers[76] = 0x00D3E538;
	montero_EX_Burst_Javelin_spawn_script_pointers[77] = 0x00D3E540;
	montero_EX_Burst_Javelin_spawn_script_pointers[78] = 0x00D3E8A0;
	montero_EX_Burst_Javelin_spawn_script_pointers[79] = 0x00D3E548;
	montero_EX_Burst_Javelin_spawn_script_pointers[80] = 0x00D3E550;
	montero_EX_Burst_Javelin_spawn_script_pointers[81] = 0x00D3E558;
	montero_EX_Burst_Javelin_spawn_script_pointers[82] = 0x00D3E560;
	montero_EX_Burst_Javelin_spawn_script_pointers[83] = 0x00D3E568;
	montero_EX_Burst_Javelin_spawn_script_pointers[84] = 0x00D3E570;
	montero_EX_Burst_Javelin_spawn_script_pointers[85] = 0x00D3E578;
	montero_EX_Burst_Javelin_spawn_script_pointers[86] = 0x00D3E580;
	montero_EX_Burst_Javelin_spawn_script_pointers[87] = 0x00D3E588;
	montero_EX_Burst_Javelin_spawn_script_pointers[88] = 0x00D4C688;
	montero_EX_Burst_Javelin_spawn_script_pointers[89] = 0x00D4C690;
	montero_EX_Burst_Javelin_spawn_script_pointers[90] = 0x00D3E5A0;
	montero_EX_Burst_Javelin_spawn_script_pointers[91] = 0x00D421D8;
	montero_EX_Burst_Javelin_spawn_script_pointers[92] = 0x00D3E5A8;
	montero_EX_Burst_Javelin_spawn_script_pointers[93] = 0x00D45DD8;
	montero_EX_Burst_Javelin_spawn_script_pointers[94] = 0x00D3E5B8;
	montero_EX_Burst_Javelin_spawn_script_pointers[95] = 0x00D3E5C0;
	montero_EX_Burst_Javelin_spawn_script_pointers[96] = 0x00D3E5C8;
	montero_EX_Burst_Javelin_spawn_script_pointers[97] = 0x00D3E5D0;
	montero_EX_Burst_Javelin_spawn_script_pointers[98] = 0x00D4C698;
	montero_EX_Burst_Javelin_spawn_script_pointers[99] = 0x00D3E5F0;
	montero_EX_Burst_Javelin_spawn_script_pointers[100] = 0x00D3E5F8;
	montero_EX_Burst_Javelin_spawn_script_pointers[101] = 0x00D42240;
	montero_EX_Burst_Javelin_spawn_script_pointers[102] = 0x00D421F0;
	montero_EX_Burst_Javelin_spawn_script_pointers[103] = 0x00D42498;
	montero_EX_Burst_Javelin_spawn_script_pointers[104] = 0x00D42230;
	montero_EX_Burst_Javelin_spawn_script_pointers[105] = 0x00D423B8;
	montero_EX_Burst_Javelin_spawn_script_pointers[106] = 0x00D42478;
	montero_EX_Burst_Javelin_spawn_script_pointers[107] = 0x00D3E638;
	montero_EX_Burst_Javelin_spawn_script_pointers[108] = 0x00D3E640;
	montero_EX_Burst_Javelin_spawn_script_pointers[109] = 0x00D42320;
	montero_EX_Burst_Javelin_spawn_script_pointers[110] = 0x00D423C8;
	montero_EX_Burst_Javelin_spawn_script_pointers[111] = 0x00D42358;
	montero_EX_Burst_Javelin_spawn_script_pointers[112] = 0x00D42360;
	montero_EX_Burst_Javelin_spawn_script_pointers[113] = 0x00D42448;
	montero_EX_Burst_Javelin_spawn_script_pointers[114] = 0x00D423B0;
	montero_EX_Burst_Javelin_spawn_script_pointers[115] = 0x00D4C6F0;
	montero_EX_Burst_Javelin_spawn_script_pointers[116] = 0x00D4C6F8;
	montero_EX_Burst_Javelin_spawn_script_pointers[117] = 0x00D4C6C8;
	montero_EX_Burst_Javelin_spawn_script_pointers[118] = 0x00D42460;
	montero_EX_Burst_Javelin_spawn_script_pointers[119] = 0x00D42388;
	montero_EX_Burst_Javelin_spawn_script_pointers[120] = 0x00D42390;
	montero_EX_Burst_Javelin_spawn_script_pointers[121] = 0x00D422A0;
	montero_EX_Burst_Javelin_spawn_script_pointers[122] = 0x00D42268;
	montero_EX_Burst_Javelin_spawn_script_pointers[123] = 0x00D42428;
	montero_EX_Burst_Javelin_spawn_script_pointers[124] = 0x00D42338; // 0x00D42410;
	montero_EX_Burst_Javelin_spawn_script_pointers[125] = 0x00D42280;
	montero_EX_Burst_Javelin_spawn_script_pointers[126] = 0x00D42408;
	montero_EX_Burst_Javelin_spawn_script_pointers[127] = 0x00D3E668;
	montero_EX_Burst_Javelin_spawn_script_pointers[128] = 0x00D3E650;
	montero_EX_Burst_Javelin_spawn_script_pointers[129] = 0x00D3E658;
	montero_EX_Burst_Javelin_spawn_script_pointers[130] = 0x00D42470;
	montero_EX_Burst_Javelin_spawn_script_pointers[131] = 0x00D42440;
	montero_EX_Burst_Javelin_spawn_script_pointers[132] = 0x00D3E670;
	montero_EX_Burst_Javelin_spawn_script_pointers[133] = 0x00D3E678;
	montero_EX_Burst_Javelin_spawn_script_pointers[134] = 0x00D3E680;
	montero_EX_Burst_Javelin_spawn_script_pointers[135] = 0x00D3E688;
	montero_EX_Burst_Javelin_spawn_script_pointers[136] = 0x00D3E690;
	montero_EX_Burst_Javelin_spawn_script_pointers[137] = 0x00D3E698;
	montero_EX_Burst_Javelin_spawn_script_pointers[138] = 0x00D3E6A0;
	montero_EX_Burst_Javelin_spawn_script_pointers[139] = 0x00D3E8A8;
	montero_EX_Burst_Javelin_spawn_script_pointers[140] = 0x00D424B8;
	montero_EX_Burst_Javelin_spawn_script_pointers[141] = 0x00D42468;
	montero_EX_Burst_Javelin_spawn_script_pointers[142] = 0x00D424C8;
	montero_EX_Burst_Javelin_spawn_script_pointers[143] = 0x00D436A0;
	montero_EX_Burst_Javelin_spawn_script_pointers[144] = 0x00D4C680;
	montero_EX_Burst_Javelin_spawn_script_pointers[145] = 0x00D4C6E8;
	montero_EX_Burst_Javelin_spawn_script_pointers[146] = 0x00D45E20;
	montero_EX_Burst_Javelin_spawn_script_pointers[147] = 0x00D4C6E0;
	montero_EX_Burst_Javelin_spawn_script_pointers[148] = 0x00D4C6D8;
	montero_EX_Burst_Javelin_spawn_script_pointers[149] = 0x00D4C6A8;

	GameCall<int>(0x9F2538, 0xd9fe1c)(a1, 0x66a9e);//16470LL);
	result = (unsigned int)montero_EX_Burst_Javelin_spawn_script_pointers;
	*a1 = (unsigned int)montero_EX_Burst_Javelin_spawn_script_pointers;
	return result;
}

void montero_EX_Burst_Javelin_spawn() // 0x7D56F8, Deathscythe Hell (EW)'s EX Burst throw
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2047[4];
	int v1139;
	int result;

	v2047[0] = -1;
	v2047[1] = 0;
	v1139 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2047);
	result = sub_89EB44((_DWORD *)v1139);
	*v2 = v1139;

	// set return
	temp_registers[3] = result;
}

// Script for reading projectile ID and such
__int64 sub_7EC3DC(unsigned int *a1, unsigned int *a2) // accessed from 0x00d4a530
{
	__int64 v4; // r29
	__int64 v5; // r2
	__int64 v6; // r2
	__int64 v7; // r3
	__int64 v8; // r27
	unsigned int *v9; // r22
	__int64 v10; // r2
	__int64 v11; // r3
	int *v12; // r29
	_DWORD *v13; // r25
	int v14; // r5
	int v15; // r4
	__int64 v16; // r2
	__int64 v17; // r2
	__int64 v18; // r2
	__int64 v19; // r2
	char v21[4]; // [sp+70h] [-70h] BYREF
	char v22[4]; // [sp+74h] [-6Ch] BYREF
	char v23[16]; // [sp+78h] [-68h] BYREF

	v23[0] = -1;
	v23[1] = 0;
	v4 = (unsigned int)GameCall<int>(0x9EE118, 0xd8fe60)(156LL, v23);
	GameCall<int>(0x9EE278, 0xd8fe60)(v4);
	v5 = *(unsigned int *)(*(unsigned int *)(*a1 + 0x28CLL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*a1 + 0x28CLL), v5)((unsigned int)a1, v4);
	GameCall<int>(0x9EE9E8, 0xd8fe60)(v4, 1LL);
	v6 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL), v6)((unsigned int)a2, v4);
	v22[0] = -1;
	v22[1] = 0;
	v7 = GameCall<int>(0x9EE118, 0xd8fe60)(156LL, v22);
	v8 = (unsigned int)v7;
	v9 = (unsigned int *)v7;
	GameCall<int>(0x9EE278, 0xd8fe60)((unsigned int)v7);
	v10 = *(unsigned int *)(*(unsigned int *)(*a1 + 0x290LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*a1 + 0x290LL), v10)((unsigned int)a1, v8);
	v21[0] = -1;
	v21[1] = 0;
	v11 = GameCall<int>(0x9EE118, 0xd8fe60)(28LL, v21);
	v12 = (int *)(unsigned int)v11;
	v13 = (_DWORD *)v11;
	GameCall<int>(0x9EE998, 0xd8fe60)((unsigned int)v11);
	v14 = 0xc81c18;
	v15 = 0xc85e48;
	v12[5] = -241;
	*v12 = v14;
	v12[4] = (int)a1;
	*v13 = v15;
	v13[6] = 0; // dealy frame
	v16 = *(unsigned int *)(*(unsigned int *)(*v9 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*v9 + 0x34LL), v16)(v8, v12);
	v17 = *(unsigned int *)(*(unsigned int *)(*a1 + 0x298LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*a1 + 0x298LL), v17)((unsigned int)a1, v8);
	GameCall<int>(0x9EE9E8, 0xd8fe60)(v8, 2LL);
	v18 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL), v18)((unsigned int)a2, v8);
	v19 = *(unsigned int *)(*(unsigned int *)(*a1 + 0x294LL) + 4LL);
	return (GameCall<int>(*(unsigned int *)*(unsigned int *)(*a1 + 0x294LL), v19)(
		(unsigned int)a1,
		(unsigned int)a2)
		);
}

__int64 sub_82E504(__int64 a1, unsigned int *a2, __int64 a3) // 0x1250238
{
	__int64 v5; // r27
	__int64 v6; // r26
	__int64 v7; // r2
	unsigned int *v8; // r27
	__int64 v9; // r3
	int *v10; // r29
	_DWORD *v11; // r28
	int v12; // r8
	int v13; // r21
	__int64 v14; // r2
	unsigned int *v15; // r27
	__int64 v16; // r3
	_DWORD *v17; // r29
	_DWORD *v18; // r28
	int v19; // r3
	__int64 v20; // r2
	char v22[4]; // [sp+70h] [-70h] BYREF
	char v23[4]; // [sp+74h] [-6Ch] BYREF
	char v24[8]; // [sp+78h] [-68h] BYREF

	// --------------------------------------------------------
	v24[1] = 0;
	v24[0] = -1;

	v5 = GameCall<int>(0x9EE118, 0xd8fe60)(56LL, (__int64)v24); // Find these if you want to find if the pointer func is doing animation shit

	v6 = (unsigned int)a2;

	// set animation (nth index of the animation in the second folder in OMO PAC)
	// arg1 = starting animation
	// arg2 = the looping animation (shoot)
	// arg3 = ending animation
	int anim_start_index = 5LL;
	int anim_loop_index = 6LL;
	int anim_end_index = 7LL;
	GameCall<int>(0x9F1828, 0xd8fe60)((unsigned int)v5, (unsigned int)a3, anim_start_index, anim_loop_index, anim_end_index);
	*(_DWORD *)(v5 + 44) = 0;

	// 0x6f4a00, 0xd7ff30
	v7 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
	GameCall<int>((*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL)), 0xd7ff30)((unsigned int)a2,(unsigned int)v5);

	// --------------------------------------------------------
	v8 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
	v23[0] = -1;
	v23[1] = 0;

	v9 = GameCall<int>(0x9EE118, 0xd8fe60)(32LL, (__int64)v23);

	v10 = (int *)(unsigned int)v9;
	v11 = (_DWORD *)v9;

	// populate the temp 0x4ffff type with the 0xc837d8
	GameCall<int>(0x9EE998, 0xd8fe60)((unsigned int)v9); // 0xd7ff30

	v12 = 0xc853d0; // 0xc853d0
	v13 = 0xc86240; // 0xc86240

	// this decompilation is quite wrong, but is it is okay since the toc is ovewritten on *v11 = v12 (no idea why)
	*v10 = 0xc83818; // 0xc83818 

	v10[4] = a3;
	*v11 = v12; // write the toc for 0x4fff temp address with 0xc853d0
	v10[5] = -241;
	v11[7] = 0;
	v11[6] = 1;

	// wrong decompilation of r2 toc assign
	v14 = v8[1];

	// 0x6f4a00, 0xd7ff30
	GameCall<int>(*v8, 0xd7ff30)((unsigned int)a2, v10);

	// --------------------------------------------------------
	v15 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);

	// Read the continue hash in the projectile properties
	LODWORD(a2) = *(_DWORD *)(*(unsigned int *)(a3 + 164) + 0xC8LL);
	v22[0] = -1;
	v22[1] = 0;

	v16 = GameCall<int>(0x9EE118, 0xd8fe60)(28LL, (__int64)v22);

	v17 = (_DWORD *)(unsigned int)v16;
	v18 = (_DWORD *)v16;

	GameCall<int>(0x9EE998, 0xd8fe60)((unsigned int)v16);

	v19 = 0xc83a78; // 0xc83a78

	// wrong decompilation, should be writing 0xc83818 instead, but is okay since it is overwritten later by (*v18 = v19)
	*v17 = v13;

	v17[4] = a3;

	v17[5] = -241;

	*v18 = v19; // write new TOC, 0xc83a78

	v18[6] = (_DWORD)a2; // write continue projectile hash

	// wrong decompilation of r2 toc assign
	v20 = v15[1];

	// 0x6f4a00, 0xd7ff30
	return GameCall<int>((*v15), 0xd7ff30)(v6, v17);
}

__int64 __fastcall sub_82E4CC(_DWORD *a1, _DWORD projectile_ID)
{
	__int64 result; // r3

	/*
	// 0xcb57f0
	script_pointers[0] = 0x00D48130;
	script_pointers[1] = 0x00D48128;
	script_pointers[2] = 0x00D3B608;
	script_pointers[3] = 0x00D3E608;
	script_pointers[4] = 0x00D42328;
	script_pointers[5] = 0x00D424D0;
	script_pointers[6] = 0x00D3E610;
	script_pointers[7] = 0x00D3E618;
	script_pointers[8] = 0x00D422B8;
	script_pointers[9] = 0x00D422C0;
	script_pointers[10] = 0x00D42330;
	script_pointers[11] = 0x00D425F8;
	script_pointers[12] = 0x00D422C8;
	script_pointers[13] = 0x00D422D0;
	script_pointers[14] = 0x00D425D0;
	script_pointers[15] = 0x00D3E620;
	script_pointers[16] = 0x00D422F8;
	script_pointers[17] = 0x00D42238;
	script_pointers[18] = 0x00D3E660;
	script_pointers[19] = 0x00D3E5D8;
	script_pointers[20] = 0x00D42258;
	script_pointers[21] = 0x00D3E628;
	script_pointers[22] = 0x00D422F0;
	script_pointers[23] = 0x00D3E5E0;
	script_pointers[24] = 0x00D3E5E8;
	script_pointers[25] = 0x00D39E10;
	script_pointers[26] = 0x00D39E18;
	script_pointers[27] = 0x00D3E630;
	script_pointers[28] = 0x00D42450;
	script_pointers[29] = 0x00D3E490;
	script_pointers[30] = 0x00D3E498;
	script_pointers[31] = 0x00D3E8B0;
	script_pointers[32] = 0x00D3E4A8;
	script_pointers[33] = 0x00D3E4B0;
	script_pointers[34] = 0x00D3E4B8;
	script_pointers[35] = 0x00D3E648;
	script_pointers[36] = 0x00D3E720;
	script_pointers[37] = 0x00D425F0;
	script_pointers[38] = 0x00D3E600;
	script_pointers[39] = 0x00D420F0;
	script_pointers[40] = 0x00D42228;
	script_pointers[41] = 0x00D420D0;
	script_pointers[42] = 0x00D42270;
	script_pointers[43] = 0x00D424F0;
	script_pointers[44] = 0x00D42090;
	script_pointers[45] = 0x00D3E4C0;
	script_pointers[46] = 0x00D42278;
	script_pointers[47] = 0x00D420C8;
	script_pointers[48] = 0x00D424C0;
	script_pointers[49] = 0x00D42260;
	script_pointers[50] = 0x00D42308;
	script_pointers[51] = 0x00D42248;
	script_pointers[52] = 0x00D42250;
	script_pointers[53] = 0x00D422E0;
	script_pointers[54] = 0x00D422E8;
	script_pointers[55] = 0x00D3E4C8;
	script_pointers[56] = 0x00D3E4D0;
	script_pointers[57] = 0x00D42110;
	script_pointers[58] = 0x00D421D0;
	script_pointers[59] = 0x00D3E4D8;
	script_pointers[60] = 0x00D3E4E0;
	script_pointers[61] = 0x00D3E898;
	script_pointers[62] = 0x00D3E4E8;
	script_pointers[63] = 0x00D3E4F0;
	script_pointers[64] = 0x00D3E4F8;
	script_pointers[65] = 0x00D48120;
	script_pointers[66] = 0x00D42500;
	script_pointers[67] = 0x00D42208;
	script_pointers[68] = 0x00D42200;
	script_pointers[69] = 0x00D3E500;
	script_pointers[70] = 0x00D3E508;
	script_pointers[71] = 0x00D480F8;
	script_pointers[72] = 0x00D3E518;
	script_pointers[73] = 0x00D3E520;
	script_pointers[74] = 0x00D3E528;
	script_pointers[75] = 0x00D3E530;
	script_pointers[76] = 0x00D3E538;
	script_pointers[77] = 0x00D3E540;
	script_pointers[78] = 0x00D43618;
	script_pointers[79] = 0x00D3E548;
	script_pointers[80] = 0x00D3E550;
	script_pointers[81] = 0x00D3E8C0;
	script_pointers[82] = 0x00D3E560;
	script_pointers[83] = 0x00D3E8C8;
	script_pointers[84] = 0x00D3E570;
	script_pointers[85] = 0x00D3E578;
	script_pointers[86] = 0x00D3E580;
	script_pointers[87] = 0x00D3E588;
	script_pointers[88] = 0x00D3E590;
	script_pointers[89] = 0x00D3E598;
	script_pointers[90] = 0x00D3E5A0;
	script_pointers[91] = 0x00D3E8D0;
	script_pointers[92] = 0x00D3E5A8;
	script_pointers[93] = 0x00D42540;
	script_pointers[94] = 0x00D3E5B8;
	script_pointers[95] = 0x00D3E5C0;
	script_pointers[96] = 0x00D3E5C8;
	script_pointers[97] = 0x00D3E5D0;
	script_pointers[98] = 0x00D42210;
	script_pointers[99] = 0x00D3E5F0;
	script_pointers[100] = 0x00D3E5F8;
	script_pointers[101] = 0x00D42240;
	script_pointers[102] = 0x00D421F0;
	script_pointers[103] = 0x00D42498;
	script_pointers[104] = 0x00D42230;
	script_pointers[105] = 0x00D423B8;
	script_pointers[106] = 0x00D42478;
	script_pointers[107] = 0x00D425E8;
	script_pointers[108] = 0x00D3E640;
	script_pointers[109] = 0x00D42320;
	script_pointers[110] = 0x00D42518;
	script_pointers[111] = 0x00D42358;
	script_pointers[112] = 0x00D42360;
	script_pointers[113] = 0x00D42448;
	script_pointers[114] = 0x00D42510;
	script_pointers[115] = 0x00D42378;
	script_pointers[116] = 0x00D42380;
	script_pointers[117] = 0x00D42398;
	script_pointers[118] = 0x00D42460;
	script_pointers[119] = 0x00D42388;
	script_pointers[120] = 0x00D42390;
	script_pointers[121] = 0x00D422A0;
	script_pointers[122] = 0x00D42268;
	script_pointers[123] = 0x00D42428;
	script_pointers[124] = 0x00D42338; //0x00D42410;
	script_pointers[125] = 0x00D42280;
	script_pointers[126] = 0x00D42408;
	script_pointers[127] = 0x00D3E668;
	script_pointers[128] = 0x00D3E650;
	script_pointers[129] = 0x00D3E658;
	script_pointers[130] = 0x00D42470;
	script_pointers[131] = 0x00D480D8;
	script_pointers[132] = 0x00D3E670;
	script_pointers[133] = 0x00D3E678;
	script_pointers[134] = 0x00D3E680;
	script_pointers[135] = 0x00D3E688;
	script_pointers[136] = 0x00D3E690;
	script_pointers[137] = 0x00D3E698;
	script_pointers[138] = 0x00D3E6A0;
	script_pointers[139] = 0x00D3E8A8;
	script_pointers[140] = 0x00D424B8;
	script_pointers[141] = 0x00D42468;
	script_pointers[142] = 0x00D424C8;
	script_pointers[143] = 0x00D480E0;
	script_pointers[144] = 0x00D3E8E0;
	script_pointers[145] = 0x00D3E8E8;
	script_pointers[146] = 0x00D3E8F0;
	script_pointers[147] = 0x00D424F8;
	script_pointers[148] = 0x00D43620;
	script_pointers[149] = 0x00D3E900;
	script_pointers[150] = 0x00D3E908;
	script_pointers[151] = 0x00D3E910;
	script_pointers[152] = 0x00D42558;
	script_pointers[153] = (int)sub_7EC3DC;
	script_pointers[154] = 0x00D42568;
	script_pointers[155] = 0x00D3E918;
	script_pointers[156] = 0x00D3E920;
	script_pointers[157] = 0x00D42548;
	script_pointers[158] = 0x00D42550;
	script_pointers[159] = 0x00D425B8;
	script_pointers[160] = 0x00D425C0;
	script_pointers[161] = 0x00D425C8;
	script_pointers[162] = 0x00D43628;
	script_pointers[163] = 0x00D45A28;
	script_pointers[164] = 0x00D45A20;
	script_pointers[165] = 0x00D45AA0;
	script_pointers[166] = 0x00D48100;
	script_pointers[167] = 0x00D43630;
	*/
	// This is just a template used for assign

	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, projectile_ID);
	result = (unsigned int)script_pointers;
	// This will be replaced anyway
	// *a1 = (unsigned int)script_pointers; 
	return result;
}

int montero_G_Self_assist_spawn_model_Hash()
{
	return 0x631311CD;
}

void montero_G_Self_shoot_melee_assist_spawn() // 0x7D5B68, Gun EZ N Assist (three shot) 0x1210044
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1772[4];
	_DWORD *v1163;
	int result;

	v1772[0] = -1;
	v1772[1] = 0;
	v1163 = (_DWORD *)GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v1772);
	result = sub_82E4CC((unsigned int*)v1163, 5230LL);

	//0xcb5548
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[0] = 0x00D48150;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[1] = 0x00D48148;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[2] = 0x00D3B608;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[3] = 0x00D3E608;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[4] = 0x00D42328;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[5] = 0x00D424D0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[6] = 0x00D3E610;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[7] = 0x00D3E618;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[8] = 0x00D422B8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[9] = 0x00D422C0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[10] = 0x00D42330;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[11] = 0x00D425F8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[12] = 0x00D422C8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[13] = 0x00D422D0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[14] = 0x00D425D0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[15] = 0x00D3E620;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[16] = 0x00D422F8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[17] = 0x00D42238;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[18] = 0x00D3E660;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[19] = 0x00D3E5D8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[20] = 0x00D42258;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[21] = 0x00D3E628;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[22] = 0x00D422F0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[23] = 0x00D3E5E0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[24] = 0x00D3E5E8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[25] = 0x00D39E10;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[26] = 0x00D39E18;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[27] = 0x00D3E630;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[28] = 0x00D42450;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[29] = 0x00D3E490;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[30] = 0x00D3E498;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[31] = 0x00D3E8B0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[32] = 0x00D3E4A8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[33] = 0x00D3E4B0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[34] = 0x00D3E4B8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[35] = 0x00D3E648;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[36] = 0x00D3E720;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[37] = 0x00D48118; // this cause crashes?
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[38] = 0x00D3E600;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[39] = 0x00D420F0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[40] = 0x00D42228;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[41] = 0x00D420D0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[42] = 0x00D42270;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[43] = 0x00D424F0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[44] = 0x00D42090;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[45] = 0x00D3E4C0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[46] = 0x00D42278;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[47] = 0x00D420C8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[48] = 0x00D424C0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[49] = 0x00D42260;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[50] = 0x00D42308;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[51] = 0x00D42248;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[52] = 0x00D42250;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[53] = 0x00D422E0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[54] = 0x00D422E8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[55] = 0x00D3E4C8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[56] = 0x00D3E4D0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[57] = 0x00D42110;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[58] = (int)montero_G_Self_assist_spawn_model_Hash; // 0x00D480E8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[59] = 0x00D3E4D8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[60] = 0x00D3E4E0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[61] = 0x00D3E898;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[62] = 0x00D3E4E8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[63] = 0x00D3E4F0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[64] = 0x00D3E4F8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[65] = 0x00D48120;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[66] = 0x00D42500;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[67] = 0x00D42208;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[68] = 0x00D42200;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[69] = 0x00D3E500;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[70] = 0x00D3E508;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[71] = 0x00D480F8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[72] = 0x00D3E518;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[73] = 0x00D3E520;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[74] = 0x00D3E528;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[75] = 0x00D3E530;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[76] = 0x00D3E538;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[77] = 0x00D3E540;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[78] = 0x00D43618;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[79] = 0x00D3E548;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[80] = 0x00D3E550;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[81] = 0x00D3E8C0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[82] = 0x00D3E560;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[83] = 0x00D3E8C8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[84] = 0x00D3E570;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[85] = 0x00D3E578;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[86] = 0x00D3E580;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[87] = 0x00D3E588;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[88] = 0x00D3E590;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[89] = 0x00D3E598;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[90] = 0x00D3E5A0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[91] = 0x00D3E8D0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[92] = 0x00D3E5A8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[93] = 0x00D42540;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[94] = 0x00D3E5B8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[95] = 0x00D3E5C0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[96] = 0x00D3E5C8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[97] = 0x00D3E5D0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[98] = 0x00D42210;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[99] = 0x00D3E5F0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[100] = 0x00D3E5F8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[101] = 0x00D42240;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[102] = 0x00D421F0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[103] = 0x00D42498;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[104] = 0x00D42230;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[105] = 0x00D423B8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[106] = 0x00D42478;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[107] = 0x00D425E8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[108] = 0x00D3E640;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[109] = 0x00D42320;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[110] = 0x00D42518;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[111] = 0x00D42358;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[112] = 0x00D42360;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[113] = 0x00D42448;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[114] = 0x00D42510;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[115] = 0x00D42378;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[116] = 0x00D42380;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[117] = 0x00D42398;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[118] = 0x00D42460;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[119] = 0x00D42388;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[120] = 0x00D42390;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[121] = 0x00D422A0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[122] = 0x00D42268;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[123] = 0x00D42428;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[124] = 0x00D42338; //0x00D42410;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[125] = 0x00D42280;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[126] = 0x00D42408;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[127] = 0x00D3E668;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[128] = 0x00D3E650;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[129] = 0x00D3E658;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[130] = 0x00D42470;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[131] = 0x00D480D8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[132] = 0x00D3E670;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[133] = 0x00D3E678;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[134] = 0x00D3E680;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[135] = 0x00D3E688;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[136] = 0x00D3E690;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[137] = 0x00D3E698;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[138] = 0x00D3E6A0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[139] = 0x00D3E8A8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[140] = 0x00D424B8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[141] = 0x00D42468;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[142] = 0x00D424C8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[143] = 0x00D480E0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[144] = 0x00D3E8E0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[145] = 0x00D3E8E8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[146] = 0x00D3E8F0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[147] = 0x00D424F8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[148] = 0x00D43620;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[149] = 0x00D3E900;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[150] = 0x00D3E908;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[151] = 0x00D3E910;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[152] = 0x00D42558;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[153] = (int)sub_7EC3DC; // 0x00D45A30;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[154] = 0x00D42568;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[155] = 0x00D48108; // OMO
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[156] = 0x00D3E920;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[157] = 0x00D42548;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[158] = (int)sub_82E504; //0x00D48138;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[159] = 0x00D425B8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[160] = 0x00D425C0;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[161] = 0x00D425C8;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[162] = 0x00D43628;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[163] = 0x00D45A28;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[164] = 0x00D45A20;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[165] = 0x00D45AA0; // pointer to 7ED744, where it will read 158th's projectile based on the 0xE0 -> 0xE8 floats in projectile properties (if > 0) 
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[166] = 0x00D48100;
	montero_G_Self_shoot_melee_assist_spawn_script_pointers[167] = 0x00D43630;

	*v1163 = (unsigned int)montero_G_Self_shoot_melee_assist_spawn_script_pointers;
	*v2 = (_DWORD)v1163;

	// set return
	temp_registers[3] = result;
}

__int64 sub_85E534(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	// set animation (nth index of the animation in the second folder in OMO PAC)
	// arg1 = starting animation
	// arg2 = the looping animation (shoot)
	// arg3 = ending animation
	int anim_start_index = 1LL;
	int anim_loop_index = 2LL;
	int anim_end_index = 3LL;

	float float1 = 30; // starting anim frame to start shoot
	float float2 = 1; // starting anim multiplier
	float float3 = 13; // ending anim frame?
	float float4 = 1; // ending anime frame multiplier?

	// We need to use this method to properly pass the float into the function, GameCall will incorrectly puts the float at flipped f30 and f29 onwards
	int opd[2] = { 0x9F2008, 0xd8fe60 };

	return ((int(*)(unsigned int *, int, int, int, int, float, int, int, int, float, float, float, int))&opd)(
		(unsigned int *)a2,
		a3,
		anim_start_index,
		anim_loop_index,
		anim_end_index,
		float1,
		*(_DWORD *)(*(unsigned int *)(a1 + 164) + 0xC8LL),
		a4,
		0,
		float2,
		float3,
		float4,
		-1);
}

__int64 sub_85E4F8(_DWORD *a1)
{
	__int64 result; // r3

	//0xcc7c40, we can use 0xcfb520 too, strike noir's CSb
	montero_G_Self_gerobi_shoot_spawn_script_pointers[0] = 0x00D4A170;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[1] = 0x00D4A168;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[2] = 0x00D3B608;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[3] = 0x00D3E608;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[4] = 0x00D42328;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[5] = 0x00D424D0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[6] = 0x00D3E610;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[7] = 0x00D3E618;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[8] = 0x00D422B8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[9] = 0x00D422C0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[10] = 0x00D42330;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[11] = 0x00D425F8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[12] = 0x00D422C8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[13] = 0x00D422D0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[14] = 0x00D425D0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[15] = 0x00D3E620;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[16] = 0x00D422F8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[17] = 0x00D42238;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[18] = 0x00D3E660;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[19] = 0x00D3E5D8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[20] = 0x00D42258;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[21] = 0x00D3E628;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[22] = 0x00D422F0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[23] = 0x00D3E5E0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[24] = 0x00D3E5E8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[25] = 0x00D39E10;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[26] = 0x00D39E18;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[27] = 0x00D3E630;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[28] = 0x00D42450;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[29] = 0x00D3E490;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[30] = 0x00D3E498;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[31] = 0x00D3E8B0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[32] = 0x00D3E4A8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[33] = 0x00D3E4B0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[34] = 0x00D3E4B8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[35] = 0x00D3E648;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[36] = 0x00D3E720;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[37] = 0x00D4A160;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[38] = 0x00D3E600;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[39] = 0x00D420F0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[40] = 0x00D42228;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[41] = 0x00D420D0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[42] = 0x00D42270;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[43] = 0x00D424F0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[44] = 0x00D42090;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[45] = 0x00D3E4C0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[46] = 0x00D42278;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[47] = 0x00D420C8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[48] = 0x00D424C0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[49] = 0x00D42260;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[50] = 0x00D42308;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[51] = 0x00D42248;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[52] = 0x00D42250;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[53] = 0x00D422E0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[54] = 0x00D422E8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[55] = 0x00D3E4C8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[56] = 0x00D3E4D0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[57] = 0x00D42110;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[58] = (int)montero_G_Self_assist_spawn_model_Hash; // 0x00D4A158;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[59] = 0x00D3E4D8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[60] = 0x00D3E4E0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[61] = 0x00D3E898;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[62] = 0x00D3E4E8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[63] = 0x00D3E4F0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[64] = 0x00D3E4F8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[65] = 0x00D45A88;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[66] = 0x00D42500;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[67] = 0x00D42208;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[68] = 0x00D42200;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[69] = 0x00D3E500;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[70] = 0x00D3E508;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[71] = 0x00D4A150;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[72] = 0x00D3E518;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[73] = 0x00D3E520;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[74] = 0x00D3E528;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[75] = 0x00D3E530;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[76] = 0x00D3E538;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[77] = 0x00D3E540;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[78] = 0x00D43618;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[79] = 0x00D3E548;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[80] = 0x00D3E550;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[81] = 0x00D3E8C0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[82] = 0x00D3E560;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[83] = 0x00D3E8C8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[84] = 0x00D3E570;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[85] = 0x00D3E578;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[86] = 0x00D3E580;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[87] = 0x00D3E588;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[88] = 0x00D3E590;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[89] = 0x00D3E598;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[90] = 0x00D3E5A0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[91] = 0x00D3E8D0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[92] = 0x00D3E5A8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[93] = 0x00D42540;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[94] = 0x00D3E5B8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[95] = 0x00D3E5C0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[96] = 0x00D3E5C8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[97] = 0x00D3E5D0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[98] = 0x00D42210;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[99] = 0x00D3E5F0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[100] = 0x00D3E5F8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[101] = 0x00D42240;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[102] = 0x00D421F0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[103] = 0x00D42498;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[104] = 0x00D42230;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[105] = 0x00D423B8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[106] = 0x00D42478;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[107] = 0x00D425E8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[108] = 0x00D3E640;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[109] = 0x00D42320;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[110] = 0x00D42518;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[111] = 0x00D42358;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[112] = 0x00D42360;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[113] = 0x00D42448;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[114] = 0x00D42510;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[115] = 0x00D42378;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[116] = 0x00D42380;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[117] = 0x00D42398;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[118] = 0x00D42460;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[119] = 0x00D42388;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[120] = 0x00D42390;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[121] = 0x00D422A0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[122] = 0x00D42268;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[123] = 0x00D42428;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[124] = 0x00D42338; // 0x00D42410;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[125] = 0x00D42280;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[126] = 0x00D42408;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[127] = 0x00D3E668;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[128] = 0x00D3E650;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[129] = 0x00D3E658;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[130] = 0x00D42470;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[131] = 0x00D3E8B8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[132] = 0x00D3E670;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[133] = 0x00D3E678;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[134] = 0x00D3E680;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[135] = 0x00D3E688;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[136] = 0x00D3E690;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[137] = 0x00D3E698;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[138] = 0x00D3E6A0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[139] = 0x00D3E8A8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[140] = 0x00D424B8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[141] = 0x00D42468;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[142] = 0x00D424C8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[143] = 0x00D4A140;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[144] = 0x00D3E8E0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[145] = 0x00D3E8E8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[146] = 0x00D3E8F0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[147] = 0x00D424F8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[148] = 0x00D43620;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[149] = 0x00D3E900;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[150] = 0x00D3E908;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[151] = 0x00D3E910;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[152] = 0x00D42558;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[153] = 0x00D45A30;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[154] = 0x00D42568;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[155] = 0x00D3E918;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[156] = 0x00D3E920;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[157] = (int)sub_85E534; // 0x00D4A178; // The script func used for assigning the animation
	montero_G_Self_gerobi_shoot_spawn_script_pointers[158] = 0x00D42550;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[159] = 0x00D425B8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[160] = 0x00D425C0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[161] = 0x00D425C8;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[162] = 0x00D4A148;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[163] = 0x00D45A28;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[164] = 0x00D45A20;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[165] = 0x00D45AA0;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[166] = 0x00D45A08;
	montero_G_Self_gerobi_shoot_spawn_script_pointers[167] = 0x00D43630;

	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 14295);
	result = (unsigned int)montero_G_Self_gerobi_shoot_spawn_script_pointers;
	*a1 = (unsigned int)montero_G_Self_gerobi_shoot_spawn_script_pointers; //0xcc7c40; 
	return result;
}

void montero_G_Self_gerobi_shoot_spawn() // 0x7D0234, 00 Raiser N AC Seravee Gerobi
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1475[4];
	int v649;
	int result;

	v1475[0] = -1;
	v1475[1] = 0;
	v649 = GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v1475);
	result = sub_85E4F8((_DWORD *)v649);
	*v2 = v649;

	// set return
	temp_registers[3] = result;
}