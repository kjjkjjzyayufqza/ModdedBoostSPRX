

#include "Gundam_Legilis.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Gundam_Legilis_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Gundam_Legilis_VoiceFileList;
    Gundam_Legilis_VoiceFileList.UnitID = 0x0000812F;
    Gundam_Legilis_VoiceFileList.index = 0x0000013D;
    Gundam_Legilis_VoiceFileList.voice_file_list_hash = 0x2455C38F;
    Gundam_Legilis_VoiceFileList.unk_enum_0x8 = 0x000005CE;
    return Gundam_Legilis_VoiceFileList;
}

unit_voice_hash_list_0x28 Gundam_Legilis_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Gundam_Legilis_ArcadeSelectHash;
    Gundam_Legilis_ArcadeSelectHash.hash_1 = 0xB09C24FD; // VO_33_P07_CHARA_SELECT_01
Gundam_Legilis_ArcadeSelectHash.hash_2 = 0x29957547; // VO_33_P07_CHARA_SELECT_02
Gundam_Legilis_ArcadeSelectHash.hash_3 = 0x5E9245D1; // VO_33_P07_CHARA_SELECT_03
Gundam_Legilis_ArcadeSelectHash.hash_4 = 0xC0F6D072; // VO_33_P07_CHARA_SELECT_04
Gundam_Legilis_ArcadeSelectHash.hash_5 = 0xB7F1E0E4; // VO_33_P07_CHARA_SELECT_05
Gundam_Legilis_ArcadeSelectHash.hash_6 = 0;
Gundam_Legilis_ArcadeSelectHash.hash_7 = 0;
Gundam_Legilis_ArcadeSelectHash.hash_8 = 0;
Gundam_Legilis_ArcadeSelectHash.hash_9 = 0;
Gundam_Legilis_ArcadeSelectHash.hash_10 = 0;

    return Gundam_Legilis_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Gundam_Legilis_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Gundam_Legilis_ArcadeContinueNoHash;
    Gundam_Legilis_ArcadeContinueNoHash.hash_1 = 0x9FCC7143; // VO_33_P07_GAME_OVER_01
Gundam_Legilis_ArcadeContinueNoHash.hash_2 = 0x06C520F9; // VO_33_P07_GAME_OVER_02
Gundam_Legilis_ArcadeContinueNoHash.hash_3 = 0;
Gundam_Legilis_ArcadeContinueNoHash.hash_4 = 0;
Gundam_Legilis_ArcadeContinueNoHash.hash_5 = 0;

    return Gundam_Legilis_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Gundam_Legilis_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Gundam_Legilis_ArcadeContinueHash;
    Gundam_Legilis_ArcadeContinueHash.hash_1 = 0xC34D4381; // VO_33_P07_CONTINUE_DEC_01
Gundam_Legilis_ArcadeContinueHash.hash_2 = 0x5A44123B; // VO_33_P07_CONTINUE_DEC_02
Gundam_Legilis_ArcadeContinueHash.hash_3 = 0;
Gundam_Legilis_ArcadeContinueHash.hash_4 = 0;
Gundam_Legilis_ArcadeContinueHash.hash_5 = 0;

    return Gundam_Legilis_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Gundam_Legilis_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Gundam_Legilis_ArcadeContinueYesHash;
    Gundam_Legilis_ArcadeContinueYesHash.hash_1 = 0x4E3B0C3C; // VO_33_P07_CONTINUE_01
Gundam_Legilis_ArcadeContinueYesHash.hash_2 = 0xD7325D86; // VO_33_P07_CONTINUE_02
Gundam_Legilis_ArcadeContinueYesHash.hash_3 = 0xA0356D10; // VO_33_P07_CONTINUE_03
Gundam_Legilis_ArcadeContinueYesHash.hash_4 = 0xC34D4381; // VO_33_P07_CONTINUE_DEC_01
Gundam_Legilis_ArcadeContinueYesHash.hash_5 = 0x5A44123B; // VO_33_P07_CONTINUE_DEC_02
Gundam_Legilis_ArcadeContinueYesHash.hash_6 = 0;
Gundam_Legilis_ArcadeContinueYesHash.hash_7 = 0;
Gundam_Legilis_ArcadeContinueYesHash.hash_8 = 0;
Gundam_Legilis_ArcadeContinueYesHash.hash_9 = 0;
Gundam_Legilis_ArcadeContinueYesHash.hash_10 = 0;

    return Gundam_Legilis_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Gundam_Legilis_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Gundam_Legilis_BandaiNamcoGamesHash;
    Gundam_Legilis_BandaiNamcoGamesHash.hash_1 = 0;
Gundam_Legilis_BandaiNamcoGamesHash.hash_2 = 0;

    return Gundam_Legilis_BandaiNamcoGamesHash;
}

unit_hash_info Gundam_Legilis_inject_unit_hash_info()
{
    unit_hash_info Gundam_Legilis;
    Gundam_Legilis.UnitID = 0x0000812F;
    Gundam_Legilis.unk0 = 0xDDC3CBD6;
    Gundam_Legilis.DataScript = 0x51748FE4;
    Gundam_Legilis.ModelText = 0x221B81B4;
    Gundam_Legilis.OMO = 0xFD661236;
    Gundam_Legilis.EIDX = 0xBEF8222C;
    Gundam_Legilis.Sound = 0x43E71CD4;
    Gundam_Legilis.GlobalPilotVoice = 0x962DAEB2;
    Gundam_Legilis.WeaponImage = 0xE4A313AC;
    Gundam_Legilis.IngameImage = 0x98E6DA79;
    Gundam_Legilis.KPKP = 0x53A6CA4C;
    Gundam_Legilis.VoiceFileList = 0x2455C38F;
    Gundam_Legilis.Stream = 0x75C74C73;

    return Gundam_Legilis;
}

unit_unk_enum_info Gundam_Legilis_inject_unk_enum()
{
    unit_unk_enum_info Gundam_Legilis_unk_Enum;
    Gundam_Legilis_unk_Enum.UnitID = 0x0000812F;
    Gundam_Legilis_unk_Enum.unk_enum = 0x1;
    return Gundam_Legilis_unk_Enum;
}

unit_update_unit_id_list Gundam_Legilis_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Gundam_Legilis_Update_Unit_ID_List;
    Gundam_Legilis_Update_Unit_ID_List.UnitID = 0x0000812F;
    return Gundam_Legilis_Update_Unit_ID_List;
}

unit_update_unit_id_list Gundam_Legilis_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Gundam_Legilis_Unit_ID_List_2;
    Gundam_Legilis_Unit_ID_List_2.UnitID = 0x0000812F;
    return Gundam_Legilis_Unit_ID_List_2;
}

unit_string_info Gundam_Legilis_inject_string()
{
    add_long_pilot_name_string_ID("F33071", 46);
    add_short_pilot_name_string_ID("S33071", 46);
    add_long_unit_name_string_ID("P33071", 46);
    add_short_unit_name_string_ID("Q33071", 46);

    unit_string_info Gundam_Legilis_Gundam_String;
    Gundam_Legilis_Gundam_String.UnitID = 0x0000812F;
    Gundam_Legilis_Gundam_String.unk_enum = 0xFFFFFFFF;
    Gundam_Legilis_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[46].long_pilot_name_str;
    Gundam_Legilis_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[46].short_pilot_name_str;
    Gundam_Legilis_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[46].long_unit_name_str;
    Gundam_Legilis_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[46].short_unit_name_str;

    return Gundam_Legilis_Gundam_String;
}
                        