#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int test_spawn_script_pointers_test1[500];

void test_spawn_model_hash()
{
	int hex = 0x77A231D7;
}


//unsigned int test_sub_9F1088(_DWORD* a1)
//{
//	copyJumptable((int*)0xD9BE18, test_spawn_script_pointers_test1);
//	//test_spawn_script_pointers_test1[37] = (int)test_spawn_model_hash;//ALEO ? ALEO接在什么地方，和什么aleo ？
//	//test_spawn_script_pointers_test1[58] = (int)test_spawn_model_hash;//模型id
//	//test_spawn_script_pointers_test1[143] = (int)test_spawn_model_hash;//模型 大小 ??
//	//test_spawn_script_pointers_test1[162] = 0x00D45B28;
//	//test_spawn_script_pointers_test1[163] = 0x00D55400;
//	//test_spawn_script_pointers_test1[164] = 0x00D55410;
//	//test_spawn_script_pointers_test1[165] = 0x00D45A00;
//	//test_spawn_script_pointers_test1[166] = 0x00D45A08;
//	//test_spawn_script_pointers_test1[167] = 0x00D43630;
//	//test_spawn_script_pointers_test1[168] = 0x00D54F50;
//	//test_spawn_script_pointers_test1[169] = 0x00D54F58;
//	//test_spawn_script_pointers_test1[170] = 0x00D45B70;
//	//test_spawn_script_pointers_test1[171] = 0x00D54F28;
//	//test_spawn_script_pointers_test1[172] = 0x00D54F30;
//	//test_spawn_script_pointers_test1[173] = 0x00D54F38;
//	//test_spawn_script_pointers_test1[174] = 0x00D54F40;
//	//test_spawn_script_pointers_test1[175] = 0x00D45B50;
//	//test_spawn_script_pointers_test1[176] = 0x00D54F60;
//	//test_spawn_script_pointers_test1[177] = 0x00D45B80;
//	//test_spawn_script_pointers_test1[178] = 0x00D45B78;
//	//test_spawn_script_pointers_test1[179] = 0x00000000;
//	
//	__int64 result; // r3
//	//GameCall<int>(0x9F2308, 0xD9FE1C)(a1, 2410LL);
//	GameCall<int>(0x9F46C8, 0xDAFDFC)(a1, 281321LL);
//	result = *(unsigned int*)test_spawn_script_pointers_test1;
//	*a1 = result;
//	return result;
//}
//
//
//void test_spawn()
//{
//	_DWORD* v2 = (_DWORD*)temp_registers[3];
//	char v2146[4];
//	unsigned int v1215; // r26
//	__int64 result;
//
//	v2146[0] = -1;
//	v2146[1] = 0;
//	v1215 = GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v2146);
//	result = test_sub_9F1088((_DWORD*)v1215);
//	*v2 = v1215;
//
//	// set return
//	temp_registers[3] = result;
//}


unsigned int test_sub_9F1088(_DWORD* a1)
{
	printf("Hello world");

	copyJumptable((int*)0xDAA09C, test_spawn_script_pointers_test1);
	//test_spawn_script_pointers_test1[37] = (int)test_spawn_model_hash;//ALEO ? ALEO接在什么地方，和什么aleo ？
	test_spawn_script_pointers_test1[58] = (int)test_spawn_model_hash;//模型id
	//test_spawn_script_pointers_test1[143] = (int)test_spawn_model_hash;//模型 大小 ??
	
	__int64 result; // r3
	GameCall<int>(0x9F46C8, 0xDAFDFC)(a1, 281321LL);
	result = *(unsigned int*)test_spawn_script_pointers_test1;
	*a1 = *(unsigned int*)test_spawn_script_pointers_test1;
	return result;
}


void test_spawn()
{
	_DWORD* v2 = (_DWORD*)temp_registers[3];
	char v2146[4];
	unsigned int v1215; // r26
	__int64 result;

	v2146[0] = -1;
	v2146[1] = 0;
	v1215 = GameCall<int>(0x9EE338, 0xd8fe60)(18304LL, 128LL, v2146);
	result = test_sub_9F1088((_DWORD*)v1215);
	*v2 = v1215;

	// set return
	temp_registers[3] = result;
}