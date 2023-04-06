// Current added units amount: 76

#include "unit_list_common.h"

pointer_list voice_hash_pointers[18];
unit_voice_file_list_info Gundam_Voice_File_List_Info_Arr[500]; // 215
unit_voice_hash_list_0x28 Arcade_select_voice_hash_Arr[500]; // 271
unit_voice_hash_list_0x14 Arcade_continue_no_voice_hash_Arr[500]; // 271
unit_voice_hash_list_0x18 Arcade_continue_voice_hash_Arr[500]; // 271
unit_voice_hash_list_0x28 Arcade_continue_yes_voice_hash_Arr[500]; // 271
unit_voice_hash_list_0x8 Bandai_Namco_Games_voice_hash_Arr[500]; // 271
// This should be 11 seperate 0x28 length hashes, and each of them has their own addi offset
// To make it simple we simplify it read, and make the offset +0x28.
unit_voice_hash_list_0x28 unk_voice_hash_Arr[20]; // 11 

unit_hash_info Gundam_Hash_Info_Arr[500]; // 214
map_hash_info map_hash_info_arr[500]; // 85
unit_unk_enum_info Gundam_unk_enum_info_Arr[300]; // 215
unit_update_unit_id_list Gundam_update_unit_id_list_Arr[500]; // 37
unit_update_unit_id_list Gundam_update_unit_id_list_2_Arr[500]; // 30
unit_string_info Gundam_string_info_Arr[500]; // 276
unit_string Added_Gundam_string_Arr[500]; // Self add custom

unit_voice_file_list_info Gundam_Voice_File_List_Info_2_Arr[500]; // 215

// Arcade select voices
int voice_ID_list_loop = 0x3800001d; // Original 0x15, +1 = 10 new units. // +80
int voice_PAC_hash_list_loop = 0x3860001d; // Original 0x15, +1 = 10 new units. // +80
int voice_file_list_loop = 0x3800001d; // Original 0x15, +1 = 10 new units. // + 80


int hash_info_loop = 0x3800001d; // Original 0x15, +1 = 10 new units. // +80
int hash_info_loop_2 = 0x3880001d; // Original 0x15, +1 = 10 new units. // +80
int unit_unk_info_loop = 0x3800001d; // Original 0x15, +1 = 10 new units. // +80
int unit_id_list_1_loop_1 = 0x288B0057; // Original 0xb, +1 for each new unit. // +76
int unit_id_list_1_loop_2 = 0x280B0057; // Original 0xb, +1 for each new unit. // +76
int unit_id_list_1_loop_3 = 0x3800000d; // Original 0x4, +1 = 9 new units. // +81
int unit_id_list_1_count = 0x70; // Original 0x24, +1 = 1 unit // +76
int unit_string_info_loop = 0x38000020; // Original 0x19, +1 = 11 new units. // +77

/*
// Arcade select voices
int voice_ID_list_loop = 0x3800007f; // Original 0x15, +1 = 10 new units.
int voice_PAC_hash_list_loop = 0x3860007f; // Original 0x15, +1 = 10 new units.
int voice_file_list_loop = 0x3800007f; // Original 0x15, +1 = 10 new units.


int hash_info_loop = 0x3800007f; // Original 0x15, +1 = 10 new units.
int hash_info_loop_2 = 0x3880007f; // Original 0x15, +1 = 10 new units.
int unit_unk_info_loop = 0x3800007f; // Original 0x15, +1 = 10 new units.
int unit_id_list_1_loop_1 = 0x288B007f; // Original 0xb, +1 for each new unit.
int unit_id_list_1_loop_2 = 0x280B007f; // Original 0xb, +1 for each new unit.
int unit_id_list_1_loop_3 = 0x3800007f; // Original 0x4, +1 = 9 new units.
int unit_id_list_1_count = 0x7f; // Original 0x24, +1 = 1 unit
int unit_string_info_loop = 0x3800007f; // Original 0x19, +1 = 11 new units.
*/

void add_long_pilot_name_string_ID(char str[], int arr_num){
	for (int i = 0; i < 8; i++) {
		Added_Gundam_string_Arr[arr_num].long_pilot_name_str[i] = str[i];
	}
}

void add_short_pilot_name_string_ID(char str[], int arr_num){
	for (int i = 0; i < 8; i++) {
		Added_Gundam_string_Arr[arr_num].short_pilot_name_str[i] = str[i];
	}
}

void add_long_unit_name_string_ID(char str[], int arr_num){
	for (int i = 0; i < 8; i++) {
		Added_Gundam_string_Arr[arr_num].long_unit_name_str[i] = str[i];
	}
}

void add_short_unit_name_string_ID(char str[], int arr_num){
	for (int i = 0; i < 8; i++) {
		Added_Gundam_string_Arr[arr_num].short_unit_name_str[i] = str[i];
	}
}