

#include "Raider_Gundam.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Raider_Gundam_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Raider_Gundam_VoiceFileList;
    Raider_Gundam_VoiceFileList.UnitID = 0x00004E85;
    Raider_Gundam_VoiceFileList.index = 0x00000131;
    Raider_Gundam_VoiceFileList.voice_file_list_hash = 0x052FFEDA;
    Raider_Gundam_VoiceFileList.unk_enum_0x8 = 0x000005C2;
    return Raider_Gundam_VoiceFileList;
}

unit_voice_hash_list_0x28 Raider_Gundam_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Raider_Gundam_ArcadeSelectHash;
    Raider_Gundam_ArcadeSelectHash.hash_1 = 0x136A0874; // VO_20_P10_CHARA_SELECT_01
Raider_Gundam_ArcadeSelectHash.hash_2 = 0x8A6359CE; // VO_20_P10_CHARA_SELECT_02
Raider_Gundam_ArcadeSelectHash.hash_3 = 0xFD646958; // VO_20_P10_CHARA_SELECT_03
Raider_Gundam_ArcadeSelectHash.hash_4 = 0x6300FCFB; // VO_20_P10_CHARA_SELECT_04
Raider_Gundam_ArcadeSelectHash.hash_5 = 0;
Raider_Gundam_ArcadeSelectHash.hash_6 = 0;
Raider_Gundam_ArcadeSelectHash.hash_7 = 0;
Raider_Gundam_ArcadeSelectHash.hash_8 = 0;
Raider_Gundam_ArcadeSelectHash.hash_9 = 0;
Raider_Gundam_ArcadeSelectHash.hash_10 = 0;

    return Raider_Gundam_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Raider_Gundam_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Raider_Gundam_ArcadeContinueNoHash;
    Raider_Gundam_ArcadeContinueNoHash.hash_1 = 0x7E9E5D51; // VO_20_P10_GAME_OVER_01
Raider_Gundam_ArcadeContinueNoHash.hash_2 = 0xE7970CEB; // VO_20_P10_GAME_OVER_02
Raider_Gundam_ArcadeContinueNoHash.hash_3 = 0;
Raider_Gundam_ArcadeContinueNoHash.hash_4 = 0;
Raider_Gundam_ArcadeContinueNoHash.hash_5 = 0;

    return Raider_Gundam_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Raider_Gundam_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Raider_Gundam_ArcadeContinueHash;
    Raider_Gundam_ArcadeContinueHash.hash_1 = 0x60BB6F08; // VO_20_P10_CONTINUE_DEC_01
Raider_Gundam_ArcadeContinueHash.hash_2 = 0xF9B23EB2; // VO_20_P10_CONTINUE_DEC_02
Raider_Gundam_ArcadeContinueHash.hash_3 = 0;
Raider_Gundam_ArcadeContinueHash.hash_4 = 0;
Raider_Gundam_ArcadeContinueHash.hash_5 = 0;

    return Raider_Gundam_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Raider_Gundam_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Raider_Gundam_ArcadeContinueYesHash;
    Raider_Gundam_ArcadeContinueYesHash.hash_1 = 0x128F0677; // VO_20_P10_CONTINUE_01
Raider_Gundam_ArcadeContinueYesHash.hash_2 = 0x8B8657CD; // VO_20_P10_CONTINUE_02
Raider_Gundam_ArcadeContinueYesHash.hash_3 = 0x60BB6F08; // VO_20_P10_CONTINUE_DEC_01
Raider_Gundam_ArcadeContinueYesHash.hash_4 = 0xF9B23EB2; // VO_20_P10_CONTINUE_DEC_02
Raider_Gundam_ArcadeContinueYesHash.hash_5 = 0;
Raider_Gundam_ArcadeContinueYesHash.hash_6 = 0;
Raider_Gundam_ArcadeContinueYesHash.hash_7 = 0;
Raider_Gundam_ArcadeContinueYesHash.hash_8 = 0;
Raider_Gundam_ArcadeContinueYesHash.hash_9 = 0;
Raider_Gundam_ArcadeContinueYesHash.hash_10 = 0;

    return Raider_Gundam_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Raider_Gundam_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Raider_Gundam_BandaiNamcoGamesHash;
    Raider_Gundam_BandaiNamcoGamesHash.hash_1 = 0x21F3C000; // VO_20_P10_BNG_LOGO_01
Raider_Gundam_BandaiNamcoGamesHash.hash_2 = 0;

    return Raider_Gundam_BandaiNamcoGamesHash;
}

unit_hash_info Raider_Gundam_inject_unit_hash_info()
{
    unit_hash_info Raider_Gundam;
    Raider_Gundam.UnitID = 0x00004E85;
    Raider_Gundam.unk0 = 0xDDC3CBD6;
    Raider_Gundam.DataScript = 0xB0DBDCA2;
    Raider_Gundam.ModelText = 0xC3B4D2F2;
    Raider_Gundam.OMO = 0x623859C0;
    Raider_Gundam.EIDX = 0x21A669DA;
    Raider_Gundam.Sound = 0xBDBB39FF;
    Raider_Gundam.GlobalPilotVoice = 0xCCE615F3;
    Raider_Gundam.WeaponImage = 0x45684DE7;
    Raider_Gundam.IngameImage = 0x4CFF0F80;
    Raider_Gundam.KPKP = 0x7B7C0EE8;
    Raider_Gundam.VoiceFileList = 0x052FFEDA;
    Raider_Gundam.Stream = 0xBBA3168D;

    return Raider_Gundam;
}

unit_unk_enum_info Raider_Gundam_inject_unk_enum()
{
    unit_unk_enum_info Raider_Gundam_unk_Enum;
    Raider_Gundam_unk_Enum.UnitID = 0x00004E85;
    Raider_Gundam_unk_Enum.unk_enum = 0x1;
    return Raider_Gundam_unk_Enum;
}

unit_update_unit_id_list Raider_Gundam_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Raider_Gundam_Update_Unit_ID_List;
    Raider_Gundam_Update_Unit_ID_List.UnitID = 0x00004E85;
    return Raider_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list Raider_Gundam_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Raider_Gundam_Unit_ID_List_2;
    Raider_Gundam_Unit_ID_List_2.UnitID = 0x00004E85;
    return Raider_Gundam_Unit_ID_List_2;
}

unit_string_info Raider_Gundam_inject_string()
{
    add_long_pilot_name_string_ID("F20101", 34);
    add_short_pilot_name_string_ID("S20101", 34);
    add_long_unit_name_string_ID("P20101", 34);
    add_short_unit_name_string_ID("Q20101", 34);

    unit_string_info Raider_Gundam_Gundam_String;
    Raider_Gundam_Gundam_String.UnitID = 0x00004E85;
    Raider_Gundam_Gundam_String.unk_enum = 0xFFFFFFFF;
    Raider_Gundam_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[34].long_pilot_name_str;
    Raider_Gundam_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[34].short_pilot_name_str;
    Raider_Gundam_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[34].long_unit_name_str;
    Raider_Gundam_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[34].short_unit_name_str;

    return Raider_Gundam_Gundam_String;
}
                        