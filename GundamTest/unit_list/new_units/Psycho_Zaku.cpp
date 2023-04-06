

#include "Psycho_Zaku.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Psycho_Zaku_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Psycho_Zaku_VoiceFileList;
    Psycho_Zaku_VoiceFileList.UnitID = 0x0000B3C5;
    Psycho_Zaku_VoiceFileList.index = 0x00000154;
    Psycho_Zaku_VoiceFileList.voice_file_list_hash = 0xB2B6DD24;
    Psycho_Zaku_VoiceFileList.unk_enum_0x8 = 0x000005E5;
    return Psycho_Zaku_VoiceFileList;
}

unit_voice_hash_list_0x28 Psycho_Zaku_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Psycho_Zaku_ArcadeSelectHash;
    Psycho_Zaku_ArcadeSelectHash.hash_1 = 0xACC87114; // VO_46_P02_CHARA_SELECT_01
Psycho_Zaku_ArcadeSelectHash.hash_2 = 0x35C120AE; // VO_46_P02_CHARA_SELECT_02
Psycho_Zaku_ArcadeSelectHash.hash_3 = 0x42C61038; // VO_46_P02_CHARA_SELECT_03
Psycho_Zaku_ArcadeSelectHash.hash_4 = 0;
Psycho_Zaku_ArcadeSelectHash.hash_5 = 0;
Psycho_Zaku_ArcadeSelectHash.hash_6 = 0;
Psycho_Zaku_ArcadeSelectHash.hash_7 = 0;
Psycho_Zaku_ArcadeSelectHash.hash_8 = 0;
Psycho_Zaku_ArcadeSelectHash.hash_9 = 0;
Psycho_Zaku_ArcadeSelectHash.hash_10 = 0;

    return Psycho_Zaku_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Psycho_Zaku_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Psycho_Zaku_ArcadeContinueNoHash;
    Psycho_Zaku_ArcadeContinueNoHash.hash_1 = 0xB5ABF582; // VO_46_P02_GAME_OVER_01
Psycho_Zaku_ArcadeContinueNoHash.hash_2 = 0x2CA2A438; // VO_46_P02_GAME_OVER_02
Psycho_Zaku_ArcadeContinueNoHash.hash_3 = 0;
Psycho_Zaku_ArcadeContinueNoHash.hash_4 = 0;
Psycho_Zaku_ArcadeContinueNoHash.hash_5 = 0;

    return Psycho_Zaku_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Psycho_Zaku_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Psycho_Zaku_ArcadeContinueHash;
    Psycho_Zaku_ArcadeContinueHash.hash_1 = 0xDF191668; // VO_46_P02_CONTINUE_DEC_01
Psycho_Zaku_ArcadeContinueHash.hash_2 = 0x461047D2; // VO_46_P02_CONTINUE_DEC_02
Psycho_Zaku_ArcadeContinueHash.hash_3 = 0;
Psycho_Zaku_ArcadeContinueHash.hash_4 = 0;
Psycho_Zaku_ArcadeContinueHash.hash_5 = 0;

    return Psycho_Zaku_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Psycho_Zaku_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Psycho_Zaku_ArcadeContinueYesHash;
    Psycho_Zaku_ArcadeContinueYesHash.hash_1 = 0x469459C7; // VO_46_P02_CONTINUE_01
Psycho_Zaku_ArcadeContinueYesHash.hash_2 = 0xDF9D087D; // VO_46_P02_CONTINUE_02
Psycho_Zaku_ArcadeContinueYesHash.hash_3 = 0xDF191668; // VO_46_P02_CONTINUE_DEC_01
Psycho_Zaku_ArcadeContinueYesHash.hash_4 = 0x461047D2; // VO_46_P02_CONTINUE_DEC_02
Psycho_Zaku_ArcadeContinueYesHash.hash_5 = 0;
Psycho_Zaku_ArcadeContinueYesHash.hash_6 = 0;
Psycho_Zaku_ArcadeContinueYesHash.hash_7 = 0;
Psycho_Zaku_ArcadeContinueYesHash.hash_8 = 0;
Psycho_Zaku_ArcadeContinueYesHash.hash_9 = 0;
Psycho_Zaku_ArcadeContinueYesHash.hash_10 = 0;

    return Psycho_Zaku_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Psycho_Zaku_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Psycho_Zaku_BandaiNamcoGamesHash;
    Psycho_Zaku_BandaiNamcoGamesHash.hash_1 = 0;
Psycho_Zaku_BandaiNamcoGamesHash.hash_2 = 0;

    return Psycho_Zaku_BandaiNamcoGamesHash;
}

unit_hash_info Psycho_Zaku_inject_unit_hash_info()
{
    unit_hash_info Psycho_Zaku;
    Psycho_Zaku.UnitID = 0x0000B3C5;
    Psycho_Zaku.unk0 = 0xDDC3CBD6;
    Psycho_Zaku.DataScript = 0xA200954E;
    Psycho_Zaku.ModelText = 0xD16F9B1E;
    Psycho_Zaku.OMO = 0xCB962CDA;
    Psycho_Zaku.EIDX = 0x88081CC0;
    Psycho_Zaku.Sound = 0xDD631490;
    Psycho_Zaku.GlobalPilotVoice = 0xA722199F;
    Psycho_Zaku.WeaponImage = 0x29C8F1BE;
    Psycho_Zaku.IngameImage = 0x29C8F1BE;
    Psycho_Zaku.KPKP = 0x8C723F19;
    Psycho_Zaku.VoiceFileList = 0xB2B6DD24;
    Psycho_Zaku.Stream = 0x14FE8EDD;

    return Psycho_Zaku;
}

unit_unk_enum_info Psycho_Zaku_inject_unk_enum()
{
    unit_unk_enum_info Psycho_Zaku_unk_Enum;
    Psycho_Zaku_unk_Enum.UnitID = 0x0000B3C5;
    Psycho_Zaku_unk_Enum.unk_enum = 0x1;
    return Psycho_Zaku_unk_Enum;
}

unit_update_unit_id_list Psycho_Zaku_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Psycho_Zaku_Update_Unit_ID_List;
    Psycho_Zaku_Update_Unit_ID_List.UnitID = 0x0000B3C5;
    return Psycho_Zaku_Update_Unit_ID_List;
}

unit_update_unit_id_list Psycho_Zaku_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Psycho_Zaku_Unit_ID_List_2;
    Psycho_Zaku_Unit_ID_List_2.UnitID = 0x0000B3C5;
    return Psycho_Zaku_Unit_ID_List_2;
}

unit_string_info Psycho_Zaku_inject_string()
{
    add_long_pilot_name_string_ID("F46021", 69);
    add_short_pilot_name_string_ID("S46021", 69);
    add_long_unit_name_string_ID("P46021", 69);
    add_short_unit_name_string_ID("Q46021", 69);

    unit_string_info Psycho_Zaku_Gundam_String;
    Psycho_Zaku_Gundam_String.UnitID = 0x0000B3C5;
    Psycho_Zaku_Gundam_String.unk_enum = 0xFFFFFFFF;
    Psycho_Zaku_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[69].long_pilot_name_str;
    Psycho_Zaku_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[69].short_pilot_name_str;
    Psycho_Zaku_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[69].long_unit_name_str;
    Psycho_Zaku_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[69].short_unit_name_str;

    return Psycho_Zaku_Gundam_String;
}
                        