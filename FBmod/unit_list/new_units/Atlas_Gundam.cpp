

#include "Atlas_Gundam.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Atlas_Gundam_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Atlas_Gundam_VoiceFileList;
    Atlas_Gundam_VoiceFileList.UnitID = 0x0000B3CF;
    Atlas_Gundam_VoiceFileList.index = 0x00000158;
    Atlas_Gundam_VoiceFileList.voice_file_list_hash = 0x5C86A95A;
    Atlas_Gundam_VoiceFileList.unk_enum_0x8 = 0x000005E9;
    return Atlas_Gundam_VoiceFileList;
}

unit_voice_hash_list_0x28 Atlas_Gundam_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Atlas_Gundam_ArcadeSelectHash;
    Atlas_Gundam_ArcadeSelectHash.hash_1 = 0xFF522A90; // VO_46_P01_CHARA_SELECT_01
Atlas_Gundam_ArcadeSelectHash.hash_2 = 0x665B7B2A; // VO_46_P01_CHARA_SELECT_02
Atlas_Gundam_ArcadeSelectHash.hash_3 = 0x115C4BBC; // VO_46_P01_CHARA_SELECT_03
Atlas_Gundam_ArcadeSelectHash.hash_4 = 0x8F38DE1F; // VO_46_P01_CHARA_SELECT_04
Atlas_Gundam_ArcadeSelectHash.hash_5 = 0xF83FEE89; // VO_46_P01_CHARA_SELECT_05
Atlas_Gundam_ArcadeSelectHash.hash_6 = 0x6048284F; // VO_46_P03_T1_CHARA_SELECT_01
Atlas_Gundam_ArcadeSelectHash.hash_7 = 0xF94179F5; // VO_46_P03_T1_CHARA_SELECT_02
Atlas_Gundam_ArcadeSelectHash.hash_8 = 0x8E464963; // VO_46_P03_T1_CHARA_SELECT_03
Atlas_Gundam_ArcadeSelectHash.hash_9 = 0;
Atlas_Gundam_ArcadeSelectHash.hash_10 = 0;

    return Atlas_Gundam_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Atlas_Gundam_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Atlas_Gundam_ArcadeContinueNoHash;
    Atlas_Gundam_ArcadeContinueNoHash.hash_1 = 0xC9CAD059; // VO_46_P01_GAME_OVER_01
Atlas_Gundam_ArcadeContinueNoHash.hash_2 = 0x50C381E3; // VO_46_P01_GAME_OVER_02
Atlas_Gundam_ArcadeContinueNoHash.hash_3 = 0x6515D198; // VO_46_P03_T1_GAME_OVER_01
Atlas_Gundam_ArcadeContinueNoHash.hash_4 = 0xFC1C8022; // VO_46_P03_T1_GAME_OVER_02
Atlas_Gundam_ArcadeContinueNoHash.hash_5 = 0;

    return Atlas_Gundam_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Atlas_Gundam_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Atlas_Gundam_ArcadeContinueHash;
    Atlas_Gundam_ArcadeContinueHash.hash_1 = 0x8C834DEC; // VO_46_P01_CONTINUE_DEC_01
Atlas_Gundam_ArcadeContinueHash.hash_2 = 0x158A1C56; // VO_46_P01_CONTINUE_DEC_02
Atlas_Gundam_ArcadeContinueHash.hash_3 = 0x13994F33; // VO_46_P03_T1_CONTINUE_DEC_01
Atlas_Gundam_ArcadeContinueHash.hash_4 = 0x8A901E89; // VO_46_P03_T1_CONTINUE_DEC_02
Atlas_Gundam_ArcadeContinueHash.hash_5 = 0;

    return Atlas_Gundam_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Atlas_Gundam_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Atlas_Gundam_ArcadeContinueYesHash;
    Atlas_Gundam_ArcadeContinueYesHash.hash_1 = 0xFB5E3509; // VO_46_P01_CONTINUE_01
Atlas_Gundam_ArcadeContinueYesHash.hash_2 = 0x625764B3; // VO_46_P01_CONTINUE_02
Atlas_Gundam_ArcadeContinueYesHash.hash_3 = 0x8C834DEC; // VO_46_P01_CONTINUE_DEC_01
Atlas_Gundam_ArcadeContinueYesHash.hash_4 = 0x158A1C56; // VO_46_P01_CONTINUE_DEC_02
Atlas_Gundam_ArcadeContinueYesHash.hash_5 = 0x98A6B422; // VO_46_P03_T1_CONTINUE_01
Atlas_Gundam_ArcadeContinueYesHash.hash_6 = 0x01AFE598; // VO_46_P03_T1_CONTINUE_02
Atlas_Gundam_ArcadeContinueYesHash.hash_7 = 0x13994F33; // VO_46_P03_T1_CONTINUE_DEC_01
Atlas_Gundam_ArcadeContinueYesHash.hash_8 = 0x8A901E89; // VO_46_P03_T1_CONTINUE_DEC_02
Atlas_Gundam_ArcadeContinueYesHash.hash_9 = 0;
Atlas_Gundam_ArcadeContinueYesHash.hash_10 = 0;

    return Atlas_Gundam_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Atlas_Gundam_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Atlas_Gundam_BandaiNamcoGamesHash;
    Atlas_Gundam_BandaiNamcoGamesHash.hash_1 = 0;
Atlas_Gundam_BandaiNamcoGamesHash.hash_2 = 0;

    return Atlas_Gundam_BandaiNamcoGamesHash;
}

unit_hash_info Atlas_Gundam_inject_unit_hash_info()
{
    unit_hash_info Atlas_Gundam;
    Atlas_Gundam.UnitID = 0x0000B3CF;
    Atlas_Gundam.unk0 = 0xDDC3CBD6;
    Atlas_Gundam.DataScript = 0x2E026EDB;
    Atlas_Gundam.ModelText = 0x5D6D608B;
    Atlas_Gundam.OMO = 0x4B7F49EA;
    Atlas_Gundam.EIDX = 0x08E179F0;
    Atlas_Gundam.Sound = 0x7A5822D7;
    Atlas_Gundam.GlobalPilotVoice = 0x60035A28;
    Atlas_Gundam.WeaponImage = 0xF84F97E0;
    Atlas_Gundam.IngameImage = 0xBF867AFD;
    Atlas_Gundam.KPKP = 0x271BD2BF;
    Atlas_Gundam.VoiceFileList = 0x5C86A95A;
    Atlas_Gundam.Stream = 0xE2158DA6;

    return Atlas_Gundam;
}

unit_unk_enum_info Atlas_Gundam_inject_unk_enum()
{
    unit_unk_enum_info Atlas_Gundam_unk_Enum;
    Atlas_Gundam_unk_Enum.UnitID = 0x0000B3CF;
    Atlas_Gundam_unk_Enum.unk_enum = 0x1;
    return Atlas_Gundam_unk_Enum;
}

unit_update_unit_id_list Atlas_Gundam_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Atlas_Gundam_Update_Unit_ID_List;
    Atlas_Gundam_Update_Unit_ID_List.UnitID = 0x0000B3CF;
    return Atlas_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list Atlas_Gundam_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Atlas_Gundam_Unit_ID_List_2;
    Atlas_Gundam_Unit_ID_List_2.UnitID = 0x0000B3CF;
    return Atlas_Gundam_Unit_ID_List_2;
}

unit_string_info Atlas_Gundam_inject_string()
{
    add_long_pilot_name_string_ID("F46031", 73);
    add_short_pilot_name_string_ID("S46031", 73);
    add_long_unit_name_string_ID("P46031", 73);
    add_short_unit_name_string_ID("Q46031", 73);

    unit_string_info Atlas_Gundam_Gundam_String;
    Atlas_Gundam_Gundam_String.UnitID = 0x0000B3CF;
    Atlas_Gundam_Gundam_String.unk_enum = 0xFFFFFFFF;
    Atlas_Gundam_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[73].long_pilot_name_str;
    Atlas_Gundam_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[73].short_pilot_name_str;
    Atlas_Gundam_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[73].long_unit_name_str;
    Atlas_Gundam_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[73].short_unit_name_str;

    return Atlas_Gundam_Gundam_String;
}
                        