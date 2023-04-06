

#include "Rephaser_Mystic.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Rephaser_Mystic_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Rephaser_Mystic_VoiceFileList;
    Rephaser_Mystic_VoiceFileList.UnitID = 0x000139A3;
    Rephaser_Mystic_VoiceFileList.index = 0x0000011D;
    Rephaser_Mystic_VoiceFileList.voice_file_list_hash = 0xBB0C20CD;
    Rephaser_Mystic_VoiceFileList.unk_enum_0x8 = 0x000005AE;
    return Rephaser_Mystic_VoiceFileList;
}

unit_voice_hash_list_0x28 Rephaser_Mystic_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Rephaser_Mystic_ArcadeSelectHash;
    Rephaser_Mystic_ArcadeSelectHash.hash_1 = 0x0F49BE4B; // VO_80_P29_CHARA_SELECT_01
Rephaser_Mystic_ArcadeSelectHash.hash_2 = 0x9640EFF1; // VO_80_P29_CHARA_SELECT_02
Rephaser_Mystic_ArcadeSelectHash.hash_3 = 0xE147DF67; // VO_80_P29_CHARA_SELECT_03
Rephaser_Mystic_ArcadeSelectHash.hash_4 = 0;
Rephaser_Mystic_ArcadeSelectHash.hash_5 = 0;
Rephaser_Mystic_ArcadeSelectHash.hash_6 = 0;
Rephaser_Mystic_ArcadeSelectHash.hash_7 = 0;
Rephaser_Mystic_ArcadeSelectHash.hash_8 = 0;
Rephaser_Mystic_ArcadeSelectHash.hash_9 = 0;
Rephaser_Mystic_ArcadeSelectHash.hash_10 = 0;

    return Rephaser_Mystic_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Rephaser_Mystic_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Rephaser_Mystic_ArcadeContinueNoHash;
    Rephaser_Mystic_ArcadeContinueNoHash.hash_1 = 0xBCA0D31C; // VO_80_P29_GAME_OVER_01
Rephaser_Mystic_ArcadeContinueNoHash.hash_2 = 0x25A982A6; // VO_80_P29_GAME_OVER_02
Rephaser_Mystic_ArcadeContinueNoHash.hash_3 = 0;
Rephaser_Mystic_ArcadeContinueNoHash.hash_4 = 0;
Rephaser_Mystic_ArcadeContinueNoHash.hash_5 = 0;

    return Rephaser_Mystic_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Rephaser_Mystic_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Rephaser_Mystic_ArcadeContinueHash;
    Rephaser_Mystic_ArcadeContinueHash.hash_1 = 0x7C98D937; // VO_80_P29_CONTINUE_DEC_01
Rephaser_Mystic_ArcadeContinueHash.hash_2 = 0xE591888D; // VO_80_P29_CONTINUE_DEC_02
Rephaser_Mystic_ArcadeContinueHash.hash_3 = 0;
Rephaser_Mystic_ArcadeContinueHash.hash_4 = 0;
Rephaser_Mystic_ArcadeContinueHash.hash_5 = 0;

    return Rephaser_Mystic_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Rephaser_Mystic_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Rephaser_Mystic_ArcadeContinueYesHash;
    Rephaser_Mystic_ArcadeContinueYesHash.hash_1 = 0xFBFEECCB; // VO_80_P29_CONTINUE_01
Rephaser_Mystic_ArcadeContinueYesHash.hash_2 = 0x62F7BD71; // VO_80_P29_CONTINUE_02
Rephaser_Mystic_ArcadeContinueYesHash.hash_3 = 0x7C98D937; // VO_80_P29_CONTINUE_DEC_01
Rephaser_Mystic_ArcadeContinueYesHash.hash_4 = 0xE591888D; // VO_80_P29_CONTINUE_DEC_02
Rephaser_Mystic_ArcadeContinueYesHash.hash_5 = 0;
Rephaser_Mystic_ArcadeContinueYesHash.hash_6 = 0;
Rephaser_Mystic_ArcadeContinueYesHash.hash_7 = 0;
Rephaser_Mystic_ArcadeContinueYesHash.hash_8 = 0;
Rephaser_Mystic_ArcadeContinueYesHash.hash_9 = 0;
Rephaser_Mystic_ArcadeContinueYesHash.hash_10 = 0;

    return Rephaser_Mystic_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Rephaser_Mystic_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Rephaser_Mystic_BandaiNamcoGamesHash;
    Rephaser_Mystic_BandaiNamcoGamesHash.hash_1 = 0xC8822ABC; // VO_80_P29_BNG_LOGO_01
Rephaser_Mystic_BandaiNamcoGamesHash.hash_2 = 0;

    return Rephaser_Mystic_BandaiNamcoGamesHash;
}

unit_hash_info Rephaser_Mystic_inject_unit_hash_info()
{
    unit_hash_info Rephaser_Mystic;
    Rephaser_Mystic.UnitID = 0x000139A3;
    Rephaser_Mystic.unk0 = 0xDDC3CBD6;
    Rephaser_Mystic.DataScript = 0xA4A18CF0;
    Rephaser_Mystic.ModelText = 0xD7CE82A0;
    Rephaser_Mystic.OMO = 0xE7491348;
    Rephaser_Mystic.EIDX = 0xA4D72352;
    Rephaser_Mystic.Sound = 0xFE10058B;
    Rephaser_Mystic.GlobalPilotVoice = 0xD032A23E;
    Rephaser_Mystic.WeaponImage = 0x3E6450FB;
    Rephaser_Mystic.IngameImage = 0x3E6450FB;
    Rephaser_Mystic.KPKP = 0xAA66931C;
    Rephaser_Mystic.VoiceFileList = 0xBB0C20CD;
    Rephaser_Mystic.Stream = 0x0375B9DC;

    return Rephaser_Mystic;
}

unit_unk_enum_info Rephaser_Mystic_inject_unk_enum()
{
    unit_unk_enum_info Rephaser_Mystic_unk_Enum;
    Rephaser_Mystic_unk_Enum.UnitID = 0x000139A3;
    Rephaser_Mystic_unk_Enum.unk_enum = 0x1;
    return Rephaser_Mystic_unk_Enum;
}

unit_update_unit_id_list Rephaser_Mystic_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Rephaser_Mystic_Update_Unit_ID_List;
    Rephaser_Mystic_Update_Unit_ID_List.UnitID = 0x000139A3;
    return Rephaser_Mystic_Update_Unit_ID_List;
}

unit_update_unit_id_list Rephaser_Mystic_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Rephaser_Mystic_Unit_ID_List_2;
    Rephaser_Mystic_Unit_ID_List_2.UnitID = 0x000139A3;
    return Rephaser_Mystic_Unit_ID_List_2;
}

unit_string_info Rephaser_Mystic_inject_string()
{
    add_long_pilot_name_string_ID("F80291", 14);
    add_short_pilot_name_string_ID("S80291", 14);
    add_long_unit_name_string_ID("P80291", 14);
    add_short_unit_name_string_ID("Q80291", 14);

    unit_string_info Rephaser_Mystic_Gundam_String;
    Rephaser_Mystic_Gundam_String.UnitID = 0x000139A3;
    Rephaser_Mystic_Gundam_String.unk_enum = 0xFFFFFFFF;
    Rephaser_Mystic_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[14].long_pilot_name_str;
    Rephaser_Mystic_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[14].short_pilot_name_str;
    Rephaser_Mystic_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[14].long_unit_name_str;
    Rephaser_Mystic_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[14].short_unit_name_str;

    return Rephaser_Mystic_Gundam_String;
}
                        