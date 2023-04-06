

#include "unit_list_structs.h"

extern pointer_list voice_hash_pointers[18];
extern unit_voice_file_list_info Gundam_Voice_File_List_Info_Arr[500]; // 215
extern unit_voice_hash_list_0x28 Arcade_select_voice_hash_Arr[500]; // 271
extern unit_voice_hash_list_0x14 Arcade_continue_no_voice_hash_Arr[500]; // 271
extern unit_voice_hash_list_0x18 Arcade_continue_voice_hash_Arr[500]; // 271
extern unit_voice_hash_list_0x28 Arcade_continue_yes_voice_hash_Arr[500]; // 271
extern unit_voice_hash_list_0x8 Bandai_Namco_Games_voice_hash_Arr[500]; // 271
// This should be 11 seperate 0x28 length hashes, and each of them has their own addi offset
// To make it simple we simplify it read, and make the offset +0x28.
extern unit_voice_hash_list_0x28 unk_voice_hash_Arr[20]; // 11 

extern unit_hash_info Gundam_Hash_Info_Arr[500]; // 214
extern map_hash_info map_hash_info_arr[500]; // 85
extern unit_unk_enum_info Gundam_unk_enum_info_Arr[300]; // 215
extern unit_update_unit_id_list Gundam_update_unit_id_list_Arr[500]; // 37
extern unit_update_unit_id_list Gundam_update_unit_id_list_2_Arr[500]; // 30
extern unit_string_info Gundam_string_info_Arr[500]; // 276
extern unit_string Added_Gundam_string_Arr[500]; // Self add custom

extern unit_voice_file_list_info Gundam_Voice_File_List_Info_2_Arr[500]; // 215

extern int voice_ID_list_loop;
extern int voice_PAC_hash_list_loop;
extern int voice_file_list_loop;
extern int hash_info_loop;
extern int hash_info_loop_2;
extern int unit_unk_info_loop;
extern int unit_id_list_1_loop_1;
extern int unit_id_list_1_loop_2;
extern int unit_id_list_1_loop_3;
extern int unit_id_list_1_count;
extern int unit_string_info_loop;

void add_long_pilot_name_string_ID(char str[], int arr_num);
void add_short_pilot_name_string_ID(char str[], int arr_num);
void add_long_unit_name_string_ID(char str[], int arr_num);
void add_short_unit_name_string_ID(char str[], int arr_num);