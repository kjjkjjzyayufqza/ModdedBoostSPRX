#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../helpers/helpers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

int test_spawn_script_pointers[5000];

bool test_spawn_script_pointers_initialized;

void test_spawn_model_hash()
{
	int hash = 0xE015CC41;
}


__int64 sub_7D9E7C_test_func(_DWORD *a1)
{
	if (test_spawn_script_pointers_initialized == false)
	{
		copyJumptable((int *)0xCA1C88, test_spawn_script_pointers);
		test_spawn_script_pointers_initialized = true;

		test_spawn_script_pointers[58] = (int)test_spawn_model_hash;
	}

	__int64 result; // r3
		
	GameCall<int>(0x7ED70C, 0xd8fe60)(a1, 8190LL);
	result = (unsigned int)test_spawn_script_pointers;
	*a1 = (unsigned int)test_spawn_script_pointers;
	a1[54] = 7;
	return result;
}

void test_spawn() // originally lacus infinite justice's boomerang, 0x5596, 0x7D2604
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v1854[4];
	int v118; // r25
	int result;


	v1854[0] = -1;
	v1854[1] = 0;
	v118 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v1854);
	result = sub_7D9E7C_test_func((_DWORD*)v118);
	*v2 = v118;

	// set return
	temp_registers[3] = result;
}
