#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../stdafx.h"

int model_hash_pointers;
int gaga_spawn_external_script_pointer[500];
int gaga_spawn_internal_gaga_script_pointers[500];
int gaga_script_pointers[500];

void reborns_2ABC_supp();
void reborns_2ABC_Script();
void reborns_Gaga_Assist_supp();
void delay(int delay);
void assist_shoot(int projectile_hash);

int poooo;

void reborns_2ABC_model_hash()
{
	int hash = 0x864E5D13;
}

void reborns_2ABC_initial_assist_OMO_index()
{
	int index = 1; // make r3 store this value.
}

void reborns_2ABC()
{
	temp_registers[4] = 0x80;
	temp_registers[3] = 0x4780;
	retrieve_registers();
	GameCall<int>(0x009ee338, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);
	save_registers();
	temp_registers[28] = temp_registers[3];
	temp_registers[4] = 0xA0001;
	reborns_2ABC_supp();
	
	if (poooo == 0)
	{
		gaga_spawn_external_script_pointer[0] = 0x00D48160;
		gaga_spawn_external_script_pointer[1] = 0x00D48158;
		gaga_spawn_external_script_pointer[2] = 0x00D3B608;
		gaga_spawn_external_script_pointer[3] = 0x00D3E608;
		gaga_spawn_external_script_pointer[4] = 0x00D42328;
		gaga_spawn_external_script_pointer[5] = 0x00D424D0;
		gaga_spawn_external_script_pointer[6] = 0x00D3E610;
		gaga_spawn_external_script_pointer[7] = 0x00D3E618;
		gaga_spawn_external_script_pointer[8] = 0x00D422B8;
		gaga_spawn_external_script_pointer[9] = 0x00D422C0;
		gaga_spawn_external_script_pointer[10] = 0x00D42330;
		gaga_spawn_external_script_pointer[11] = 0x00D425F8;
		gaga_spawn_external_script_pointer[12] = 0x00D422C8;
		gaga_spawn_external_script_pointer[13] = 0x00D422D0;
		gaga_spawn_external_script_pointer[14] = 0x00D425D0;
		gaga_spawn_external_script_pointer[15] = 0x00D3E620;
		gaga_spawn_external_script_pointer[16] = 0x00D422F8;
		gaga_spawn_external_script_pointer[17] = 0x00D42238;
		gaga_spawn_external_script_pointer[18] = 0x00D3E660;
		gaga_spawn_external_script_pointer[19] = 0x00D3E5D8;
		gaga_spawn_external_script_pointer[20] = 0x00D42258;
		gaga_spawn_external_script_pointer[21] = 0x00D3E628;
		gaga_spawn_external_script_pointer[22] = 0x00D422F0;
		gaga_spawn_external_script_pointer[23] = 0x00D3E5E0;
		gaga_spawn_external_script_pointer[24] = 0x00D3E5E8;
		gaga_spawn_external_script_pointer[25] = 0x00D39E10;
		gaga_spawn_external_script_pointer[26] = 0x00D39E18;
		gaga_spawn_external_script_pointer[27] = 0x00D3E630;
		gaga_spawn_external_script_pointer[28] = 0x00D42450;
		gaga_spawn_external_script_pointer[29] = 0x00D3E490;
		gaga_spawn_external_script_pointer[30] = 0x00D3E498;
		gaga_spawn_external_script_pointer[31] = 0x00D3E8B0;
		gaga_spawn_external_script_pointer[32] = 0x00D3E4A8;
		gaga_spawn_external_script_pointer[33] = 0x00D3E4B0;
		gaga_spawn_external_script_pointer[34] = 0x00D3E4B8;
		gaga_spawn_external_script_pointer[35] = 0x00D3E648;
		gaga_spawn_external_script_pointer[36] = 0x00D3E720;
		gaga_spawn_external_script_pointer[37] = 0x00D425F0;
		gaga_spawn_external_script_pointer[38] = 0x00D3E600;
		gaga_spawn_external_script_pointer[39] = 0x00D420F0;
		gaga_spawn_external_script_pointer[40] = 0x00D42228;
		gaga_spawn_external_script_pointer[41] = 0x00D420D0;
		gaga_spawn_external_script_pointer[42] = 0x00D42270;
		gaga_spawn_external_script_pointer[43] = 0x00D424F0;
		gaga_spawn_external_script_pointer[44] = 0x00D42090;
		gaga_spawn_external_script_pointer[45] = 0x00D3E4C0;
		gaga_spawn_external_script_pointer[46] = 0x00D42278;
		gaga_spawn_external_script_pointer[47] = 0x00D420C8;
		gaga_spawn_external_script_pointer[48] = 0x00D424C0;
		gaga_spawn_external_script_pointer[49] = 0x00D42260;
		gaga_spawn_external_script_pointer[50] = 0x00D42308;
		gaga_spawn_external_script_pointer[51] = 0x00D42248;
		gaga_spawn_external_script_pointer[52] = 0x00D42250;
		gaga_spawn_external_script_pointer[53] = 0x00D422E0;
		gaga_spawn_external_script_pointer[54] = 0x00D422E8;
		gaga_spawn_external_script_pointer[55] = 0x00D3E4C8;
		gaga_spawn_external_script_pointer[56] = 0x00D3E4D0;
		gaga_spawn_external_script_pointer[57] = 0x00D42110;
		gaga_spawn_external_script_pointer[58] = model_hash_pointers; //0x00D421D0;
		gaga_spawn_external_script_pointer[59] = 0x00D3E4D8;
		gaga_spawn_external_script_pointer[60] = 0x00D3E4E0;
		gaga_spawn_external_script_pointer[61] = 0x00D3E898;
		gaga_spawn_external_script_pointer[62] = 0x00D3E4E8;
		gaga_spawn_external_script_pointer[63] = 0x00D3E4F0;
		gaga_spawn_external_script_pointer[64] = 0x00D3E4F8;
		gaga_spawn_external_script_pointer[65] = 0x00D48120;
		gaga_spawn_external_script_pointer[66] = 0x00D42500;
		gaga_spawn_external_script_pointer[67] = 0x00D42208;
		gaga_spawn_external_script_pointer[68] = 0x00D42200;
		gaga_spawn_external_script_pointer[69] = 0x00D3E500;
		gaga_spawn_external_script_pointer[70] = 0x00D3E508;
		gaga_spawn_external_script_pointer[71] = 0x00D480F8;
		gaga_spawn_external_script_pointer[72] = 0x00D3E518;
		gaga_spawn_external_script_pointer[73] = 0x00D3E520;
		gaga_spawn_external_script_pointer[74] = 0x00D3E528;
		gaga_spawn_external_script_pointer[75] = 0x00D3E530;
		gaga_spawn_external_script_pointer[76] = 0x00D3E538;
		gaga_spawn_external_script_pointer[77] = 0x00D3E540;
		gaga_spawn_external_script_pointer[78] = 0x00D43618;
		gaga_spawn_external_script_pointer[79] = 0x00D3E548;
		gaga_spawn_external_script_pointer[80] = 0x00D3E550;
		gaga_spawn_external_script_pointer[81] = 0x00D3E8C0;
		gaga_spawn_external_script_pointer[82] = 0x00D3E560;
		gaga_spawn_external_script_pointer[83] = 0x00D3E8C8;
		gaga_spawn_external_script_pointer[84] = 0x00D3E570;
		gaga_spawn_external_script_pointer[85] = 0x00D3E578;
		gaga_spawn_external_script_pointer[86] = 0x00D3E580;
		gaga_spawn_external_script_pointer[87] = 0x00D3E588;
		gaga_spawn_external_script_pointer[88] = 0x00D3E590;
		gaga_spawn_external_script_pointer[89] = 0x00D3E598;
		gaga_spawn_external_script_pointer[90] = 0x00D3E5A0;
		gaga_spawn_external_script_pointer[91] = 0x00D3E8D0;
		gaga_spawn_external_script_pointer[92] = 0x00D3E5A8;
		gaga_spawn_external_script_pointer[93] = 0x00D42540;
		gaga_spawn_external_script_pointer[94] = 0x00D3E5B8;
		gaga_spawn_external_script_pointer[95] = 0x00D3E5C0;
		gaga_spawn_external_script_pointer[96] = 0x00D3E5C8;
		gaga_spawn_external_script_pointer[97] = 0x00D3E5D0;
		gaga_spawn_external_script_pointer[98] = 0x00D42210;
		gaga_spawn_external_script_pointer[99] = 0x00D3E5F0;
		gaga_spawn_external_script_pointer[100] = 0x00D3E5F8;
		gaga_spawn_external_script_pointer[101] = 0x00D42240;
		gaga_spawn_external_script_pointer[102] = 0x00D421F0;
		gaga_spawn_external_script_pointer[103] = 0x00D42498;
		gaga_spawn_external_script_pointer[104] = 0x00D42230;
		gaga_spawn_external_script_pointer[105] = 0x00D423B8;
		gaga_spawn_external_script_pointer[106] = 0x00D42478;
		gaga_spawn_external_script_pointer[107] = 0x00D425E8;
		gaga_spawn_external_script_pointer[108] = 0x00D3E640;
		gaga_spawn_external_script_pointer[109] = 0x00D42320;
		gaga_spawn_external_script_pointer[110] = 0x00D42518;
		gaga_spawn_external_script_pointer[111] = 0x00D42358;
		gaga_spawn_external_script_pointer[112] = 0x00D42360;
		gaga_spawn_external_script_pointer[113] = 0x00D42448;
		gaga_spawn_external_script_pointer[114] = 0x00D42510;
		gaga_spawn_external_script_pointer[115] = 0x00D42378;
		gaga_spawn_external_script_pointer[116] = 0x00D42380;
		gaga_spawn_external_script_pointer[117] = 0x00D42398;
		gaga_spawn_external_script_pointer[118] = 0x00D42460;
		gaga_spawn_external_script_pointer[119] = 0x00D42388;
		gaga_spawn_external_script_pointer[120] = 0x00D42390;
		gaga_spawn_external_script_pointer[121] = 0x00D422A0;
		gaga_spawn_external_script_pointer[122] = 0x00D42268;
		gaga_spawn_external_script_pointer[123] = 0x00D42428;
		gaga_spawn_external_script_pointer[124] = 0x00D42338; // 0x00D42410;
		gaga_spawn_external_script_pointer[125] = 0x00D42280;
		gaga_spawn_external_script_pointer[126] = 0x00D42408;
		gaga_spawn_external_script_pointer[127] = 0x00D3E668;
		gaga_spawn_external_script_pointer[128] = 0x00D3E650;
		gaga_spawn_external_script_pointer[129] = 0x00D3E658;
		gaga_spawn_external_script_pointer[130] = 0x00D42470;
		gaga_spawn_external_script_pointer[131] = 0x00D480D8;
		gaga_spawn_external_script_pointer[132] = 0x00D3E670;
		gaga_spawn_external_script_pointer[133] = 0x00D3E678;
		gaga_spawn_external_script_pointer[134] = 0x00D3E680;
		gaga_spawn_external_script_pointer[135] = 0x00D3E688;
		gaga_spawn_external_script_pointer[136] = 0x00D3E690;
		gaga_spawn_external_script_pointer[137] = 0x00D3E698;
		gaga_spawn_external_script_pointer[138] = 0x00D3E6A0;
		gaga_spawn_external_script_pointer[139] = 0x00D3E8A8;
		gaga_spawn_external_script_pointer[140] = 0x00D424B8;
		gaga_spawn_external_script_pointer[141] = 0x00D42468;
		gaga_spawn_external_script_pointer[142] = 0x00D424C8;
		gaga_spawn_external_script_pointer[143] = 0x00D480E0;
		gaga_spawn_external_script_pointer[144] = 0x00D3E8E0;
		gaga_spawn_external_script_pointer[145] = 0x00D3E8E8;
		gaga_spawn_external_script_pointer[146] = 0x00D3E8F0;
		gaga_spawn_external_script_pointer[147] = 0x00D424F8;
		gaga_spawn_external_script_pointer[148] = 0x00D43620;
		gaga_spawn_external_script_pointer[149] = 0x00D3E900;
		gaga_spawn_external_script_pointer[150] = 0x00D3E908;
		gaga_spawn_external_script_pointer[151] = 0x00D3E910;
		gaga_spawn_external_script_pointer[152] = 0x00D42558;
		gaga_spawn_external_script_pointer[153] = 0x00D45A30;
		gaga_spawn_external_script_pointer[154] = 0x00D42568;
		gaga_spawn_external_script_pointer[155] = (int)reborns_2ABC_initial_assist_OMO_index;//0x00d3e918; // 0xD48110, probably the nth OMO to be used. if it does not have any animation, put -1.
		gaga_spawn_external_script_pointer[156] = 0x00D3E920;
		gaga_spawn_external_script_pointer[157] = 0x00D42548;
		gaga_spawn_external_script_pointer[158] = (int)reborns_2ABC_Script; //0x00D48140;
		gaga_spawn_external_script_pointer[159] = 0x00d425b8; 
		gaga_spawn_external_script_pointer[160] = 0x00D425C0;
		gaga_spawn_external_script_pointer[161] = 0x00D425C8;
		gaga_spawn_external_script_pointer[162] = 0x00D43628;
		gaga_spawn_external_script_pointer[163] = 0x00D45A28;
		gaga_spawn_external_script_pointer[164] = 0x00D45A20;
		gaga_spawn_external_script_pointer[165] = 0x00D45AA0;
		gaga_spawn_external_script_pointer[166] = 0x00D48100;
		gaga_spawn_external_script_pointer[167] = 0x00D43630;
	}

	poooo = poooo + 1;

	int asd = 0xDEADBEAF;
	*(int*)temp_registers[28] = (int)gaga_spawn_external_script_pointer;
	*(int*)temp_registers[31] = temp_registers[28];

	retrieve_registers();
}

void reborns_2ABC_supp()
{
	model_hash_pointers = (int)reborns_2ABC_model_hash;

	gaga_spawn_internal_gaga_script_pointers[0] = 0x00D48130;
	gaga_spawn_internal_gaga_script_pointers[1] = 0x00D48128;
	gaga_spawn_internal_gaga_script_pointers[2] = 0x00D3B608;
	gaga_spawn_internal_gaga_script_pointers[3] = 0x00D3E608;
	gaga_spawn_internal_gaga_script_pointers[4] = 0x00D42328;
	gaga_spawn_internal_gaga_script_pointers[5] = 0x00D424D0;
	gaga_spawn_internal_gaga_script_pointers[6] = 0x00D3E610;
	gaga_spawn_internal_gaga_script_pointers[7] = 0x00D3E618;
	gaga_spawn_internal_gaga_script_pointers[8] = 0x00D422B8;
	gaga_spawn_internal_gaga_script_pointers[9] = 0x00D422C0;
	gaga_spawn_internal_gaga_script_pointers[10] = 0x00D42330;
	gaga_spawn_internal_gaga_script_pointers[11] = 0x00D425F8;
	gaga_spawn_internal_gaga_script_pointers[12] = 0x00D422C8;
	gaga_spawn_internal_gaga_script_pointers[13] = 0x00D422D0;
	gaga_spawn_internal_gaga_script_pointers[14] = 0x00D425D0;
	gaga_spawn_internal_gaga_script_pointers[15] = 0x00D3E620;
	gaga_spawn_internal_gaga_script_pointers[16] = 0x00D422F8;
	gaga_spawn_internal_gaga_script_pointers[17] = 0x00D42238;
	gaga_spawn_internal_gaga_script_pointers[18] = 0x00D3E660;
	gaga_spawn_internal_gaga_script_pointers[19] = 0x00D3E5D8;
	gaga_spawn_internal_gaga_script_pointers[20] = 0x00D42258;
	gaga_spawn_internal_gaga_script_pointers[21] = 0x00D3E628;
	gaga_spawn_internal_gaga_script_pointers[22] = 0x00D422F0;
	gaga_spawn_internal_gaga_script_pointers[23] = 0x00D3E5E0;
	gaga_spawn_internal_gaga_script_pointers[24] = 0x00D3E5E8;
	gaga_spawn_internal_gaga_script_pointers[25] = 0x00D39E10;
	gaga_spawn_internal_gaga_script_pointers[26] = 0x00D39E18;
	gaga_spawn_internal_gaga_script_pointers[27] = 0x00D3E630;
	gaga_spawn_internal_gaga_script_pointers[28] = 0x00D42450;
	gaga_spawn_internal_gaga_script_pointers[29] = 0x00D3E490;
	gaga_spawn_internal_gaga_script_pointers[30] = 0x00D3E498;
	gaga_spawn_internal_gaga_script_pointers[31] = 0x00D3E8B0;
	gaga_spawn_internal_gaga_script_pointers[32] = 0x00D3E4A8;
	gaga_spawn_internal_gaga_script_pointers[33] = 0x00D3E4B0;
	gaga_spawn_internal_gaga_script_pointers[34] = 0x00D3E4B8;
	gaga_spawn_internal_gaga_script_pointers[35] = 0x00D3E648;
	gaga_spawn_internal_gaga_script_pointers[36] = 0x00D3E720;
	gaga_spawn_internal_gaga_script_pointers[37] = 0x00D425F0;
	gaga_spawn_internal_gaga_script_pointers[38] = 0x00D3E600;
	gaga_spawn_internal_gaga_script_pointers[39] = 0x00D420F0;
	gaga_spawn_internal_gaga_script_pointers[40] = 0x00D42228;
	gaga_spawn_internal_gaga_script_pointers[41] = 0x00D420D0;
	gaga_spawn_internal_gaga_script_pointers[42] = 0x00D42270;
	gaga_spawn_internal_gaga_script_pointers[43] = 0x00D424F0;
	gaga_spawn_internal_gaga_script_pointers[44] = 0x00D42090;
	gaga_spawn_internal_gaga_script_pointers[45] = 0x00D3E4C0;
	gaga_spawn_internal_gaga_script_pointers[46] = 0x00D42278;
	gaga_spawn_internal_gaga_script_pointers[47] = 0x00D420C8;
	gaga_spawn_internal_gaga_script_pointers[48] = 0x00D424C0;
	gaga_spawn_internal_gaga_script_pointers[49] = 0x00D42260;
	gaga_spawn_internal_gaga_script_pointers[50] = 0x00D42308;
	gaga_spawn_internal_gaga_script_pointers[51] = 0x00D42248;
	gaga_spawn_internal_gaga_script_pointers[52] = 0x00D42250;
	gaga_spawn_internal_gaga_script_pointers[53] = 0x00D422E0;
	gaga_spawn_internal_gaga_script_pointers[54] = 0x00D422E8;
	gaga_spawn_internal_gaga_script_pointers[55] = 0x00D3E4C8;
	gaga_spawn_internal_gaga_script_pointers[56] = 0x00D3E4D0;
	gaga_spawn_internal_gaga_script_pointers[57] = 0x00D42110;
	gaga_spawn_internal_gaga_script_pointers[58] = 0x00D421D0;
	gaga_spawn_internal_gaga_script_pointers[59] = 0x00D3E4D8;
	gaga_spawn_internal_gaga_script_pointers[60] = 0x00D3E4E0;
	gaga_spawn_internal_gaga_script_pointers[61] = 0x00D3E898;
	gaga_spawn_internal_gaga_script_pointers[62] = 0x00D3E4E8;
	gaga_spawn_internal_gaga_script_pointers[63] = 0x00D3E4F0;
	gaga_spawn_internal_gaga_script_pointers[64] = 0x00D3E4F8;
	gaga_spawn_internal_gaga_script_pointers[65] = 0x00D48120;
	gaga_spawn_internal_gaga_script_pointers[66] = 0x00D42500;
	gaga_spawn_internal_gaga_script_pointers[67] = 0x00D42208;
	gaga_spawn_internal_gaga_script_pointers[68] = 0x00D42200;
	gaga_spawn_internal_gaga_script_pointers[69] = 0x00D3E500;
	gaga_spawn_internal_gaga_script_pointers[70] = 0x00D3E508;
	gaga_spawn_internal_gaga_script_pointers[71] = 0x00D480F8;
	gaga_spawn_internal_gaga_script_pointers[72] = 0x00D3E518;
	gaga_spawn_internal_gaga_script_pointers[73] = 0x00D3E520;
	gaga_spawn_internal_gaga_script_pointers[74] = 0x00D3E528;
	gaga_spawn_internal_gaga_script_pointers[75] = 0x00D3E530;
	gaga_spawn_internal_gaga_script_pointers[76] = 0x00D3E538;
	gaga_spawn_internal_gaga_script_pointers[77] = 0x00D3E540;
	gaga_spawn_internal_gaga_script_pointers[78] = 0x00D43618;
	gaga_spawn_internal_gaga_script_pointers[79] = 0x00D3E548;
	gaga_spawn_internal_gaga_script_pointers[80] = 0x00D3E550;
	gaga_spawn_internal_gaga_script_pointers[81] = 0x00D3E8C0;
	gaga_spawn_internal_gaga_script_pointers[82] = 0x00D3E560;
	gaga_spawn_internal_gaga_script_pointers[83] = 0x00D3E8C8;
	gaga_spawn_internal_gaga_script_pointers[84] = 0x00D3E570;
	gaga_spawn_internal_gaga_script_pointers[85] = 0x00D3E578;
	gaga_spawn_internal_gaga_script_pointers[86] = 0x00D3E580;
	gaga_spawn_internal_gaga_script_pointers[87] = 0x00D3E588;
	gaga_spawn_internal_gaga_script_pointers[88] = 0x00D3E590;
	gaga_spawn_internal_gaga_script_pointers[89] = 0x00D3E598;
	gaga_spawn_internal_gaga_script_pointers[90] = 0x00D3E5A0;
	gaga_spawn_internal_gaga_script_pointers[91] = 0x00D3E8D0;
	gaga_spawn_internal_gaga_script_pointers[92] = 0x00D3E5A8;
	gaga_spawn_internal_gaga_script_pointers[93] = 0x00D42540;
	gaga_spawn_internal_gaga_script_pointers[94] = 0x00D3E5B8;
	gaga_spawn_internal_gaga_script_pointers[95] = 0x00D3E5C0;
	gaga_spawn_internal_gaga_script_pointers[96] = 0x00D3E5C8;
	gaga_spawn_internal_gaga_script_pointers[97] = 0x00D3E5D0;
	gaga_spawn_internal_gaga_script_pointers[98] = 0x00D42210;
	gaga_spawn_internal_gaga_script_pointers[99] = 0x00D3E5F0;
	gaga_spawn_internal_gaga_script_pointers[100] = 0x00D3E5F8;
	gaga_spawn_internal_gaga_script_pointers[101] = 0x00D42240;
	gaga_spawn_internal_gaga_script_pointers[102] = 0x00D421F0;
	gaga_spawn_internal_gaga_script_pointers[103] = 0x00D42498;
	gaga_spawn_internal_gaga_script_pointers[104] = 0x00D42230;
	gaga_spawn_internal_gaga_script_pointers[105] = 0x00D423B8;
	gaga_spawn_internal_gaga_script_pointers[106] = 0x00D42478;
	gaga_spawn_internal_gaga_script_pointers[107] = 0x00D425E8;
	gaga_spawn_internal_gaga_script_pointers[108] = 0x00D3E640;
	gaga_spawn_internal_gaga_script_pointers[109] = 0x00D42320;
	gaga_spawn_internal_gaga_script_pointers[110] = 0x00D42518;
	gaga_spawn_internal_gaga_script_pointers[111] = 0x00D42358;
	gaga_spawn_internal_gaga_script_pointers[112] = 0x00D42360;
	gaga_spawn_internal_gaga_script_pointers[113] = 0x00D42448;
	gaga_spawn_internal_gaga_script_pointers[114] = 0x00D42510;
	gaga_spawn_internal_gaga_script_pointers[115] = 0x00D42378;
	gaga_spawn_internal_gaga_script_pointers[116] = 0x00D42380;
	gaga_spawn_internal_gaga_script_pointers[117] = 0x00D42398;
	gaga_spawn_internal_gaga_script_pointers[118] = 0x00D42460;
	gaga_spawn_internal_gaga_script_pointers[119] = 0x00D42388;
	gaga_spawn_internal_gaga_script_pointers[120] = 0x00D42390;
	gaga_spawn_internal_gaga_script_pointers[121] = 0x00D422A0;
	gaga_spawn_internal_gaga_script_pointers[122] = 0x00D42268;
	gaga_spawn_internal_gaga_script_pointers[123] = 0x00D42428;
	gaga_spawn_internal_gaga_script_pointers[124] = 0x00D42338; // 0x00D42410;
	gaga_spawn_internal_gaga_script_pointers[125] = 0x00D42280;
	gaga_spawn_internal_gaga_script_pointers[126] = 0x00D42408;
	gaga_spawn_internal_gaga_script_pointers[127] = 0x00D3E668;
	gaga_spawn_internal_gaga_script_pointers[128] = 0x00D3E650;
	gaga_spawn_internal_gaga_script_pointers[129] = 0x00D3E658;
	gaga_spawn_internal_gaga_script_pointers[130] = 0x00D42470;
	gaga_spawn_internal_gaga_script_pointers[131] = 0x00D480D8;
	gaga_spawn_internal_gaga_script_pointers[132] = 0x00D3E670;
	gaga_spawn_internal_gaga_script_pointers[133] = 0x00D3E678;
	gaga_spawn_internal_gaga_script_pointers[134] = 0x00D3E680;
	gaga_spawn_internal_gaga_script_pointers[135] = 0x00D3E688;
	gaga_spawn_internal_gaga_script_pointers[136] = 0x00D3E690;
	gaga_spawn_internal_gaga_script_pointers[137] = 0x00D3E698;
	gaga_spawn_internal_gaga_script_pointers[138] = 0x00D3E6A0;
	gaga_spawn_internal_gaga_script_pointers[139] = 0x00D3E8A8;
	gaga_spawn_internal_gaga_script_pointers[140] = 0x00D424B8;
	gaga_spawn_internal_gaga_script_pointers[141] = 0x00D42468;
	gaga_spawn_internal_gaga_script_pointers[142] = 0x00D424C8;
	gaga_spawn_internal_gaga_script_pointers[143] = 0x00D480E0;
	gaga_spawn_internal_gaga_script_pointers[144] = 0x00D3E8E0;
	gaga_spawn_internal_gaga_script_pointers[145] = 0x00D3E8E8;
	gaga_spawn_internal_gaga_script_pointers[146] = 0x00D3E8F0;
	gaga_spawn_internal_gaga_script_pointers[147] = 0x00D424F8;
	gaga_spawn_internal_gaga_script_pointers[148] = 0x00D43620;
	gaga_spawn_internal_gaga_script_pointers[149] = 0x00D3E900;
	gaga_spawn_internal_gaga_script_pointers[150] = 0x00D3E908;
	gaga_spawn_internal_gaga_script_pointers[151] = 0x00D3E910;
	gaga_spawn_internal_gaga_script_pointers[152] = 0x00D42558;
	gaga_spawn_internal_gaga_script_pointers[153] = 0x00D45A30;
	gaga_spawn_internal_gaga_script_pointers[154] = 0x00D42568;
	gaga_spawn_internal_gaga_script_pointers[155] = 0x00D3E918;
	gaga_spawn_internal_gaga_script_pointers[156] = 0x00D3E920;
	gaga_spawn_internal_gaga_script_pointers[157] = 0x00D42548;
	gaga_spawn_internal_gaga_script_pointers[158] = 0x00D42550;
	gaga_spawn_internal_gaga_script_pointers[159] = 0x00D425B8;
	gaga_spawn_internal_gaga_script_pointers[160] = 0x00D425C0;
	gaga_spawn_internal_gaga_script_pointers[161] = 0x00D425C8;
	gaga_spawn_internal_gaga_script_pointers[162] = 0x00D43628;
	gaga_spawn_internal_gaga_script_pointers[163] = 0x00D45A28;
	gaga_spawn_internal_gaga_script_pointers[164] = 0x00D45A20;
	gaga_spawn_internal_gaga_script_pointers[165] = 0x00D45AA0;
	gaga_spawn_internal_gaga_script_pointers[166] = 0x00D48100;
	gaga_spawn_internal_gaga_script_pointers[167] = 0x00D43630;

	int temp_r29 = temp_registers[29];
	temp_registers[29] = temp_registers[3];
	retrieve_registers();

	GameCall<int>(0x007ed70c, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();
	int pointer = (int)gaga_spawn_internal_gaga_script_pointers;
	*(int*)temp_registers[29] = pointer; // write the pointer to r29's address.
	temp_registers[3] = pointer;
	temp_registers[29] = temp_r29;
	retrieve_registers();
}

// this is the place where you assign which projectile to shoot.
// There's theoretically nothing stopping you from shooting 1000 projectiles at once.
// You can repeat this whole script, which is controlled by 0x7ED744. The maximum of repeating is 3.

void reborns_2ABC_Script()
{
	save_registers();
	temp_registers[21] = -1;
	temp_registers[24] = temp_registers[4];
	temp_registers[20] = 0;
	temp_registers[3] = 0x38;
	temp_registers[20] = temp_registers[5];

	retrieve_registers();
	
	// 0x1c240
	GameCall<int>(0x9ee118, 0xd8fe60)( 
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	// This will continue the animation from the initial animation
	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[27] = temp_registers[3];
	temp_registers[22] = temp_registers[3];
	temp_registers[5] = 2; // nth OMO to be used 
	temp_registers[23] = 0;
	temp_registers[4] = temp_registers[20];
	temp_registers[3] = temp_registers[22];
	temp_registers[19] = 1;

	retrieve_registers();

	// 0x9eeac8 will write a temp memory region that will point to 0x00C85538, in which the nth assist OMO to be used is written at the 0x1c of the temp memory region
	// It is then read by 0x6f54fc -> 0x6E8AF4
	// Each action will have their own temp memory.
	
	GameCall<int>(0x009eeac8, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);
	
	// For some reason first time calling 0x6f4d00 needs to be empty
	save_registers();
	temp_registers[2] = 0xd8fe60;
	*(int*)(temp_registers[27] + 0x2c) = temp_registers[23];
	*(int*)(temp_registers[27] + 0x2c) = temp_registers[19];
	temp_registers[3] = *(int*)(temp_registers[24] + 0);
	temp_registers[26] = temp_registers[24];
	temp_registers[4] = temp_registers[22];
	temp_registers[22] = -0xf1;
	temp_registers[9] = *(int*)(temp_registers[3] + 0x34);
	temp_registers[3] = temp_registers[26];
	temp_registers[6] = *(int*)(temp_registers[9] + 0);

	retrieve_registers();

	GameCall<int>(temp_registers[6], 0xd7ff30)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[25] = *(int*)(temp_registers[24] + 0);
	temp_registers[4] = temp_registers[1] + 0x78;
	temp_registers[3] = 0x20;
	temp_registers[27] = *(int*)(temp_registers[25] + 0x34);
	*(char*)(temp_registers[1] + 0x78) = (char)temp_registers[21];
	*(char*)(temp_registers[1] + 0x79) = (char)temp_registers[23];

	retrieve_registers();

	GameCall<int>(0x9ee118, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[29] = temp_registers[3];
	temp_registers[28] = temp_registers[3];
	temp_registers[3] = temp_registers[29];

	retrieve_registers();

	// 0x6d54a0
	GameCall<int>(0x9ee998, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);
	
	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[0] = 0xc86240;
	temp_registers[5] = 0xc853d0;
	temp_registers[12] = 0x41700000;
	temp_registers[25] = 0xc83818;
	*(int*)(temp_registers[29] + 0) = temp_registers[0];
	*(int*)(temp_registers[29] + 0x10) = temp_registers[20];
	*(int*)(temp_registers[28] + 0) = temp_registers[5];
	*(int*)(temp_registers[29] + 0x14) = temp_registers[22];
	*(int*)(temp_registers[28] + 0x1c) = temp_registers[12];
	*(int*)(temp_registers[28] + 0x18) = temp_registers[19];
	temp_registers[11] = *(int*)(temp_registers[27] + 0);
	temp_registers[4] = temp_registers[29];
	temp_registers[3] = temp_registers[26];

	int toc = *(int*)(temp_registers[27] + 0x4);

	retrieve_registers();

	GameCall<int>(temp_registers[11], toc)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();

	assist_shoot(0xa70ec448); // Reborns_Gaga_1

	save_registers();

	retrieve_registers();

	delay(12);

	save_registers();

	retrieve_registers();

	assist_shoot(0x3E0795F2); // Reborns_Gaga_2

	save_registers();

	retrieve_registers();

	delay(10); // 11

	save_registers();

	retrieve_registers();

	assist_shoot(0x4900A564); // Reborns_Gaga_3

	save_registers();

	retrieve_registers();

	delay(10); // 16

	save_registers();

	retrieve_registers();

	assist_shoot(0xD76430C7); // Reborns_Gaga_4

	save_registers();

	retrieve_registers();

	delay(10); // 21

	save_registers();

	retrieve_registers();

	assist_shoot(0xA0630051); // Reborns_Gaga_5

	save_registers();

	retrieve_registers();

	delay(10); // 26

	save_registers();

	retrieve_registers();

	assist_shoot(0x396A51EB); // Reborns_Gaga_6

	save_registers();

	retrieve_registers();

	delay(10); // 31

	save_registers();

	retrieve_registers();

	assist_shoot(0x4E6D617D); // Reborns_Gaga_7

	save_registers();

	retrieve_registers();

	delay(10); // 36

	save_registers();

	retrieve_registers();

	assist_shoot(0xDED27CEC); // Reborns_Gaga_8

	save_registers();

	retrieve_registers();

	delay(10); // 41

	save_registers();

	retrieve_registers();

	assist_shoot(0xA9D54C7A); // Reborns_Gaga_9

	save_registers();

	retrieve_registers();

	delay(10); // 46

	save_registers();

	retrieve_registers();

	assist_shoot(0x8c7b1847); // Reborns_Gaga_10

	save_registers();

	retrieve_registers();

	delay(10); // 51

	save_registers();

	retrieve_registers();

	assist_shoot(0xFB7C28D1); // Reborns_Gaga_11

	save_registers();

	retrieve_registers();

	/*
	delay(10); // 56

	save_registers();

	retrieve_registers();

	assist_shoot(0x6275796B); // Reborns_Gaga_12

	save_registers();

	retrieve_registers();


	/*
	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[9] = *(int*)(temp_registers[24] + 0);
	temp_registers[4] = temp_registers[1] + 0x70;
	temp_registers[3] = 0x1c;
	temp_registers[27] = *(int*)(temp_registers[9] + 0x34);
	*(char*)(temp_registers[1] + 0x70) = (char)temp_registers[21];
	*(char*)(temp_registers[1] + 0x71) = (char)temp_registers[23];

	retrieve_registers();

	GameCall<int>(0x9ee118, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[29] = temp_registers[3];
	temp_registers[28] = temp_registers[3];
	temp_registers[3] = temp_registers[29];

	retrieve_registers();

	GameCall<int>(0x9ee998, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[3] = 0xae5c8641; // projectile hash
	*(int*)(temp_registers[29] + 0) = temp_registers[25];
	*(int*)(temp_registers[29] + 0x10) = temp_registers[20];
	*(int*)(temp_registers[29] + 0x14) = temp_registers[22];
	*(int*)(temp_registers[28] + 0) = temp_registers[19];
	*(int*)(temp_registers[28] + 0x18) = temp_registers[3];
	temp_registers[5] = *(int*)(temp_registers[27] + 0);
	temp_registers[3] = temp_registers[26];
	temp_registers[4] = temp_registers[29];

	int toc3 = *(int*)(temp_registers[27] + 0x4);

	retrieve_registers();

	GameCall<int>(temp_registers[5], toc3)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();

	retrieve_registers();
	*/

	////////////////////////////////////////////
}


void reborns_Gaga_Assist()
{
	temp_registers[4] = 0x80;
	temp_registers[3] = 0x4780;
	retrieve_registers();
	GameCall<int>(0x009ee338, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);
	save_registers();
	temp_registers[29] = temp_registers[3];
	reborns_Gaga_Assist_supp();

	*(int*)temp_registers[31] = temp_registers[29];

	retrieve_registers();
}

void reborns_Gaga_Assist_supp()
{
	gaga_script_pointers[0] = 0x00D4F610;
	gaga_script_pointers[1] = 0x00D4F608;
	gaga_script_pointers[2] = 0x00D3B608;
	gaga_script_pointers[3] = 0x00D3E608;
	gaga_script_pointers[4] = 0x00D42328;
	gaga_script_pointers[5] = 0x00D424D0;
	gaga_script_pointers[6] = 0x00D3E610;
	gaga_script_pointers[7] = 0x00D3E618;
	gaga_script_pointers[8] = 0x00D422B8;
	gaga_script_pointers[9] = 0x00D422C0;
	gaga_script_pointers[10] = 0x00D42330;
	gaga_script_pointers[11] = 0x00D425F8;
	gaga_script_pointers[12] = 0x00D422C8;
	gaga_script_pointers[13] = 0x00D422D0;
	gaga_script_pointers[14] = 0x00D425D0;
	gaga_script_pointers[15] = 0x00D3E620;
	gaga_script_pointers[16] = 0x00D422F8;
	gaga_script_pointers[17] = 0x00D42238;
	gaga_script_pointers[18] = 0x00D3E660;
	gaga_script_pointers[19] = 0x00D3E5D8;
	gaga_script_pointers[20] = 0x00D42258;
	gaga_script_pointers[21] = 0x00D3E628;
	gaga_script_pointers[22] = 0x00D422F0;
	gaga_script_pointers[23] = 0x00D3E5E0;
	gaga_script_pointers[24] = 0x00D3E5E8;
	gaga_script_pointers[25] = 0x00D39E10;
	gaga_script_pointers[26] = 0x00D39E18;
	gaga_script_pointers[27] = 0x00D3E630;
	gaga_script_pointers[28] = 0x00D42450;
	gaga_script_pointers[29] = 0x00D3E490;
	gaga_script_pointers[30] = 0x00D3E498;
	gaga_script_pointers[31] = 0x00D3E8B0;
	gaga_script_pointers[32] = 0x00D4F5E0;
	gaga_script_pointers[33] = 0x00D3E4B0;
	gaga_script_pointers[34] = 0x00D3E4B8;
	gaga_script_pointers[35] = 0x00D3E648;
	gaga_script_pointers[36] = 0x00D3E720;
	gaga_script_pointers[37] = 0x00D4F600;
	gaga_script_pointers[38] = 0x00D3E600;
	gaga_script_pointers[39] = 0x00D420F0;
	gaga_script_pointers[40] = 0x00D42228;
	gaga_script_pointers[41] = 0x00D420D0;
	gaga_script_pointers[42] = 0x00D42270;
	gaga_script_pointers[43] = 0x00D424F0;
	gaga_script_pointers[44] = 0x00D42090;
	gaga_script_pointers[45] = 0x00D3E4C0;
	gaga_script_pointers[46] = 0x00D42278;
	gaga_script_pointers[47] = 0x00D420C8;
	gaga_script_pointers[48] = 0x00D424C0;
	gaga_script_pointers[49] = 0x00D42260;
	gaga_script_pointers[50] = 0x00D42308;
	gaga_script_pointers[51] = 0x00D42248;
	gaga_script_pointers[52] = 0x00D42250;
	gaga_script_pointers[53] = 0x00D422E0;
	gaga_script_pointers[54] = 0x00D422E8;
	gaga_script_pointers[55] = 0x00D3E4C8;
	gaga_script_pointers[56] = 0x00D3E4D0;
	gaga_script_pointers[57] = 0x00D42110;
	gaga_script_pointers[58] = 0x00D4F5F0;
	gaga_script_pointers[59] = 0x00D3E4D8;
	gaga_script_pointers[60] = 0x00D3E4E0;
	gaga_script_pointers[61] = 0x00D3E898;
	gaga_script_pointers[62] = 0x00D3E4E8;
	gaga_script_pointers[63] = 0x00D3E4F0;
	gaga_script_pointers[64] = 0x00D3E4F8;
	gaga_script_pointers[65] = 0x00D42538;
	gaga_script_pointers[66] = 0x00D42500;
	gaga_script_pointers[67] = 0x00D42208;
	gaga_script_pointers[68] = 0x00D42200;
	gaga_script_pointers[69] = 0x00D3E500;
	gaga_script_pointers[70] = 0x00D3E508;
	gaga_script_pointers[71] = 0x00D4F5E8;
	gaga_script_pointers[72] = 0x00D3E518;
	gaga_script_pointers[73] = 0x00D3E520;
	gaga_script_pointers[74] = 0x00D3E528;
	gaga_script_pointers[75] = 0x00D3E530;
	gaga_script_pointers[76] = 0x00D3E538;
	gaga_script_pointers[77] = 0x00D3E540;
	gaga_script_pointers[78] = 0x00D43618;
	gaga_script_pointers[79] = 0x00D3E548;
	gaga_script_pointers[80] = 0x00D3E550;
	gaga_script_pointers[81] = 0x00D3E8C0;
	gaga_script_pointers[82] = 0x00D3E560;
	gaga_script_pointers[83] = 0x00D3E8C8;
	gaga_script_pointers[84] = 0x00D3E570;
	gaga_script_pointers[85] = 0x00D3E578;
	gaga_script_pointers[86] = 0x00D3E580;
	gaga_script_pointers[87] = 0x00D3E588;
	gaga_script_pointers[88] = 0x00D4F5C8;
	gaga_script_pointers[89] = 0x00D4F5D0;
	gaga_script_pointers[90] = 0x00D3E5A0;
	gaga_script_pointers[91] = 0x00D3E8D0;
	gaga_script_pointers[92] = 0x00D3E5A8;
	gaga_script_pointers[93] = 0x00D42540;
	gaga_script_pointers[94] = 0x00D3E5B8;
	gaga_script_pointers[95] = 0x00D3E5C0;
	gaga_script_pointers[96] = 0x00D3E5C8;
	gaga_script_pointers[97] = 0x00D3E5D0;
	gaga_script_pointers[98] = 0x00D42210;
	gaga_script_pointers[99] = 0x00D3E5F0;
	gaga_script_pointers[100] = 0x00D3E5F8;
	gaga_script_pointers[101] = 0x00D42240;
	gaga_script_pointers[102] = 0x00D421F0;
	gaga_script_pointers[103] = 0x00D42498;
	gaga_script_pointers[104] = 0x00D42230;
	gaga_script_pointers[105] = 0x00D423B8;
	gaga_script_pointers[106] = 0x00D42478;
	gaga_script_pointers[107] = 0x00D425E8;
	gaga_script_pointers[108] = 0x00D3E640;
	gaga_script_pointers[109] = 0x00D42320;
	gaga_script_pointers[110] = 0x00D4F5F8;
	gaga_script_pointers[111] = 0x00D42358;
	gaga_script_pointers[112] = 0x00D42360;
	gaga_script_pointers[113] = 0x00D42448;
	gaga_script_pointers[114] = 0x00D42510;
	gaga_script_pointers[115] = 0x00D42378;
	gaga_script_pointers[116] = 0x00D42380;
	gaga_script_pointers[117] = 0x00D42398;
	gaga_script_pointers[118] = 0x00D42460;
	gaga_script_pointers[119] = 0x00D42388;
	gaga_script_pointers[120] = 0x00D42390;
	gaga_script_pointers[121] = 0x00D422A0;
	gaga_script_pointers[122] = 0x00D42268;
	gaga_script_pointers[123] = 0x00D42428;
	gaga_script_pointers[124] = 0x00D42338; // 0x00D42410;
	gaga_script_pointers[125] = 0x00D42280;
	gaga_script_pointers[126] = 0x00D42408;
	gaga_script_pointers[127] = 0x00D3E668;
	gaga_script_pointers[128] = 0x00D3E650;
	gaga_script_pointers[129] = 0x00D3E658;
	gaga_script_pointers[130] = 0x00D42470;
	gaga_script_pointers[131] = 0x00D3E8B8;
	gaga_script_pointers[132] = 0x00D3E670;
	gaga_script_pointers[133] = 0x00D3E678;
	gaga_script_pointers[134] = 0x00D3E680;
	gaga_script_pointers[135] = 0x00D3E688;
	gaga_script_pointers[136] = 0x00D3E690;
	gaga_script_pointers[137] = 0x00D3E698;
	gaga_script_pointers[138] = 0x00D3E6A0;
	gaga_script_pointers[139] = 0x00D3E8A8;
	gaga_script_pointers[140] = 0x00D424B8;
	gaga_script_pointers[141] = 0x00D42468;
	gaga_script_pointers[142] = 0x00D424C8;
	gaga_script_pointers[143] = 0x00D4F5D8;
	gaga_script_pointers[144] = 0x00D3E8E0;
	gaga_script_pointers[145] = 0x00D4F618;
	gaga_script_pointers[146] = 0x00D3E8F0;
	gaga_script_pointers[147] = 0x00D424F8;
	gaga_script_pointers[148] = 0x00D43620;
	gaga_script_pointers[149] = 0x00D3E900;
	gaga_script_pointers[150] = 0x00D3E908;
	gaga_script_pointers[151] = 0x00D3E910;
	gaga_script_pointers[152] = 0x00D42558;
	gaga_script_pointers[153] = 0x00D45A30;
	gaga_script_pointers[154] = 0x00D42568;
	gaga_script_pointers[155] = 0x00D3E918;
	gaga_script_pointers[156] = 0x00D3E920;
	gaga_script_pointers[157] = 0x00D42548;
	gaga_script_pointers[158] = 0x00D42550;
	gaga_script_pointers[159] = 0x00D425B8;
	gaga_script_pointers[160] = 0x00D425C0;
	gaga_script_pointers[161] = 0x00D425C8;
	gaga_script_pointers[162] = 0x00D43628;
	gaga_script_pointers[163] = 0x00D45A28;
	gaga_script_pointers[164] = 0x00D45A20;
	gaga_script_pointers[165] = 0x00D45A00;
	gaga_script_pointers[166] = 0x00D4F620;
	gaga_script_pointers[167] = 0x00D43630;

	int temp_r29 = temp_registers[29];
	temp_registers[29] = temp_registers[3];
	temp_registers[4] = 0xA0002;
	retrieve_registers();

	GameCall<int>(0x007EC200, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();
	int pointer = (int)gaga_script_pointers;
	*(int*)temp_registers[29] = pointer; // write the pointer to r29's address.
	temp_registers[29] = temp_r29;
	temp_registers[3] = pointer;
	retrieve_registers();
}

void delay(int delayframe)
{
	retrieve_registers();

	temp_registers[2] = 0xd8fe60;
	temp_registers[10] = *(int*)(temp_registers[24] + 0);
	temp_registers[4] = temp_registers[1] + 0x74;
	temp_registers[3] = 0x1c;
	temp_registers[27] = *(int*)(temp_registers[10] + 0x34);
	*(char*)(temp_registers[1] + 0x74) = (char)temp_registers[21];
	*(char*)(temp_registers[1] + 0x75) = (char)temp_registers[23];

	retrieve_registers();

	GameCall<int>(0x9ee118, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[29] = temp_registers[3];
	temp_registers[28] = temp_registers[3];
	temp_registers[3] = temp_registers[29];

	retrieve_registers();

	GameCall<int>(0x9ee998, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[19] = 0xc84150;
	temp_registers[7] = delayframe; // projectile hash
	*(int*)(temp_registers[29] + 0) = temp_registers[25];
	*(int*)(temp_registers[29] + 0x10) = temp_registers[20];
	*(int*)(temp_registers[29] + 0x14) = temp_registers[22];
	*(int*)(temp_registers[28] + 0) = temp_registers[19];
	*(int*)(temp_registers[28] + 0x18) = temp_registers[7];
	temp_registers[6] = *(int*)(temp_registers[27] + 0);
	temp_registers[4] = temp_registers[29];
	temp_registers[3] = temp_registers[26];

	int toc = *(int*)(temp_registers[27] + 0x4);

	retrieve_registers();

	GameCall<int>(temp_registers[6], toc)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	/*
	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[19] = 0xc84150;
	temp_registers[7] = delayframe;
	*(int*)(temp_registers[29] + 0) = temp_registers[25];
	*(int*)(temp_registers[29] + 0x10) = temp_registers[20];
	*(int*)(temp_registers[29] + 0x14) = temp_registers[22];
	*(int*)(temp_registers[28] + 0) = temp_registers[19];
	*(int*)(temp_registers[28] + 0x18) = temp_registers[7];
	temp_registers[6] = *(int*)(temp_registers[27] + 0);
	temp_registers[4] = temp_registers[29];
	temp_registers[3] = temp_registers[26];

	int toc2 = *(int*)(temp_registers[27] + 0x4);

	retrieve_registers();

	GameCall<int>(temp_registers[6], toc2)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

		*/

	////////////////////////////////////////////
}

void assist_shoot(int projectile_hash)
{
	////////////////////////////////////////////
	// Start of putting anything that you want to fire here.

	retrieve_registers();

	temp_registers[2] = 0xd8fe60;
	temp_registers[10] = *(int*)(temp_registers[24] + 0);
	temp_registers[4] = temp_registers[1] + 0x74;
	temp_registers[3] = 0x1c;
	temp_registers[27] = *(int*)(temp_registers[10] + 0x34);
	*(char*)(temp_registers[1] + 0x74) = (char)temp_registers[21];
	*(char*)(temp_registers[1] + 0x75) = (char)temp_registers[23];

	retrieve_registers();

	GameCall<int>(0x9ee118, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[29] = temp_registers[3];
	temp_registers[28] = temp_registers[3];
	temp_registers[3] = temp_registers[29];

	retrieve_registers();

	GameCall<int>(0x9ee998, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();
	temp_registers[2] = 0xd8fe60;
	temp_registers[19] = 0xc83a78; // 0x18
	temp_registers[7] = projectile_hash; // projectile hash
	*(int*)(temp_registers[29] + 0) = temp_registers[25];
	*(int*)(temp_registers[29] + 0x10) = temp_registers[20];
	*(int*)(temp_registers[29] + 0x14) = temp_registers[22];
	*(int*)(temp_registers[28] + 0) = temp_registers[19];
	*(int*)(temp_registers[28] + 0x18) = temp_registers[7];
	temp_registers[6] = *(int*)(temp_registers[27] + 0);
	temp_registers[4] = temp_registers[29];
	temp_registers[3] = temp_registers[26];

	int toc = *(int*)(temp_registers[27] + 0x4);

	retrieve_registers();

	GameCall<int>(temp_registers[6], toc)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	////////////////////////////////////////////
}