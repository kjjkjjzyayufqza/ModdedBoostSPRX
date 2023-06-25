#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int full_armor_gundam_missile_spawn_script_pointers[500];

bool full_armor_gundam_missile_spawn_script_pointers_initialized;

int normal_missile_additionalProjectiles[50];
int normal_missile_onHit_additionalProjectiles[10];
int EX_missile_additionalProjectiles[50];
int EX_missile_onHit_additionalProjectiles[10];


bool isEX = false;

void CreateAdditionalProjectile(
	int projectileList[],
	int size,
	int TOC,
	int scriptPointer1,
	int scriptPointer2,
	int initialTempMemRegion,
	int param1)
{
	for (int i = 0; i < size - 1; i++)
	{
		int var1 = -1;
		int var2 = 0;
		int* temporaryMemRegion = (int *)GameCall<int>(0x9F2198, TOC)(28LL, (__int64)&var1);

		GameCall<int>(0x9F21A8, TOC)((unsigned int)temporaryMemRegion);

		*(int *)(unsigned int)temporaryMemRegion = scriptPointer1;
		*(int *)((unsigned int)temporaryMemRegion + 0x10LL) = param1;
		*(int *)((unsigned int)temporaryMemRegion + 0x14LL) = -241;
		*temporaryMemRegion = scriptPointer2;

		int projectileHash = *(int *)((int)projectileList + (i * 4));
		temporaryMemRegion[6] = projectileHash;

		if (i >= (size - 1))
		{
			unsigned int* someArray = (unsigned int *)*(unsigned int *)(*(unsigned int *)initialTempMemRegion + 0x34LL);
			int someArrayFirstItem = someArray[1];
			
			GameCall<int>(*someArray, someArrayFirstItem)((unsigned int)initialTempMemRegion, (int)temporaryMemRegion);
		}
		else
		{
			int newTOC = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)initialTempMemRegion + 0x34LL) + 4LL);
			GameCall<int>(*(unsigned int *)*(unsigned int *)(*(unsigned int *)initialTempMemRegion + 0x34LL), newTOC)((unsigned int)initialTempMemRegion, (int)temporaryMemRegion);
		}
	}
}

__int64 sub_947E94_NoHit(__int64 a1, unsigned int *a2)
{
	__int64 v4; // r3
	__int64 v5; // r23
	unsigned int *v6; // r22
	int v7; // r24
	int v8; // r27
	__int64 v9; // r3
	unsigned __int64 v10; // r28
	_DWORD *v11; // r29
	int v12; // r5
	int v13; // r21
	__int64 v14; // r2
	int v23; // r24
	__int64 v69; // r2
	__int64 v70; // r3
	__int64 v71; // r27
	unsigned int *v72; // r25
	__int64 v73; // r3
	unsigned __int64 v74; // r29
	_DWORD *v75; // r28
	int v76; // r3
	__int64 v77; // r2
	__int64 v78; // r2
	char v80[4]; // [sp+70h] [-C0h] BYREF
	char v81[4]; // [sp+74h] [-BCh] BYREF
	char v82[4]; // [sp+78h] [-B8h] BYREF
	char v85[4]; // [sp+80h] [-B0h] BYREF

	uint TOC = 0xd9fe1c;

	GameCall<int>(0x9F2548, TOC)(a1, a2);

	// start 
	v81[0] = -1;
	v81[1] = 0;
	v4 = GameCall<int>(0x9F2198, TOC)(156LL, (__int64)v81);
	v5 = (unsigned int)v4;
	v6 = (unsigned int *)v4;
	GameCall<int>(0x9F23A8, TOC)((unsigned int)v4);

	v7 = *(_DWORD *)(a1 + 16);
	v82[1] = 0;
	v82[0] = -1;
	v8 = *(_DWORD *)(a1 + 68);
	v9 = GameCall<int>(0x9F2198, TOC)(44LL, (__int64)v82);
	v10 = (unsigned int)v9;
	v11 = (_DWORD *)v9;
	GameCall<int>(0x9F21A8, TOC)((unsigned int)v9);
	v12 = *(int *)(TOC + 0x7AAC);
	v13 = *(int *)(TOC + 0x7AA4);
	*(_DWORD *)v10 = *(int *)(TOC + 0x7aa0);
	*(_DWORD *)(v10 + 16) = a1;
	*(_DWORD *)(v10 + 20) = -241;
	*v11 = (int)v12;
	v11[6] = -1655763033;
	v11[7] = 1;
	v11[8] = 0x3f800000; // 1 in float
	v11[10] = v8;
	v11[9] = v7;
	v14 = *(unsigned int *)(*(unsigned int *)(*v6 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*v6 + 0x34LL), v14)(v5, v10);

	v23 = *(int *)(TOC + 0x7AB4);

	if (!isEX)
	{
		CreateAdditionalProjectile(normal_missile_additionalProjectiles, 23, TOC, (int)v13, v23, v4, a1);
	}
	else
	{
		CreateAdditionalProjectile(EX_missile_additionalProjectiles, 23, TOC, (int)v13, v23, v4, a1);
	}

	v69 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL), v69)(a2, v5);

	v85[0] = -1;
	v85[1] = 0;
	v70 = GameCall<int>(0x9F2198, TOC)(156LL, (__int64)v85);
	v71 = (unsigned int)v70;
	v72 = (unsigned int *)v70;
	GameCall<int>(0x9F23A8, TOC)((unsigned int)v70);

	v80[0] = -1;
	v80[1] = 0;
	v73 = GameCall<int>(0x9F2198, TOC)(28LL, (__int64)v80);
	v74 = (unsigned int)v73;
	v75 = (_DWORD *)v73;
	GameCall<int>(0x9F21A8, TOC)((unsigned int)v73);
	v76 = *(int *)(TOC + 0x7Ab8);
	*(_DWORD *)v74 = (int)v13;
	*(_DWORD *)(v74 + 16) = a1;
	*(_DWORD *)(v74 + 20) = -241;
	*v75 = v76;
	v75[6] = 5;

	v77 = *(unsigned int *)(*(unsigned int *)(*v72 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*v72 + 0x34LL), v77)(v71, v74);

	v78 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
	return GameCall<int>(*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL), v78)(a2, v71);
}

__int64 sub_947E94_OnHit(__int64 a1, unsigned int *a2)
{
	__int64 v4; // r3
	__int64 v5; // r23
	unsigned int *v6; // r22
	int v7; // r24
	int v8; // r27
	__int64 v9; // r3
	unsigned __int64 v10; // r28
	_DWORD *v11; // r29
	int v12; // r5
	int v13; // r21
	__int64 v14; // r2
	int v23; // r24
	__int64 v69; // r2
	__int64 v70; // r3
	__int64 v71; // r27
	unsigned int *v72; // r25
	__int64 v73; // r3
	unsigned __int64 v74; // r29
	_DWORD *v75; // r28
	int v76; // r3
	__int64 v77; // r2
	__int64 v78; // r2
	char v80[4]; // [sp+70h] [-C0h] BYREF
	char v81[4]; // [sp+74h] [-BCh] BYREF
	char v82[4]; // [sp+78h] [-B8h] BYREF
	char v85[4]; // [sp+80h] [-B0h] BYREF

	uint TOC = 0xd9fe1c;

	GameCall<int>(0x9F2548, TOC)(a1, a2);

	// start 
	v81[0] = -1;
	v81[1] = 0;
	v4 = GameCall<int>(0x9F2198, TOC)(156LL, (__int64)v81);
	v5 = (unsigned int)v4;
	v6 = (unsigned int *)v4;

	GameCall<int>(0x9F23A8, TOC)((unsigned int)v4);

	v7 = *(_DWORD *)(a1 + 16);
	v82[1] = 0;
	v82[0] = -1;
	v8 = *(_DWORD *)(a1 + 68);
	v9 = GameCall<int>(0x9F2198, TOC)(44LL, (__int64)v82);
	v10 = (unsigned int)v9;
	v11 = (_DWORD *)v9;
	GameCall<int>(0x9F21A8, TOC)((unsigned int)v9);
	v12 = *(int *)(TOC + 0x7AAC);
	v13 = *(int *)(TOC + 0x7AA4);
	*(_DWORD *)v10 = *(int *)(TOC + 0x7aa0);
	*(_DWORD *)(v10 + 16) = a1;
	*(_DWORD *)(v10 + 20) = -241;
	*v11 = (int)v12;
	v11[6] = 0x9D4F0FA7;
	v11[7] = 1;
	v11[8] = 0x3f800000; // 1 in float
	v11[10] = v8;
	v11[9] = v7;
	v14 = *(unsigned int *)(*(unsigned int *)(*v6 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*v6 + 0x34LL), v14)(v5, v10);

	v23 = *(int *)(TOC + 0x7AB4);

	if (!isEX)
	{
		CreateAdditionalProjectile(normal_missile_onHit_additionalProjectiles, 3, TOC, (int)v13, v23, v4, a1);
	}
	else
	{
		CreateAdditionalProjectile(EX_missile_onHit_additionalProjectiles, 3, TOC, (int)v13, v23, v4, a1);
	}

	v69 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL), v69)(a2, v5);

	v85[0] = -1;
	v85[1] = 0;
	v70 = GameCall<int>(0x9F2198, TOC)(156LL, (__int64)v85);
	v71 = (unsigned int)v70;
	v72 = (unsigned int *)v70;
	GameCall<int>(0x9F23A8, TOC)((unsigned int)v70);

	v80[0] = -1;
	v80[1] = 0;
	v73 = GameCall<int>(0x9F2198, TOC)(28LL, (__int64)v80);
	v74 = (unsigned int)v73;
	v75 = (_DWORD *)v73;
	GameCall<int>(0x9F21A8, TOC)((unsigned int)v73);
	v76 = *(int *)(TOC + 0x7Ab8);
	*(_DWORD *)v74 = (int)v13;
	*(_DWORD *)(v74 + 16) = a1;
	*(_DWORD *)(v74 + 20) = -241;
	*v75 = v76;
	v75[6] = 5;

	v77 = *(unsigned int *)(*(unsigned int *)(*v72 + 0x34LL) + 4LL);
	GameCall<int>(*(unsigned int *)*(unsigned int *)(*v72 + 0x34LL), v77)(v71, v74);

	v78 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
	return GameCall<int>(*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL), v78)(a2, v71);
}

void full_armor_gundam_missile_spawn(bool isProjectileEX) // originally dynammes's GN missile
{
	isEX = isProjectileEX;

	_DWORD *tempR3Pointer = (_DWORD*)temp_registers[3];
	char tempArray[4];
	int *temporaryPointer;
	int result;

	if (full_armor_gundam_missile_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xc96d08, full_armor_gundam_missile_spawn_script_pointers);
		full_armor_gundam_missile_spawn_script_pointers_initialized = true;

		// most of the changes are taken from norn's mine pointer = 0x00D11740;
		full_armor_gundam_missile_spawn_script_pointers[29] = 0x00D537E0; // used to read the additional proerties
		full_armor_gundam_missile_spawn_script_pointers[37] = 0x00D53808;
		full_armor_gundam_missile_spawn_script_pointers[88] = 0x00D537F0;
		full_armor_gundam_missile_spawn_script_pointers[89] = 0x00D537F8;
		full_armor_gundam_missile_spawn_script_pointers[98] = 0x00D53800;
		full_armor_gundam_missile_spawn_script_pointers[115] = 0x00D42378; // if projectile will stick to enemy, change to 0x00D4CD88 to not stick
		
		// this is the function where it will load additional projectile to be fired / exploded at the same time upon the main projectile hit
		full_armor_gundam_missile_spawn_script_pointers[117] = (int)sub_947E94_OnHit;

		// this is the function where it will load additional projectile to be fired  / exploded at the same time the main projectile expires duration
		full_armor_gundam_missile_spawn_script_pointers[145] = (int)sub_947E94_NoHit;

		normal_missile_onHit_additionalProjectiles[0] = 0x764689C;
		normal_missile_onHit_additionalProjectiles[1] = 0x2C493B5F;
		normal_missile_onHit_additionalProjectiles[2] = 0x35520A1E;
		normal_missile_onHit_additionalProjectiles[3] = 0x7A139CD9;

		normal_missile_additionalProjectiles[0] = 0x764689C; // 124020892
		normal_missile_additionalProjectiles[1] = 0x2C493B5F; // 742996831
		normal_missile_additionalProjectiles[2] = 0x35520A1E; // 894568990
		normal_missile_additionalProjectiles[3] = 0x7A139CD9; // 2048105689
		normal_missile_additionalProjectiles[4] = 0x6308AD98; // 1661513112
		normal_missile_additionalProjectiles[5] = 0x4825FE5B; // 1210449499
		normal_missile_additionalProjectiles[6] = 0x513ECF1A; // 1363070746
		normal_missile_additionalProjectiles[7] = 0xD6A6D3D5; // 3601257429
		normal_missile_additionalProjectiles[8] = 0xCFBDE294; // 3485328020
		normal_missile_additionalProjectiles[9] = 0xA6C33EB8; // 2797813432
		normal_missile_additionalProjectiles[10] = 0xBFD80FF9; // 3218608121
		normal_missile_additionalProjectiles[11] = 0x94F55C3A; // 2499107898
		normal_missile_additionalProjectiles[12] = 0x8DEE6D7B; // 2381213051
		normal_missile_additionalProjectiles[13] = 0xC2AFFBBC; // 3266313148
		normal_missile_additionalProjectiles[14] = 0xDBB4CAFD; // 3686058749
		normal_missile_additionalProjectiles[15] = 0xF099993E; // 4036598078
		normal_missile_additionalProjectiles[16] = 0xE982A87F; // 3917654143
		normal_missile_additionalProjectiles[17] = 0x6E1AB4B0; // 1847243952
		normal_missile_additionalProjectiles[18] = 0x770185F1; // 1996588529
		normal_missile_additionalProjectiles[19] = 0xB4769156; // 3027669334
		normal_missile_additionalProjectiles[20] = 0xAD6DA017; // 2909642775
		normal_missile_additionalProjectiles[21] = 0x8640F3D4; // 2252403668
		normal_missile_additionalProjectiles[22] = 0x9F5BC295; // 2673590933
		normal_missile_additionalProjectiles[23] = 0xD01A5452; // 3491386450
		normal_missile_additionalProjectiles[24] = 0xC9016513; // 3372311827 // the game don't allow more than 24 
		normal_missile_additionalProjectiles[25] = 0xE22C36D0; // 3794548432
		normal_missile_additionalProjectiles[26] = 0xFB370791; // 4214687633
		normal_missile_additionalProjectiles[27] = 0x7CAF1B5E; // 2091850590
		normal_missile_additionalProjectiles[28] = 0x65B42A1F; // 1706306079
		normal_missile_additionalProjectiles[29] = 0xCCAF633; // 214627891

		normal_missile_onHit_additionalProjectiles[0] = 0x76CC6E1;
		normal_missile_onHit_additionalProjectiles[1] = 0x2C419522;
		normal_missile_onHit_additionalProjectiles[2] = 0x355AA463;
		normal_missile_onHit_additionalProjectiles[3] = 0x7A1B32A4;

		EX_missile_additionalProjectiles[0] = 0x76CC6E1; // 124569313
		EX_missile_additionalProjectiles[1] = 0x2C419522; // 742495522
		EX_missile_additionalProjectiles[2] = 0x355AA463; // 895132771
		EX_missile_additionalProjectiles[3] = 0x7A1B32A4; // 2048602788
		EX_missile_additionalProjectiles[4] = 0x630003E5; // 1660945381
		EX_missile_additionalProjectiles[5] = 0x482D5026; // 1210929190
		EX_missile_additionalProjectiles[6] = 0x51366167; // 1362518375
		EX_missile_additionalProjectiles[7] = 0xD6AE7DA8; // 3601759656
		EX_missile_additionalProjectiles[8] = 0xCFB54CE9; // 3484765417
		EX_missile_additionalProjectiles[9] = 0xA6CB90C5; // 2798358725
		EX_missile_additionalProjectiles[10] = 0xBFD0A184; // 3218121092
		EX_missile_additionalProjectiles[11] = 0x94FDF247; // 2499670599
		EX_missile_additionalProjectiles[12] = 0x8DE6C306; // 2380710662
		EX_missile_additionalProjectiles[13] = 0xC2A755C1; // 3265746369
		EX_missile_additionalProjectiles[14] = 0xDBBC6480; // 3686556800
		EX_missile_additionalProjectiles[15] = 0xF0913743; // 4036048707
		EX_missile_additionalProjectiles[16] = 0xE98A0602; // 3918136834
		EX_missile_additionalProjectiles[17] = 0x6E121ACD; // 1846680269
		EX_missile_additionalProjectiles[18] = 0x77092B8C; // 1997089676
		EX_missile_additionalProjectiles[19] = 0xB47E3F2B; // 3028172587
		EX_missile_additionalProjectiles[20] = 0xAD650E6A; // 2909081194
		EX_missile_additionalProjectiles[21] = 0x86485DA9; // 2252889513
		EX_missile_additionalProjectiles[22] = 0x9F536CE8; // 2673044712
		EX_missile_additionalProjectiles[23] = 0xD012FA2F; // 3490904623
		EX_missile_additionalProjectiles[24] = 0xC909CB6E; // 3372862318
		EX_missile_additionalProjectiles[25] = 0xE22498AD; // 3794049197
		EX_missile_additionalProjectiles[26] = 0xFB3FA9EC; // 4215253484
		EX_missile_additionalProjectiles[27] = 0x7CA7B523; // 2091365667
		EX_missile_additionalProjectiles[28] = 0x65BC8462; // 1706853474
		EX_missile_additionalProjectiles[29] = 0xCC2584E; // 214063182
	}

	tempArray[0] = -1;
	tempArray[1] = 0;
	temporaryPointer = (int *)GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, tempArray);
	result = GameCall<int>(0x9F0598, 0xd8fe60)(temporaryPointer, 14600LL);
	*temporaryPointer = (int)full_armor_gundam_missile_spawn_script_pointers; // dynammes uses another pointer here
	*tempR3Pointer = (_DWORD)temporaryPointer;

	// set return
	temp_registers[3] = result;
}

//__int64 sub_8AA194(__int64 a1, unsigned int *a2) // one continue projectile
//{
//	__int64 v2; // r9
//	int v4; // r27
//	__int64 result; // r3
//	int v6; // r31
//	__int64 v7; // r3
//	unsigned __int64 v8; // r29
//	_DWORD *v9; // r28
//	int v10; // r10
//	__int64 v11; // r2
//	char v12[16]; // [sp+70h] [-40h] BYREF
//
//	uint TOC = 0xd9fe1c;
//
//	v2 = *(unsigned int *)(a1 + 164); // get the continued projectile
//	v4 = a1;
//	result = 28LL;
//	v6 = *(_DWORD *)(v2 + 200);
//	if (v6)
//	{
//		v12[0] = -1;
//		v12[1] = 0;
//		v7 = GameCall<int>(0x9F2198, TOC)(28LL, (__int64)v12);
//		v8 = (unsigned int)v7;
//		v9 = (_DWORD *)v7;
//		GameCall<int>(0x9F21A8, TOC)((unsigned int)v7);
//		v10 = *(int *)(TOC + 0xFFFFFFFFFFFFBBE0);
//		*(_DWORD *)v8 = *(int *)(TOC + 0xFFFFFFFFFFFFBBDC);
//		*(_DWORD *)(v8 + 20) = -241;
//		*(_DWORD *)(v8 + 16) = v4;
//		*v9 = v10;
//		v9[6] = v6;
//		v11 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
//		result = GameCall<int>(*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL), v11)(
//			(unsigned int)a2,
//			v8);
//	}
//	return result;
//}
