#include "new_type_script_sys_74_hook.h"
#include "registers.h"

//C-Headers (converted)
#include <cstdio>
#include <cstdlib>
#include <cwchar>
#include <cstdarg>
#include <cassert>
#include <cstddef>
#include <cmath>
#include <ctime>

//C++ Std Lib
#include <typeinfo>
#include <vector>
#include <list>
#include <algorithm>

unsigned int sys_74_no_boost_identifier_0x2e[5000];
unsigned int array_index;

void no_boost_index_change()
{
	int sys_74_args_pointer = *(int*)(temp_registers[1] + 0x70 + 0xdc); // originally r15 which is written retrieved down the line, but we get it here
	
	if (sys_74_args_pointer != 0)
	{
		int r19 = (*(int*)(temp_registers[1] + 0x70 + 0xfc));

		int unit_main_pointer_offset_0x50 = *(int*)r19; // originally r19's, this might be volatile, could cause problem in the future

		int sys_74_switch_case = *(int*)sys_74_args_pointer;

		if (sys_74_switch_case == 0x3)
		{
			int returnIndex = temp_registers[31];
			if (returnIndex != 0)
			{
				// Get the nth set's 0x2e
				int new_script_variable_pointer = unit_main_pointer_offset_0x50 - 0x50 + 0x1BABC; // new script variable area

				int target_set_pointer = new_script_variable_pointer + ((returnIndex - 1) * 0x200);

				int _0x2e_identifier = *(int*)(target_set_pointer + 0xb4);

				bool ifexist = false;

				// Check if the identifier exist
				for (int i = 0; i < 5000; i++)
				{
					if (sys_74_no_boost_identifier_0x2e[i] == _0x2e_identifier && _0x2e_identifier != 0)
					{
						ifexist = true;
						break;
					}
				}

				if (ifexist)
				{
					// Get the boost amount
					int boostAmount = *(int*)(sys_74_args_pointer + 0x30);
					if (boostAmount <= 0)
					{
						temp_registers[3] = 0;
					}
				}
			}
		}

		if (sys_74_switch_case == 0x1)
		{
			int no_boost_disable_flag = *(int*)(sys_74_args_pointer + 0x3c);
			unsigned int set_identifier_0x2e = *(int*)(sys_74_args_pointer + 0x2c);

			if (no_boost_disable_flag == 0x1)
			{
				bool ifalreadyexist = false; //(find(sys_74_no_boost_identifier_0x2e.begin(), sys_74_no_boost_identifier_0x2e.end(), set_identifier_0x2e)) != sys_74_no_boost_identifier_0x2e.end();

				for (int i = 0; i < 5000; i++)
				{
					if (sys_74_no_boost_identifier_0x2e[i] == set_identifier_0x2e)
					{
						ifalreadyexist = true;
						break;
					}
				}

				if (!ifalreadyexist)
				{
					sys_74_no_boost_identifier_0x2e[array_index] = set_identifier_0x2e;
					array_index++;
				}
			}
		}
	}
}

