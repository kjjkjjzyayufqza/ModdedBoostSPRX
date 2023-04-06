#include "unit_initializations_func_scripts.h"
#include "unit_specific_functions/Double_X.h"

int unit_initializations_func_scripts[16]; // Size is always 0x40
int unit_main_memory_region_func_scripts[68];

void fill_unit_initializations()
{
	// fill default func (taken from destiny) 0xd71f24
	unit_initializations_func_scripts[0] = 0xd39888;
	unit_initializations_func_scripts[1] = 0xd39878;
	unit_initializations_func_scripts[2] = 0xd396b0;
	unit_initializations_func_scripts[3] = 0xd3ba68;
	unit_initializations_func_scripts[4] = 0xd3ba48;
	unit_initializations_func_scripts[5] = 0xd3ba70;
	unit_initializations_func_scripts[6] = 0xd39880; // default model init func, 0x4DE490 -> 0x4DE7F0 -> 0x4DE740 -> 0x9EA7E8
	unit_initializations_func_scripts[7] = 0xd396a8;
	unit_initializations_func_scripts[8] = 0xd39780;
	unit_initializations_func_scripts[9] = 0xd3ba50;
	unit_initializations_func_scripts[10] = 0xd39768;
	unit_initializations_func_scripts[11] = 0xd39688;
	unit_initializations_func_scripts[12] = 0xd39690;
	unit_initializations_func_scripts[13] = 0;
	unit_initializations_func_scripts[14] = 0;
	unit_initializations_func_scripts[15] = 0;
}

void fill_unit_main_memory_region()
{
	// fill default (taken from Gundam Mk-II) 0xc78200
	unit_main_memory_region_func_scripts[0] = 0x00D3C8A8;
	unit_main_memory_region_func_scripts[1] = 0x00D3C8A0;
	unit_main_memory_region_func_scripts[2] = 0x00D3B608;
	unit_main_memory_region_func_scripts[3] = 0x00D3A6E8;
	unit_main_memory_region_func_scripts[4] = 0x00D3B990;
	unit_main_memory_region_func_scripts[5] = 0x00D3B980;
	unit_main_memory_region_func_scripts[6] = 0x00D3B770;
	unit_main_memory_region_func_scripts[7] = 0x00D3B7B0;
	unit_main_memory_region_func_scripts[8] = 0x00D3A6F0;
	unit_main_memory_region_func_scripts[9] = 0x00D3B778;
	unit_main_memory_region_func_scripts[10] = 0x00D3B7A8;
	unit_main_memory_region_func_scripts[11] = 0x00D3B970;
	unit_main_memory_region_func_scripts[12] = 0x00D3B788;
	unit_main_memory_region_func_scripts[13] = 0x00D3B8E8;
	unit_main_memory_region_func_scripts[14] = 0x00D3B988;
	unit_main_memory_region_func_scripts[15] = 0x00D3B968;
	unit_main_memory_region_func_scripts[16] = 0x00D3B918;
	unit_main_memory_region_func_scripts[17] = 0x00D3B948;
	unit_main_memory_region_func_scripts[18] = 0x00D3A770;
	unit_main_memory_region_func_scripts[19] = 0x00D39EA0;
	unit_main_memory_region_func_scripts[20] = 0x00D3B680;
	unit_main_memory_region_func_scripts[21] = 0x00D39E40;
	unit_main_memory_region_func_scripts[22] = 0x00D3B8F8;
	unit_main_memory_region_func_scripts[23] = 0x00D3A700;
	unit_main_memory_region_func_scripts[24] = 0x00D3A708;
	unit_main_memory_region_func_scripts[25] = 0x00D3B958;
	unit_main_memory_region_func_scripts[26] = 0x00D3A728;
	unit_main_memory_region_func_scripts[27] = 0x00D3A730;
	unit_main_memory_region_func_scripts[28] = 0x00D3B6A0;
	unit_main_memory_region_func_scripts[29] = 0x00D3A6D0;
	unit_main_memory_region_func_scripts[30] = 0x00D3B950;
	unit_main_memory_region_func_scripts[31] = 0x00D3B978;
	unit_main_memory_region_func_scripts[32] = 0x00D3B908;
	unit_main_memory_region_func_scripts[33] = 0x00D3B900;
	unit_main_memory_region_func_scripts[34] = 0x00D3B930;
	unit_main_memory_region_func_scripts[35] = 0x00D3A6D8;
	unit_main_memory_region_func_scripts[36] = 0x00D3A738;
	unit_main_memory_region_func_scripts[37] = 0x00D3A740;
	unit_main_memory_region_func_scripts[38] = 0x00D39E38;
	unit_main_memory_region_func_scripts[39] = 0x00D3B790;
	unit_main_memory_region_func_scripts[40] = 0x00D3A6E0;
	unit_main_memory_region_func_scripts[41] = 0x00D3B760;
	unit_main_memory_region_func_scripts[42] = 0x00D3A6F8;
	unit_main_memory_region_func_scripts[43] = 0x00D3B710;
	unit_main_memory_region_func_scripts[44] = 0x00D3B728;
	unit_main_memory_region_func_scripts[45] = 0x00D3C8B0;
	unit_main_memory_region_func_scripts[46] = 0x00D3B6D8;
	unit_main_memory_region_func_scripts[47] = 0x00D3B748;
	unit_main_memory_region_func_scripts[48] = 0x00D3B730;
	unit_main_memory_region_func_scripts[49] = 0x00D3A710;
	unit_main_memory_region_func_scripts[50] = 0x00D3A718;
	unit_main_memory_region_func_scripts[51] = 0x00D3B940;
	unit_main_memory_region_func_scripts[52] = 0x00D3A720;
	unit_main_memory_region_func_scripts[53] = 0x00D3B8E0;
	unit_main_memory_region_func_scripts[54] = 0x00D3B740;
	unit_main_memory_region_func_scripts[55] = 0x00D3B960;
	unit_main_memory_region_func_scripts[56] = 0x00D3A748;
	unit_main_memory_region_func_scripts[57] = 0x00D3A750;
	unit_main_memory_region_func_scripts[58] = 0x00D3A758;
	unit_main_memory_region_func_scripts[59] = 0x00D3A760;
	unit_main_memory_region_func_scripts[60] = 0x00D3A768;
	unit_main_memory_region_func_scripts[61] = 0x00D3A778;
	unit_main_memory_region_func_scripts[62] = 0x00D3B920;
	unit_main_memory_region_func_scripts[63] = 0x00D3B928;
	unit_main_memory_region_func_scripts[64] = 0x00D3A780;
	unit_main_memory_region_func_scripts[65] = 0x00D3A788;
	unit_main_memory_region_func_scripts[66] = 0x00000000;
	unit_main_memory_region_func_scripts[67] = 0x00000000;
}

void double_x_init()
{
	fill_unit_initializations();
	unit_initializations_func_scripts[6] = (int)double_x_model_init;

	fill_unit_main_memory_region();
	unit_main_memory_region_func_scripts[16] = (int)double_x_model_hash_init;
}