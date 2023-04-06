

#include "Montero.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Montero_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Montero_VoiceFileList;
    Montero_VoiceFileList.UnitID = 0x0000A443;
    Montero_VoiceFileList.index = 0x00000116;
    Montero_VoiceFileList.voice_file_list_hash = 0x81F59EF2;
    Montero_VoiceFileList.unk_enum_0x8 = 0x000005A7;
    return Montero_VoiceFileList;
}

unit_voice_hash_list_0x28 Montero_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Montero_ArcadeSelectHash;
    Montero_ArcadeSelectHash.hash_1 = 0x9EA309E4; // VO_42_P05_CHARA_SELECT_01
Montero_ArcadeSelectHash.hash_2 = 0x07AA585E; // VO_42_P05_CHARA_SELECT_02
Montero_ArcadeSelectHash.hash_3 = 0x70AD68C8; // VO_42_P05_CHARA_SELECT_03
Montero_ArcadeSelectHash.hash_4 = 0;
Montero_ArcadeSelectHash.hash_5 = 0;
Montero_ArcadeSelectHash.hash_6 = 0;
Montero_ArcadeSelectHash.hash_7 = 0;
Montero_ArcadeSelectHash.hash_8 = 0;
Montero_ArcadeSelectHash.hash_9 = 0;
Montero_ArcadeSelectHash.hash_10 = 0;

    return Montero_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Montero_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Montero_ArcadeContinueNoHash;
    Montero_ArcadeContinueNoHash.hash_1 = 0xDBCE8844; // VO_42_P05_GAME_OVER_01
Montero_ArcadeContinueNoHash.hash_2 = 0x42C7D9FE; // VO_42_P05_GAME_OVER_02
Montero_ArcadeContinueNoHash.hash_3 = 0;
Montero_ArcadeContinueNoHash.hash_4 = 0;
Montero_ArcadeContinueNoHash.hash_5 = 0;

    return Montero_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Montero_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Montero_ArcadeContinueHash;
    Montero_ArcadeContinueHash.hash_1 = 0xED726E98; // VO_42_P05_CONTINUE_DEC_01
Montero_ArcadeContinueHash.hash_2 = 0x747B3F22; // VO_42_P05_CONTINUE_DEC_02
Montero_ArcadeContinueHash.hash_3 = 0;
Montero_ArcadeContinueHash.hash_4 = 0;
Montero_ArcadeContinueHash.hash_5 = 0;

    return Montero_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Montero_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Montero_ArcadeContinueYesHash;
    Montero_ArcadeContinueYesHash.hash_1 = 0x48EF7850; // VO_42_P05_CONTINUE_01
Montero_ArcadeContinueYesHash.hash_2 = 0xD1E629EA; // VO_42_P05_CONTINUE_02
Montero_ArcadeContinueYesHash.hash_3 = 0xED726E98; // VO_42_P05_CONTINUE_DEC_01
Montero_ArcadeContinueYesHash.hash_4 = 0x747B3F22; // VO_42_P05_CONTINUE_DEC_02
Montero_ArcadeContinueYesHash.hash_5 = 0;
Montero_ArcadeContinueYesHash.hash_6 = 0;
Montero_ArcadeContinueYesHash.hash_7 = 0;
Montero_ArcadeContinueYesHash.hash_8 = 0;
Montero_ArcadeContinueYesHash.hash_9 = 0;
Montero_ArcadeContinueYesHash.hash_10 = 0;

    return Montero_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Montero_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Montero_BandaiNamcoGamesHash;
    Montero_BandaiNamcoGamesHash.hash_1 = 0;
Montero_BandaiNamcoGamesHash.hash_2 = 0;

    return Montero_BandaiNamcoGamesHash;
}

unit_hash_info Montero_inject_unit_hash_info()
{
    unit_hash_info Montero;
    Montero.UnitID = 0x0000A443;
    Montero.unk0 = 0xDDC3CBD6;
    Montero.DataScript = 0x24A8D284;
    Montero.ModelText = 0x57C7DCD4;
    Montero.OMO = 0xB0A1AF33;
    Montero.EIDX = 0xF33F9F29;
    Montero.Sound = 0x19BF4393;
    Montero.GlobalPilotVoice = 0x51A14057;
    Montero.WeaponImage = 0x525DEF6E;
    Montero.IngameImage = 0x525DEF6E;
    Montero.KPKP = 0x029095D7;
    Montero.VoiceFileList = 0x81F59EF2;
    Montero.Stream = 0x2E811D08;

    return Montero;
}

unit_unk_enum_info Montero_inject_unk_enum()
{
    unit_unk_enum_info Montero_unk_Enum;
    Montero_unk_Enum.UnitID = 0x0000A443;
    Montero_unk_Enum.unk_enum = 0x1;
    return Montero_unk_Enum;
}

unit_update_unit_id_list Montero_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Montero_Update_Unit_ID_List;
    Montero_Update_Unit_ID_List.UnitID = 0x0000A443;
    return Montero_Update_Unit_ID_List;
}

unit_update_unit_id_list Montero_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Montero_Unit_ID_List_2;
    Montero_Unit_ID_List_2.UnitID = 0x0000A443;
    return Montero_Unit_ID_List_2;
}

unit_string_info Montero_inject_string()
{
    add_long_pilot_name_string_ID("F42051", 7);
    add_short_pilot_name_string_ID("S42051", 7);
    add_long_unit_name_string_ID("P42051", 7);
    add_short_unit_name_string_ID("Q42051", 7);

    unit_string_info Montero_Gundam_String;
    Montero_Gundam_String.UnitID = 0x0000A443;
    Montero_Gundam_String.unk_enum = 0xFFFFFFFF;
    Montero_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[7].long_pilot_name_str;
    Montero_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[7].short_pilot_name_str;
    Montero_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[7].long_unit_name_str;
    Montero_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[7].short_unit_name_str;

    return Montero_Gundam_String;
}
                        