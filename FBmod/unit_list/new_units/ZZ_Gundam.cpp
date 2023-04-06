

#include "ZZ_Gundam.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info ZZ_Gundam_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info ZZ_Gundam_VoiceFileList;
    ZZ_Gundam_VoiceFileList.UnitID = 0x00000C31;
    ZZ_Gundam_VoiceFileList.index = 0x0000011A;
    ZZ_Gundam_VoiceFileList.voice_file_list_hash = 0x7641D8F2;
    ZZ_Gundam_VoiceFileList.unk_enum_0x8 = 0x000005AB;
    return ZZ_Gundam_VoiceFileList;
}

unit_voice_hash_list_0x28 ZZ_Gundam_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 ZZ_Gundam_ArcadeSelectHash;
    ZZ_Gundam_ArcadeSelectHash.hash_1 = 0x9218D3D0; // VO_03_P12_CHARA_SELECT_01
ZZ_Gundam_ArcadeSelectHash.hash_2 = 0x0B11826A; // VO_03_P12_CHARA_SELECT_02
ZZ_Gundam_ArcadeSelectHash.hash_3 = 0x7C16B2FC; // VO_03_P12_CHARA_SELECT_03
ZZ_Gundam_ArcadeSelectHash.hash_4 = 0;
ZZ_Gundam_ArcadeSelectHash.hash_5 = 0;
ZZ_Gundam_ArcadeSelectHash.hash_6 = 0;
ZZ_Gundam_ArcadeSelectHash.hash_7 = 0;
ZZ_Gundam_ArcadeSelectHash.hash_8 = 0;
ZZ_Gundam_ArcadeSelectHash.hash_9 = 0;
ZZ_Gundam_ArcadeSelectHash.hash_10 = 0;

    return ZZ_Gundam_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 ZZ_Gundam_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 ZZ_Gundam_ArcadeContinueNoHash;
    ZZ_Gundam_ArcadeContinueNoHash.hash_1 = 0x01C2426F; // VO_03_P12_GAME_OVER_01
ZZ_Gundam_ArcadeContinueNoHash.hash_2 = 0x98CB13D5; // VO_03_P12_GAME_OVER_02
ZZ_Gundam_ArcadeContinueNoHash.hash_3 = 0xEFCC2343; // VO_03_P12_GAME_OVER_03
ZZ_Gundam_ArcadeContinueNoHash.hash_4 = 0;
ZZ_Gundam_ArcadeContinueNoHash.hash_5 = 0;

    return ZZ_Gundam_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 ZZ_Gundam_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 ZZ_Gundam_ArcadeContinueHash;
    ZZ_Gundam_ArcadeContinueHash.hash_1 = 0xE1C9B4AC; // VO_03_P12_CONTINUE_DEC_01
ZZ_Gundam_ArcadeContinueHash.hash_2 = 0x78C0E516; // VO_03_P12_CONTINUE_DEC_02
ZZ_Gundam_ArcadeContinueHash.hash_3 = 0x0FC7D580; // VO_03_P12_CONTINUE_DEC_03
ZZ_Gundam_ArcadeContinueHash.hash_4 = 0;
ZZ_Gundam_ArcadeContinueHash.hash_5 = 0;

    return ZZ_Gundam_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 ZZ_Gundam_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 ZZ_Gundam_ArcadeContinueYesHash;
    ZZ_Gundam_ArcadeContinueYesHash.hash_1 = 0x249D833B; // VO_03_P12_CONTINUE_01
ZZ_Gundam_ArcadeContinueYesHash.hash_2 = 0xBD94D281; // VO_03_P12_CONTINUE_02
ZZ_Gundam_ArcadeContinueYesHash.hash_3 = 0xCA93E217; // VO_03_P12_CONTINUE_03
ZZ_Gundam_ArcadeContinueYesHash.hash_4 = 0xE1C9B4AC; // VO_03_P12_CONTINUE_DEC_01
ZZ_Gundam_ArcadeContinueYesHash.hash_5 = 0x78C0E516; // VO_03_P12_CONTINUE_DEC_02
ZZ_Gundam_ArcadeContinueYesHash.hash_6 = 0x0FC7D580; // VO_03_P12_CONTINUE_DEC_03
ZZ_Gundam_ArcadeContinueYesHash.hash_7 = 0;
ZZ_Gundam_ArcadeContinueYesHash.hash_8 = 0;
ZZ_Gundam_ArcadeContinueYesHash.hash_9 = 0;
ZZ_Gundam_ArcadeContinueYesHash.hash_10 = 0;

    return ZZ_Gundam_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 ZZ_Gundam_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 ZZ_Gundam_BandaiNamcoGamesHash;
    ZZ_Gundam_BandaiNamcoGamesHash.hash_1 = 0x17E1454C; // VO_03_P12_BNG_LOGO_01
ZZ_Gundam_BandaiNamcoGamesHash.hash_2 = 0;

    return ZZ_Gundam_BandaiNamcoGamesHash;
}

unit_hash_info ZZ_Gundam_inject_unit_hash_info()
{
    unit_hash_info ZZ_Gundam;
    ZZ_Gundam.UnitID = 0x00000C31;
    ZZ_Gundam.unk0 = 0xDDC3CBD6;
    ZZ_Gundam.DataScript = 0xCA877DB7;
    ZZ_Gundam.ModelText = 0xB9E873E7;
    ZZ_Gundam.OMO = 0x0F9FE18A;
    ZZ_Gundam.EIDX = 0x4C01D190;
    ZZ_Gundam.Sound = 0x19EB69AD;
    ZZ_Gundam.GlobalPilotVoice = 0xA0CF89DA;
    ZZ_Gundam.WeaponImage = 0x7393F06C;
    ZZ_Gundam.IngameImage = 0x7393F06C;
    ZZ_Gundam.KPKP = 0xD4C7A534;
    ZZ_Gundam.VoiceFileList = 0x7641D8F2;
    ZZ_Gundam.Stream = 0x94AAD2D9;

    return ZZ_Gundam;
}

unit_unk_enum_info ZZ_Gundam_inject_unk_enum()
{
    unit_unk_enum_info ZZ_Gundam_unk_Enum;
    ZZ_Gundam_unk_Enum.UnitID = 0x00000C31;
    ZZ_Gundam_unk_Enum.unk_enum = 0x1;
    return ZZ_Gundam_unk_Enum;
}

unit_update_unit_id_list ZZ_Gundam_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list ZZ_Gundam_Update_Unit_ID_List;
    ZZ_Gundam_Update_Unit_ID_List.UnitID = 0x00000C31;
    return ZZ_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list ZZ_Gundam_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list ZZ_Gundam_Unit_ID_List_2;
    ZZ_Gundam_Unit_ID_List_2.UnitID = 0x00000C31;
    return ZZ_Gundam_Unit_ID_List_2;
}

unit_string_info ZZ_Gundam_inject_string()
{
    add_long_pilot_name_string_ID("F3121", 11);
    add_short_pilot_name_string_ID("S3121", 11);
    add_long_unit_name_string_ID("P3121", 11);
    add_short_unit_name_string_ID("Q3121", 11);

    unit_string_info ZZ_Gundam_Gundam_String;
    ZZ_Gundam_Gundam_String.UnitID = 0x00000C31;
    ZZ_Gundam_Gundam_String.unk_enum = 0xFFFFFFFF;
    ZZ_Gundam_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[11].long_pilot_name_str;
    ZZ_Gundam_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[11].short_pilot_name_str;
    ZZ_Gundam_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[11].long_unit_name_str;
    ZZ_Gundam_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[11].short_unit_name_str;

    return ZZ_Gundam_Gundam_String;
}
                        