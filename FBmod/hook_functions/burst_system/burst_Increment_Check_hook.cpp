#include "burst_Increment_Check_hook.h"
#include "../registers.h"

void burst_Increment_Check_hook() // hooking 0x57AA1C
{
	unsigned int main_unit_memory_region_pointer = temp_registers[20]; // is always stored in r20.
	//printf("Main mem region: %p \n", main_unit_memory_region_pointer);

	int awakenEnum = *(int*)(main_unit_memory_region_pointer + 0x9DC);
	int awakenType = *(int*)(main_unit_memory_region_pointer + 0xF98); // 10th reserved BABB mem region.
	int allyBurstEnum = *(int*)(main_unit_memory_region_pointer + 0xFA0); // 12th reserved BABB mem region.

	// Cross Burst system for M and R bursts is added here too, since we can retrieve the damage here.

	// We need to read the original max boost and HP from the files, so we can compare the max value so we don't add too much.
	// The original file has pointer on memory_region_pointer + 0x4d20
	unsigned int originalFilePointer = *(int*)(main_unit_memory_region_pointer + 0x4d20); // Pointer to the original file
	//unsigned int unitModeEnum = *(int*)(main_unit_memory_region_pointer + 0xb00); // The unit mode enum, not sure if this is the correct way of finding the exact point for the file variable
	unsigned int unitModeEnum = *(int*)(main_unit_memory_region_pointer + 0x4D34);
	unsigned int variableRelativePointer = *(int*)(originalFilePointer + 0x1c); // The pointer to the variable start (costs)
	// unitModeEnum * 0x254 is nth data set offset (offset to the correct unit variables, for units with different modes)
	unsigned int variablePointer = originalFilePointer + variableRelativePointer + unitModeEnum * 0x254;

	int originalMaxHP = *(int*)(variablePointer + 0x8);
	int originalMaxBoost = *(int*)(variablePointer + 0x20);

	// M Burst Cross Burst: add boost by damage * 0.15
	if (awakenEnum > 0 && awakenType == 0x3 && allyBurstEnum == 0x1) // If is during burst, using M burst & ally is awakened (cross burst)
	{
		// 1 = not assigned (reserved), 2 = fighting burst cross burst add EX, 3 = mobility burst cross burst add boost, 4 = raging burst cross burst add HP
		int burst_halo_effect_flag = *(int*)(main_unit_memory_region_pointer + 0xfb4); // 17th reserved BABB mem region.
		burst_halo_effect_flag |= 0x4;
		*(int*)(main_unit_memory_region_pointer + 0xfb4) = burst_halo_effect_flag;

		int damage = temp_registers[3];
		float boostIncrementFloat = damage * 0.15;
		int boostIncrement = boostIncrementFloat * 100; // Round it to 2 decimal places.
		unsigned int boostPointer = main_unit_memory_region_pointer + 0x998;
		int boostValue = *(int*)boostPointer;

		if (boostValue < originalMaxBoost) // So that it will not add if the boostValue is already Max
		{
			boostValue += boostIncrement;
			*(int*)boostPointer = boostValue;
		}
	}

	// R Burst Cross Burst: add HP by damage * 0.20
	if (awakenEnum > 0 && awakenType == 0x4 && allyBurstEnum == 0x1) // If is during burst, using R burst & ally is awakened (cross burst)
	{
		// 1 = not assigned (reserved), 2 = fighting burst cross burst add EX, 4 = mobility burst cross burst add boost, 8 = raging burst cross burst add HP
		int burst_halo_effect_flag = *(int*)(main_unit_memory_region_pointer + 0xfb4); // 17th reserved BABB mem region.
		burst_halo_effect_flag |= 0x8;
		*(int*)(main_unit_memory_region_pointer + 0xfb4) = burst_halo_effect_flag;

		int damage = temp_registers[3];
		int HPIncrement = 0;
		// damage * 0.20 will get float, and (int)(damage * 0.20) will get the integer part of the float
		// see if there is decimal places, if there is, round up.
		if (damage * 0.20 - (int)(damage * 0.20) < 1.0)
		{
			HPIncrement = (int)(damage * 0.20) + 1.0; // Round up 
		}
		else
		{
			HPIncrement = (int)(damage * 0.20); // Don't round
		}

		unsigned int HPPointer = main_unit_memory_region_pointer + 0x164;
		int HPValue = *(int*)HPPointer;

		if ((HPValue + HPIncrement) < originalMaxHP)
		{
			HPValue += HPIncrement;
			*(int*)HPPointer = HPValue;
		}
		else if ((HPValue + HPIncrement) >= originalMaxHP)
		{
			*(int*)HPPointer = originalMaxHP;
		}
	}

	// F Burst Cross Burst: add EX gauge by damage * 0.10
	if (awakenEnum > 0 && awakenType == 0 && allyBurstEnum == 0x1) // If is during burst, using F burst & ally is awakened (cross burst)
	{
		// 1 = not assigned (reserved), 2 = fighting burst cross burst add EX, 3 = mobility burst cross burst add boost, 4 = raging burst cross burst add HP
		int burst_halo_effect_flag = *(int*)(main_unit_memory_region_pointer + 0xfb4); // 17th reserved BABB mem region.
		burst_halo_effect_flag |= 0x2;
		*(int*)(main_unit_memory_region_pointer + 0xfb4) = burst_halo_effect_flag;

		// Set cr1 
		// Use r17 to store the temp value.
		// If the condition is true, we set it to 0 to let it still increase the EX.
		asm("li %r17, 0");

		// %f11 is always 0.1 or 0.99 for some reason
		// %f2 is the damage in float 
		// Cross burst effect: increase EX gauge by damage * 0.1 (10%) when hit
		// %f12 is the amount of increment to be added, we just replace it in this case
		temp_float_registers[12] = temp_float_registers[2] * temp_float_registers[11];
		//asm("fmuls %f12, %f2, %f11");
	}
	else
	{
		// Restore the original r28 value, stored in the temp_register array.
		get_temp_registers_pointer();
		asm("mr %r17, %r3"); // transfer the pointer to r17
		asm("lwz %r17, 0x70(%r17)");
	}

	// Instead of the original compare with 0x28, compare it with 0x17 where we modified the value.
	asm("cmplwi %cr1, %r17, 0x1");
}
