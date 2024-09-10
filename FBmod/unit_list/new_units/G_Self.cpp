

#include "G_Self.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info G_Self_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info G_Self_VoiceFileList;
    G_Self_VoiceFileList.UnitID = 0x0000A41B;
    G_Self_VoiceFileList.index = 0x0000014A;
    G_Self_VoiceFileList.voice_file_list_hash = 0x1FEE834A;
    G_Self_VoiceFileList.unk_enum_0x8 = 0x000005DB;
    return G_Self_VoiceFileList;
}

unit_voice_hash_list_0x28 G_Self_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 G_Self_ArcadeSelectHash;
    G_Self_ArcadeSelectHash.hash_1 = 0xEDAB2E2B; // VO_42_P01_CHARA_SELECT_01
G_Self_ArcadeSelectHash.hash_2 = 0x74A27F91; // VO_42_P01_CHARA_SELECT_02
G_Self_ArcadeSelectHash.hash_3 = 0x03A54F07; // VO_42_P01_CHARA_SELECT_03
G_Self_ArcadeSelectHash.hash_4 = 0x9DC1DAA4; // VO_42_P01_CHARA_SELECT_04
G_Self_ArcadeSelectHash.hash_5 = 0;
G_Self_ArcadeSelectHash.hash_6 = 0;
G_Self_ArcadeSelectHash.hash_7 = 0;
G_Self_ArcadeSelectHash.hash_8 = 0;
G_Self_ArcadeSelectHash.hash_9 = 0;
G_Self_ArcadeSelectHash.hash_10 = 0;

    return G_Self_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 G_Self_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 G_Self_ArcadeContinueNoHash;
    G_Self_ArcadeContinueNoHash.hash_1 = 0xC262075F; // VO_42_P01_GAME_OVER_01
G_Self_ArcadeContinueNoHash.hash_2 = 0x5B6B56E5; // VO_42_P01_GAME_OVER_02
G_Self_ArcadeContinueNoHash.hash_3 = 0;
G_Self_ArcadeContinueNoHash.hash_4 = 0;
G_Self_ArcadeContinueNoHash.hash_5 = 0;

    return G_Self_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 G_Self_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 G_Self_ArcadeContinueHash;
    G_Self_ArcadeContinueHash.hash_1 = 0x9E7A4957; // VO_42_P01_CONTINUE_DEC_01
G_Self_ArcadeContinueHash.hash_2 = 0x077318ED; // VO_42_P01_CONTINUE_DEC_02
G_Self_ArcadeContinueHash.hash_3 = 0;
G_Self_ArcadeContinueHash.hash_4 = 0;
G_Self_ArcadeContinueHash.hash_5 = 0;

    return G_Self_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 G_Self_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 G_Self_ArcadeContinueYesHash;
    G_Self_ArcadeContinueYesHash.hash_1 = 0x885612C6; // VO_42_P01_CONTINUE_01
G_Self_ArcadeContinueYesHash.hash_2 = 0x115F437C; // VO_42_P01_CONTINUE_02
G_Self_ArcadeContinueYesHash.hash_3 = 0x9E7A4957; // VO_42_P01_CONTINUE_DEC_01
G_Self_ArcadeContinueYesHash.hash_4 = 0x077318ED; // VO_42_P01_CONTINUE_DEC_02
G_Self_ArcadeContinueYesHash.hash_5 = 0;
G_Self_ArcadeContinueYesHash.hash_6 = 0;
G_Self_ArcadeContinueYesHash.hash_7 = 0;
G_Self_ArcadeContinueYesHash.hash_8 = 0;
G_Self_ArcadeContinueYesHash.hash_9 = 0;
G_Self_ArcadeContinueYesHash.hash_10 = 0;

    return G_Self_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 G_Self_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 G_Self_BandaiNamcoGamesHash;
    G_Self_BandaiNamcoGamesHash.hash_1 = 0;
G_Self_BandaiNamcoGamesHash.hash_2 = 0;

    return G_Self_BandaiNamcoGamesHash;
}

unit_hash_info G_Self_inject_unit_hash_info()
{
    unit_hash_info G_Self;
    G_Self.UnitID = 0x0000A41B;
    G_Self.unk0 = 0xDDC3CBD6;
    G_Self.DataScript = 0xAE110BDE;
    G_Self.ModelText = 0xDD7E058E;
    G_Self.OMO = 0x3B95AE00;
    G_Self.EIDX = 0x780B9E1A;
    G_Self.Sound = 0xBEEA92E2;
    G_Self.GlobalPilotVoice = 0x05AE7CAF;
    G_Self.WeaponImage = 0x8E4D5975;
    G_Self.IngameImage = 0xF91A27C2;
    G_Self.KPKP = 0x41B6B54D;
    G_Self.VoiceFileList = 0x1FEE834A;
    G_Self.Stream = 0xFFEACCFE;

    return G_Self;
}

unit_unk_enum_info G_Self_inject_unk_enum()
{
    unit_unk_enum_info G_Self_unk_Enum;
    G_Self_unk_Enum.UnitID = 0x0000A41B;
    G_Self_unk_Enum.unk_enum = 0x1;
    return G_Self_unk_Enum;
}

unit_update_unit_id_list G_Self_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list G_Self_Update_Unit_ID_List;
    G_Self_Update_Unit_ID_List.UnitID = 0x0000A41B;
    return G_Self_Update_Unit_ID_List;
}

unit_update_unit_id_list G_Self_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list G_Self_Unit_ID_List_2;
    G_Self_Unit_ID_List_2.UnitID = 0x0000A41B;
    return G_Self_Unit_ID_List_2;
}

unit_string_info G_Self_inject_string()
{
    add_long_pilot_name_string_ID("F42011", 59);
    add_short_pilot_name_string_ID("S42011", 59);
    add_long_unit_name_string_ID("P42011", 59);
    add_short_unit_name_string_ID("Q42011", 59);

    unit_string_info G_Self_Gundam_String;
    G_Self_Gundam_String.UnitID = 0x0000A41B;
    G_Self_Gundam_String.unk_enum = 0xFFFFFFFF;
    G_Self_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[59].long_pilot_name_str;
    G_Self_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[59].short_pilot_name_str;
    G_Self_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[59].long_unit_name_str;
    G_Self_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[59].short_unit_name_str;

    return G_Self_Gundam_String;
}
                        