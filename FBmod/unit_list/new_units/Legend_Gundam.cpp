

#include "Legend_Gundam.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Legend_Gundam_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Legend_Gundam_VoiceFileList;
    Legend_Gundam_VoiceFileList.UnitID = 0x0000524F;
    Legend_Gundam_VoiceFileList.index = 0x0000011D;
    Legend_Gundam_VoiceFileList.voice_file_list_hash = 0x34BDC829;
    Legend_Gundam_VoiceFileList.unk_enum_0x8 = 0x000005AE;
    return Legend_Gundam_VoiceFileList;
}

unit_voice_hash_list_0x28 Legend_Gundam_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Legend_Gundam_ArcadeSelectHash;
    Legend_Gundam_ArcadeSelectHash.hash_1 = 0x43704140; // VO_21_P07_CHARA_SELECT_01
Legend_Gundam_ArcadeSelectHash.hash_2 = 0xDA7910FA; // VO_21_P07_CHARA_SELECT_02
Legend_Gundam_ArcadeSelectHash.hash_3 = 0xAD7E206C; // VO_21_P07_CHARA_SELECT_03
Legend_Gundam_ArcadeSelectHash.hash_4 = 0x331AB5CF; // VO_21_P07_CHARA_SELECT_04
Legend_Gundam_ArcadeSelectHash.hash_5 = 0x441D8559; // VO_21_P07_CHARA_SELECT_05
Legend_Gundam_ArcadeSelectHash.hash_6 = 0xDD14D4E3; // VO_21_P07_CHARA_SELECT_06
Legend_Gundam_ArcadeSelectHash.hash_7 = 0xAA13E475; // VO_21_P07_CHARA_SELECT_07
Legend_Gundam_ArcadeSelectHash.hash_8 = 0;
Legend_Gundam_ArcadeSelectHash.hash_9 = 0;
Legend_Gundam_ArcadeSelectHash.hash_10 = 0;

    return Legend_Gundam_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Legend_Gundam_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Legend_Gundam_ArcadeContinueNoHash;
    Legend_Gundam_ArcadeContinueNoHash.hash_1 = 0x4DFA9A98; // VO_21_P07_GAME_OVER_01
Legend_Gundam_ArcadeContinueNoHash.hash_2 = 0xD4F3CB22; // VO_21_P07_GAME_OVER_02
Legend_Gundam_ArcadeContinueNoHash.hash_3 = 0;
Legend_Gundam_ArcadeContinueNoHash.hash_4 = 0;
Legend_Gundam_ArcadeContinueNoHash.hash_5 = 0;

    return Legend_Gundam_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Legend_Gundam_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Legend_Gundam_ArcadeContinueHash;
    Legend_Gundam_ArcadeContinueHash.hash_1 = 0x30A1263C; // VO_21_P07_CONTINUE_DEC_01
Legend_Gundam_ArcadeContinueHash.hash_2 = 0xA9A87786; // VO_21_P07_CONTINUE_DEC_02
Legend_Gundam_ArcadeContinueHash.hash_3 = 0xDEAF4710; // VO_21_P07_CONTINUE_DEC_03
Legend_Gundam_ArcadeContinueHash.hash_4 = 0x40CBD2B3; // VO_21_P07_CONTINUE_DEC_04
Legend_Gundam_ArcadeContinueHash.hash_5 = 0x37CCE225; // VO_21_P07_CONTINUE_DEC_05

    return Legend_Gundam_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Legend_Gundam_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Legend_Gundam_ArcadeContinueYesHash;
    Legend_Gundam_ArcadeContinueYesHash.hash_1 = 0x75552A1A; // VO_21_P07_CONTINUE_01
Legend_Gundam_ArcadeContinueYesHash.hash_2 = 0xEC5C7BA0; // VO_21_P07_CONTINUE_02
Legend_Gundam_ArcadeContinueYesHash.hash_3 = 0x30A1263C; // VO_21_P07_CONTINUE_DEC_01
Legend_Gundam_ArcadeContinueYesHash.hash_4 = 0xA9A87786; // VO_21_P07_CONTINUE_DEC_02
Legend_Gundam_ArcadeContinueYesHash.hash_5 = 0xDEAF4710; // VO_21_P07_CONTINUE_DEC_03
Legend_Gundam_ArcadeContinueYesHash.hash_6 = 0x40CBD2B3; // VO_21_P07_CONTINUE_DEC_04
Legend_Gundam_ArcadeContinueYesHash.hash_7 = 0x37CCE225; // VO_21_P07_CONTINUE_DEC_05
Legend_Gundam_ArcadeContinueYesHash.hash_8 = 0;
Legend_Gundam_ArcadeContinueYesHash.hash_9 = 0;
Legend_Gundam_ArcadeContinueYesHash.hash_10 = 0;

    return Legend_Gundam_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Legend_Gundam_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Legend_Gundam_BandaiNamcoGamesHash;
    Legend_Gundam_BandaiNamcoGamesHash.hash_1 = 0x4629EC6D; // VO_21_P07_BNG_LOGO_01
Legend_Gundam_BandaiNamcoGamesHash.hash_2 = 0;

    return Legend_Gundam_BandaiNamcoGamesHash;
}

unit_hash_info Legend_Gundam_inject_unit_hash_info()
{
    unit_hash_info Legend_Gundam;
    Legend_Gundam.UnitID = 0x0000524F;
    Legend_Gundam.unk0 = 0xDDC3CBD6;
    Legend_Gundam.DataScript = 0x47373E4C;
    Legend_Gundam.ModelText = 0x3458301C;
    Legend_Gundam.OMO = 0x257D7A5D;
    Legend_Gundam.EIDX = 0x66E34A47;
    Legend_Gundam.Sound = 0xDC2F7FD5;
    Legend_Gundam.GlobalPilotVoice = 0xC65549AE;
    Legend_Gundam.WeaponImage = 0xCBDDFE73;
    Legend_Gundam.IngameImage = 0x891E9C28;
    Legend_Gundam.KPKP = 0xEA7D63DE;
    Legend_Gundam.VoiceFileList = 0x34BDC829;
    Legend_Gundam.Stream = 0x08516C03;

    return Legend_Gundam;
}

unit_unk_enum_info Legend_Gundam_inject_unk_enum()
{
    unit_unk_enum_info Legend_Gundam_unk_Enum;
    Legend_Gundam_unk_Enum.UnitID = 0x0000524F;
    Legend_Gundam_unk_Enum.unk_enum = 0x1;
    return Legend_Gundam_unk_Enum;
}

unit_update_unit_id_list Legend_Gundam_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Legend_Gundam_Update_Unit_ID_List;
    Legend_Gundam_Update_Unit_ID_List.UnitID = 0x0000524F;
    return Legend_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list Legend_Gundam_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Legend_Gundam_Unit_ID_List_2;
    Legend_Gundam_Unit_ID_List_2.UnitID = 0x0000524F;
    return Legend_Gundam_Unit_ID_List_2;
}

unit_string_info Legend_Gundam_inject_string()
{
    add_long_pilot_name_string_ID("F21071", 14);
    add_short_pilot_name_string_ID("S21071", 14);
    add_long_unit_name_string_ID("P21071", 14);
    add_short_unit_name_string_ID("Q21071", 14);

    unit_string_info Legend_Gundam_Gundam_String;
    Legend_Gundam_Gundam_String.UnitID = 0x0000524F;
    Legend_Gundam_Gundam_String.unk_enum = 0xFFFFFFFF;
    Legend_Gundam_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[14].long_pilot_name_str;
    Legend_Gundam_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[14].short_pilot_name_str;
    Legend_Gundam_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[14].long_unit_name_str;
    Legend_Gundam_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[14].short_unit_name_str;

    return Legend_Gundam_Gundam_String;
}
                        