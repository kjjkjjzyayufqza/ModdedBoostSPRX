

#include "Rephaser_Ignith.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Rephaser_Ignith_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Rephaser_Ignith_VoiceFileList;
    Rephaser_Ignith_VoiceFileList.UnitID = 0x0001398F;
    Rephaser_Ignith_VoiceFileList.index = 0x00000139;
    Rephaser_Ignith_VoiceFileList.voice_file_list_hash = 0xC4ABACF4;
    Rephaser_Ignith_VoiceFileList.unk_enum_0x8 = 0x000005CA;
    return Rephaser_Ignith_VoiceFileList;
}

unit_voice_hash_list_0x28 Rephaser_Ignith_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Rephaser_Ignith_ArcadeSelectHash;
    Rephaser_Ignith_ArcadeSelectHash.hash_1 = 0x4E6D46DD; // VO_80_P27_CHARA_SELECT_01
Rephaser_Ignith_ArcadeSelectHash.hash_2 = 0xD7641767; // VO_80_P27_CHARA_SELECT_02
Rephaser_Ignith_ArcadeSelectHash.hash_3 = 0xA06327F1; // VO_80_P27_CHARA_SELECT_03
Rephaser_Ignith_ArcadeSelectHash.hash_4 = 0;
Rephaser_Ignith_ArcadeSelectHash.hash_5 = 0;
Rephaser_Ignith_ArcadeSelectHash.hash_6 = 0;
Rephaser_Ignith_ArcadeSelectHash.hash_7 = 0;
Rephaser_Ignith_ArcadeSelectHash.hash_8 = 0;
Rephaser_Ignith_ArcadeSelectHash.hash_9 = 0;
Rephaser_Ignith_ArcadeSelectHash.hash_10 = 0;

    return Rephaser_Ignith_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Rephaser_Ignith_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Rephaser_Ignith_ArcadeContinueNoHash;
    Rephaser_Ignith_ArcadeContinueNoHash.hash_1 = 0x773B869C; // VO_80_P27_GAME_OVER_01
Rephaser_Ignith_ArcadeContinueNoHash.hash_2 = 0xEE32D726; // VO_80_P27_GAME_OVER_02
Rephaser_Ignith_ArcadeContinueNoHash.hash_3 = 0;
Rephaser_Ignith_ArcadeContinueNoHash.hash_4 = 0;
Rephaser_Ignith_ArcadeContinueNoHash.hash_5 = 0;

    return Rephaser_Ignith_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Rephaser_Ignith_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Rephaser_Ignith_ArcadeContinueHash;
    Rephaser_Ignith_ArcadeContinueHash.hash_1 = 0x3DBC21A1; // VO_80_P27_CONTINUE_DEC_01
Rephaser_Ignith_ArcadeContinueHash.hash_2 = 0xA4B5701B; // VO_80_P27_CONTINUE_DEC_02
Rephaser_Ignith_ArcadeContinueHash.hash_3 = 0;
Rephaser_Ignith_ArcadeContinueHash.hash_4 = 0;
Rephaser_Ignith_ArcadeContinueHash.hash_5 = 0;

    return Rephaser_Ignith_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Rephaser_Ignith_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Rephaser_Ignith_ArcadeContinueYesHash;
    Rephaser_Ignith_ArcadeContinueYesHash.hash_1 = 0x0118E07B; // VO_80_P27_CONTINUE_01
Rephaser_Ignith_ArcadeContinueYesHash.hash_2 = 0x9811B1C1; // VO_80_P27_CONTINUE_02
Rephaser_Ignith_ArcadeContinueYesHash.hash_3 = 0x3DBC21A1; // VO_80_P27_CONTINUE_DEC_01
Rephaser_Ignith_ArcadeContinueYesHash.hash_4 = 0xA4B5701B; // VO_80_P27_CONTINUE_DEC_02
Rephaser_Ignith_ArcadeContinueYesHash.hash_5 = 0;
Rephaser_Ignith_ArcadeContinueYesHash.hash_6 = 0;
Rephaser_Ignith_ArcadeContinueYesHash.hash_7 = 0;
Rephaser_Ignith_ArcadeContinueYesHash.hash_8 = 0;
Rephaser_Ignith_ArcadeContinueYesHash.hash_9 = 0;
Rephaser_Ignith_ArcadeContinueYesHash.hash_10 = 0;

    return Rephaser_Ignith_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Rephaser_Ignith_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Rephaser_Ignith_BandaiNamcoGamesHash;
    Rephaser_Ignith_BandaiNamcoGamesHash.hash_1 = 0x3264260C; // VO_80_P27_BNG_LOGO_01
Rephaser_Ignith_BandaiNamcoGamesHash.hash_2 = 0;

    return Rephaser_Ignith_BandaiNamcoGamesHash;
}

unit_hash_info Rephaser_Ignith_inject_unit_hash_info()
{
    unit_hash_info Rephaser_Ignith;
    Rephaser_Ignith.UnitID = 0x0001398F;
    Rephaser_Ignith.unk0 = 0xDDC3CBD6;
    Rephaser_Ignith.DataScript = 0x2D5DF9CA;
    Rephaser_Ignith.ModelText = 0x5E32F79A;
    Rephaser_Ignith.OMO = 0x21CC368F;
    Rephaser_Ignith.EIDX = 0x62520695;
    Rephaser_Ignith.Sound = 0xDEBCB0EB;
    Rephaser_Ignith.GlobalPilotVoice = 0x3F11CA5D;
    Rephaser_Ignith.WeaponImage = 0x113A8A62;
    Rephaser_Ignith.IngameImage = 0x500532A0;
    Rephaser_Ignith.KPKP = 0xFED494F3;
    Rephaser_Ignith.VoiceFileList = 0xC4ABACF4;
    Rephaser_Ignith.Stream = 0xF50DF09F;

    return Rephaser_Ignith;
}

unit_unk_enum_info Rephaser_Ignith_inject_unk_enum()
{
    unit_unk_enum_info Rephaser_Ignith_unk_Enum;
    Rephaser_Ignith_unk_Enum.UnitID = 0x0001398F;
    Rephaser_Ignith_unk_Enum.unk_enum = 0x1;
    return Rephaser_Ignith_unk_Enum;
}

unit_update_unit_id_list Rephaser_Ignith_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Rephaser_Ignith_Update_Unit_ID_List;
    Rephaser_Ignith_Update_Unit_ID_List.UnitID = 0x0001398F;
    return Rephaser_Ignith_Update_Unit_ID_List;
}

unit_update_unit_id_list Rephaser_Ignith_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Rephaser_Ignith_Unit_ID_List_2;
    Rephaser_Ignith_Unit_ID_List_2.UnitID = 0x0001398F;
    return Rephaser_Ignith_Unit_ID_List_2;
}

unit_string_info Rephaser_Ignith_inject_string()
{
    add_long_pilot_name_string_ID("F80271", 42);
    add_short_pilot_name_string_ID("S80271", 42);
    add_long_unit_name_string_ID("P80271", 42);
    add_short_unit_name_string_ID("Q80271", 42);

    unit_string_info Rephaser_Ignith_Gundam_String;
    Rephaser_Ignith_Gundam_String.UnitID = 0x0001398F;
    Rephaser_Ignith_Gundam_String.unk_enum = 0xFFFFFFFF;
    Rephaser_Ignith_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[42].long_pilot_name_str;
    Rephaser_Ignith_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[42].short_pilot_name_str;
    Rephaser_Ignith_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[42].long_unit_name_str;
    Rephaser_Ignith_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[42].short_unit_name_str;

    return Rephaser_Ignith_Gundam_String;
}
                        