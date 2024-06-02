#include "double_x.h"
#include "../unit_initializations_func_scripts.h"
#include "../../../ida_macros.h"
#include "../../../stdafx.h"
#include "helpers/helpers.h"

int double_x_unit_initializations_func_scripts[16]; // Size is always 0x40
bool is_double_x_unit_initializations_func_scripts_initialized = false;

int double_x_unit_main_memory_region_func_scripts[68];
bool is_double_x_unit_main_memory_region_func_scripts_initialized = false;

// IDA decompile code note:
/*
1. argument passing is not very accurate, especially floating registers. 
If floating point register is seen, try to reanalyze the function that the floating point register is passed to, then redecompile, go as deep as possible

2. If manual fastcall is called (non sub_xxxx), need to manually change them to GameCall since calling it that way will not use the original TOC, thus making any constant reading break

3. TOC might change in function
*/

int __fastcall sub_9EC518(__int64 result, int a2, int a3, int a4, double a5, double a6, double a7, double a8, double a9)
{
	int v9; // r4

	// Manually change TOC to 0xd6ff70 from 0xd7ff30
	asm("addis %r2, %r2, -1");
	asm("addi %r2, %r2, 0x40");

	v9 = 28 * a2 + result;
	*(float *)((unsigned int)(v9 + 52) + 0x18LL) = a9;
	*(_DWORD *)(unsigned int)(v9 + 52) = a3;
	*(_DWORD *)((unsigned int)(v9 + 52) + 4LL) = a4;
	*(float *)((unsigned int)(v9 + 52) + 8LL) = a5;
	*(float *)((unsigned int)(v9 + 52) + 0xCLL) = a6;
	*(float *)((unsigned int)(v9 + 52) + 0x10LL) = a7;
	*(float *)((unsigned int)(v9 + 52) + 0x14LL) = a8;
	return result;
}

int sub_596C0C(_DWORD *a1, unsigned int a2)
{
	int v3; // r26
	__int64 v4; // r23
	__int64 v5; // r26
	double v6; // fp31
	double v7; // fp30
	double v8; // fp29
	double v9; // fp28

	v3 = (_DWORD)a1 + 0x10000;
	v4 = a2;
	GameCall<unsigned int>(0x576E7C, 0xd7ff30)((unsigned int)a1);
	*a1 = (int)double_x_unit_main_memory_region_func_scripts;
	a1[164] = 2;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 8LL) = 6;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0x2CLL) = 18;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0x34LL) = -10;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0x20LL) = 22;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0x30LL) = 10;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0xCLL) = 10;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0x10LL) = -10;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0x14LL) = 10;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0x18LL) = 10;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0x1CLL) = -10;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0x24LL) = 10;
	*(_DWORD *)((unsigned int)(v3 + 8620) + 0x28LL) = -10;
	GameCall<unsigned int>(0x6A1DDC, 0xd7ff30)((unsigned int)(v3 + 8960), 0LL, v4, 3LL, 16LL, 17LL, 18LL, 19LL, 0);
	GameCall<unsigned int>(0x6A1DDC, 0xd7ff30)((unsigned int)(v3 + 8960), 1LL, v4, 2LL, 20LL, 21LL, 22LL, 23LL, 0);
	v5 = (unsigned int)(v3 + 5856);
	v6 = *(float *)(unsigned int)*(int*)0xD7A3C4;
	v7 = *(float *)*(int*)0xD7A3C8;
	v8 = *(float *)*(int*)0xD7A3CC;
	v9 = *(float *)*(int*)0xD7A3D0;
	sub_9EC518(v5, 0, v4, 4, 0.3, v6, v7, v8, v9);
	return sub_9EC518(v5, 1, v4, 14, 1.0, v6, v7, v8, v9);
}

int double_x_model_init(int a1)
{
	int v2; // r28
	char v4[4]; // [sp+70h] [-90h] BYREF
	char v5[84]; // [sp+74h] [-8Ch] BYREF

	GameCall<int>(0x4DE430, 0xd6ff70)(v5);
	GameCall<int>(0xB176B8, 0xd6ff70)(a1, v5);
	v4[0] = -1;
	v4[1] = 0;
	v2 = GameCall<int>(0xB176C8, 0xd6ff70)(178432, 128, v4);
	// Manually change TOC to 0xd7ff30 from 0xd6ff70
	asm("addis %r2, %r2, 1");
	asm("addi %r2, %r2, -0x40");
	//GameCall<int>(0x596C0C, 0xd7ff30)((_DWORD *)v2, 0x098EA1C8); // original
	sub_596C0C((_DWORD *)v2, 0x098EA1C8);
	GameCall<int>(*(_DWORD *)*(_DWORD *)(*(_DWORD *)v2 + 120), 0xd7ff30)(v2, v5);
	*(_DWORD *)(a1 + 4) = v2;
	return GameCall<int>(0x4DE424, 0xd6ff70)(v5);
}

// ?????
__int64 __fastcall sub_5A0DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
	unsigned int v6; // r29
	unsigned __int64 v7; // r31
	__int64 v9; // r8
	unsigned int v10; // r29
	unsigned int v11; // r10
	__int64 v12; // r2
	unsigned int v13; // r10
	__int64 v14; // r2
	unsigned int v15; // r11
	__int64 result; // r3
	unsigned int v17; // r11

	v6 = a1 + 71680;
	v7 = (unsigned int)(a1 + 178308);
	GameCall<int>(0x6A5AF4, 0xd7ff30)(a1 + 178308, 0, a1 + 71680, 0xAu, 0x2Du, a6, 0x436704F6u, 0LL, 0);
	GameCall<int>(0x6A5AF4, 0xd7ff30)(v7, 1, v6, 0xAu, 0x2Du, a6, 0x436704F6u, 0LL, 0);
	v10 = *(_DWORD *)(*(unsigned int *)(a1 + 20) + 4LL);
	if (*(_DWORD *)(v7 + 4))
		GameCall<int>(0x6A7724, 0xd7ff30)(*(unsigned int *)(*(unsigned int *)(v7 + 4) + 8LL), v10);
	if (*(_DWORD *)(v7 + 8))
		GameCall<int>(0x6A7724, 0xd7ff30)(*(unsigned int *)(*(unsigned int *)(v7 + 8) + 8LL), v10);
	if (*(_DWORD *)(v7 + 12))
		GameCall<int>(0x6A7724, 0xd7ff30)(*(unsigned int *)(*(unsigned int *)(v7 + 12) + 8LL), v10);
	if (*(_DWORD *)(v7 + 16))
		GameCall<int>(0x6A7724, 0xd7ff30)(*(unsigned int *)(*(unsigned int *)(v7 + 16) + 8LL), v10);
	if (*(_DWORD *)(v7 + 20))
		GameCall<int>(0x6A7724, 0xd7ff30)(*(unsigned int *)(*(unsigned int *)(v7 + 20) + 8LL), v10);
	if (*(_DWORD *)(v7 + 24))
		GameCall<int>(0x6A7724, 0xd7ff30)(*(unsigned int *)(*(unsigned int *)(v7 + 24) + 8LL), v10);
	if (*(_DWORD *)(v7 + 28))
		GameCall<int>(0x6A7724, 0xd7ff30)(*(unsigned int *)(*(unsigned int *)(v7 + 28) + 8LL), v10);
	if (*(_DWORD *)(v7 + 32))
		GameCall<int>(0x6A7724, 0xd7ff30)(*(unsigned int *)(*(unsigned int *)(v7 + 32) + 8LL), v10);
	v11 = 0;
	if (*(_DWORD *)(*(unsigned int *)(v7 + 4) + 4LL) == 1)
		v11 = *(_DWORD *)(v7 + 4);
	v12 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)v11 + 0x14LL) + 4LL);
	GameCall<int>((*(unsigned int *)*(unsigned int *)(*(unsigned int *)v11 + 0x14LL)), 0xd7ff30)(v11, 10LL);
	v13 = 0;
	if (*(_DWORD *)(*(unsigned int *)(v7 + 8) + 4LL) == 1)
		v13 = *(_DWORD *)(v7 + 8);
	v14 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)v13 + 0x14LL) + 4LL);
	GameCall<int>((*(unsigned int *)*(unsigned int *)(*(unsigned int *)v13 + 0x14LL)), 0xd7ff30)(v13, 10LL);
	v15 = 0;
	if (*(_DWORD *)(*(unsigned int *)(v7 + 4) + 4LL) == 1)
		v15 = *(_DWORD *)(v7 + 4);
	*(_DWORD *)(*(unsigned int *)(v15 + 0x50LL) + 0x10LL) |= 1u;
	if (*(_DWORD *)(v15 + 0x54LL))
		*(_DWORD *)(*(unsigned int *)(v15 + 0x54LL) + 0x10LL) |= 1u;
	result = *(unsigned int *)(v7 + 8);
	v17 = 0;
	if (*(_DWORD *)(result + 4) == 1)
		v17 = result;
	*(_DWORD *)(*(unsigned int *)(v17 + 0x50LL) + 0x10LL) |= 1u;
	if (*(_DWORD *)(v17 + 0x54LL))
	{
		result = *(unsigned int *)(*(unsigned int *)(v17 + 0x54LL) + 0x10LL);
		*(_DWORD *)(*(unsigned int *)(v17 + 0x54LL) + 0x10LL) = result | 1;
	}
	return result;
}

int double_x_model_hash_init(int a1, int a2) 
{
	int v2; // r8
	int v3; // r7
	int v4; // r6
	int v5; // r5
	int v6; // r4

	GameCall<int>(0x576BF0, 0xd7ff30)(a1, a2); // if there's no special model to init, only this is done
	return sub_5A0DE0(a1, v6, v5, v4, v3, v2);
}

unsigned int double_x_init(const unsigned long a1)
{
	// fill default (taken from Gundam Mk-II) 0xc78200
	if (is_double_x_unit_main_memory_region_func_scripts_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xc78200), double_x_unit_main_memory_region_func_scripts);
		double_x_unit_main_memory_region_func_scripts[6] = 0xd39880; // default model init func, 0x4DE490 -> 0x4DE7F0 -> 0x4DE740 -> 0x9EA7E8
		double_x_unit_main_memory_region_func_scripts[16] = reinterpret_cast<int>(double_x_model_hash_init);
		is_double_x_unit_main_memory_region_func_scripts_initialized = true;
	}

	// fill default func (taken from destiny) 0xd71f24
	if (is_double_x_unit_initializations_func_scripts_initialized == false) {
		copyJumptable(reinterpret_cast<int*>(0xc73cb8), double_x_unit_initializations_func_scripts);
		double_x_unit_initializations_func_scripts[6] = reinterpret_cast<int>(double_x_model_init);
		is_double_x_unit_initializations_func_scripts_initialized = true;
	}
	
	short temp = -256;
	const unsigned int working_memory = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &temp, HIDWORD(a1));
	
	*reinterpret_cast<uint32*>(working_memory) = reinterpret_cast<int>(double_x_unit_initializations_func_scripts);
	*reinterpret_cast<uint32*>(working_memory + 4) = 0;
	*reinterpret_cast<uint32*>(working_memory + 8) = 0;
	*reinterpret_cast<uint32*>(working_memory + 12) = 0;
	*reinterpret_cast<uint32*>(working_memory + 16) = 0;
	*reinterpret_cast<uint32*>(working_memory + 20) = 0;
	*reinterpret_cast<uint32*>(working_memory + 24) = *reinterpret_cast<int*>(HIDWORD(a1));
	*reinterpret_cast<uint8*>(working_memory + 32) = 0;
	*reinterpret_cast<uint32*>(working_memory + 28) = 0;
	*reinterpret_cast<uint32*>(working_memory + 36) = 0;
	*reinterpret_cast<uint8*>(working_memory + 40) = 0;
	*reinterpret_cast<uint32*>(working_memory + 44) = 0;
	*reinterpret_cast<uint32*>(working_memory + 48) = 0;
	*reinterpret_cast<uint32*>(working_memory + 52) = -1;
	*reinterpret_cast<uint32*>(working_memory + 64) = 0;
	*reinterpret_cast<uint32*>(working_memory + 68) = 0;
	*reinterpret_cast<uint32*>(working_memory + 72) = 0;
	*reinterpret_cast<float*>(working_memory + 76) = 1.0f;
	*reinterpret_cast<uint32*>(working_memory + 80) = 0;
	*reinterpret_cast<uint32*>(working_memory + 84) = 0;
	*reinterpret_cast<uint32*>(working_memory + 88) = 0;
	*reinterpret_cast<float*>(working_memory + 92) = 1.0f;
	*reinterpret_cast<uint32*>(working_memory + 96) = 0;
	*reinterpret_cast<uint32*>(working_memory + 100) = 0;
	
	GameCall<int>(0xaa364c, 0xd6ff70)(working_memory, 16);
	return working_memory;
}
