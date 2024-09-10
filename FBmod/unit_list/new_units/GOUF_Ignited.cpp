

#include "GOUF_Ignited.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info GOUF_Ignited_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info GOUF_Ignited_VoiceFileList;
    GOUF_Ignited_VoiceFileList.UnitID = 0x00005277;
    GOUF_Ignited_VoiceFileList.index = 0x0000012B;
    GOUF_Ignited_VoiceFileList.voice_file_list_hash = 0x3F44AC9A;
    GOUF_Ignited_VoiceFileList.unk_enum_0x8 = 0x000005BC;
    return GOUF_Ignited_VoiceFileList;
}

unit_voice_hash_list_0x28 GOUF_Ignited_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 GOUF_Ignited_ArcadeSelectHash;
    GOUF_Ignited_ArcadeSelectHash.hash_1 = 0x0B1640A9; // VO_21_P11_CHARA_SELECT_01
GOUF_Ignited_ArcadeSelectHash.hash_2 = 0x921F1113; // VO_21_P11_CHARA_SELECT_02
GOUF_Ignited_ArcadeSelectHash.hash_3 = 0xE5182185; // VO_21_P11_CHARA_SELECT_03
GOUF_Ignited_ArcadeSelectHash.hash_4 = 0x7B7CB426; // VO_21_P11_CHARA_SELECT_04
GOUF_Ignited_ArcadeSelectHash.hash_5 = 0;
GOUF_Ignited_ArcadeSelectHash.hash_6 = 0;
GOUF_Ignited_ArcadeSelectHash.hash_7 = 0;
GOUF_Ignited_ArcadeSelectHash.hash_8 = 0;
GOUF_Ignited_ArcadeSelectHash.hash_9 = 0;
GOUF_Ignited_ArcadeSelectHash.hash_10 = 0;

    return GOUF_Ignited_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 GOUF_Ignited_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 GOUF_Ignited_ArcadeContinueNoHash;
    GOUF_Ignited_ArcadeContinueNoHash.hash_1 = 0x0CC30AC6; // VO_21_P11_GAME_OVER_01
GOUF_Ignited_ArcadeContinueNoHash.hash_2 = 0x95CA5B7C; // VO_21_P11_GAME_OVER_02
GOUF_Ignited_ArcadeContinueNoHash.hash_3 = 0xE2CD6BEA; // VO_21_P11_GAME_OVER_03
GOUF_Ignited_ArcadeContinueNoHash.hash_4 = 0;
GOUF_Ignited_ArcadeContinueNoHash.hash_5 = 0;

    return GOUF_Ignited_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 GOUF_Ignited_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 GOUF_Ignited_ArcadeContinueHash;
    GOUF_Ignited_ArcadeContinueHash.hash_1 = 0x78C727D5; // VO_21_P11_CONTINUE_DEC_01
GOUF_Ignited_ArcadeContinueHash.hash_2 = 0xE1CE766F; // VO_21_P11_CONTINUE_DEC_02
GOUF_Ignited_ArcadeContinueHash.hash_3 = 0;
GOUF_Ignited_ArcadeContinueHash.hash_4 = 0;
GOUF_Ignited_ArcadeContinueHash.hash_5 = 0;

    return GOUF_Ignited_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 GOUF_Ignited_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 GOUF_Ignited_ArcadeContinueYesHash;
    GOUF_Ignited_ArcadeContinueYesHash.hash_1 = 0x48BF14B1; // VO_21_P11_CONTINUE_01
GOUF_Ignited_ArcadeContinueYesHash.hash_2 = 0xD1B6450B; // VO_21_P11_CONTINUE_02
GOUF_Ignited_ArcadeContinueYesHash.hash_3 = 0x78C727D5; // VO_21_P11_CONTINUE_DEC_01
GOUF_Ignited_ArcadeContinueYesHash.hash_4 = 0xE1CE766F; // VO_21_P11_CONTINUE_DEC_02
GOUF_Ignited_ArcadeContinueYesHash.hash_5 = 0;
GOUF_Ignited_ArcadeContinueYesHash.hash_6 = 0;
GOUF_Ignited_ArcadeContinueYesHash.hash_7 = 0;
GOUF_Ignited_ArcadeContinueYesHash.hash_8 = 0;
GOUF_Ignited_ArcadeContinueYesHash.hash_9 = 0;
GOUF_Ignited_ArcadeContinueYesHash.hash_10 = 0;

    return GOUF_Ignited_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 GOUF_Ignited_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 GOUF_Ignited_BandaiNamcoGamesHash;
    GOUF_Ignited_BandaiNamcoGamesHash.hash_1 = 0x7BC3D2C6; // VO_21_P11_BNG_LOGO_01
GOUF_Ignited_BandaiNamcoGamesHash.hash_2 = 0;

    return GOUF_Ignited_BandaiNamcoGamesHash;
}

unit_hash_info GOUF_Ignited_inject_unit_hash_info()
{
    unit_hash_info GOUF_Ignited;
    GOUF_Ignited.UnitID = 0x00005277;
    GOUF_Ignited.unk0 = 0xDDC3CBD6;
    GOUF_Ignited.DataScript = 0x78ABFDC1;
    GOUF_Ignited.ModelText = 0x0BC4F391;
    GOUF_Ignited.OMO = 0xB64B1903;
    GOUF_Ignited.EIDX = 0xF5D52919;
    GOUF_Ignited.Sound = 0xA70C28EE;
    GOUF_Ignited.GlobalPilotVoice = 0xC8F82A7A;
    GOUF_Ignited.WeaponImage = 0xE218AED5;
    GOUF_Ignited.IngameImage = 0x0F732721;
    GOUF_Ignited.KPKP = 0xFDAEC3B5;
    GOUF_Ignited.VoiceFileList = 0x3F44AC9A;
    GOUF_Ignited.Stream = 0x7EBA8A0B;

    return GOUF_Ignited;
}

unit_unk_enum_info GOUF_Ignited_inject_unk_enum()
{
    unit_unk_enum_info GOUF_Ignited_unk_Enum;
    GOUF_Ignited_unk_Enum.UnitID = 0x00005277;
    GOUF_Ignited_unk_Enum.unk_enum = 0x1;
    return GOUF_Ignited_unk_Enum;
}

unit_update_unit_id_list GOUF_Ignited_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list GOUF_Ignited_Update_Unit_ID_List;
    GOUF_Ignited_Update_Unit_ID_List.UnitID = 0x00005277;
    return GOUF_Ignited_Update_Unit_ID_List;
}

unit_update_unit_id_list GOUF_Ignited_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list GOUF_Ignited_Unit_ID_List_2;
    GOUF_Ignited_Unit_ID_List_2.UnitID = 0x00005277;
    return GOUF_Ignited_Unit_ID_List_2;
}

unit_string_info GOUF_Ignited_inject_string()
{
    add_long_pilot_name_string_ID("F21111", 28);
    add_short_pilot_name_string_ID("S21111", 28);
    add_long_unit_name_string_ID("P21111", 28);
    add_short_unit_name_string_ID("Q21111", 28);

    unit_string_info GOUF_Ignited_Gundam_String;
    GOUF_Ignited_Gundam_String.UnitID = 0x00005277;
    GOUF_Ignited_Gundam_String.unk_enum = 0xFFFFFFFF;
    GOUF_Ignited_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[28].long_pilot_name_str;
    GOUF_Ignited_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[28].short_pilot_name_str;
    GOUF_Ignited_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[28].long_unit_name_str;
    GOUF_Ignited_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[28].short_unit_name_str;

    return GOUF_Ignited_Gundam_String;
}
                        