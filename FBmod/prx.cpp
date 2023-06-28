#include "stdafx.h"

#include <cellstatus.h>
#include <sys/prx.h>
//C-Headers (converted)
#include <cstdio>
#include <cstdlib>
#include <cwchar>
#include <cstdarg>
#include <cassert>
#include <cstddef>
#include <cmath>
#include <ctime>
 
//C++ Std Lib
#include <typeinfo>
#include <vector>
#include <list>
#include <algorithm>

#include "Buttons.h"
#include "hook_functions/hook_functions.h"
#include "hook_functions/projectile_system/projectile_system.h"
#include "unit_list/unit_list_inject_hook.h"
#include "ida_macros.h"


SYS_MODULE_INFO( gundam, 0, 1, 1);
SYS_MODULE_START( _gundam_prx_entry );
SYS_MODULE_STOP(_gundam_prx_STOP);

// An exported function is needed to generate the project's PRX stub export library

extern "C" int _gundam_prx_STOP(void)
{
	printf("Hooks Unloaded\n");

    return CELL_OK;
}

int __fastcall sys_62(int a1, int a2, int a3, int *a4)
{
	int v4; // r9
	int v5; // r3

	v4 = *(int*)(a2 + 100);
	if (v4)
	{
		int temp_mem = *(int*)(v4 + 4);
		if (temp_mem != 0){
			v5 = *(int*)(v4 + 4 * *a4 + 4);
			(**(void(__fastcall ***)(int))(*(int*)v5 + 12))(v5);
		}
	}
	return 0;
}

int __fastcall sys_63(int a1, int a2, int a3, int *a4)
{
	int v4; // r9
	int v5; // r3
	
	v4 = *(int*)(a2 + 100);
	if (v4)
	{
		int temp_mem = *(int*)(v4 + 4);
		if (temp_mem != 0){
			v5 = *(int*)(v4 + 4 * *a4 + 4);
			(**(void(__fastcall ***)(int))(*(int*)v5 + 16))(v5);
		}
	}
	return 0;
}

__int64 __fastcall sub_6581FC(__int64 a1, unsigned int *a2, __int64 a3, int *a4) // sys_65
{
	unsigned int v5; // r7
	int v6; // r10
	__int64 v7; // r4
	__int64 v8; // r9
	__int64 v9; // r5
	unsigned int *v10; // r3
	__int64 v11; // r2
	double v13; // fp5
	__int64 v14; // r6
	int v15; // r9
	double v16; // fp1

	v5 = *a2;
	v6 = *a4;
	v7 = (unsigned int)a4[1];
	switch (a4[1])
	{
	case 2:
		v9 = (unsigned int)((_DWORD)a4 + 8);
		v8 = a2[25] + (__int64)(4 * v6);
		v7 = 2LL;
		goto LABEL_3;
	case 4:
		v9 = (unsigned int)((_DWORD)a4 + 8);
		v8 = a2[25] + (__int64)(4 * v6);
		v7 = 4LL;
		goto LABEL_3;
	case 5:
		v9 = (unsigned int)((_DWORD)a4 + 8);
		v8 = a2[25] + (__int64)(4 * v6);
		v7 = 5LL;
		goto LABEL_3;
	case 6:
		v9 = (unsigned int)((_DWORD)a4 + 8);
		v8 = a2[25] + (__int64)(4 * v6);
		v7 = 6LL;
		goto LABEL_3;
	case 7:
		v9 = (unsigned int)((_DWORD)a4 + 8);
		v8 = a2[25] + (__int64)(4 * v6);
		v7 = 7LL;
		goto LABEL_3;
	case 12:
		v9 = (unsigned int)((_DWORD)a4 + 8);
		v8 = a2[25] + (__int64)(4 * v6);
		v7 = 12LL;
		goto LABEL_3;
	case 17:
		v9 = (unsigned int)((_DWORD)a4 + 8);
		v8 = a2[25] + (__int64)(4 * v6);
		v7 = 17LL;
		goto LABEL_3;
	case 18:
		v9 = (unsigned int)((_DWORD)a4 + 8);
		v8 = a2[25] + (__int64)(4 * v6);
		v7 = 18LL;
		goto LABEL_3;
	case 20:
		v9 = (unsigned int)((_DWORD)a4 + 8);
		v8 = a2[25] + (__int64)(4 * v6);
		v7 = 20LL;
		goto LABEL_3;
	case 22:
		*(_DWORD *)(v5 + (__int64)(4 * v6 + 8096) + 4) = a4[2];
		return 0LL;
	case 33:
		*(_DWORD *)(v5 + (__int64)(4 * v6 + 8128) + 4) = a4[2];
		return 0LL;
	case 37:
		v13 = (double)a4[2];
		v14 = *(unsigned int *)(*(unsigned int *)(a2[25] + (__int64)(4 * v6) + 4) + 8LL);
		v15 = *(_DWORD *)(v14 + 0xC);
		v16 = (float)((float)v13 * *(float *)0xD819F8);
		*(float *)(v14 + 4) = (float)v13 * *(float *)0xD819F8;
		*(float *)(v14 + 8) = (float)v16 / (float)(unsigned int)(v15 - 1);
		return 0LL;
	default:
		v8 = a2[25] + (__int64)(4 * v6);
		v9 = 0LL;
	LABEL_3:
		v10 = (unsigned int *)*(unsigned int *)(v8 + 4);
		if (v10 != 0)
		{
			v11 = *(unsigned int *)(*(unsigned int *)(*v10 + 0x24LL) + 4LL);
			((void(__fastcall *)(unsigned int *, __int64, __int64))*(unsigned int *)*(unsigned int *)(*v10 + 0x24LL))(
				v10,
				v7,
				v9);
		}
		return 0LL;
	}
}

__int64 __fastcall sub_6570D8(__int64 a1, __int64 a2, __int64 a3, int *a4) // sys_66
{
	int v4; // r9
	int v5; // r6
	__int64 v7; // r4

	v4 = a4[1];
	v5 = *a4;

	printf("start, a2: %d \n", a2);

	if (a2 != 0)
	{
		int check1 = *(unsigned int *)(a2 + 100);

		printf("check1: %d \n", check1);
		if (check1 != 0)
		{
			int check2 = *(unsigned int *)(*(unsigned int *)(a2 + 100) + (__int64)(4 * v5) + 4);
			int check2add = *(unsigned int *)(a2 + 100) + (__int64)(4 * v5) + 4;
			printf("check2add: %d \n", check2add);
			printf("check2: %d \n", check2);
			if (check2 != 0)
			{
				int check3 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(a2 + 100) + (__int64)(4 * v5) + 4) + 8LL);

				printf("check3: %d \n", check3);
				if (check3 != 0)
				{
					if (v4 == 21)
					{
						printf("return 1");
						return (int)*(float *)(*(unsigned int *)(*(unsigned int *)(*(unsigned int *)(a2 + 100) + (__int64)(4 * v5) + 4) + 8LL) + 4LL);
					}
					if (v4 != 25)
					{
						printf("return 2");
						return 0LL;
					}
					v7 = *(unsigned int *)(*(unsigned int *)(a2 + 100) + (__int64)(4 * v5) + 4);
					printf("return 3");
					return *(int *)((unsigned int)(80 * (*(_DWORD *)(*(unsigned int *)(v7 + 8) + 0xCLL) - 1)
						+ *(_DWORD *)(*(unsigned int *)(v7 + 8) + 0x20LL))
						+ 0x48LL);
				}
			}
		}
	}

	return 0LL;
}

// sys_23 ammo_shield
__int64 __fastcall sub_658848(__int64 a1, int *a2, int a3, unsigned int *a4)
{
	int v4; // r8
	int v5; // r10
	unsigned int v6; // r11
	unsigned int v7; // r0
	unsigned int v8; // r4
	unsigned int v9; // r3
	int *v10; // r5
	int v11; // r10
	int v12; // r9
	unsigned __int64 v13; // r11
	unsigned int v14; // r9
	__int64 v15; // ctr
	int v16; // r0
	__int64 result; // r3

	v4 = 0;
	v5 = *a2;
	v6 = a2[7];
	v7 = *a4;
	if (a3 == 2)
		v4 = a4[1]; // enum for shield type
	v8 = a2[4];

	// change the ammo index since syscall will call 6, fb only has 5
	if (v7 >= 6)
	{
		v7 = 5;
		*a4 = 5;
	}

	// I think only G-Self has this enum
	if (v4 == 7)
	{
		v4 = 1;
	}
	else if (v4 == 8) // for the case of akatsuki
	{
		v4 = 1; // just shield for now, not reflecting
	}
	else if (v4 == 9) // For Zaku amazing 30% damage reduction, just remove it lol
	{
		return 0;
	}

	if (v7 > 5)
		return 0LL;
	v9 = *(_DWORD *)(v8 + (__int64)(int)(4 * v7) + 0xC);
	if (!v9)
		return 0LL;
	v10 = (int *)(unsigned int)(v5 + 9680);
	v11 = *v10;
	if (*v10 <= -1)
		goto LABEL_27;
	v12 = *(_DWORD *)(v6 + 8LL) + 851968;
	v13 = (unsigned int)(*(_DWORD *)(v6 + 8LL) + 822560);
	if (*(int *)v13 <= -1 || v11 != *(_DWORD *)v13)
	{
		v14 = v12 - 29384;
		v15 = 90LL;
		while (1)
		{
			v13 = v14;
			v16 = *(_DWORD *)v14;
			if (v16 > -1 && v11 == v16)
				break;
			if (!--v15)
				goto LABEL_27;
			v13 = v14 + 24;
			if (*(int *)v13 > -1 && v11 == *(_DWORD *)v13)
				break;
			v13 = v14 + 48;
			if (*(int *)v13 > -1 && v11 == *(_DWORD *)v13)
				break;
			v13 = v14 + 72;
			if (*(int *)v13 > -1 && v11 == *(_DWORD *)v13)
				break;
			v13 = v14 + 96;
			if (*(int *)v13 > -1 && v11 == *(_DWORD *)v13)
				break;
			v13 = v14 + 120;
			if (*(int *)v13 > -1 && v11 == *(_DWORD *)v13)
				break;
			v14 += 144;
		}
	}

	if (*(_DWORD *)(v13 + 20) && (!v4 || v4 == 4 || v4 == 5))
		result = (int)GameCall<int>(0x9ECA18, 0xd7ff30)(v9, v4, v10);
	else

	LABEL_27:
	result = (int)GameCall<int>(0x9ECA18, 0xd7ff30)(v9, v4, 0LL);

	return result;
}

__int64 __fastcall sub_656A00(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
	int v4; // r0

	if (*a4 >= 6)
	{
		*a4 = 5;
	}

	v4 = 0;
	if (*a4 <= 5u && *(_DWORD *)(*(unsigned int *)(a2 + 16) + (__int64)(4 * *a4) + 0xC))
		v4 = GameCall<int>(0x9EC9C8, 0xd7ff30)(*(unsigned int *)(*(unsigned int *)(a2 + 16) + (__int64)(4 * *a4) + 0xC));
	return v4;
}

extern "C" int _gundam_prx_entry(void)
{
	inject_unit_voice_file_list_info();
	inject_unit_hash_info();
	inject_map_hash_info();
	inject_unit_unk_enum();
	inject_unit_update_unit_id_list();
	inject_unit_update_unit_id_list_2();
	inject_unit_string_info();

	// ------------------------------------------ For BLJS10250 patch file too big hack ------------------------------------------------------

	//bypass_EXFB_psarc_check_hack();

	// ------------------------------------------ unit_ID_File_Read_Modifications ------------------------------------------------------------

	// Reading the small sprite byte, change it to the unk_0x72 short to accomodate for >255 number of small selection sprites.
	write_protected_memory(0x00226480, 0xA22B0072); // lhz r17, 0x72(r11)
	write_protected_memory(0x0023da00, 0xA0050072); // lhz r0, 0x72(r5)
	write_protected_memory(0x00246144, 0xA0050072); // lhz r0, 0x72(r5)

	// --------------------------------------------------------------------- sys_hooks -------------------------------------------------------
	write_protected_memory(0x00d3edc0, (int)&sys_62);
	write_protected_memory(0x00d3edc8, (int)&sys_63);
	write_protected_memory(0x00d3ef80, (int)&sub_6581FC);
	write_protected_memory(0x00D3EF10, (int)&sub_6570D8); // sys_66
	write_protected_memory(0x00D3EF90, (int)&sub_658848); // sys_23
	write_protected_memory(0x00D3EE98, (int)&sub_656A00); // sys_24

	// ----------------------------------------------------------------------- Hooks ---------------------------------------------------------

	hook();

	// ------------------------------------------------------------------- Small Modifications -----------------------------------------------

	// Strike Freedom surround static funnel aiming bone index 
	write_protected_memory(0x0080DCD4, (int)0x3880001e); // 0x1e = ATH_E_MAINBEAM

	//// Change Nu Gundam's funnel's ammo index
	//write_protected_memory(0x00ac1e68, (int)0x38600004); // 0x4 = 5th ammo slot

    return SYS_PRX_RESIDENT;
}


