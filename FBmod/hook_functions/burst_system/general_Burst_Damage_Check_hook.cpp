#include "general_Burst_Damage_Check_hook.h"
#include "../registers.h"

void general_Burst_Check_hook()
{
	unsigned int main_unit_memory_region_pointer = temp_registers[20]; // is always stored in r20.

	// Put the percentage of EX Burst gauge into the reserved mem so that it can be retrieved by unit script to calculate the amount of EX needed to decrease for C burst
	float burstGaugeValue = *(float*)(main_unit_memory_region_pointer + 0x9d8);
	*(int*)(main_unit_memory_region_pointer + 0xFA8) = (int)burstGaugeValue; // 14th reserved mem 

	int number_of_units = *(int*)0x40071420;
	int awakenType = *(int*)(main_unit_memory_region_pointer + 0xF98); // 10th reserved BABB mem region.

	// Cross Burst system
	int team_index = 0;

	*(int*)(main_unit_memory_region_pointer + 0xfb4) = 0; // 17th reserved BABB mem region, resets the burst effect appear ALEO. 

	for (int i = 0; i < number_of_units; i++)
	{
		unsigned int unit_memory_pointer = *(int*)(0x40091000 + (i * 0x4));
		if (unit_memory_pointer != 0)
		{
			if (main_unit_memory_region_pointer == unit_memory_pointer)
			{
				// If this memory is the one we are checking
				team_index = *(int*)(unit_memory_pointer + 0x740);
			}
		}
	}

	int awakenEnum = *(int*)(main_unit_memory_region_pointer + 0x9DC);
	if (awakenEnum > 0)
	{
		for (int i = 0; i < number_of_units; i++)
		{
			unsigned int unit_memory_pointer = *(int*)(0x40091000 + (i * 0x4));
			if (unit_memory_pointer != 0)
			{
				int current_team_index = *(int*)(unit_memory_pointer + 0x740);
				int current_unit_StatusEnum = *(int*)(unit_memory_pointer + 0xA70); // 0 = on battlefield, 1 = explode, 2 = respawning
				int current_unit_awakenEnum = *(int*)(unit_memory_pointer + 0x9DC);
				float current_unit_C_Burst_Owed_Burst_Increment = *(float*)(unit_memory_pointer + 0xFAC); // 15th reserve mem
				float current_unit_burst_value = *(float*)(unit_memory_pointer + 0x9d8);

				// If we are at the same team

				if (current_team_index == team_index && main_unit_memory_region_pointer != unit_memory_pointer)
				{
					// Write on reserved BABB region at 0xF74, 12th data position.
					*(int*)(unit_memory_pointer + 0xF74 + 0x2c) = 1; // Cross burst enum

					// C burst special effect: add EX gauge to teammates
					if (awakenType == 0x2) // If the current player is C burst, increase gauge value of this teammate.
					{
						// The EX Burst increase effect can only be applied when the unit is on the battleground: i.e. not during explode or respawning.
						if (current_unit_StatusEnum == 0)
						{
							// 1 second = 60 frames = 1.85 percent, according to wiki
							float burst_Increment = 1.85 / 60;

							// 0x1 = C burst add EX
							int long_burst_ALEO_effect_flag = *(int*)(unit_memory_pointer + 0xfb8); // 18th reserved BABB mem region.
							long_burst_ALEO_effect_flag |= 0x1;
							*(int*)(unit_memory_pointer + 0xfb8) = long_burst_ALEO_effect_flag;

							// If your partner is awakened however, the EX increase is stored and given to your teammate all at once after their awakening is complete.
							if (current_unit_awakenEnum > 0)
							{
								*(float*)(unit_memory_pointer + 0xFAC) = current_unit_C_Burst_Owed_Burst_Increment + burst_Increment;
							}
							else
							{
								*(float*)(unit_memory_pointer + 0x9d8) = current_unit_burst_value + burst_Increment;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < number_of_units; i++)
		{
			unsigned int unit_memory_pointer = *(int*)(0x40091000 + (i * 0x4));

			if (unit_memory_pointer != 0)
			{
				int current_team_index = *(int*)(unit_memory_pointer + 0x740);
				// If we are at the same team

				if (current_team_index == team_index && main_unit_memory_region_pointer != unit_memory_pointer)
				{
					// Write on reserved BABB region at 0xF74, 12th data position.
					*(int*)(unit_memory_pointer + 0xF74 + 0x2c) = 0;

					int long_burst_ALEO_effect_flag = *(int*)(unit_memory_pointer + 0xfb8); // 18th reserved BABB mem region.
					if (long_burst_ALEO_effect_flag & 0x1)
					{
						long_burst_ALEO_effect_flag ^= 1; // remove C Burst add EX effect
						*(int*)(unit_memory_pointer + 0xfb8) = long_burst_ALEO_effect_flag;
					}
				}
			}
		}
	}

	// Turn off cross burst aleo for S and C if cross burst is not active.
	if (*(int*)(main_unit_memory_region_pointer + 0xF74 + 0x2c) == 0) // Cross burst enum
	{
		int main_long_burst_ALEO_effect_flag = *(int*)(main_unit_memory_region_pointer + 0xfb8); // 18th reserved BABB mem region.
		if ((main_long_burst_ALEO_effect_flag & 0x2) == 0x2)
		{
			main_long_burst_ALEO_effect_flag ^= 2; // remove S Burst Cross Burst Effect
			*(int*)(main_unit_memory_region_pointer + 0xfb8) = main_long_burst_ALEO_effect_flag;
		}
		if ((main_long_burst_ALEO_effect_flag & 0x4) == 0x4)
		{
			main_long_burst_ALEO_effect_flag ^= 4; // remove C Burst Cross Burst Effect
			*(int*)(main_unit_memory_region_pointer + 0xfb8) = main_long_burst_ALEO_effect_flag;
		}
	}

	for (int i = 0; i < number_of_units; i++)
	{
		unsigned int unit_memory_pointer = *(int*)(0x40091000 + (i * 0x4));

		if (unit_memory_pointer != 0)
		{
			int current_unit_awakenEnum = *(int*)(unit_memory_pointer + 0x9DC);
			float current_unit_C_Burst_Owed_Burst_Increment = *(float*)(unit_memory_pointer + 0xFAC); // 15th reserve mem
			float current_unit_burst_value = *(float*)(unit_memory_pointer + 0x9d8);

			int current_team_index = *(int*)(unit_memory_pointer + 0x740);

			if (current_team_index == team_index && main_unit_memory_region_pointer != unit_memory_pointer)
			{
				if (current_unit_awakenEnum == 0 && current_unit_C_Burst_Owed_Burst_Increment > 0)
				{
					// Now repay the owed Burst Increment from C Burst
					*(float*)(unit_memory_pointer + 0x9d8) = current_unit_burst_value + current_unit_C_Burst_Owed_Burst_Increment;
					*(float*)(unit_memory_pointer + 0xfac) = 0.0; // reset
				}
			}
		}
	}


	// Duration logic
	// Check if burst has ever made it to full
	// https://w.atwiki.jp/exvs2xb/pages/28.html
	//float burstGaugeValue = *(float*)(main_unit_memory_region_pointer + 0x9d8);
	float burstGaugeDecreaseTime; // In seconds 
	float burstGaugeDecrementRate; // full burst, 100 / (time * 60fps)

	int unitCost = *(int*)(main_unit_memory_region_pointer + 0x744);

	/*
	if (burstGaugeValue >= 100.00) // If this ever made it to full burst
	{
	*(int*)(main_unit_memory_region_pointer + 0xfa4) = 1; // If true, this flag is set, 12th reserved BABB mem region.
	}

	if (burstGaugeValue <= 0.0 && *(int*)(main_unit_memory_region_pointer + 0xfa4) == 0x1) // Once the flag is set, it will not be resetted unless the game detects it as 0 again.
	{
	*(int*)(main_unit_memory_region_pointer + 0xfa4) = 0;
	}
	*/

	char ifFullBurst = *(char*)(main_unit_memory_region_pointer + 0xa04); // The first byte is 1 if you are entering EX in Full Gauge, 0 otherwise.

	if (awakenType == 0x2) // If is C Burst
	{
		if (unitCost > 2000) // 3000 or 2500
		{
			if (ifFullBurst == 1)
			{
				burstGaugeDecreaseTime = 14;
			}
			else
			{
				burstGaugeDecreaseTime = 11;
			}

		}
		else // 2000 or 1500
		{
			if (ifFullBurst == 1)
			{
				burstGaugeDecreaseTime = 16;
			}
			else
			{
				burstGaugeDecreaseTime = 13;
			}
		}
	}
	else
	{
		if (unitCost > 2000) // 3000 or 2500
		{
			if (ifFullBurst == 1)
			{
				burstGaugeDecreaseTime = 15;
			}
			else
			{
				burstGaugeDecreaseTime = 12;
			}
		}
		else // 2000 or 1500
		{
			if (ifFullBurst == 1)
			{
				burstGaugeDecreaseTime = 17;
			}
			else
			{
				burstGaugeDecreaseTime = 14;
			}
		}
	}

	burstGaugeDecrementRate = 100 / (burstGaugeDecreaseTime * 60); // formula: Burst_Gauge_Value / (time * 60fps)

	if (ifFullBurst == 1)
	{
		*(float*)(main_unit_memory_region_pointer + 0x9d4 + 0x14) = burstGaugeDecrementRate; // Full burst decrease rate
	}
	else
	{
		*(float*)(main_unit_memory_region_pointer + 0x9d4 + 0x18) = burstGaugeDecrementRate; // Non Full burst decrease rate
	}
}
