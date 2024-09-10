

#include "Kampfer.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Kampfer_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Kampfer_VoiceFileList;
    Kampfer_VoiceFileList.UnitID = 0x00002F09;
    Kampfer_VoiceFileList.index = 0x00000146;
    Kampfer_VoiceFileList.voice_file_list_hash = 0x925DC192;
    Kampfer_VoiceFileList.unk_enum_0x8 = 0x000005D7;
    return Kampfer_VoiceFileList;
}

unit_voice_hash_list_0x28 Kampfer_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Kampfer_ArcadeSelectHash;
    Kampfer_ArcadeSelectHash.hash_1 = 0x528C3567; // VO_12_P04_CHARA_SELECT_01
Kampfer_ArcadeSelectHash.hash_2 = 0xCB8564DD; // VO_12_P04_CHARA_SELECT_02
Kampfer_ArcadeSelectHash.hash_3 = 0xBC82544B; // VO_12_P04_CHARA_SELECT_03
Kampfer_ArcadeSelectHash.hash_4 = 0;
Kampfer_ArcadeSelectHash.hash_5 = 0;
Kampfer_ArcadeSelectHash.hash_6 = 0;
Kampfer_ArcadeSelectHash.hash_7 = 0;
Kampfer_ArcadeSelectHash.hash_8 = 0;
Kampfer_ArcadeSelectHash.hash_9 = 0;
Kampfer_ArcadeSelectHash.hash_10 = 0;

    return Kampfer_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Kampfer_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Kampfer_ArcadeContinueNoHash;
    Kampfer_ArcadeContinueNoHash.hash_1 = 0x784BE488; // VO_12_P04_GAME_OVER_01
Kampfer_ArcadeContinueNoHash.hash_2 = 0xE142B532; // VO_12_P04_GAME_OVER_02
Kampfer_ArcadeContinueNoHash.hash_3 = 0;
Kampfer_ArcadeContinueNoHash.hash_4 = 0;
Kampfer_ArcadeContinueNoHash.hash_5 = 0;

    return Kampfer_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Kampfer_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Kampfer_ArcadeContinueHash;
    Kampfer_ArcadeContinueHash.hash_1 = 0x215D521B; // VO_12_P04_CONTINUE_DEC_01
Kampfer_ArcadeContinueHash.hash_2 = 0xB85403A1; // VO_12_P04_CONTINUE_DEC_02
Kampfer_ArcadeContinueHash.hash_3 = 0;
Kampfer_ArcadeContinueHash.hash_4 = 0;
Kampfer_ArcadeContinueHash.hash_5 = 0;

    return Kampfer_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Kampfer_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Kampfer_ArcadeContinueYesHash;
    Kampfer_ArcadeContinueYesHash.hash_1 = 0x7183C032; // VO_12_P04_CONTINUE_01
Kampfer_ArcadeContinueYesHash.hash_2 = 0xE88A9188; // VO_12_P04_CONTINUE_02
Kampfer_ArcadeContinueYesHash.hash_3 = 0x215D521B; // VO_12_P04_CONTINUE_DEC_01
Kampfer_ArcadeContinueYesHash.hash_4 = 0xB85403A1; // VO_12_P04_CONTINUE_DEC_02
Kampfer_ArcadeContinueYesHash.hash_5 = 0;
Kampfer_ArcadeContinueYesHash.hash_6 = 0;
Kampfer_ArcadeContinueYesHash.hash_7 = 0;
Kampfer_ArcadeContinueYesHash.hash_8 = 0;
Kampfer_ArcadeContinueYesHash.hash_9 = 0;
Kampfer_ArcadeContinueYesHash.hash_10 = 0;

    return Kampfer_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Kampfer_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Kampfer_BandaiNamcoGamesHash;
    Kampfer_BandaiNamcoGamesHash.hash_1 = 0;
Kampfer_BandaiNamcoGamesHash.hash_2 = 0;

    return Kampfer_BandaiNamcoGamesHash;
}

unit_hash_info Kampfer_inject_unit_hash_info()
{
    unit_hash_info Kampfer;
    Kampfer.UnitID = 0x00002F09;
    Kampfer.unk0 = 0xDDC3CBD6;
    Kampfer.DataScript = 0xB97E7433;
    Kampfer.ModelText = 0xCA117A63;
    Kampfer.OMO = 0xE5395FBA;
    Kampfer.EIDX = 0xA6A76FA0;
    Kampfer.Sound = 0x7061E3B6;
    Kampfer.GlobalPilotVoice = 0xF76A7541;
    Kampfer.WeaponImage = 0x568CF7EB;
    Kampfer.IngameImage = 0xF4009988;
    Kampfer.KPKP = 0xF0BF1EB0;
    Kampfer.VoiceFileList = 0x925DC192;
    Kampfer.Stream = 0x59E36CAD;

    return Kampfer;
}

unit_unk_enum_info Kampfer_inject_unk_enum()
{
    unit_unk_enum_info Kampfer_unk_Enum;
    Kampfer_unk_Enum.UnitID = 0x00002F09;
    Kampfer_unk_Enum.unk_enum = 0x1;
    return Kampfer_unk_Enum;
}

unit_update_unit_id_list Kampfer_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Kampfer_Update_Unit_ID_List;
    Kampfer_Update_Unit_ID_List.UnitID = 0x00002F09;
    return Kampfer_Update_Unit_ID_List;
}

unit_update_unit_id_list Kampfer_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Kampfer_Unit_ID_List_2;
    Kampfer_Unit_ID_List_2.UnitID = 0x00002F09;
    return Kampfer_Unit_ID_List_2;
}

unit_string_info Kampfer_inject_string()
{
    add_long_pilot_name_string_ID("F12041", 55);
    add_short_pilot_name_string_ID("S12041", 55);
    add_long_unit_name_string_ID("P12041", 55);
    add_short_unit_name_string_ID("Q12041", 55);

    unit_string_info Kampfer_Gundam_String;
    Kampfer_Gundam_String.UnitID = 0x00002F09;
    Kampfer_Gundam_String.unk_enum = 0xFFFFFFFF;
    Kampfer_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[55].long_pilot_name_str;
    Kampfer_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[55].short_pilot_name_str;
    Kampfer_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[55].long_unit_name_str;
    Kampfer_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[55].short_unit_name_str;

    return Kampfer_Gundam_String;
}
                        