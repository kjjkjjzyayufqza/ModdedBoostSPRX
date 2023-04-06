#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../stdafx.h"

// This is legacy register tampering bs code, don't follow.

int model_hash_pointer;
void bael_CSa_supp();
void bael_2BC_1_supp();
void bael_2BC_2_supp();

int bael_CSa_supp_script_pointers[500];
int bael_2BC_1_supp_script_pointers[500];
int bael_2BC_2_supp_script_pointers[500];

void bael_CSa_model_hash()
{
	int hash = 0x57795D5C;
}

void bael_2BC_model_hash()
{
	int hash = 0x57795D5C;
}

void bael_CSa()
{
	temp_registers[4] = 0x80;
	temp_registers[3] = 0x4480;
	//temp_registers[18] = 0x9ee338;
	retrieve_registers();
	//asm("mtctr %r18");
	//asm("bctr");
	GameCall<int>(0x009ee338, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);
	save_registers();
	temp_registers[24] = temp_registers[3];
	bael_CSa_supp();
	asm("nop");

	//temp_registers[18] = 0x7C6C14;
	//retrieve_registers();
	//asm("mtctr %r18");
	//asm("bctr");
	/*
	GameCall<int>(0x007C6C14, 0xd8fe60)(
	temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
	temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
	temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
	temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
	temp_registers[31]
	);
	*/
	//asm("b 0x7C6C14");
	//save_registers();
}

void bael_2BC()
{
	temp_registers[4] = 0x80;
	temp_registers[3] = 0x4480;
	retrieve_registers();
	GameCall<int>(0x009ee338, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);
	save_registers();
	temp_registers[24] = temp_registers[3];
	bael_2BC_1_supp();
	asm("nop");
}

void bael_2BC_2()
{
	temp_registers[4] = 0x80;
	temp_registers[3] = 0x4480;
	retrieve_registers();
	GameCall<int>(0x009ee338, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);
	save_registers();
	temp_registers[24] = temp_registers[3];
	bael_2BC_2_supp();
	asm("nop");
}

void bael_CSa_supp()
{
	model_hash_pointer = (int)bael_CSa_model_hash;

	bael_CSa_supp_script_pointers[0] = 0x00D54C38;
	bael_CSa_supp_script_pointers[1] = 0x00D54C30;
	bael_CSa_supp_script_pointers[2] = 0x00D3B608;
	bael_CSa_supp_script_pointers[3] = 0x00D3E608;
	bael_CSa_supp_script_pointers[4] = 0x00D42328;
	bael_CSa_supp_script_pointers[5] = 0x00D422B0;
	bael_CSa_supp_script_pointers[6] = 0x00D3E610;
	bael_CSa_supp_script_pointers[7] = 0x00D3E618;
	bael_CSa_supp_script_pointers[8] = 0x00D422B8;
	bael_CSa_supp_script_pointers[9] = 0x00D422C0;
	bael_CSa_supp_script_pointers[10] = 0x00D42330;
	bael_CSa_supp_script_pointers[11] = 0x00D42340;
	bael_CSa_supp_script_pointers[12] = 0x00D422C8;
	bael_CSa_supp_script_pointers[13] = 0x00D422D0;
	bael_CSa_supp_script_pointers[14] = 0x00D422D8;
	bael_CSa_supp_script_pointers[15] = 0x00D3E620;
	bael_CSa_supp_script_pointers[16] = 0x00D422F8;
	bael_CSa_supp_script_pointers[17] = 0x00D42238;
	bael_CSa_supp_script_pointers[18] = 0x00D3E660; // 0xd421c8, makes 0x74C154 have r21 from 0x74bf04, and finally get to 0x55e5a0 to write 41xx0000 + 1ed4
	bael_CSa_supp_script_pointers[19] = 0x00D3E5D8;
	bael_CSa_supp_script_pointers[20] = 0x00D42258;
	bael_CSa_supp_script_pointers[21] = 0x00D3E628;
	bael_CSa_supp_script_pointers[22] = 0x00D422F0;
	bael_CSa_supp_script_pointers[23] = 0x00D3E5E0;
	bael_CSa_supp_script_pointers[24] = 0x00D3E5E8;
	bael_CSa_supp_script_pointers[25] = 0x00D39E10;
	bael_CSa_supp_script_pointers[26] = 0x00D39E18;
	bael_CSa_supp_script_pointers[27] = 0x00D3E630;
	bael_CSa_supp_script_pointers[28] = 0x00D42298;
	bael_CSa_supp_script_pointers[29] = 0x00D3E490;
	bael_CSa_supp_script_pointers[30] = 0x00D3E498;
	bael_CSa_supp_script_pointers[31] = 0x00D3E4A0;
	bael_CSa_supp_script_pointers[32] = 0x00D3E4A8;
	bael_CSa_supp_script_pointers[33] = 0x00D3E4B0;
	bael_CSa_supp_script_pointers[34] = 0x00D3E4B8;
	bael_CSa_supp_script_pointers[35] = 0x00D41F80; // 0xD42050, makes 0x74bf08 r3 check will go through more stuff
	bael_CSa_supp_script_pointers[36] = 0x00D3E720;
	bael_CSa_supp_script_pointers[37] = 0x00D54C28;
	bael_CSa_supp_script_pointers[38] = 0x00D3E600;
	bael_CSa_supp_script_pointers[39] = 0x00D420F0;
	bael_CSa_supp_script_pointers[40] = 0x00D42228;
	bael_CSa_supp_script_pointers[41] = 0x00D420D0;
	bael_CSa_supp_script_pointers[42] = 0x00D42270;
	bael_CSa_supp_script_pointers[43] = 0x00D42068;
	bael_CSa_supp_script_pointers[44] = 0x00D42090;
	bael_CSa_supp_script_pointers[45] = 0x00D3E4C0;
	bael_CSa_supp_script_pointers[46] = 0x00D42278;
	bael_CSa_supp_script_pointers[47] = 0x00D420C8;
	bael_CSa_supp_script_pointers[48] = 0x00D420A8;
	bael_CSa_supp_script_pointers[49] = 0x00D42260;
	bael_CSa_supp_script_pointers[50] = 0x00D42308;
	bael_CSa_supp_script_pointers[51] = 0x00D42248;
	bael_CSa_supp_script_pointers[52] = 0x00D42250;
	bael_CSa_supp_script_pointers[53] = 0x00D422E0;
	bael_CSa_supp_script_pointers[54] = 0x00D422E8;
	bael_CSa_supp_script_pointers[55] = 0x00D3E4C8;
	bael_CSa_supp_script_pointers[56] = 0x00D3E4D0;
	bael_CSa_supp_script_pointers[57] = 0x00D42110;
	bael_CSa_supp_script_pointers[58] = model_hash_pointer;
	bael_CSa_supp_script_pointers[59] = 0x00D3E4D8;
	bael_CSa_supp_script_pointers[60] = 0x00D3E4E0;
	bael_CSa_supp_script_pointers[61] = 0x00D43668;
	bael_CSa_supp_script_pointers[62] = 0x00D3E4E8;
	bael_CSa_supp_script_pointers[63] = 0x00D3E4F0;
	bael_CSa_supp_script_pointers[64] = 0x00D459D0;
	bael_CSa_supp_script_pointers[65] = 0x00D459B0;
	bael_CSa_supp_script_pointers[66] = 0x00D421F8;
	bael_CSa_supp_script_pointers[67] = 0x00D494b0; // 0xd54c18, makes the projectile not staying if hit ground or buildings
	bael_CSa_supp_script_pointers[68] = 0x00D42200;
	bael_CSa_supp_script_pointers[69] = 0x00D3E500;
	bael_CSa_supp_script_pointers[70] = 0x00D3E508;
	bael_CSa_supp_script_pointers[71] = 0x00D3E510;
	bael_CSa_supp_script_pointers[72] = 0x00D3E518;
	bael_CSa_supp_script_pointers[73] = 0x00D3E520;
	bael_CSa_supp_script_pointers[74] = 0x00D3E528;
	bael_CSa_supp_script_pointers[75] = 0x00D3E530;
	bael_CSa_supp_script_pointers[76] = 0x00D3E538;
	bael_CSa_supp_script_pointers[77] = 0x00D3E540;
	bael_CSa_supp_script_pointers[78] = 0x00D3E8A0;
	bael_CSa_supp_script_pointers[79] = 0x00D3E548;
	bael_CSa_supp_script_pointers[80] = 0x00D3E550;
	bael_CSa_supp_script_pointers[81] = 0x00D3E558;
	bael_CSa_supp_script_pointers[82] = 0x00D3E560;
	bael_CSa_supp_script_pointers[83] = 0x00D3E568;
	bael_CSa_supp_script_pointers[84] = 0x00D3E570;
	bael_CSa_supp_script_pointers[85] = 0x00D3E578;
	bael_CSa_supp_script_pointers[86] = 0x00D3E580;
	bael_CSa_supp_script_pointers[87] = 0x00D3E588;
	bael_CSa_supp_script_pointers[88] = 0x00D54C00;
	bael_CSa_supp_script_pointers[89] = 0x00D54C08;
	bael_CSa_supp_script_pointers[90] = 0x00D3E5A0;
	bael_CSa_supp_script_pointers[91] = 0x00D421D8;
	bael_CSa_supp_script_pointers[92] = 0x00D3E5A8;
	bael_CSa_supp_script_pointers[93] = 0x00D45990;
	bael_CSa_supp_script_pointers[94] = 0x00D3E5B8;
	bael_CSa_supp_script_pointers[95] = 0x00D3E5C0;
	bael_CSa_supp_script_pointers[96] = 0x00D3E5C8;
	bael_CSa_supp_script_pointers[97] = 0x00D3E5D0;
	bael_CSa_supp_script_pointers[98] = 0x00D54C10;
	bael_CSa_supp_script_pointers[99] = 0x00D3E5F0;
	bael_CSa_supp_script_pointers[100] = 0x00D3E5F8;
	bael_CSa_supp_script_pointers[101] = 0x00D42240;
	bael_CSa_supp_script_pointers[102] = 0x00D421F0;
	bael_CSa_supp_script_pointers[103] = 0x00D421E0;
	bael_CSa_supp_script_pointers[104] = 0x00D42230;
	bael_CSa_supp_script_pointers[105] = 0x00D423B8;
	bael_CSa_supp_script_pointers[106] = 0x00d42478; // original 0xd42370, changed to 0xd42478 make 0x772F1C jump to write 41xx0000 + 1edc when hit, thus making sys_55 return correct stuff
	bael_CSa_supp_script_pointers[107] = 0x00D3E638;
	bael_CSa_supp_script_pointers[108] = 0x00D3E640;
	bael_CSa_supp_script_pointers[109] = 0x00D42320;
	bael_CSa_supp_script_pointers[110] = 0x00D423C8;
	bael_CSa_supp_script_pointers[111] = 0x00D42358;
	bael_CSa_supp_script_pointers[112] = 0x00D42360;
	bael_CSa_supp_script_pointers[113] = 0x00D42368;
	bael_CSa_supp_script_pointers[114] = 0x00D423B0;
	bael_CSa_supp_script_pointers[115] = 0x00D54C20;
	bael_CSa_supp_script_pointers[116] = 0x00D42380;
	bael_CSa_supp_script_pointers[117] = 0x00D42398;
	bael_CSa_supp_script_pointers[118] = 0x00D423A8;
	bael_CSa_supp_script_pointers[119] = 0x00D42388;
	bael_CSa_supp_script_pointers[120] = 0x00D42390;
	bael_CSa_supp_script_pointers[121] = 0x00D422A0;
	bael_CSa_supp_script_pointers[122] = 0x00D42268;
	bael_CSa_supp_script_pointers[123] = 0x00D421E8;
	bael_CSa_supp_script_pointers[124] = 0x00D42338;
	bael_CSa_supp_script_pointers[125] = 0x00D42280;
	bael_CSa_supp_script_pointers[126] = 0x00D43680;
	bael_CSa_supp_script_pointers[127] = 0x00D43688;
	bael_CSa_supp_script_pointers[128] = 0x00D459D8;
	bael_CSa_supp_script_pointers[129] = 0x00D45998;

	temp_registers[29] = temp_registers[3];
	temp_registers[4] = 0x77b3c;
	//temp_registers[18] = 0x7EB570;
	retrieve_registers();
	//asm("mtctr %r18");
	//asm("bctr");
	GameCall<int>(0x007EB570, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();

	*(int*)(temp_registers[24] + 0x44a4) = 0xFFFFFFFF;

	int pointer = (int)bael_CSa_supp_script_pointers;
	*(int*)temp_registers[29] = pointer; // write the pointer to r29's address.
	temp_registers[3] = pointer;

	*(int*)temp_registers[31] = temp_registers[24];
	retrieve_registers();
}


void bael_2BC_1_supp()
{
	model_hash_pointer = (int)bael_2BC_model_hash;

	bael_2BC_1_supp_script_pointers[0] = 0x00D510D8;
	bael_2BC_1_supp_script_pointers[1] = 0x00D510D0;
	bael_2BC_1_supp_script_pointers[2] = 0x00D3B608;
	bael_2BC_1_supp_script_pointers[3] = 0x00D3E608;
	bael_2BC_1_supp_script_pointers[4] = 0x00D42328;
	bael_2BC_1_supp_script_pointers[5] = 0x00D422B0;
	bael_2BC_1_supp_script_pointers[6] = 0x00D3E610;
	bael_2BC_1_supp_script_pointers[7] = 0x00D3E618;
	bael_2BC_1_supp_script_pointers[8] = 0x00D422B8;
	bael_2BC_1_supp_script_pointers[9] = 0x00D422C0;
	bael_2BC_1_supp_script_pointers[10] = 0x00D42330;
	bael_2BC_1_supp_script_pointers[11] = 0x00D42340;
	bael_2BC_1_supp_script_pointers[12] = 0x00D422C8;
	bael_2BC_1_supp_script_pointers[13] = 0x00D422D0;
	bael_2BC_1_supp_script_pointers[14] = 0x00D422D8;
	bael_2BC_1_supp_script_pointers[15] = 0x00D3E620;
	bael_2BC_1_supp_script_pointers[16] = 0x00D422F8;
	bael_2BC_1_supp_script_pointers[17] = 0x00D42238;
	bael_2BC_1_supp_script_pointers[18] = 0x00D421C8;
	bael_2BC_1_supp_script_pointers[19] = 0x00D3E5D8;
	bael_2BC_1_supp_script_pointers[20] = 0x00D42258;
	bael_2BC_1_supp_script_pointers[21] = 0x00D3E628;
	bael_2BC_1_supp_script_pointers[22] = 0x00D422F0;
	bael_2BC_1_supp_script_pointers[23] = 0x00D3E5E0;
	bael_2BC_1_supp_script_pointers[24] = 0x00D3E5E8;
	bael_2BC_1_supp_script_pointers[25] = 0x00D39E10;
	bael_2BC_1_supp_script_pointers[26] = 0x00D39E18;
	bael_2BC_1_supp_script_pointers[27] = 0x00D3E630;
	bael_2BC_1_supp_script_pointers[28] = 0x00D42298;
	bael_2BC_1_supp_script_pointers[29] = 0x00D3E490;
	bael_2BC_1_supp_script_pointers[30] = 0x00D3E498;
	bael_2BC_1_supp_script_pointers[31] = 0x00D3E4A0;
	bael_2BC_1_supp_script_pointers[32] = 0x00D3E4A8;
	bael_2BC_1_supp_script_pointers[33] = 0x00D3E4B0;
	bael_2BC_1_supp_script_pointers[34] = 0x00D3E4B8;
	bael_2BC_1_supp_script_pointers[35] = 0x00D42050;
	bael_2BC_1_supp_script_pointers[36] = 0x00D3E720;
	bael_2BC_1_supp_script_pointers[37] = 0x00D54C28; // aleo hash
	bael_2BC_1_supp_script_pointers[38] = 0x00D3E600;
	bael_2BC_1_supp_script_pointers[39] = 0x00D420F0;
	bael_2BC_1_supp_script_pointers[40] = 0x00D42228;
	bael_2BC_1_supp_script_pointers[41] = 0x00D420D0;
	bael_2BC_1_supp_script_pointers[42] = 0x00D42270;
	bael_2BC_1_supp_script_pointers[43] = 0x00D42068;
	bael_2BC_1_supp_script_pointers[44] = 0x00D42090;
	bael_2BC_1_supp_script_pointers[45] = 0x00D3E4C0;
	bael_2BC_1_supp_script_pointers[46] = 0x00D42278;
	bael_2BC_1_supp_script_pointers[47] = 0x00D420C8;
	bael_2BC_1_supp_script_pointers[48] = 0x00D420A8;
	bael_2BC_1_supp_script_pointers[49] = 0x00D42260;
	bael_2BC_1_supp_script_pointers[50] = 0x00D42308;
	bael_2BC_1_supp_script_pointers[51] = 0x00D42248;
	bael_2BC_1_supp_script_pointers[52] = 0x00D42250;
	bael_2BC_1_supp_script_pointers[53] = 0x00D422E0;
	bael_2BC_1_supp_script_pointers[54] = 0x00D422E8;
	bael_2BC_1_supp_script_pointers[55] = 0x00D3E4C8;
	bael_2BC_1_supp_script_pointers[56] = 0x00D3E4D0;
	bael_2BC_1_supp_script_pointers[57] = 0x00D42110;
	bael_2BC_1_supp_script_pointers[58] = model_hash_pointer;
	bael_2BC_1_supp_script_pointers[59] = 0x00D3E4D8;
	bael_2BC_1_supp_script_pointers[60] = 0x00D3E4E0;
	bael_2BC_1_supp_script_pointers[61] = 0x00D510A0;
	bael_2BC_1_supp_script_pointers[62] = 0x00D3E4E8;
	bael_2BC_1_supp_script_pointers[63] = 0x00D3E4F0;
	bael_2BC_1_supp_script_pointers[64] = 0x00D459D0;
	bael_2BC_1_supp_script_pointers[65] = 0x00D459B0;
	bael_2BC_1_supp_script_pointers[66] = 0x00D421F8;
	bael_2BC_1_supp_script_pointers[67] = 0x00D510C0;
	bael_2BC_1_supp_script_pointers[68] = 0x00D42200;
	bael_2BC_1_supp_script_pointers[69] = 0x00D3E500;
	bael_2BC_1_supp_script_pointers[70] = 0x00D3E508;
	bael_2BC_1_supp_script_pointers[71] = 0x00D3E510;
	bael_2BC_1_supp_script_pointers[72] = 0x00D3E518;
	bael_2BC_1_supp_script_pointers[73] = 0x00D3E520;
	bael_2BC_1_supp_script_pointers[74] = 0x00D3E528;
	bael_2BC_1_supp_script_pointers[75] = 0x00D3E530;
	bael_2BC_1_supp_script_pointers[76] = 0x00D3E538;
	bael_2BC_1_supp_script_pointers[77] = 0x00D3E540;
	bael_2BC_1_supp_script_pointers[78] = 0x00D3E8A0;
	bael_2BC_1_supp_script_pointers[79] = 0x00D3E548;
	bael_2BC_1_supp_script_pointers[80] = 0x00D3E550;
	bael_2BC_1_supp_script_pointers[81] = 0x00D3E558;
	bael_2BC_1_supp_script_pointers[82] = 0x00D3E560;
	bael_2BC_1_supp_script_pointers[83] = 0x00D3E568;
	bael_2BC_1_supp_script_pointers[84] = 0x00D3E570;
	bael_2BC_1_supp_script_pointers[85] = 0x00D3E578;
	bael_2BC_1_supp_script_pointers[86] = 0x00D3E580;
	bael_2BC_1_supp_script_pointers[87] = 0x00D3E588;
	bael_2BC_1_supp_script_pointers[88] = 0x00D510A8;
	bael_2BC_1_supp_script_pointers[89] = 0x00D510B0;
	bael_2BC_1_supp_script_pointers[90] = 0x00D3E5A0;
	bael_2BC_1_supp_script_pointers[91] = 0x00D421D8;
	bael_2BC_1_supp_script_pointers[92] = 0x00D3E5A8;
	bael_2BC_1_supp_script_pointers[93] = 0x00D45990;
	bael_2BC_1_supp_script_pointers[94] = 0x00D3E5B8;
	bael_2BC_1_supp_script_pointers[95] = 0x00D3E5C0;
	bael_2BC_1_supp_script_pointers[96] = 0x00D3E5C8;
	bael_2BC_1_supp_script_pointers[97] = 0x00D3E5D0;
	bael_2BC_1_supp_script_pointers[98] = 0x00D510B8;
	bael_2BC_1_supp_script_pointers[99] = 0x00D3E5F0;
	bael_2BC_1_supp_script_pointers[100] = 0x00D3E5F8;
	bael_2BC_1_supp_script_pointers[101] = 0x00D42240;
	bael_2BC_1_supp_script_pointers[102] = 0x00D421F0;
	bael_2BC_1_supp_script_pointers[103] = 0x00D421E0;
	bael_2BC_1_supp_script_pointers[104] = 0x00D42230;
	bael_2BC_1_supp_script_pointers[105] = 0x00D423B8;
	bael_2BC_1_supp_script_pointers[106] = 0x00D42370;
	bael_2BC_1_supp_script_pointers[107] = 0x00D3E638;
	bael_2BC_1_supp_script_pointers[108] = 0x00D3E640;
	bael_2BC_1_supp_script_pointers[109] = 0x00D42320;
	bael_2BC_1_supp_script_pointers[110] = 0x00D423C8;
	bael_2BC_1_supp_script_pointers[111] = 0x00D42358;
	bael_2BC_1_supp_script_pointers[112] = 0x00D42360;
	bael_2BC_1_supp_script_pointers[113] = 0x00D42368;
	bael_2BC_1_supp_script_pointers[114] = 0x00D423B0;
	bael_2BC_1_supp_script_pointers[115] = 0x00D510E8;
	bael_2BC_1_supp_script_pointers[116] = 0x00D42380;
	bael_2BC_1_supp_script_pointers[117] = 0x00D42398;
	bael_2BC_1_supp_script_pointers[118] = 0x00D510E0;
	bael_2BC_1_supp_script_pointers[119] = 0x00D42388;
	bael_2BC_1_supp_script_pointers[120] = 0x00D42390;
	bael_2BC_1_supp_script_pointers[121] = 0x00D422A0;
	bael_2BC_1_supp_script_pointers[122] = 0x00D42268;
	bael_2BC_1_supp_script_pointers[123] = 0x00D421E8;
	bael_2BC_1_supp_script_pointers[124] = 0x00D42338;
	bael_2BC_1_supp_script_pointers[125] = 0x00D42280;
	bael_2BC_1_supp_script_pointers[126] = 0x00D43680;
	bael_2BC_1_supp_script_pointers[127] = 0x00D43688;
	bael_2BC_1_supp_script_pointers[128] = 0x00D459D8;
	bael_2BC_1_supp_script_pointers[129] = 0x00D45998;

	temp_registers[29] = temp_registers[3];
	temp_registers[4] = 0x77b46;
	retrieve_registers();
	GameCall<int>(0x007EB570, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();

	int pointer = (int)bael_2BC_1_supp_script_pointers;
	*(int*)temp_registers[29] = pointer; // write the pointer to r29's address.
	temp_registers[3] = pointer;

	temp_registers[9] = 0x8;
	*(int*)(temp_registers[29] + 0) = temp_registers[3];
	*(int*)(temp_registers[29] + 0xd8) = temp_registers[9];
	*(int*)temp_registers[31] = temp_registers[24];
	retrieve_registers();
}

void bael_2BC_2_supp() // probably taken from strike noir's EX burst sword throw, where it will explode
{
	model_hash_pointer = (int)bael_2BC_model_hash;

	bael_2BC_2_supp_script_pointers[0] = 0x00D510D8;
	bael_2BC_2_supp_script_pointers[1] = 0x00D510D0;
	bael_2BC_2_supp_script_pointers[2] = 0x00D3B608;
	bael_2BC_2_supp_script_pointers[3] = 0x00D3E608;
	bael_2BC_2_supp_script_pointers[4] = 0x00D42328;
	bael_2BC_2_supp_script_pointers[5] = 0x00D422B0;
	bael_2BC_2_supp_script_pointers[6] = 0x00D3E610;
	bael_2BC_2_supp_script_pointers[7] = 0x00D3E618;
	bael_2BC_2_supp_script_pointers[8] = 0x00D422B8;
	bael_2BC_2_supp_script_pointers[9] = 0x00D422C0;
	bael_2BC_2_supp_script_pointers[10] = 0x00D42330;
	bael_2BC_2_supp_script_pointers[11] = 0x00D42340;
	bael_2BC_2_supp_script_pointers[12] = 0x00D422C8;
	bael_2BC_2_supp_script_pointers[13] = 0x00D422D0;
	bael_2BC_2_supp_script_pointers[14] = 0x00D422D8;
	bael_2BC_2_supp_script_pointers[15] = 0x00D3E620;
	bael_2BC_2_supp_script_pointers[16] = 0x00D422F8;
	bael_2BC_2_supp_script_pointers[17] = 0x00D42238;
	bael_2BC_2_supp_script_pointers[18] = 0x00D421C8;
	bael_2BC_2_supp_script_pointers[19] = 0x00D3E5D8;
	bael_2BC_2_supp_script_pointers[20] = 0x00D42258;
	bael_2BC_2_supp_script_pointers[21] = 0x00D3E628;
	bael_2BC_2_supp_script_pointers[22] = 0x00D422F0;
	bael_2BC_2_supp_script_pointers[23] = 0x00D3E5E0;
	bael_2BC_2_supp_script_pointers[24] = 0x00D3E5E8;
	bael_2BC_2_supp_script_pointers[25] = 0x00D39E10;
	bael_2BC_2_supp_script_pointers[26] = 0x00D39E18;
	bael_2BC_2_supp_script_pointers[27] = 0x00D3E630;
	bael_2BC_2_supp_script_pointers[28] = 0x00D42298;
	bael_2BC_2_supp_script_pointers[29] = 0x00D3E490;
	bael_2BC_2_supp_script_pointers[30] = 0x00D3E498;
	bael_2BC_2_supp_script_pointers[31] = 0x00D3E4A0;
	bael_2BC_2_supp_script_pointers[32] = 0x00D3E4A8;
	bael_2BC_2_supp_script_pointers[33] = 0x00D3E4B0;
	bael_2BC_2_supp_script_pointers[34] = 0x00D3E4B8;
	bael_2BC_2_supp_script_pointers[35] = 0x00D42050;
	bael_2BC_2_supp_script_pointers[36] = 0x00D3E720;
	bael_2BC_2_supp_script_pointers[37] = 0x00D54C28; // aleo hash
	bael_2BC_2_supp_script_pointers[38] = 0x00D3E600;
	bael_2BC_2_supp_script_pointers[39] = 0x00D420F0;
	bael_2BC_2_supp_script_pointers[40] = 0x00D42228;
	bael_2BC_2_supp_script_pointers[41] = 0x00D420D0;
	bael_2BC_2_supp_script_pointers[42] = 0x00D42270;
	bael_2BC_2_supp_script_pointers[43] = 0x00D42068;
	bael_2BC_2_supp_script_pointers[44] = 0x00D42090;
	bael_2BC_2_supp_script_pointers[45] = 0x00D3E4C0;
	bael_2BC_2_supp_script_pointers[46] = 0x00D42278;
	bael_2BC_2_supp_script_pointers[47] = 0x00D420C8;
	bael_2BC_2_supp_script_pointers[48] = 0x00D420A8;
	bael_2BC_2_supp_script_pointers[49] = 0x00D42260;
	bael_2BC_2_supp_script_pointers[50] = 0x00D42308;
	bael_2BC_2_supp_script_pointers[51] = 0x00D42248;
	bael_2BC_2_supp_script_pointers[52] = 0x00D42250;
	bael_2BC_2_supp_script_pointers[53] = 0x00D422E0;
	bael_2BC_2_supp_script_pointers[54] = 0x00D422E8;
	bael_2BC_2_supp_script_pointers[55] = 0x00D3E4C8;
	bael_2BC_2_supp_script_pointers[56] = 0x00D3E4D0;
	bael_2BC_2_supp_script_pointers[57] = 0x00D42110;
	bael_2BC_2_supp_script_pointers[58] = model_hash_pointer;
	bael_2BC_2_supp_script_pointers[59] = 0x00D3E4D8;
	bael_2BC_2_supp_script_pointers[60] = 0x00D3E4E0;
	bael_2BC_2_supp_script_pointers[61] = 0x00D510A0;
	bael_2BC_2_supp_script_pointers[62] = 0x00D3E4E8;
	bael_2BC_2_supp_script_pointers[63] = 0x00D3E4F0;
	bael_2BC_2_supp_script_pointers[64] = 0x00D459D0;
	bael_2BC_2_supp_script_pointers[65] = 0x00D459B0;
	bael_2BC_2_supp_script_pointers[66] = 0x00D421F8;
	bael_2BC_2_supp_script_pointers[67] = 0x00D510C0;
	bael_2BC_2_supp_script_pointers[68] = 0x00D42200;
	bael_2BC_2_supp_script_pointers[69] = 0x00D3E500;
	bael_2BC_2_supp_script_pointers[70] = 0x00D3E508;
	bael_2BC_2_supp_script_pointers[71] = 0x00D3E510;
	bael_2BC_2_supp_script_pointers[72] = 0x00D3E518;
	bael_2BC_2_supp_script_pointers[73] = 0x00D3E520;
	bael_2BC_2_supp_script_pointers[74] = 0x00D3E528;
	bael_2BC_2_supp_script_pointers[75] = 0x00D3E530;
	bael_2BC_2_supp_script_pointers[76] = 0x00D3E538;
	bael_2BC_2_supp_script_pointers[77] = 0x00D3E540;
	bael_2BC_2_supp_script_pointers[78] = 0x00D3E8A0;
	bael_2BC_2_supp_script_pointers[79] = 0x00D3E548;
	bael_2BC_2_supp_script_pointers[80] = 0x00D3E550;
	bael_2BC_2_supp_script_pointers[81] = 0x00D3E558;
	bael_2BC_2_supp_script_pointers[82] = 0x00D3E560;
	bael_2BC_2_supp_script_pointers[83] = 0x00D3E568;
	bael_2BC_2_supp_script_pointers[84] = 0x00D3E570;
	bael_2BC_2_supp_script_pointers[85] = 0x00D3E578;
	bael_2BC_2_supp_script_pointers[86] = 0x00D3E580;
	bael_2BC_2_supp_script_pointers[87] = 0x00D3E588;
	bael_2BC_2_supp_script_pointers[88] = 0x00D510A8;
	bael_2BC_2_supp_script_pointers[89] = 0x00D510B0;
	bael_2BC_2_supp_script_pointers[90] = 0x00D3E5A0;
	bael_2BC_2_supp_script_pointers[91] = 0x00D421D8;
	bael_2BC_2_supp_script_pointers[92] = 0x00D3E5A8;
	bael_2BC_2_supp_script_pointers[93] = 0x00D45990;
	bael_2BC_2_supp_script_pointers[94] = 0x00D3E5B8;
	bael_2BC_2_supp_script_pointers[95] = 0x00D3E5C0;
	bael_2BC_2_supp_script_pointers[96] = 0x00D3E5C8;
	bael_2BC_2_supp_script_pointers[97] = 0x00D3E5D0;
	bael_2BC_2_supp_script_pointers[98] = 0x00D510B8;
	bael_2BC_2_supp_script_pointers[99] = 0x00D3E5F0;
	bael_2BC_2_supp_script_pointers[100] = 0x00D3E5F8;
	bael_2BC_2_supp_script_pointers[101] = 0x00D42240;
	bael_2BC_2_supp_script_pointers[102] = 0x00D421F0;
	bael_2BC_2_supp_script_pointers[103] = 0x00D421E0;
	bael_2BC_2_supp_script_pointers[104] = 0x00D42230;
	bael_2BC_2_supp_script_pointers[105] = 0x00D423B8;
	bael_2BC_2_supp_script_pointers[106] = 0x00D42370;
	bael_2BC_2_supp_script_pointers[107] = 0x00D3E638;
	bael_2BC_2_supp_script_pointers[108] = 0x00D3E640;
	bael_2BC_2_supp_script_pointers[109] = 0x00D42320;
	bael_2BC_2_supp_script_pointers[110] = 0x00D423C8;
	bael_2BC_2_supp_script_pointers[111] = 0x00D42358;
	bael_2BC_2_supp_script_pointers[112] = 0x00D42360;
	bael_2BC_2_supp_script_pointers[113] = 0x00D42368;
	bael_2BC_2_supp_script_pointers[114] = 0x00D423B0;
	bael_2BC_2_supp_script_pointers[115] = 0x00D510E8;
	bael_2BC_2_supp_script_pointers[116] = 0x00D42380;
	bael_2BC_2_supp_script_pointers[117] = 0x00D42398;
	bael_2BC_2_supp_script_pointers[118] = 0x00D510E0;
	bael_2BC_2_supp_script_pointers[119] = 0x00D42388;
	bael_2BC_2_supp_script_pointers[120] = 0x00D42390;
	bael_2BC_2_supp_script_pointers[121] = 0x00D422A0;
	bael_2BC_2_supp_script_pointers[122] = 0x00D42268;
	bael_2BC_2_supp_script_pointers[123] = 0x00D421E8;
	bael_2BC_2_supp_script_pointers[124] = 0x00D42338;
	bael_2BC_2_supp_script_pointers[125] = 0x00D42280;
	bael_2BC_2_supp_script_pointers[126] = 0x00D43680;
	bael_2BC_2_supp_script_pointers[127] = 0x00D43688;
	bael_2BC_2_supp_script_pointers[128] = 0x00D459D8;
	bael_2BC_2_supp_script_pointers[129] = 0x00D45998;

	temp_registers[29] = temp_registers[3];
	temp_registers[4] = 0x77b50;

	retrieve_registers();

	GameCall<int>(0x007EB570, 0xd8fe60)(
		temp_registers[3], temp_registers[4], temp_registers[5], temp_registers[6], temp_registers[7], temp_registers[8], temp_registers[9],
		temp_registers[10], temp_registers[11], temp_registers[12], temp_registers[13], temp_registers[14], temp_registers[15], temp_registers[16],
		temp_registers[17], temp_registers[18], temp_registers[19], temp_registers[20], temp_registers[21], temp_registers[22], temp_registers[23],
		temp_registers[24], temp_registers[25], temp_registers[26], temp_registers[27], temp_registers[28], temp_registers[29], temp_registers[30],
		temp_registers[31]
		);

	save_registers();

	int pointer = (int)bael_2BC_2_supp_script_pointers;
	*(int*)temp_registers[29] = pointer; // write the pointer to r29's address.
	temp_registers[3] = pointer;

	temp_registers[9] = 0x8;
	*(int*)(temp_registers[29] + 0) = temp_registers[3];
	*(int*)(temp_registers[29] + 0xd8) = temp_registers[9];
	*(int*)temp_registers[31] = temp_registers[24];
	retrieve_registers();
}
