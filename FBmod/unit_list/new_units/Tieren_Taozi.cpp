

#include "Tieren_Taozi.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Tieren_Taozi_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Tieren_Taozi_VoiceFileList;
    Tieren_Taozi_VoiceFileList.UnitID = 0x0000373D;
    Tieren_Taozi_VoiceFileList.index = 0x0000012E;
    Tieren_Taozi_VoiceFileList.voice_file_list_hash = 0x847648C9;
    Tieren_Taozi_VoiceFileList.unk_enum_0x8 = 0x000005BF;
    return Tieren_Taozi_VoiceFileList;
}

unit_voice_hash_list_0x28 Tieren_Taozi_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Tieren_Taozi_ArcadeSelectHash;
    Tieren_Taozi_ArcadeSelectHash.hash_1 = 0x4BE38640; // VO_14_P14_CHARA_SELECT_01
Tieren_Taozi_ArcadeSelectHash.hash_2 = 0xD2EAD7FA; // VO_14_P14_CHARA_SELECT_02
Tieren_Taozi_ArcadeSelectHash.hash_3 = 0xA5EDE76C; // VO_14_P14_CHARA_SELECT_03
Tieren_Taozi_ArcadeSelectHash.hash_4 = 0;
Tieren_Taozi_ArcadeSelectHash.hash_5 = 0;
Tieren_Taozi_ArcadeSelectHash.hash_6 = 0;
Tieren_Taozi_ArcadeSelectHash.hash_7 = 0;
Tieren_Taozi_ArcadeSelectHash.hash_8 = 0;
Tieren_Taozi_ArcadeSelectHash.hash_9 = 0;
Tieren_Taozi_ArcadeSelectHash.hash_10 = 0;

    return Tieren_Taozi_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Tieren_Taozi_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Tieren_Taozi_ArcadeContinueNoHash;
    Tieren_Taozi_ArcadeContinueNoHash.hash_1 = 0xCFCC83E5; // VO_14_P14_GAME_OVER_01
Tieren_Taozi_ArcadeContinueNoHash.hash_2 = 0x56C5D25F; // VO_14_P14_GAME_OVER_02
Tieren_Taozi_ArcadeContinueNoHash.hash_3 = 0;
Tieren_Taozi_ArcadeContinueNoHash.hash_4 = 0;
Tieren_Taozi_ArcadeContinueNoHash.hash_5 = 0;

    return Tieren_Taozi_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Tieren_Taozi_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Tieren_Taozi_ArcadeContinueHash;
    Tieren_Taozi_ArcadeContinueHash.hash_1 = 0x3832E13C; // VO_14_P14_CONTINUE_DEC_01
Tieren_Taozi_ArcadeContinueHash.hash_2 = 0xA13BB086; // VO_14_P14_CONTINUE_DEC_02
Tieren_Taozi_ArcadeContinueHash.hash_3 = 0;
Tieren_Taozi_ArcadeContinueHash.hash_4 = 0;
Tieren_Taozi_ArcadeContinueHash.hash_5 = 0;

    return Tieren_Taozi_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Tieren_Taozi_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Tieren_Taozi_ArcadeContinueYesHash;
    Tieren_Taozi_ArcadeContinueYesHash.hash_1 = 0x4BB8964C; // VO_14_P14_CONTINUE_01
Tieren_Taozi_ArcadeContinueYesHash.hash_2 = 0xD2B1C7F6; // VO_14_P14_CONTINUE_02
Tieren_Taozi_ArcadeContinueYesHash.hash_3 = 0x3832E13C; // VO_14_P14_CONTINUE_DEC_01
Tieren_Taozi_ArcadeContinueYesHash.hash_4 = 0xA13BB086; // VO_14_P14_CONTINUE_DEC_02
Tieren_Taozi_ArcadeContinueYesHash.hash_5 = 0xA5B6F760; // VO_14_P14_CONTINUE_03
Tieren_Taozi_ArcadeContinueYesHash.hash_6 = 0;
Tieren_Taozi_ArcadeContinueYesHash.hash_7 = 0;
Tieren_Taozi_ArcadeContinueYesHash.hash_8 = 0;
Tieren_Taozi_ArcadeContinueYesHash.hash_9 = 0;
Tieren_Taozi_ArcadeContinueYesHash.hash_10 = 0;

    return Tieren_Taozi_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Tieren_Taozi_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Tieren_Taozi_BandaiNamcoGamesHash;
    Tieren_Taozi_BandaiNamcoGamesHash.hash_1 = 0x78C4503B; // VO_14_P14_BNG_LOGO_01
Tieren_Taozi_BandaiNamcoGamesHash.hash_2 = 0;

    return Tieren_Taozi_BandaiNamcoGamesHash;
}

unit_hash_info Tieren_Taozi_inject_unit_hash_info()
{
    unit_hash_info Tieren_Taozi;
    Tieren_Taozi.UnitID = 0x0000373D;
    Tieren_Taozi.unk0 = 0xDDC3CBD6;
    Tieren_Taozi.DataScript = 0xA9E412BE;
    Tieren_Taozi.ModelText = 0xDA8B1CEE;
    Tieren_Taozi.OMO = 0x76203A41;
    Tieren_Taozi.EIDX = 0x35BE0A5B;
    Tieren_Taozi.Sound = 0x9915D64D;
    Tieren_Taozi.GlobalPilotVoice = 0xA3907789;
    Tieren_Taozi.WeaponImage = 0x16902071;
    Tieren_Taozi.IngameImage = 0xDF1085D7;
    Tieren_Taozi.KPKP = 0xC64D7E34;
    Tieren_Taozi.VoiceFileList = 0x847648C9;
    Tieren_Taozi.Stream = 0x7DB68D5B;

    return Tieren_Taozi;
}

unit_unk_enum_info Tieren_Taozi_inject_unk_enum()
{
    unit_unk_enum_info Tieren_Taozi_unk_Enum;
    Tieren_Taozi_unk_Enum.UnitID = 0x0000373D;
    Tieren_Taozi_unk_Enum.unk_enum = 0x1;
    return Tieren_Taozi_unk_Enum;
}

unit_update_unit_id_list Tieren_Taozi_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Tieren_Taozi_Update_Unit_ID_List;
    Tieren_Taozi_Update_Unit_ID_List.UnitID = 0x0000373D;
    return Tieren_Taozi_Update_Unit_ID_List;
}

unit_update_unit_id_list Tieren_Taozi_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Tieren_Taozi_Unit_ID_List_2;
    Tieren_Taozi_Unit_ID_List_2.UnitID = 0x0000373D;
    return Tieren_Taozi_Unit_ID_List_2;
}

unit_string_info Tieren_Taozi_inject_string()
{
    add_long_pilot_name_string_ID("F14141", 31);
    add_short_pilot_name_string_ID("S14141", 31);
    add_long_unit_name_string_ID("P14141", 31);
    add_short_unit_name_string_ID("Q14141", 31);

    unit_string_info Tieren_Taozi_Gundam_String;
    Tieren_Taozi_Gundam_String.UnitID = 0x0000373D;
    Tieren_Taozi_Gundam_String.unk_enum = 0xFFFFFFFF;
    Tieren_Taozi_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[31].long_pilot_name_str;
    Tieren_Taozi_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[31].short_pilot_name_str;
    Tieren_Taozi_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[31].long_unit_name_str;
    Tieren_Taozi_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[31].short_unit_name_str;

    return Tieren_Taozi_Gundam_String;
}
                        