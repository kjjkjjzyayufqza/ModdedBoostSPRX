#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int tallgeese_III_assist_spawn_script_pointers[500];

void tallgeese_III_assist_spawn_ALEO_hash()
{
	int hash = 0x9B5C1250;
}

__int64 __fastcall sub_8169AC(_DWORD *a1)
{
	__int64 result; // r3

	tallgeese_III_assist_spawn_script_pointers[0] = 0x00D473C8;
	tallgeese_III_assist_spawn_script_pointers[1] = 0x00D473C0;
	tallgeese_III_assist_spawn_script_pointers[2] = 0x00D3B608;
	tallgeese_III_assist_spawn_script_pointers[3] = 0x00D3E608;
	tallgeese_III_assist_spawn_script_pointers[4] = 0x00D42328;
	tallgeese_III_assist_spawn_script_pointers[5] = 0x00D424D0;
	tallgeese_III_assist_spawn_script_pointers[6] = 0x00D3E610;
	tallgeese_III_assist_spawn_script_pointers[7] = 0x00D3E618;
	tallgeese_III_assist_spawn_script_pointers[8] = 0x00D422B8;
	tallgeese_III_assist_spawn_script_pointers[9] = 0x00D422C0;
	tallgeese_III_assist_spawn_script_pointers[10] = 0x00D42330;
	tallgeese_III_assist_spawn_script_pointers[11] = 0x00D425F8;
	tallgeese_III_assist_spawn_script_pointers[12] = 0x00D422C8;
	tallgeese_III_assist_spawn_script_pointers[13] = 0x00D422D0;
	tallgeese_III_assist_spawn_script_pointers[14] = 0x00D425D0;
	tallgeese_III_assist_spawn_script_pointers[15] = 0x00D3E620;
	tallgeese_III_assist_spawn_script_pointers[16] = 0x00D422F8;
	tallgeese_III_assist_spawn_script_pointers[17] = 0x00D42238;
	tallgeese_III_assist_spawn_script_pointers[18] = 0x00D3E660;
	tallgeese_III_assist_spawn_script_pointers[19] = 0x00D3E5D8;
	tallgeese_III_assist_spawn_script_pointers[20] = 0x00D42258;
	tallgeese_III_assist_spawn_script_pointers[21] = 0x00D3E628;
	tallgeese_III_assist_spawn_script_pointers[22] = 0x00D422F0;
	tallgeese_III_assist_spawn_script_pointers[23] = 0x00D3E5E0;
	tallgeese_III_assist_spawn_script_pointers[24] = 0x00D3E5E8;
	tallgeese_III_assist_spawn_script_pointers[25] = 0x00D39E10;
	tallgeese_III_assist_spawn_script_pointers[26] = 0x00D39E18;
	tallgeese_III_assist_spawn_script_pointers[27] = 0x00D3E630;
	tallgeese_III_assist_spawn_script_pointers[28] = 0x00D42450;
	tallgeese_III_assist_spawn_script_pointers[29] = 0x00D3E490;
	tallgeese_III_assist_spawn_script_pointers[30] = 0x00D3E498;
	tallgeese_III_assist_spawn_script_pointers[31] = 0x00D3E8B0;
	tallgeese_III_assist_spawn_script_pointers[32] = 0x00D3E4A8;
	tallgeese_III_assist_spawn_script_pointers[33] = 0x00D3E4B0;
	tallgeese_III_assist_spawn_script_pointers[34] = 0x00D3E4B8;
	tallgeese_III_assist_spawn_script_pointers[35] = 0x00D3E648;
	tallgeese_III_assist_spawn_script_pointers[36] = 0x00D3E720;
	tallgeese_III_assist_spawn_script_pointers[37] = 0x00D473B8;
	tallgeese_III_assist_spawn_script_pointers[38] = 0x00D3E600;
	tallgeese_III_assist_spawn_script_pointers[39] = 0x00D420F0;
	tallgeese_III_assist_spawn_script_pointers[40] = 0x00D42228;
	tallgeese_III_assist_spawn_script_pointers[41] = 0x00D420D0;
	tallgeese_III_assist_spawn_script_pointers[42] = 0x00D42270;
	tallgeese_III_assist_spawn_script_pointers[43] = 0x00D424F0;
	tallgeese_III_assist_spawn_script_pointers[44] = 0x00D42090;
	tallgeese_III_assist_spawn_script_pointers[45] = 0x00D3E4C0;
	tallgeese_III_assist_spawn_script_pointers[46] = 0x00D42278;
	tallgeese_III_assist_spawn_script_pointers[47] = 0x00D420C8;
	tallgeese_III_assist_spawn_script_pointers[48] = 0x00D424C0;
	tallgeese_III_assist_spawn_script_pointers[49] = 0x00D42260;
	tallgeese_III_assist_spawn_script_pointers[50] = 0x00D42308;
	tallgeese_III_assist_spawn_script_pointers[51] = 0x00D42248;
	tallgeese_III_assist_spawn_script_pointers[52] = 0x00D42250;
	tallgeese_III_assist_spawn_script_pointers[53] = 0x00D422E0;
	tallgeese_III_assist_spawn_script_pointers[54] = 0x00D422E8;
	tallgeese_III_assist_spawn_script_pointers[55] = 0x00D3E4C8;
	tallgeese_III_assist_spawn_script_pointers[56] = 0x00D3E4D0;
	tallgeese_III_assist_spawn_script_pointers[57] = 0x00D42110;
	tallgeese_III_assist_spawn_script_pointers[58] = 0x00D47380;
	tallgeese_III_assist_spawn_script_pointers[59] = 0x00D3E4D8;
	tallgeese_III_assist_spawn_script_pointers[60] = 0x00D3E4E0;
	tallgeese_III_assist_spawn_script_pointers[61] = 0x00D3E898;
	tallgeese_III_assist_spawn_script_pointers[62] = 0x00D3E4E8;
	tallgeese_III_assist_spawn_script_pointers[63] = 0x00D3E4F0;
	tallgeese_III_assist_spawn_script_pointers[64] = 0x00D3E4F8;
	tallgeese_III_assist_spawn_script_pointers[65] = 0x00D473D0;
	tallgeese_III_assist_spawn_script_pointers[66] = 0x00D42500;
	tallgeese_III_assist_spawn_script_pointers[67] = 0x00D42208;
	tallgeese_III_assist_spawn_script_pointers[68] = 0x00D42200;
	tallgeese_III_assist_spawn_script_pointers[69] = 0x00D3E500;
	tallgeese_III_assist_spawn_script_pointers[70] = 0x00D3E508;
	tallgeese_III_assist_spawn_script_pointers[71] = 0x00D47388;
	tallgeese_III_assist_spawn_script_pointers[72] = 0x00D3E518;
	tallgeese_III_assist_spawn_script_pointers[73] = 0x00D3E520;
	tallgeese_III_assist_spawn_script_pointers[74] = 0x00D3E528;
	tallgeese_III_assist_spawn_script_pointers[75] = 0x00D3E530;
	tallgeese_III_assist_spawn_script_pointers[76] = 0x00D3E538;
	tallgeese_III_assist_spawn_script_pointers[77] = 0x00D3E540;
	tallgeese_III_assist_spawn_script_pointers[78] = 0x00D43618;
	tallgeese_III_assist_spawn_script_pointers[79] = 0x00D3E548;
	tallgeese_III_assist_spawn_script_pointers[80] = 0x00D3E550;
	tallgeese_III_assist_spawn_script_pointers[81] = 0x00D3E8C0;
	tallgeese_III_assist_spawn_script_pointers[82] = 0x00D3E560;
	tallgeese_III_assist_spawn_script_pointers[83] = 0x00D3E8C8;
	tallgeese_III_assist_spawn_script_pointers[84] = 0x00D3E570;
	tallgeese_III_assist_spawn_script_pointers[85] = 0x00D3E578;
	tallgeese_III_assist_spawn_script_pointers[86] = 0x00D3E580;
	tallgeese_III_assist_spawn_script_pointers[87] = 0x00D3E588;
	tallgeese_III_assist_spawn_script_pointers[88] = 0x00D3E590;
	tallgeese_III_assist_spawn_script_pointers[89] = 0x00D3E598;
	tallgeese_III_assist_spawn_script_pointers[90] = 0x00D3E5A0;
	tallgeese_III_assist_spawn_script_pointers[91] = 0x00D3E8D0;
	tallgeese_III_assist_spawn_script_pointers[92] = 0x00D3E5A8;
	tallgeese_III_assist_spawn_script_pointers[93] = 0x00D42540;
	tallgeese_III_assist_spawn_script_pointers[94] = 0x00D3E5B8;
	tallgeese_III_assist_spawn_script_pointers[95] = 0x00D3E5C0;
	tallgeese_III_assist_spawn_script_pointers[96] = 0x00D3E5C8;
	tallgeese_III_assist_spawn_script_pointers[97] = 0x00D3E5D0;
	tallgeese_III_assist_spawn_script_pointers[98] = 0x00D42210;
	tallgeese_III_assist_spawn_script_pointers[99] = 0x00D3E5F0;
	tallgeese_III_assist_spawn_script_pointers[100] = 0x00D3E5F8;
	tallgeese_III_assist_spawn_script_pointers[101] = 0x00D42240;
	tallgeese_III_assist_spawn_script_pointers[102] = 0x00D421F0;
	tallgeese_III_assist_spawn_script_pointers[103] = 0x00D42498;
	tallgeese_III_assist_spawn_script_pointers[104] = 0x00D42230;
	tallgeese_III_assist_spawn_script_pointers[105] = 0x00D423B8;
	tallgeese_III_assist_spawn_script_pointers[106] = 0x00D42478;
	tallgeese_III_assist_spawn_script_pointers[107] = 0x00D425E8;
	tallgeese_III_assist_spawn_script_pointers[108] = 0x00D3E640;
	tallgeese_III_assist_spawn_script_pointers[109] = 0x00D42320;
	tallgeese_III_assist_spawn_script_pointers[110] = 0x00D42518;
	tallgeese_III_assist_spawn_script_pointers[111] = 0x00D42358;
	tallgeese_III_assist_spawn_script_pointers[112] = 0x00D42360;
	tallgeese_III_assist_spawn_script_pointers[113] = 0x00D42448;
	tallgeese_III_assist_spawn_script_pointers[114] = 0x00D42510;
	tallgeese_III_assist_spawn_script_pointers[115] = 0x00D42378;
	tallgeese_III_assist_spawn_script_pointers[116] = 0x00D42380;
	tallgeese_III_assist_spawn_script_pointers[117] = 0x00D42398;
	tallgeese_III_assist_spawn_script_pointers[118] = 0x00D42460;
	tallgeese_III_assist_spawn_script_pointers[119] = 0x00D42388;
	tallgeese_III_assist_spawn_script_pointers[120] = 0x00D42390;
	tallgeese_III_assist_spawn_script_pointers[121] = 0x00D422A0;
	tallgeese_III_assist_spawn_script_pointers[122] = 0x00D42268;
	tallgeese_III_assist_spawn_script_pointers[123] = 0x00D42428;
	tallgeese_III_assist_spawn_script_pointers[124] = 0x00D42410;
	tallgeese_III_assist_spawn_script_pointers[125] = 0x00D42280;
	tallgeese_III_assist_spawn_script_pointers[126] = 0x00D42408;
	tallgeese_III_assist_spawn_script_pointers[127] = 0x00D3E668;
	tallgeese_III_assist_spawn_script_pointers[128] = 0x00D3E650;
	tallgeese_III_assist_spawn_script_pointers[129] = 0x00D3E658;
	tallgeese_III_assist_spawn_script_pointers[130] = 0x00D42470;
	tallgeese_III_assist_spawn_script_pointers[131] = 0x00D3E8B8;
	tallgeese_III_assist_spawn_script_pointers[132] = 0x00D3E670;
	tallgeese_III_assist_spawn_script_pointers[133] = 0x00D3E678;
	tallgeese_III_assist_spawn_script_pointers[134] = 0x00D3E680;
	tallgeese_III_assist_spawn_script_pointers[135] = 0x00D3E688;
	tallgeese_III_assist_spawn_script_pointers[136] = 0x00D3E690;
	tallgeese_III_assist_spawn_script_pointers[137] = 0x00D3E698;
	tallgeese_III_assist_spawn_script_pointers[138] = 0x00D3E6A0;
	tallgeese_III_assist_spawn_script_pointers[139] = 0x00D3E8A8;
	tallgeese_III_assist_spawn_script_pointers[140] = 0x00D424B8;
	tallgeese_III_assist_spawn_script_pointers[141] = 0x00D42468;
	tallgeese_III_assist_spawn_script_pointers[142] = 0x00D424C8;
	tallgeese_III_assist_spawn_script_pointers[143] = 0x00D47390;
	tallgeese_III_assist_spawn_script_pointers[144] = 0x00D3E8E0;
	tallgeese_III_assist_spawn_script_pointers[145] = 0x00D3E8E8;
	tallgeese_III_assist_spawn_script_pointers[146] = 0x00D3E8F0;
	tallgeese_III_assist_spawn_script_pointers[147] = 0x00D424F8;
	tallgeese_III_assist_spawn_script_pointers[148] = 0x00D43620;
	tallgeese_III_assist_spawn_script_pointers[149] = 0x00D3E900;
	tallgeese_III_assist_spawn_script_pointers[150] = 0x00D3E908;
	tallgeese_III_assist_spawn_script_pointers[151] = 0x00D3E910;
	tallgeese_III_assist_spawn_script_pointers[152] = 0x00D42558;
	tallgeese_III_assist_spawn_script_pointers[153] = 0x00D45BD0;
	tallgeese_III_assist_spawn_script_pointers[154] = 0x00D42568;
	tallgeese_III_assist_spawn_script_pointers[155] = 0x00D47398;
	tallgeese_III_assist_spawn_script_pointers[156] = 0x00D473A0;
	tallgeese_III_assist_spawn_script_pointers[157] = 0x00D42548;
	tallgeese_III_assist_spawn_script_pointers[158] = 0x00D42550;
	tallgeese_III_assist_spawn_script_pointers[159] = 0x00D425B8;
	tallgeese_III_assist_spawn_script_pointers[160] = 0x00D425C0;
	tallgeese_III_assist_spawn_script_pointers[161] = 0x00D425C8;
	tallgeese_III_assist_spawn_script_pointers[162] = 0x00D45BB0;
	tallgeese_III_assist_spawn_script_pointers[163] = 0x00D45B90;
	tallgeese_III_assist_spawn_script_pointers[164] = 0x00D49A80;
	tallgeese_III_assist_spawn_script_pointers[165] = 0x00D49AB8;

	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 16300);
	result = (unsigned int)tallgeese_III_assist_spawn_script_pointers;
	*a1 = (unsigned int)tallgeese_III_assist_spawn_script_pointers;
	return result;
}

void tallgeese_III_assist_spawn() // 0x7D2C8C
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char temp[4];
	int returnAddress;
	int returnResult;

	temp[0] = -1;
	temp[1] = 0;
	returnAddress = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780u, 0x80u, temp);
	returnResult = sub_8169AC((_DWORD *)returnAddress);
	*v2 = returnAddress;

	// set return
	temp_registers[3] = returnResult;
}
