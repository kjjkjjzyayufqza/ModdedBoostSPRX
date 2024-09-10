

#include "Destiny_Gundam_Boss.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Destiny_Gundam_Boss_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Destiny_Gundam_Boss_VoiceFileList;
    Destiny_Gundam_Boss_VoiceFileList.UnitID = 0x000139F3;
    Destiny_Gundam_Boss_VoiceFileList.index = 0x00000144;
    Destiny_Gundam_Boss_VoiceFileList.voice_file_list_hash = 0x24D0DF1E;
    Destiny_Gundam_Boss_VoiceFileList.unk_enum_0x8 = 0x000005D5;
    return Destiny_Gundam_Boss_VoiceFileList;
}

unit_voice_hash_list_0x28 Destiny_Gundam_Boss_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Destiny_Gundam_Boss_ArcadeSelectHash;
    Destiny_Gundam_Boss_ArcadeSelectHash.hash_1 = 0x3078668F; // VO_21_P03_CHARA_SELECT_01
Destiny_Gundam_Boss_ArcadeSelectHash.hash_2 = 0xA9713735; // VO_21_P03_CHARA_SELECT_02
Destiny_Gundam_Boss_ArcadeSelectHash.hash_3 = 0xDE7607A3; // VO_21_P03_CHARA_SELECT_03
Destiny_Gundam_Boss_ArcadeSelectHash.hash_4 = 0;
Destiny_Gundam_Boss_ArcadeSelectHash.hash_5 = 0;
Destiny_Gundam_Boss_ArcadeSelectHash.hash_6 = 0;
Destiny_Gundam_Boss_ArcadeSelectHash.hash_7 = 0;
Destiny_Gundam_Boss_ArcadeSelectHash.hash_8 = 0;
Destiny_Gundam_Boss_ArcadeSelectHash.hash_9 = 0;
Destiny_Gundam_Boss_ArcadeSelectHash.hash_10 = 0;

    return Destiny_Gundam_Boss_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Destiny_Gundam_Boss_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Destiny_Gundam_Boss_ArcadeContinueNoHash;
    Destiny_Gundam_Boss_ArcadeContinueNoHash.hash_1 = 0x54561583; // VO_21_P03_GAME_OVER_01
Destiny_Gundam_Boss_ArcadeContinueNoHash.hash_2 = 0xCD5F4439; // VO_21_P03_GAME_OVER_02
Destiny_Gundam_Boss_ArcadeContinueNoHash.hash_3 = 0xBA5874AF; // VO_21_P03_GAME_OVER_03
Destiny_Gundam_Boss_ArcadeContinueNoHash.hash_4 = 0;
Destiny_Gundam_Boss_ArcadeContinueNoHash.hash_5 = 0;

    return Destiny_Gundam_Boss_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Destiny_Gundam_Boss_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Destiny_Gundam_Boss_ArcadeContinueHash;
    Destiny_Gundam_Boss_ArcadeContinueHash.hash_1 = 0x43A901F3; // VO_21_P03_CONTINUE_DEC_01
Destiny_Gundam_Boss_ArcadeContinueHash.hash_2 = 0xDAA05049; // VO_21_P03_CONTINUE_DEC_02
Destiny_Gundam_Boss_ArcadeContinueHash.hash_3 = 0;
Destiny_Gundam_Boss_ArcadeContinueHash.hash_4 = 0;
Destiny_Gundam_Boss_ArcadeContinueHash.hash_5 = 0;

    return Destiny_Gundam_Boss_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Destiny_Gundam_Boss_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Destiny_Gundam_Boss_ArcadeContinueYesHash;
    Destiny_Gundam_Boss_ArcadeContinueYesHash.hash_1 = 0xB5EC408C; // VO_21_P03_CONTINUE_01
Destiny_Gundam_Boss_ArcadeContinueYesHash.hash_2 = 0x2CE51136; // VO_21_P03_CONTINUE_02
Destiny_Gundam_Boss_ArcadeContinueYesHash.hash_3 = 0x5BE221A0; // VO_21_P03_CONTINUE_03
Destiny_Gundam_Boss_ArcadeContinueYesHash.hash_4 = 0x43A901F3; // VO_21_P03_CONTINUE_DEC_01
Destiny_Gundam_Boss_ArcadeContinueYesHash.hash_5 = 0xDAA05049; // VO_21_P03_CONTINUE_DEC_02
Destiny_Gundam_Boss_ArcadeContinueYesHash.hash_6 = 0;
Destiny_Gundam_Boss_ArcadeContinueYesHash.hash_7 = 0;
Destiny_Gundam_Boss_ArcadeContinueYesHash.hash_8 = 0;
Destiny_Gundam_Boss_ArcadeContinueYesHash.hash_9 = 0;
Destiny_Gundam_Boss_ArcadeContinueYesHash.hash_10 = 0;

    return Destiny_Gundam_Boss_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Destiny_Gundam_Boss_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Destiny_Gundam_Boss_BandaiNamcoGamesHash;
    Destiny_Gundam_Boss_BandaiNamcoGamesHash.hash_1 = 0x869086FB; // VO_21_P03_BNG_LOGO_01
Destiny_Gundam_Boss_BandaiNamcoGamesHash.hash_2 = 0;

    return Destiny_Gundam_Boss_BandaiNamcoGamesHash;
}

unit_hash_info Destiny_Gundam_Boss_inject_unit_hash_info()
{
    unit_hash_info Destiny_Gundam_Boss;
    Destiny_Gundam_Boss.UnitID = 0x000139F3;
    Destiny_Gundam_Boss.unk0 = 0xDDC3CBD6;
    Destiny_Gundam_Boss.DataScript = 0xCA939665;
    Destiny_Gundam_Boss.ModelText = 0xB9FC9835;
    Destiny_Gundam_Boss.OMO = 0x67424699;
    Destiny_Gundam_Boss.EIDX = 0x2B4D142D;
    Destiny_Gundam_Boss.Sound = 0x49097CCD;
    Destiny_Gundam_Boss.GlobalPilotVoice = 0x10F13971;
    Destiny_Gundam_Boss.WeaponImage = 0x988EFC22;
    Destiny_Gundam_Boss.IngameImage = 0x9F23BD3B;
    Destiny_Gundam_Boss.KPKP = 0x580B6D87;
    Destiny_Gundam_Boss.VoiceFileList = 0x24D0DF1E;
    Destiny_Gundam_Boss.Stream = 0x7A825BA3;

    return Destiny_Gundam_Boss;
}

unit_unk_enum_info Destiny_Gundam_Boss_inject_unk_enum()
{
    unit_unk_enum_info Destiny_Gundam_Boss_unk_Enum;
    Destiny_Gundam_Boss_unk_Enum.UnitID = 0x000139F3;
    Destiny_Gundam_Boss_unk_Enum.unk_enum = 0x1;
    return Destiny_Gundam_Boss_unk_Enum;
}

unit_update_unit_id_list Destiny_Gundam_Boss_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Destiny_Gundam_Boss_Update_Unit_ID_List;
    Destiny_Gundam_Boss_Update_Unit_ID_List.UnitID = 0x000139F3;
    return Destiny_Gundam_Boss_Update_Unit_ID_List;
}

unit_update_unit_id_list Destiny_Gundam_Boss_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Destiny_Gundam_Boss_Unit_ID_List_2;
    Destiny_Gundam_Boss_Unit_ID_List_2.UnitID = 0x000139F3;
    return Destiny_Gundam_Boss_Unit_ID_List_2;
}

unit_string_info Destiny_Gundam_Boss_inject_string()
{
    add_long_pilot_name_string_ID("F80371", 53);
    add_short_pilot_name_string_ID("S80371", 53);
    add_long_unit_name_string_ID("P80371", 53);
    add_short_unit_name_string_ID("Q80371", 53);

    unit_string_info Destiny_Gundam_Boss_Gundam_String;
    Destiny_Gundam_Boss_Gundam_String.UnitID = 0x000139F3;
    Destiny_Gundam_Boss_Gundam_String.unk_enum = 0xFFFFFFFF;
    Destiny_Gundam_Boss_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[53].long_pilot_name_str;
    Destiny_Gundam_Boss_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[53].short_pilot_name_str;
    Destiny_Gundam_Boss_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[53].long_unit_name_str;
    Destiny_Gundam_Boss_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[53].short_unit_name_str;

    return Destiny_Gundam_Boss_Gundam_String;
}
                        