#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

unsigned int sub_8946DC(__int64 a1, unsigned int *a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10, __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15, __int64 a16, __int64 a17, __int64 a18, __int64 a19, __int64 a20, __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25, __int64 a26, __int64(*a27)(void))
{
	int v27; // r31
	__int64 v31; // r3
	unsigned __int64 v32; // r27
	_DWORD *v33; // r29
	int v34; // r4
	int v35; // r26
	int v36; // r25
	__int64 v37; // r21
	__int64 v38; // r2
	unsigned int *v39; // r27
	__int64 v40; // r3
	unsigned __int64 v41; // r29
	_DWORD *v42; // r28
	int v43; // r0
	__int64 v44; // r3
	__int64 v45; // r2
	__int64 v46; // r3
	__int64 v47; // r3
	unsigned __int64 v48; // r27
	_DWORD *v49; // r28
	int v50; // r5
	unsigned __int64 v51; // r29
	int v52; // r26
	__int64 v53; // r2
	__int64 v54; // r3
	unsigned int *v55; // r27
	__int64 v56; // r3
	unsigned __int64 v57; // r29
	_DWORD *v58; // r31
	int v59; // r26
	int v60; // r25
	__int64 v61; // r2
	__int64 v62; // r3
	_DWORD *v63; // r28
	unsigned int *v64; // r24
	__int64 v65; // r3
	unsigned __int64 v66; // r27
	_DWORD *v67; // r28
	int v68; // r31
	__int64 v69; // r2
	__int64 v70; // r3

//	v27 = *(_DWORD *)(a1 + 18212);
//	if (v27 == 1)
//	{
//		HIBYTE(a10) = -1;
//		BYTE1(a10) = 0;
//		v31 = GameCall<int>(0x9F2198, 0xD9FE1C)(36LL, &a10);
//		v32 = (unsigned int)v31;
//		v33 = (_DWORD *)v31;
//		GameCall<int>(0x9F21A8, 0xD9FE1C)((unsigned int)v31);
//		v34 = 0xD9A524;
//		v35 = 0xD9A4D8;
//		v36 = 0xD9A51C;
//		*(_DWORD *)v32 = 0xD9A520;
//		*(_DWORD *)(v32 + 28) = 0;
//		*(_DWORD *)(v32 + 24) = 0xD78FD06;
//		*(_DWORD *)(v32 + 16) = a3;
//		*v33 = v34;
//		*(_DWORD *)(v32 + 20) = -241;
//		v33[8] = 2;
//		v37 = (unsigned int)a2;
//		v38 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
//		GameCall<int>(*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL), 0xD9FE1C)(
//			(unsigned int)a2,
//			v32);
//		v39 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
//		WORD2(a10) = -256;
//		v40 = GameCall<int>(0x9F2198, 0xD9FE1C)(28LL, (char *)&a10 + 4);
//		v41 = (unsigned int)v40;
//		v42 = (_DWORD *)v40;
//		GameCall<int>(0x9F21A8, 0xD9FE1C)((unsigned int)v40);
//		v43 = 0xD939C2D9;
//		*(_DWORD *)v41 = v35;
//	LABEL_7:
//		v44 = v37;
//		*(_DWORD *)(v41 + 16) = a3;
//		*(_DWORD *)(v41 + 20) = -241;
//		*v42 = v36;
//		v42[6] = v43;
//		goto LABEL_8;
//	}
//	if (v27 > 1)
//	{
//		if (v27 == 2)
//		{
//			HIBYTE(a11) = -1;
//			BYTE1(a11) = 0;
//			v47 = GameCall<int>(0x9F2198, 0xD9FE1C)(36LL, &a11);
//			v48 = (unsigned int)v47;
//			v49 = (_DWORD *)v47;
//			GameCall<int>(0x9F21A8, 0xD9FE1C)((unsigned int)v47);
//			v50 = 0xD9A524;
//			v51 = 0xD9A520;
//			v52 = 0xD9A4D8;
//			*(_DWORD *)(v48 + 28) = 0;
//			*(_DWORD *)v48 = v51;
//			*(_DWORD *)(v48 + 24) = 0x50DD41A5;
//			*v49 = v50;
//			*(_DWORD *)(v48 + 16) = a3;
//			*(_DWORD *)(v48 + 20) = -241;
//			v49[8] = 2;
//			v37 = (unsigned int)a2;
//			v36 = 0xD9A51C;
//			v53 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
//			GameCall<int>(*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL), 0xD9FE1C)(
//				(unsigned int)a2,
//				v48);
//			v39 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
//			WORD2(a11) = -256;
//			v54 = GameCall<int>(0x9F2198, 0xD9FE1C)(28LL, (char *)&a11 + 4);
//			v41 = (unsigned int)v54;
//			v42 = (_DWORD *)v54;
//			GameCall<int>(0x9F21A8, 0xD9FE1C)((unsigned int)v54);
//			v43 = 0x849C7E7A;
//			*(_DWORD *)v41 = v52;
//		}
//		else
//		{
//			if (v27 != 3)
//				return a27();
//			v64 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
//			v37 = (unsigned int)a2;
//			HIBYTE(a12) = -1;
//			BYTE1(a12) = 0;
//			v65 = GameCall<int>(0x9F2198, 0xD9FE1C)(28LL, &a12);
//			v66 = (unsigned int)v65;
//			v67 = (_DWORD *)v65;
//			GameCall<int>(0x9F21A8, 0xD9FE1C)((unsigned int)v65);
//			v68 = 0xD9A4D8;
//			v36 = 0xD9A51C;
//			*(_DWORD *)v66 = 0xD9A4D8;
//			*(_DWORD *)(v66 + 16) = a3;
//			*(_DWORD *)(v66 + 20) = -241;
//			*v67 = v36;
//			v67[6] = 0x3BC9E38;
//			v69 = v64[1];
//			GameCall<int>(*v64, 0xD9FE1C)((unsigned int)a2, v66);
//			v39 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
//			HIBYTE(a9) = -1;
//			BYTE1(a9) = 0;
//			v70 = GameCall<int>(0x9F2198, 0xD9FE1C)(28LL, &a9);
//			v41 = (unsigned int)v70;
//			v42 = (_DWORD *)v70;
//			GameCall<int>(0x9F21A8, 0xD9FE1C)((unsigned int)v70);
//			v43 = 0xD7FDA1E7;
//			*(_DWORD *)v41 = v68;
//		}
//		goto LABEL_7;
//	}
	//if (v27)
	//	return a1;
	//v55 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
	//WORD2(a12) = -256;
	//printf("a12: %d", (char *)&a12);
	//v56 = GameCall<int>(0x9F2198, 0xD9FE1C)(28LL, (char *)&a12 + 4);
	//v57 = (unsigned int)v56;
	//v58 = (_DWORD *)v56;
	//printf("v56: %d", (unsigned int)v56);
	//GameCall<int>(0x9F21A8, 0xD9FE1C)((unsigned int)v56);
	//v59 = 0xD9A4D8;
	//v60 = 0xD9A51C;
	//*(_DWORD *)v57 = 0xD9A4D8;
	//*(_DWORD *)(v57 + 16) = a3;
	//*(_DWORD *)(v57 + 20) = -241;
	//*v58 = v60;
	//v58[6] = 0xDA74942C; // left shoot
	//v61 = v55[1];
	////printf("%d", *v55);
	////GameCall<int>(*v55, 0xD9FE1C)((unsigned int)a2, v57);
	//v39 = (unsigned int *)*(unsigned int *)(*a2 + 0x34LL);
	//WORD2(a9) = -256;
	//printf("a9: %d", (char *)&a9);
	//v62 = GameCall<int>(0x9F2198, 0xD9FE1C)(28LL, (char *)&a9 + 4);
	//v41 = (unsigned int)v62;
	//v63 = (_DWORD *)v62;
	//printf("v62: %d", (unsigned int)v62);
	//GameCall<int>(0x9F21A8, 0xD9FE1C)((unsigned int)v62);
	//*(_DWORD *)v41 = v59;
	//*(_DWORD *)(v41 + 16) = a3;
	//*(_DWORD *)(v41 + 20) = -241;
	//v63[6] = 0xE35ABF3; // right shoot
	//v44 = (unsigned int)a2;
	//*v63 = v60;

	return a1;
}

__int64 sub_77D7F8(__int64 a1, unsigned int *a2)
{
	__int64 v4; // r3
	__int64 v5; // r27
	float *v6; // r29
	float v7; // r31
	float v8; // r21
	__int64 v9; // r3
	float *v10; // r29
	_DWORD *v11; // r28
	int v12; // r10
	__int64 v13; // r3
	float *v14; // r29
	float *v15; // r28
	float v16; // r3
	__int64 v17; // r2
	__int64 v18; // r2
	char v20[4]; // [sp+70h] [-70h] BYREF
	char v21[4]; // [sp+74h] [-6Ch] BYREF
	char v22[16]; // [sp+78h] [-68h] BYREF

	// We need to use this method to properly pass the float into the function, GameCall will incorrectly puts the float at flipped f30 and f29 onwards
	//int opd_0x9EEAF8[2] = { 0x9EEAF8, 0xd8fe60 };

	//((int(*)(unsigned int *, int, int, int))&opd_0x9EEAF8)(a2, a1, 0LL, 0LL);

	//v22[0] = -1;
	//v22[1] = 0;

	//int opd_0x9EE118[2] = { 0x9EE118, 0xd8fe60 };
	//v4 = ((int(*)(int, int))&opd_0x9EE118)(24LL, (__int64)v22);
	//v5 = (unsigned int)v4;
	//v6 = (float *)v4;
	//int opd_0x9EE998[2] = { 0x9EE998, 0xd8fe60 };
	//((int(*)(int))&opd_0x9EE998)((unsigned int)v4);
	//v7 = 0xD886A4;
	//v8 = 0xD886B8;
	//*(float *)v5 = 0xD886A4;
	//*(_DWORD *)(v5 + 16) = a1;
	//*v6 = v8;
	//*(_DWORD *)(v5 + 20) = -241;
	//v21[0] = -1;
	//v21[1] = 0;
	//v9 = ((int(*)(int, int))&opd_0x9EE118)(24LL, (__int64)v21);
	//v10 = (float *)(unsigned int)v9;
	//v11 = (_DWORD *)v9;
	//((int(*)(int))&opd_0x9EE998)((unsigned int)v9);
	//v12 = 0xD886D4;
	//*v10 = v7;
	//*((_DWORD *)v10 + 4) = a1;
	//*v11 = v12;
	//v10[5] = NAN;
	//int opd_0x9EEB28[2] = { 0x9EEB28, 0xd8fe60 };
	//((int(*)(unsigned int, int, unsigned int, int, int, int))&opd_0x9EEB28)((unsigned int)a2, a1, (unsigned int)v10, v5, (int)a2, 0);
	//v20[0] = -1;
	//v20[1] = 0;
	//v13 = ((int(*)(int, int))&opd_0x9EE118)(24LL, (__int64)v20);
	//v14 = (float *)(unsigned int)v13;
	//v15 = (float *)v13;
	//((int(*)(int))&opd_0x9EE998)((unsigned int)v13);
	//v16 = 0xD886D0;
	//*v14 = v8;
	//v14[5] = NAN;
	//*v15 = v16;
	//*((_DWORD *)v14 + 4) = a1;
	//v17 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
	//((int(*)(unsigned int *, float *))*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL))(a2, v14);
	//v18 = *(unsigned int *)(*(unsigned int *)(*a2 + 0x34LL) + 4LL);
	//((int(*)(unsigned int *, __int64))*(unsigned int *)*(unsigned int *)(*a2 + 0x34LL))(a2, v5);
	int opd_0x9EEB38[2] = { 0x9EEB38, 0xd8fe60 };
	return ((int(*)(unsigned int *, int))&opd_0x9EEB38)(a2, a1);
}

__int64 sub_897E58(unsigned int *a1, unsigned int *a2)
{
	unsigned int *v701 = a2;
	char v677[12];
	v677[0] = -1;
	v677[1] = 0;

	int opd_0x9F2198[2] = { 0x9F2198, 0xd9fe1c };
	int v5 = ((int(*)(unsigned int, __int64))&opd_0x9F2198)(156LL, (__int64)v677);

	printf("v5: %d \n", v5);

	int v558 = *(unsigned int *)(*(unsigned int *)(*v701 + 0x34LL) + 4LL);

	printf("v558: %d \n", v558);
	//printf("v701: %d \n", *(unsigned int *)*(unsigned int *)(*v701 + 0x34LL)); // 6f597c

	int www = *(unsigned int *)*(unsigned int *)(*v701 + 0x34LL);
	printf("www: %d \n", www);

	int opd_v701[2] = { www, v558 };

	int sad = ((int(*)(unsigned int, int))&opd_v701)((unsigned int)v701, v5);

	//printf("sad: %d \n", sad);

	return 0;
}

int lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[500];

void lacus_infinite_justice_strike_freedom_following_assist_model_spawn_hash()
{
	int hash = 0x952EFF2E;
}

__int64 __fastcall sub_9F1288(_DWORD *a1)
{
	__int64 result; // r3

	// 0x00CD7560
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[0] = 0x00D4C398;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[1] = 0x00D4C390;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[2] = 0x00D3B608;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[3] = 0x00D3E608;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[4] = 0x00D42328;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[5] = 0x00D4C3A8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[6] = 0x00D3E610;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[7] = 0x00D3E618;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[8] = 0x00D422B8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[9] = 0x00D422C0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[10] = 0x00D42330;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[11] = 0x00D425F8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[12] = 0x00D422C8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[13] = 0x00D422D0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[14] = 0x00D425D0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[15] = 0x00D3E620;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[16] = 0x00D422F8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[17] = 0x00D42238;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[18] = 0x00D3E660;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[19] = 0x00D3E5D8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[20] = 0x00D42258;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[21] = 0x00D3E628;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[22] = 0x00D422F0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[23] = 0x00D3E5E0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[24] = 0x00D3E5E8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[25] = 0x00D39E10;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[26] = 0x00D39E18;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[27] = 0x00D3E630;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[28] = 0x00D42450;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[29] = 0x00D3E490;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[30] = 0x00D3E498;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[31] = 0x00D3E8B0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[32] = 0x00D3E4A8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[33] = 0x00D3E4B0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[34] = 0x00D3E4B8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[35] = 0x00D3E648;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[36] = 0x00D3E720;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[37] = 0x00D4C388;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[38] = 0x00D3E600;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[39] = 0x00D420F0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[40] = 0x00D42228;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[41] = 0x00D420D0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[42] = 0x00D42270;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[43] = 0x00D424F0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[44] = 0x00D42090;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[45] = 0x00D3E4C0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[46] = 0x00D42278;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[47] = 0x00D420C8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[48] = 0x00D424C0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[49] = 0x00D42260;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[50] = 0x00D42308;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[51] = 0x00D42248;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[52] = 0x00D42250;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[53] = 0x00D422E0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[54] = 0x00D422E8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[55] = 0x00D3E4C8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[56] = 0x00D3E4D0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[57] = 0x00D42110;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[58] = (int)lacus_infinite_justice_strike_freedom_following_assist_model_spawn_hash; // 0x00D4C358;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[59] = 0x00D3E4D8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[60] = 0x00D3E4E0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[61] = 0x00D3E898;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[62] = 0x00D3E4E8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[63] = 0x00D3E4F0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[64] = 0x00D3E4F8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[65] = 0x00D4C3A0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[66] = 0x00D42500;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[67] = 0x00D4C368;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[68] = 0x00D42200;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[69] = 0x00D4C318;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[70] = 0x00D3E508;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[71] = 0x00D4C340;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[72] = 0x00D3E518;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[73] = 0x00D3E520;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[74] = 0x00D3E528;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[75] = 0x00D3E530;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[76] = 0x00D3E538;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[77] = 0x00D3E540;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[78] = 0x00D439D8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[79] = 0x00D3E548;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[80] = 0x00D3E550;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[81] = 0x00D3E8C0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[82] = 0x00D3E560;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[83] = 0x00D3E8C8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[84] = 0x00D3E570;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[85] = 0x00D3E578;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[86] = 0x00D3E580;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[87] = 0x00D3E588;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[88] = 0x00D4C300;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[89] = 0x00D4C308;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[90] = 0x00D3E5A0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[91] = 0x00D3E8D0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[92] = 0x00D439E0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[93] = 0x00D4C360;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[94] = 0x00D3E5B8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[95] = 0x00D3E5C0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[96] = 0x00D3E5C8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[97] = 0x00D3E5D0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[98] = 0x00D4C310;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[99] = 0x00D3E5F0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[100] = 0x00D3E5F8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[101] = 0x00D42240;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[102] = 0x00D421F0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[103] = 0x00D42498;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[104] = 0x00D42230;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[105] = 0x00D423B8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[106] = 0x00D42478;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[107] = 0x00D425E8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[108] = 0x00D3E640;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[109] = 0x00D42320;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[110] = 0x00D4C380;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[111] = 0x00D42358;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[112] = 0x00D42360;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[113] = 0x00D42448;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[114] = 0x00D42510;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[115] = 0x00D4C3E0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[116] = 0x00D4C3D8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[117] = 0x00D4C3D0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[118] = 0x00D4C3E8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[119] = 0x00D42388;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[120] = 0x00D42390;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[121] = 0x00D422A0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[122] = 0x00D42268;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[123] = 0x00D42428;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[124] = 0x00D42410;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[125] = 0x00D42280;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[126] = 0x00D42408;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[127] = 0x00D3E668;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[128] = 0x00D4C2F8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[129] = 0x00D3E658;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[130] = 0x00D4C378;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[131] = 0x00D3E8B8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[132] = 0x00D3E670;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[133] = 0x00D4C338;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[134] = 0x00D3E680;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[135] = 0x00D3E688;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[136] = 0x00D3E690;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[137] = 0x00D3E698;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[138] = 0x00D3E6A0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[139] = 0x00D439E8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[140] = 0x00D424B8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[141] = 0x00D42468;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[142] = 0x00D424C8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[143] = 0x00D4C320;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[144] = 0x00D3E8E0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[145] = 0x00D4C328;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[146] = 0x00D3E8F0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[147] = 0x00D4C330;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[148] = 0x00D3E8F8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[149] = 0x00D3E900;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[150] = 0x00D3E908;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[151] = 0x00D3E910;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[152] = 0x00D42558;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[153] = 0x00D4C3F8; //(int)sub_897E58;// 0x00D4C3F8; // anim stuff
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[154] = 0x00D42568; // (int)sub_77D7F8; // animation stuff
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[155] = 0x00D4C348;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[156] = 0x00D4C350;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[157] = 0x00D42548;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[158] = (int)sub_8946DC; // 0x00D4C3B8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[159] = 0x00D425B8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[160] = 0x00D425C0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[161] = 0x00D425C8;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[162] = 0x00D4C3B0;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[163] = 0x00D45B90;
	lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers[164] = 0x00D4C3F0;

	GameCall<int>(0x9F2BB8, 0xd9fe1c)(a1, 27200);
	result = 0LL;
	a1[4558] = 0;
	*a1 = (unsigned int)lacus_infinite_justice_strike_freedom_following_assist_spawn_script_pointers;
	a1[4553] = 0;
	a1[4554] = 0;
	a1[4555] = 0;
	a1[4556] = 0;
	a1[4557] = 0;
	return result;
}

void lacus_infinite_justice_strike_freedom_following_assist_spawn() // 0x7D5770
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char temp[4];
	int returnAddress;
	int returnResult;

	temp[0] = -1;
	temp[1] = 0;
	returnAddress = GameCall<int>(0x9EE338, 0xd8fe60)(0x4780u, 0x80u, temp);
	returnResult = sub_9F1288((_DWORD *)returnAddress); // d8fe60
	*v2 = returnAddress;

	// set return
	temp_registers[3] = returnResult;
}

/* from Gun-EZ's awakening follow assist, 0xCB7280
script_pointers[0] = 0x00D48470;
script_pointers[1] = 0x00D48468;
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
script_pointers[58] = 0x00D48458;
script_pointers[59] = 0x00D3E4D8;
script_pointers[60] = 0x00D3E4E0;
script_pointers[61] = 0x00D3E898;
script_pointers[62] = 0x00D3E4E8;
script_pointers[63] = 0x00D3E4F0;
script_pointers[64] = 0x00D3E4F8;
script_pointers[65] = 0x00D45B98;
script_pointers[66] = 0x00D42500;
script_pointers[67] = 0x00D42208;
script_pointers[68] = 0x00D42200;
script_pointers[69] = 0x00D3E500;
script_pointers[70] = 0x00D3E508;
script_pointers[71] = 0x00D48450;
script_pointers[72] = 0x00D3E518;
script_pointers[73] = 0x00D3E520;
script_pointers[74] = 0x00D3E528;
script_pointers[75] = 0x00D3E530;
script_pointers[76] = 0x00D3E538;
script_pointers[77] = 0x00D3E540;
script_pointers[78] = 0x00D439D8;
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
script_pointers[92] = 0x00D439E0;
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
script_pointers[124] = 0x00D42410;
script_pointers[125] = 0x00D42280;
script_pointers[126] = 0x00D42408;
script_pointers[127] = 0x00D3E668;
script_pointers[128] = 0x00D3E650;
script_pointers[129] = 0x00D3E658;
script_pointers[130] = 0x00D42470;
script_pointers[131] = 0x00D48438;
script_pointers[132] = 0x00D3E670;
script_pointers[133] = 0x00D45B88;
script_pointers[134] = 0x00D3E680;
script_pointers[135] = 0x00D3E688;
script_pointers[136] = 0x00D3E690;
script_pointers[137] = 0x00D3E698;
script_pointers[138] = 0x00D3E6A0;
script_pointers[139] = 0x00D439E8;
script_pointers[140] = 0x00D424B8;
script_pointers[141] = 0x00D42468;
script_pointers[142] = 0x00D424C8;
script_pointers[143] = 0x00D48440;
script_pointers[144] = 0x00D3E8E0;
script_pointers[145] = 0x00D3E8E8;
script_pointers[146] = 0x00D3E8F0;
script_pointers[147] = 0x00D424F8;
script_pointers[148] = 0x00D3E8F8;
script_pointers[149] = 0x00D3E900;
script_pointers[150] = 0x00D3E908;
script_pointers[151] = 0x00D3E910;
script_pointers[152] = 0x00D42558;
script_pointers[153] = 0x00D45BD0;
script_pointers[154] = 0x00D42568;
script_pointers[155] = 0x00D48460;
script_pointers[156] = 0x00D3E920;
script_pointers[157] = 0x00D42548;
script_pointers[158] = 0x00D42550;
script_pointers[159] = 0x00D425B8;
script_pointers[160] = 0x00D425C0;
script_pointers[161] = 0x00D425C8;
script_pointers[162] = 0x00D45BB0;
script_pointers[163] = 0x00D45B90;
script_pointers[164] = 0x00D48448;
script_pointers[165] = 0x00D48478;
*/