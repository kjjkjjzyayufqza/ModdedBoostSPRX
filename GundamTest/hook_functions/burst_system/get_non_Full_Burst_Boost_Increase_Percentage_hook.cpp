#include "get_non_Full_Burst_Boost_Increase_Percentage_hook.h"
#include "../registers.h"

float non_Full_Burst_Boost_Recover_Percentage[5];

void get_non_Full_Burst_Boost_Recover_Percentage_pointer()
{
	int* non_Full_Burst_Boost_Recover_Percentage_pointer = (int*)non_Full_Burst_Boost_Recover_Percentage; // stores in r3 and store in r1 
}

void set_constant_non_full_Burst_Boost_Recover_Percentage()
{
	non_Full_Burst_Boost_Recover_Percentage[0] = 0.5; // F
	non_Full_Burst_Boost_Recover_Percentage[1] = 0.3; // S
	non_Full_Burst_Boost_Recover_Percentage[2] = 0.5; // C
	non_Full_Burst_Boost_Recover_Percentage[3] = 0.3; // M
	non_Full_Burst_Boost_Recover_Percentage[4] = 0.5; // R
}


void get_non_Full_Burst_Boost_Increase_Percentage_hook()
{
	unsigned int main_unit_memory_region_pointer = temp_registers[20]; // is always stored in r20.

	// Check EX Type
	int awakenType = *(int*)(main_unit_memory_region_pointer + 0xF98); // 10th reserved BABB mem region.

	get_non_Full_Burst_Boost_Recover_Percentage_pointer();
	//asm("mr %r17, %r3"); // transfer the pointer to r17

	switch (awakenType)
	{
	case 0: // F
		temp_float_registers[12] = non_Full_Burst_Boost_Recover_Percentage[0];
		//asm("lfs %f12, 0(%r17)");
		break;
	case 1: // S
		temp_float_registers[12] = non_Full_Burst_Boost_Recover_Percentage[1];
		//asm("lfs %f12, 0x4(%r17)");
		break;
	case 2: // C
		temp_float_registers[12] = non_Full_Burst_Boost_Recover_Percentage[2];
		//asm("lfs %f12, 0x8(%r17)");
		break;
	case 3: // M
		temp_float_registers[12] = non_Full_Burst_Boost_Recover_Percentage[3];
		//asm("lfs %f12, 0xc(%r17)");
		break;
	case 4: // R
		temp_float_registers[12] = non_Full_Burst_Boost_Recover_Percentage[4];
		//asm("lfs %f12, 0x10(%r17)");
		break;
	default:
		break;
	}
}