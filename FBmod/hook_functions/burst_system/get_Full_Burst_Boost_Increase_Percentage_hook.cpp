#include "get_Full_Burst_Boost_Increase_Percentage_hook.h"
#include "../registers.h"

float full_Burst_Boost_Recover_Percentage[5];

void get_Full_Burst_Boost_Recover_Percentage_pointer()
{
	int* full_Burst_Boost_Recover_Percentage_pointer = (int*)full_Burst_Boost_Recover_Percentage; // stores in r3 and store in r1 
}

void set_constant_full_Burst_Boost_Recover_Percentage()
{
	full_Burst_Boost_Recover_Percentage[0] = 1; // F
	full_Burst_Boost_Recover_Percentage[1] = 1; // S
	full_Burst_Boost_Recover_Percentage[2] = 1; // C
	full_Burst_Boost_Recover_Percentage[3] = 1; // M
	full_Burst_Boost_Recover_Percentage[4] = 1; // R
}

void get_Full_Burst_Boost_Increase_Percentage_hook()
{
	unsigned int main_unit_memory_region_pointer = temp_registers[20]; // is always stored in r20.

	// Check if ex burst tech out flag is present
	int techOutFlag = *(int*)(main_unit_memory_region_pointer + 0xfb0); // 16th reserved BABB mem region.

	switch (techOutFlag)
	{
	case 1:
		full_Burst_Boost_Recover_Percentage[0] = 0.5;
		break;
	case 2:
		full_Burst_Boost_Recover_Percentage[0] = 0.7;
		break;
	default:
		full_Burst_Boost_Recover_Percentage[0] = 1.0;
		break;
	}

	temp_float_registers[12] = full_Burst_Boost_Recover_Percentage[0];

	//get_Full_Burst_Boost_Recover_Percentage_pointer();
	//asm("mr %r17, %r3"); // transfer the pointer to r17
	//asm("lfs %f12, 0(%r17)"); // should be the same for each case, only read from first array
}