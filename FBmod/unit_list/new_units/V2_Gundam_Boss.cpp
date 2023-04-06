

#include "V2_Gundam_Boss.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info V2_Gundam_Boss_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info V2_Gundam_Boss_VoiceFileList;
    V2_Gundam_Boss_VoiceFileList.UnitID = 0x000139D5;
    V2_Gundam_Boss_VoiceFileList.index = 0x00000141;
    V2_Gundam_Boss_VoiceFileList.voice_file_list_hash = 0xE6106E8B;
    V2_Gundam_Boss_VoiceFileList.unk_enum_0x8 = 0x000005D2;
    return V2_Gundam_Boss_VoiceFileList;
}

unit_voice_hash_list_0x28 V2_Gundam_Boss_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 V2_Gundam_Boss_ArcadeSelectHash;
    V2_Gundam_Boss_ArcadeSelectHash.hash_1 = 0xD8ED3B73; // VO_05_P01_CHARA_SELECT_01
V2_Gundam_Boss_ArcadeSelectHash.hash_2 = 0x41E46AC9; // VO_05_P01_CHARA_SELECT_02
V2_Gundam_Boss_ArcadeSelectHash.hash_3 = 0x36E35A5F; // VO_05_P01_CHARA_SELECT_03
V2_Gundam_Boss_ArcadeSelectHash.hash_4 = 0;
V2_Gundam_Boss_ArcadeSelectHash.hash_5 = 0;
V2_Gundam_Boss_ArcadeSelectHash.hash_6 = 0;
V2_Gundam_Boss_ArcadeSelectHash.hash_7 = 0;
V2_Gundam_Boss_ArcadeSelectHash.hash_8 = 0;
V2_Gundam_Boss_ArcadeSelectHash.hash_9 = 0;
V2_Gundam_Boss_ArcadeSelectHash.hash_10 = 0;

    return V2_Gundam_Boss_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 V2_Gundam_Boss_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 V2_Gundam_Boss_ArcadeContinueNoHash;
    V2_Gundam_Boss_ArcadeContinueNoHash.hash_1 = 0xCA2400D9; // VO_05_P01_GAME_OVER_01
V2_Gundam_Boss_ArcadeContinueNoHash.hash_2 = 0x532D5163; // VO_05_P01_GAME_OVER_02
V2_Gundam_Boss_ArcadeContinueNoHash.hash_3 = 0;
V2_Gundam_Boss_ArcadeContinueNoHash.hash_4 = 0;
V2_Gundam_Boss_ArcadeContinueNoHash.hash_5 = 0;

    return V2_Gundam_Boss_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 V2_Gundam_Boss_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 V2_Gundam_Boss_ArcadeContinueHash;
    V2_Gundam_Boss_ArcadeContinueHash.hash_1 = 0xAB3C5C0F; // VO_05_P01_CONTINUE_DEC_01
V2_Gundam_Boss_ArcadeContinueHash.hash_2 = 0x32350DB5; // VO_05_P01_CONTINUE_DEC_02
V2_Gundam_Boss_ArcadeContinueHash.hash_3 = 0;
V2_Gundam_Boss_ArcadeContinueHash.hash_4 = 0;
V2_Gundam_Boss_ArcadeContinueHash.hash_5 = 0;

    return V2_Gundam_Boss_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 V2_Gundam_Boss_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 V2_Gundam_Boss_ArcadeContinueYesHash;
    V2_Gundam_Boss_ArcadeContinueYesHash.hash_1 = 0xA36CB98B; // VO_05_P01_CONTINUE_01
V2_Gundam_Boss_ArcadeContinueYesHash.hash_2 = 0x3A65E831; // VO_05_P01_CONTINUE_02
V2_Gundam_Boss_ArcadeContinueYesHash.hash_3 = 0xAB3C5C0F; // VO_05_P01_CONTINUE_DEC_01
V2_Gundam_Boss_ArcadeContinueYesHash.hash_4 = 0x32350DB5; // VO_05_P01_CONTINUE_DEC_02
V2_Gundam_Boss_ArcadeContinueYesHash.hash_5 = 0;
V2_Gundam_Boss_ArcadeContinueYesHash.hash_6 = 0;
V2_Gundam_Boss_ArcadeContinueYesHash.hash_7 = 0;
V2_Gundam_Boss_ArcadeContinueYesHash.hash_8 = 0;
V2_Gundam_Boss_ArcadeContinueYesHash.hash_9 = 0;
V2_Gundam_Boss_ArcadeContinueYesHash.hash_10 = 0;

    return V2_Gundam_Boss_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 V2_Gundam_Boss_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 V2_Gundam_Boss_BandaiNamcoGamesHash;
    V2_Gundam_Boss_BandaiNamcoGamesHash.hash_1 = 0x90107FFC; // VO_05_P01_BNG_LOGO_01
V2_Gundam_Boss_BandaiNamcoGamesHash.hash_2 = 0;

    return V2_Gundam_Boss_BandaiNamcoGamesHash;
}

unit_hash_info V2_Gundam_Boss_inject_unit_hash_info()
{
    unit_hash_info V2_Gundam_Boss;
    V2_Gundam_Boss.UnitID = 0x000139D5;
    V2_Gundam_Boss.unk0 = 0xDDC3CBD6;
    V2_Gundam_Boss.DataScript = 0x29AFDA22;
    V2_Gundam_Boss.ModelText = 0x5AC0D472;
    V2_Gundam_Boss.OMO = 0x8F19AEE6;
    V2_Gundam_Boss.EIDX = 0xC120E0DE;
    V2_Gundam_Boss.Sound = 0x847E02AF;
    V2_Gundam_Boss.GlobalPilotVoice = 0x7CB054B8;
    V2_Gundam_Boss.WeaponImage = 0x96E17715;
    V2_Gundam_Boss.IngameImage = 0x96E17715;
    V2_Gundam_Boss.KPKP = 0x919E2FE4;
    V2_Gundam_Boss.VoiceFileList = 0xE6106E8B;
    V2_Gundam_Boss.Stream = 0x3D7A7FF7;

    return V2_Gundam_Boss;
}

unit_unk_enum_info V2_Gundam_Boss_inject_unk_enum()
{
    unit_unk_enum_info V2_Gundam_Boss_unk_Enum;
    V2_Gundam_Boss_unk_Enum.UnitID = 0x000139D5;
    V2_Gundam_Boss_unk_Enum.unk_enum = 0x1;
    return V2_Gundam_Boss_unk_Enum;
}

unit_update_unit_id_list V2_Gundam_Boss_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list V2_Gundam_Boss_Update_Unit_ID_List;
    V2_Gundam_Boss_Update_Unit_ID_List.UnitID = 0x000139D5;
    return V2_Gundam_Boss_Update_Unit_ID_List;
}

unit_update_unit_id_list V2_Gundam_Boss_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list V2_Gundam_Boss_Unit_ID_List_2;
    V2_Gundam_Boss_Unit_ID_List_2.UnitID = 0x000139D5;
    return V2_Gundam_Boss_Unit_ID_List_2;
}

unit_string_info V2_Gundam_Boss_inject_string()
{
    add_long_pilot_name_string_ID("F80341", 50);
    add_short_pilot_name_string_ID("S80341", 50);
    add_long_unit_name_string_ID("P80341", 50);
    add_short_unit_name_string_ID("Q80341", 50);

    unit_string_info V2_Gundam_Boss_Gundam_String;
    V2_Gundam_Boss_Gundam_String.UnitID = 0x000139D5;
    V2_Gundam_Boss_Gundam_String.unk_enum = 0xFFFFFFFF;
    V2_Gundam_Boss_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[50].long_pilot_name_str;
    V2_Gundam_Boss_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[50].short_pilot_name_str;
    V2_Gundam_Boss_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[50].long_unit_name_str;
    V2_Gundam_Boss_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[50].short_unit_name_str;

    return V2_Gundam_Boss_Gundam_String;
}
                        