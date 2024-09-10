

#include "Nightingale.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Nightingale_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Nightingale_VoiceFileList;
    Nightingale_VoiceFileList.UnitID = 0x000065A5;
    Nightingale_VoiceFileList.index = 0x0000013C;
    Nightingale_VoiceFileList.voice_file_list_hash = 0x167D43EF;
    Nightingale_VoiceFileList.unk_enum_0x8 = 0x000005CD;
    return Nightingale_VoiceFileList;
}

unit_voice_hash_list_0x28 Nightingale_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Nightingale_ArcadeSelectHash;
    Nightingale_ArcadeSelectHash.hash_1 = 0xDE392B94; // VO_26_P02_CHARA_SELECT_01
Nightingale_ArcadeSelectHash.hash_2 = 0x47307A2E; // VO_26_P02_CHARA_SELECT_02
Nightingale_ArcadeSelectHash.hash_3 = 0x30374AB8; // VO_26_P02_CHARA_SELECT_03
Nightingale_ArcadeSelectHash.hash_4 = 0xAE53DF1B; // VO_26_P02_CHARA_SELECT_04
Nightingale_ArcadeSelectHash.hash_5 = 0xD954EF8D; // VO_26_P02_CHARA_SELECT_05
Nightingale_ArcadeSelectHash.hash_6 = 0x405DBE37; // VO_26_P02_CHARA_SELECT_06
Nightingale_ArcadeSelectHash.hash_7 = 0;
Nightingale_ArcadeSelectHash.hash_8 = 0;
Nightingale_ArcadeSelectHash.hash_9 = 0;
Nightingale_ArcadeSelectHash.hash_10 = 0;

    return Nightingale_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Nightingale_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Nightingale_ArcadeContinueNoHash;
    Nightingale_ArcadeContinueNoHash.hash_1 = 0x2877FE91; // VO_26_P02_GAME_OVER_01
Nightingale_ArcadeContinueNoHash.hash_2 = 0xB17EAF2B; // VO_26_P02_GAME_OVER_02
Nightingale_ArcadeContinueNoHash.hash_3 = 0xC6799FBD; // VO_26_P02_GAME_OVER_03
Nightingale_ArcadeContinueNoHash.hash_4 = 0x581D0A1E; // VO_26_P02_GAME_OVER_04
Nightingale_ArcadeContinueNoHash.hash_5 = 0;

    return Nightingale_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Nightingale_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Nightingale_ArcadeContinueHash;
    Nightingale_ArcadeContinueHash.hash_1 = 0xADE84CE8; // VO_26_P02_CONTINUE_DEC_01
Nightingale_ArcadeContinueHash.hash_2 = 0x34E11D52; // VO_26_P02_CONTINUE_DEC_02
Nightingale_ArcadeContinueHash.hash_3 = 0x43E62DC4; // VO_26_P02_CONTINUE_DEC_03
Nightingale_ArcadeContinueHash.hash_4 = 0;
Nightingale_ArcadeContinueHash.hash_5 = 0;

    return Nightingale_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Nightingale_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Nightingale_ArcadeContinueYesHash;
    Nightingale_ArcadeContinueYesHash.hash_1 = 0x48E8E542; // VO_26_P02_CONTINUE_01
Nightingale_ArcadeContinueYesHash.hash_2 = 0xD1E1B4F8; // VO_26_P02_CONTINUE_02
Nightingale_ArcadeContinueYesHash.hash_3 = 0xADE84CE8; // VO_26_P02_CONTINUE_DEC_01
Nightingale_ArcadeContinueYesHash.hash_4 = 0x34E11D52; // VO_26_P02_CONTINUE_DEC_02
Nightingale_ArcadeContinueYesHash.hash_5 = 0x43E62DC4; // VO_26_P02_CONTINUE_DEC_03
Nightingale_ArcadeContinueYesHash.hash_6 = 0;
Nightingale_ArcadeContinueYesHash.hash_7 = 0;
Nightingale_ArcadeContinueYesHash.hash_8 = 0;
Nightingale_ArcadeContinueYesHash.hash_9 = 0;
Nightingale_ArcadeContinueYesHash.hash_10 = 0;

    return Nightingale_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Nightingale_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Nightingale_BandaiNamcoGamesHash;
    Nightingale_BandaiNamcoGamesHash.hash_1 = 0;
Nightingale_BandaiNamcoGamesHash.hash_2 = 0;

    return Nightingale_BandaiNamcoGamesHash;
}

unit_hash_info Nightingale_inject_unit_hash_info()
{
    unit_hash_info Nightingale;
    Nightingale.UnitID = 0x000065A5;
    Nightingale.unk0 = 0xDDC3CBD6;
    Nightingale.DataScript = 0xD21EECD6;
    Nightingale.ModelText = 0xA171E286;
    Nightingale.OMO = 0x353229D5;
    Nightingale.EIDX = 0x76AC19CF;
    Nightingale.Sound = 0x9FE9F3B0;
    Nightingale.GlobalPilotVoice = 0xCB800897;
    Nightingale.WeaponImage = 0x5D45E6BB;
    Nightingale.IngameImage = 0x3A3B13DE;
    Nightingale.KPKP = 0xF9A2CD47;
    Nightingale.VoiceFileList = 0x167D43EF;
    Nightingale.Stream = 0xB07A6B89;

    return Nightingale;
}

unit_unk_enum_info Nightingale_inject_unk_enum()
{
    unit_unk_enum_info Nightingale_unk_Enum;
    Nightingale_unk_Enum.UnitID = 0x000065A5;
    Nightingale_unk_Enum.unk_enum = 0x1;
    return Nightingale_unk_Enum;
}

unit_update_unit_id_list Nightingale_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Nightingale_Update_Unit_ID_List;
    Nightingale_Update_Unit_ID_List.UnitID = 0x000065A5;
    return Nightingale_Update_Unit_ID_List;
}

unit_update_unit_id_list Nightingale_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Nightingale_Unit_ID_List_2;
    Nightingale_Unit_ID_List_2.UnitID = 0x000065A5;
    return Nightingale_Unit_ID_List_2;
}

unit_string_info Nightingale_inject_string()
{
    add_long_pilot_name_string_ID("F26021", 45);
    add_short_pilot_name_string_ID("S26021", 45);
    add_long_unit_name_string_ID("P26021", 45);
    add_short_unit_name_string_ID("Q26021", 45);

    unit_string_info Nightingale_Gundam_String;
    Nightingale_Gundam_String.UnitID = 0x000065A5;
    Nightingale_Gundam_String.unk_enum = 0xFFFFFFFF;
    Nightingale_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[45].long_pilot_name_str;
    Nightingale_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[45].short_pilot_name_str;
    Nightingale_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[45].long_unit_name_str;
    Nightingale_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[45].short_unit_name_str;

    return Nightingale_Gundam_String;
}
                        