

#include "Gedlav.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Gedlav_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Gedlav_VoiceFileList;
    Gedlav_VoiceFileList.UnitID = 0x0000140B;
    Gedlav_VoiceFileList.index = 0x0000012A;
    Gedlav_VoiceFileList.voice_file_list_hash = 0x0F269BBD;
    Gedlav_VoiceFileList.unk_enum_0x8 = 0x000005BB;
    return Gedlav_VoiceFileList;
}

unit_voice_hash_list_0x28 Gedlav_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Gedlav_ArcadeSelectHash;
    Gedlav_ArcadeSelectHash.hash_1 = 0xE3831D55; // VO_05_P13_CHARA_SELECT_01
Gedlav_ArcadeSelectHash.hash_2 = 0x7A8A4CEF; // VO_05_P13_CHARA_SELECT_02
Gedlav_ArcadeSelectHash.hash_3 = 0x0D8D7C79; // VO_05_P13_CHARA_SELECT_03
Gedlav_ArcadeSelectHash.hash_4 = 0x93E9E9DA; // VO_05_P13_CHARA_SELECT_04
Gedlav_ArcadeSelectHash.hash_5 = 0;
Gedlav_ArcadeSelectHash.hash_6 = 0;
Gedlav_ArcadeSelectHash.hash_7 = 0;
Gedlav_ArcadeSelectHash.hash_8 = 0;
Gedlav_ArcadeSelectHash.hash_9 = 0;
Gedlav_ArcadeSelectHash.hash_10 = 0;

    return Gedlav_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Gedlav_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Gedlav_ArcadeContinueNoHash;
    Gedlav_ArcadeContinueNoHash.hash_1 = 0x92B11F9C; // VO_05_P13_GAME_OVER_01
Gedlav_ArcadeContinueNoHash.hash_2 = 0x0BB84E26; // VO_05_P13_GAME_OVER_02
Gedlav_ArcadeContinueNoHash.hash_3 = 0x7CBF7EB0; // VO_05_P13_GAME_OVER_03
Gedlav_ArcadeContinueNoHash.hash_4 = 0;
Gedlav_ArcadeContinueNoHash.hash_5 = 0;

    return Gedlav_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Gedlav_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Gedlav_ArcadeContinueHash;
    Gedlav_ArcadeContinueHash.hash_1 = 0x90527A29; // VO_05_P13_CONTINUE_DEC_01
Gedlav_ArcadeContinueHash.hash_2 = 0x095B2B93; // VO_05_P13_CONTINUE_DEC_02
Gedlav_ArcadeContinueHash.hash_3 = 0x7E5C1B05; // VO_05_P13_CONTINUE_DEC_03
Gedlav_ArcadeContinueHash.hash_4 = 0xE0388EA6; // VO_05_P13_CONTINUE_DEC_04
Gedlav_ArcadeContinueHash.hash_5 = 0;

    return Gedlav_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Gedlav_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Gedlav_ArcadeContinueYesHash;
    Gedlav_ArcadeContinueYesHash.hash_1 = 0x5E3FEDB6; // VO_05_P13_CONTINUE_01
Gedlav_ArcadeContinueYesHash.hash_2 = 0xC736BC0C; // VO_05_P13_CONTINUE_02
Gedlav_ArcadeContinueYesHash.hash_3 = 0xB0318C9A; // VO_05_P13_CONTINUE_03
Gedlav_ArcadeContinueYesHash.hash_4 = 0x90527A29; // VO_05_P13_CONTINUE_DEC_01
Gedlav_ArcadeContinueYesHash.hash_5 = 0x095B2B93; // VO_05_P13_CONTINUE_DEC_02
Gedlav_ArcadeContinueYesHash.hash_6 = 0x7E5C1B05; // VO_05_P13_CONTINUE_DEC_03
Gedlav_ArcadeContinueYesHash.hash_7 = 0xE0388EA6; // VO_05_P13_CONTINUE_DEC_04
Gedlav_ArcadeContinueYesHash.hash_8 = 0;
Gedlav_ArcadeContinueYesHash.hash_9 = 0;
Gedlav_ArcadeContinueYesHash.hash_10 = 0;

    return Gedlav_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Gedlav_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Gedlav_BandaiNamcoGamesHash;
    Gedlav_BandaiNamcoGamesHash.hash_1 = 0x6D432BC1; // VO_05_P13_BNG_LOGO_01
Gedlav_BandaiNamcoGamesHash.hash_2 = 0;

    return Gedlav_BandaiNamcoGamesHash;
}

unit_hash_info Gedlav_inject_unit_hash_info()
{
    unit_hash_info Gedlav;
    Gedlav.UnitID = 0x0000140B;
    Gedlav.unk0 = 0xDDC3CBD6;
    Gedlav.DataScript = 0x9B10337B;
    Gedlav.ModelText = 0xE87F3D2B;
    Gedlav.OMO = 0x9D1CF85F;
    Gedlav.EIDX = 0xDE82C845;
    Gedlav.Sound = 0x19506CF8;
    Gedlav.GlobalPilotVoice = 0xFE1F5675;
    Gedlav.WeaponImage = 0x3ADD065D;
    Gedlav.IngameImage = 0xD20F9007;
    Gedlav.KPKP = 0x9DF62973;
    Gedlav.VoiceFileList = 0x0F269BBD;
    Gedlav.Stream = 0x9A8C73A1;

    return Gedlav;
}

unit_unk_enum_info Gedlav_inject_unk_enum()
{
    unit_unk_enum_info Gedlav_unk_Enum;
    Gedlav_unk_Enum.UnitID = 0x0000140B;
    Gedlav_unk_Enum.unk_enum = 0x1;
    return Gedlav_unk_Enum;
}

unit_update_unit_id_list Gedlav_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Gedlav_Update_Unit_ID_List;
    Gedlav_Update_Unit_ID_List.UnitID = 0x0000140B;
    return Gedlav_Update_Unit_ID_List;
}

unit_update_unit_id_list Gedlav_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Gedlav_Unit_ID_List_2;
    Gedlav_Unit_ID_List_2.UnitID = 0x0000140B;
    return Gedlav_Unit_ID_List_2;
}

unit_string_info Gedlav_inject_string()
{
    add_long_pilot_name_string_ID("F5131", 27);
    add_short_pilot_name_string_ID("S5131", 27);
    add_long_unit_name_string_ID("P5131", 27);
    add_short_unit_name_string_ID("Q5131", 27);

    unit_string_info Gedlav_Gundam_String;
    Gedlav_Gundam_String.UnitID = 0x0000140B;
    Gedlav_Gundam_String.unk_enum = 0xFFFFFFFF;
    Gedlav_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[27].long_pilot_name_str;
    Gedlav_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[27].short_pilot_name_str;
    Gedlav_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[27].long_unit_name_str;
    Gedlav_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[27].short_unit_name_str;

    return Gedlav_Gundam_String;
}
                        