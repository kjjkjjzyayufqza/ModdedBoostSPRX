#include "read_Burst_Damage_Multiplier_hook.h"
#include "../registers.h"

void read_Burst_Damage_Multiplier_hook() // 11e0740
{
	// We just hook once and replace all relevant multipliers here.
	unsigned int main_unit_memory_region_pointer = temp_registers[20]; // is always stored in r20.
	unsigned int burst_Multiplier_pointer = temp_registers[5]; // Different pointer for blast burst, or else always assault burst

	// Check EX Type
	int awakenType = *(int*)(main_unit_memory_region_pointer + 0xF98); // 10th reserved BABB mem region.
	int crossBurstEnum = *(int*)(main_unit_memory_region_pointer + 0xFA0); // 12th reserved BABB mem region, 1 = is in cross burst mode
	int weaponType = *(int*)(main_unit_memory_region_pointer + 0xFA4); // 13th reserved BABB mem region, 1 = shoot, 2 = melee, 0 = non implemented (non-mbon units)

	// We need to read the original from the files, instead of the temp mem location.
	// The original file has pointer on memory_region_pointer + 0x4d20
	unsigned int originalFilePointer = *(int*)(main_unit_memory_region_pointer + 0x4d20); // Pointer to the original file
	unsigned int variableRelativePointer = *(int*)(originalFilePointer + 0x1c); // The pointer to the variable start (costs)

	unsigned int nthSetOffset = (*(int*)(main_unit_memory_region_pointer + 0x4D34)) * 0x254; // 0x254 is fixed fb 0x95 number of variables, TODO make it read the number of variables, but since the game code does not care we don't care too.

	// OLD: 
	// r12 has the nth data set offset (offset to the correct unit variables, for units with different modes)

	// NEW:
	// using r12 will crash the game on console, not sure why but on certain units while in burst, 
	// anything related to multiplier will cause r12 to have 0xa instead of the proper value, thus causing alignment crash.
	// We now use a custom nthSetOffset calculation which will hopefully find the correct position

	// 0x150 is the offset from the unit cost to the multiplier memory region
	unsigned int multiplierPointer = originalFilePointer + variableRelativePointer + nthSetOffset + 0x150;

	float originalDamageMultiplier = *(float*)(multiplierPointer + 0x8);
	float originalDamageTakenMultiplier = *(float*)(multiplierPointer + 0xc);
	// Mobility is skipped, controlled in unit scripts.
	float originalDownValueMultiplier = *(float*)(multiplierPointer + 0x14);
	float originalBoostConsumptionMultiplier = *(float*)(multiplierPointer + 0x18);

	float newDamageMultiplier = originalDamageMultiplier;
	float newDamageTakenMultiplier = originalDamageTakenMultiplier;
	float newDownValueMultiplier = originalDownValueMultiplier;
	float newBoostConsumptionMultiplier = originalBoostConsumptionMultiplier;

	switch (awakenType)
	{
	case 0: // F
		if (weaponType == 0x2) // Melee
		{
			newDamageMultiplier = originalDamageMultiplier; // Using original Multiplier
			newDownValueMultiplier = 0.7; // Reduce melee down value by 30%;
		}
		else if (weaponType == 0x1)
		{
			newDamageMultiplier = 1.0; // No increase in multiplier
			newDownValueMultiplier = originalDownValueMultiplier;
		}
		break;
	case 1: // S
		if (weaponType == 0x1) // Shooting
		{
			newDamageMultiplier = originalDamageMultiplier; // Using original Multiplier (Blast Burst)
		}
		else if (weaponType == 0x2)
		{
			newDamageMultiplier = 1.0; // No increase in multiplier
		}
		newBoostConsumptionMultiplier = 1.0; // No boost consumption reduction.
		if (crossBurstEnum == 0x1) // S Burst Cross burst effect: All weapon down value reduced by 30%
		{
			// 0x1 = C burst add EX, 0x2 = S burst blue circle, 0x3 = C burst cross burst green circle
			int long_burst_ALEO_effect_flag = *(int*)(main_unit_memory_region_pointer + 0xfb8); // 18th reserved BABB mem region.
			long_burst_ALEO_effect_flag |= 0x2;
			*(int*)(main_unit_memory_region_pointer + 0xfb8) = long_burst_ALEO_effect_flag;

			newDownValueMultiplier = 0.7;
		}
		break;
	case 2: // C
		newDamageMultiplier = 1.0;
		newBoostConsumptionMultiplier = 1.0; // No boost consumption reduction.
		if (crossBurstEnum == 0x1) // C Burst Cross burst effect: reduce damage by 20%
		{
			// 0x1 = C burst add EX, 0x2 = S burst blue circle, 0x3 = C burst cross burst green circle
			int long_burst_ALEO_effect_flag = *(int*)(main_unit_memory_region_pointer + 0xfb8); // 18th reserved BABB mem region.
			long_burst_ALEO_effect_flag |= 0x4;
			*(int*)(main_unit_memory_region_pointer + 0xfb8) = long_burst_ALEO_effect_flag;

			newDamageTakenMultiplier = 0.8;
		}
		else
		{
			newDamageTakenMultiplier = 1.0;
		}
		break;
	case 3: // M
		newDamageMultiplier = 1.0;
		newDamageTakenMultiplier = 1.0;
		break;
	case 4: // R
		// damage multiplier is the increment of fighting burst / 2 (for both shooting and melee)
		float damageMultiplierIncrement = originalDamageMultiplier - 1.0;
		newDamageMultiplier = 1.0 + (damageMultiplierIncrement / 2); // should be around 5
		// damage taken multiplier is the increment of fighting burst * 2
		float damageTakenMultiplierIncrement = originalDamageTakenMultiplier - 1.0;
		newDamageTakenMultiplier = 1.0 + (damageTakenMultiplierIncrement * 2); // should be around 0.8
		newBoostConsumptionMultiplier = 1.0; // No boost consumption reduction.
		break;
	default:
		break;
	}

	*(float*)(burst_Multiplier_pointer + 0x8) = newDamageMultiplier;
	*(float*)(burst_Multiplier_pointer + 0xc) = newDamageTakenMultiplier;
	// Mobility is skipped, controlled in unit scripts.
	*(float*)(burst_Multiplier_pointer + 0x14) = newDownValueMultiplier;
	*(float*)(burst_Multiplier_pointer + 0x18) = newBoostConsumptionMultiplier;

	// Original instruction that reads the damage multiplier
	//get_temp_registers_pointer();
	//asm("mr %r17, %r3");
	//asm("addi %r17, %r17, 0x14"); // gets to the pointer of that points to r5
	//asm("lwz %r17, 0(%r17)"); // read the r5, which should be the pointer to the multiplier and stores it in r17
	//asm("lfs %f0, 0x8(%r17)");  // read the multiplier

	temp_float_registers[0] = newDamageMultiplier;
}