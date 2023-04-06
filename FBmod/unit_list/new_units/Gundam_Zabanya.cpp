

#include "Gundam_Zabanya.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Gundam_Zabanya_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Gundam_Zabanya_VoiceFileList;
    Gundam_Zabanya_VoiceFileList.UnitID = 0x000069AB;
    Gundam_Zabanya_VoiceFileList.index = 0x00000122;
    Gundam_Zabanya_VoiceFileList.voice_file_list_hash = 0x80B6EBAD;
    Gundam_Zabanya_VoiceFileList.unk_enum_0x8 = 0x000005B3;
    return Gundam_Zabanya_VoiceFileList;
}

unit_voice_hash_list_0x28 Gundam_Zabanya_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Gundam_Zabanya_ArcadeSelectHash;
    Gundam_Zabanya_ArcadeSelectHash.hash_1 = 0x6171D441; // VO_27_P05_CHARA_SELECT_01
Gundam_Zabanya_ArcadeSelectHash.hash_2 = 0xF87885FB; // VO_27_P05_CHARA_SELECT_02
Gundam_Zabanya_ArcadeSelectHash.hash_3 = 0x8F7FB56D; // VO_27_P05_CHARA_SELECT_03
Gundam_Zabanya_ArcadeSelectHash.hash_4 = 0x111B20CE; // VO_27_P05_CHARA_SELECT_04
Gundam_Zabanya_ArcadeSelectHash.hash_5 = 0x661C1058; // VO_27_P05_CHARA_SELECT_05
Gundam_Zabanya_ArcadeSelectHash.hash_6 = 0xA3DCF4B8; // VO_14_P04_CHARA_SELECT_05
Gundam_Zabanya_ArcadeSelectHash.hash_7 = 0;
Gundam_Zabanya_ArcadeSelectHash.hash_8 = 0;
Gundam_Zabanya_ArcadeSelectHash.hash_9 = 0;
Gundam_Zabanya_ArcadeSelectHash.hash_10 = 0;

    return Gundam_Zabanya_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Gundam_Zabanya_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Gundam_Zabanya_ArcadeContinueNoHash;
    Gundam_Zabanya_ArcadeContinueNoHash.hash_1 = 0xA2E8E2B0; // VO_27_P05_GAME_OVER_01
Gundam_Zabanya_ArcadeContinueNoHash.hash_2 = 0x3BE1B30A; // VO_27_P05_GAME_OVER_02
Gundam_Zabanya_ArcadeContinueNoHash.hash_3 = 0x98393921; // VO_14_P04_GAME_OVER_03
Gundam_Zabanya_ArcadeContinueNoHash.hash_4 = 0;
Gundam_Zabanya_ArcadeContinueNoHash.hash_5 = 0;

    return Gundam_Zabanya_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Gundam_Zabanya_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Gundam_Zabanya_ArcadeContinueHash;
    Gundam_Zabanya_ArcadeContinueHash.hash_1 = 0x12A0B33D; // VO_27_P05_CONTINUE_DEC_01
Gundam_Zabanya_ArcadeContinueHash.hash_2 = 0x8BA9E287; // VO_27_P05_CONTINUE_DEC_02
Gundam_Zabanya_ArcadeContinueHash.hash_3 = 0;
Gundam_Zabanya_ArcadeContinueHash.hash_4 = 0;
Gundam_Zabanya_ArcadeContinueHash.hash_5 = 0;

    return Gundam_Zabanya_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Gundam_Zabanya_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Gundam_Zabanya_ArcadeContinueYesHash;
    Gundam_Zabanya_ArcadeContinueYesHash.hash_1 = 0xB23D2859; // VO_27_P05_CONTINUE_01
Gundam_Zabanya_ArcadeContinueYesHash.hash_2 = 0x2B3479E3; // VO_27_P05_CONTINUE_02
Gundam_Zabanya_ArcadeContinueYesHash.hash_3 = 0x5C334975; // VO_27_P05_CONTINUE_03
Gundam_Zabanya_ArcadeContinueYesHash.hash_4 = 0x12A0B33D; // VO_27_P05_CONTINUE_DEC_01
Gundam_Zabanya_ArcadeContinueYesHash.hash_5 = 0x8BA9E287; // VO_27_P05_CONTINUE_DEC_02
Gundam_Zabanya_ArcadeContinueYesHash.hash_6 = 0;
Gundam_Zabanya_ArcadeContinueYesHash.hash_7 = 0;
Gundam_Zabanya_ArcadeContinueYesHash.hash_8 = 0;
Gundam_Zabanya_ArcadeContinueYesHash.hash_9 = 0;
Gundam_Zabanya_ArcadeContinueYesHash.hash_10 = 0;

    return Gundam_Zabanya_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Gundam_Zabanya_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Gundam_Zabanya_BandaiNamcoGamesHash;
    Gundam_Zabanya_BandaiNamcoGamesHash.hash_1 = 0x8141EE2E; // VO_27_P05_BNG_LOGO_01
Gundam_Zabanya_BandaiNamcoGamesHash.hash_2 = 0x7CC2E0F7; // VO_14_P04_BNG_LOGO_02

    return Gundam_Zabanya_BandaiNamcoGamesHash;
}

unit_hash_info Gundam_Zabanya_inject_unit_hash_info()
{
    unit_hash_info Gundam_Zabanya;
    Gundam_Zabanya.UnitID = 0x000069AB;
    Gundam_Zabanya.unk0 = 0xDDC3CBD6;
    Gundam_Zabanya.DataScript = 0xF97478F5;
    Gundam_Zabanya.ModelText = 0x8A1B76A5;
    Gundam_Zabanya.OMO = 0x977E3233;
    Gundam_Zabanya.EIDX = 0xD4E00229;
    Gundam_Zabanya.Sound = 0x47F74396;
    Gundam_Zabanya.GlobalPilotVoice = 0x39EEA28C;
    Gundam_Zabanya.WeaponImage = 0x838B5701;
    Gundam_Zabanya.IngameImage = 0x838B5701;
    Gundam_Zabanya.KPKP = 0xC841FF87;
    Gundam_Zabanya.VoiceFileList = 0x80B6EBAD;
    Gundam_Zabanya.Stream = 0xBCD03EDA;

    return Gundam_Zabanya;
}

unit_unk_enum_info Gundam_Zabanya_inject_unk_enum()
{
    unit_unk_enum_info Gundam_Zabanya_unk_Enum;
    Gundam_Zabanya_unk_Enum.UnitID = 0x000069AB;
    Gundam_Zabanya_unk_Enum.unk_enum = 0x1;
    return Gundam_Zabanya_unk_Enum;
}

unit_update_unit_id_list Gundam_Zabanya_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Gundam_Zabanya_Update_Unit_ID_List;
    Gundam_Zabanya_Update_Unit_ID_List.UnitID = 0x000069AB;
    return Gundam_Zabanya_Update_Unit_ID_List;
}

unit_update_unit_id_list Gundam_Zabanya_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Gundam_Zabanya_Unit_ID_List_2;
    Gundam_Zabanya_Unit_ID_List_2.UnitID = 0x000069AB;
    return Gundam_Zabanya_Unit_ID_List_2;
}

unit_string_info Gundam_Zabanya_inject_string()
{
    add_long_pilot_name_string_ID("F27051", 19);
    add_short_pilot_name_string_ID("S27051", 19);
    add_long_unit_name_string_ID("P27051", 19);
    add_short_unit_name_string_ID("Q27051", 19);

    unit_string_info Gundam_Zabanya_Gundam_String;
    Gundam_Zabanya_Gundam_String.UnitID = 0x000069AB;
    Gundam_Zabanya_Gundam_String.unk_enum = 0xFFFFFFFF;
    Gundam_Zabanya_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[19].long_pilot_name_str;
    Gundam_Zabanya_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[19].short_pilot_name_str;
    Gundam_Zabanya_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[19].long_unit_name_str;
    Gundam_Zabanya_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[19].short_unit_name_str;

    return Gundam_Zabanya_Gundam_String;
}
                        