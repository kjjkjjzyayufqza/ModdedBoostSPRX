

#include "Perfect_Strike_Gundam.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Perfect_Strike_Gundam_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Perfect_Strike_Gundam_VoiceFileList;
    Perfect_Strike_Gundam_VoiceFileList.UnitID = 0x00004E71;
    Perfect_Strike_Gundam_VoiceFileList.index = 0x0000011C;
    Perfect_Strike_Gundam_VoiceFileList.voice_file_list_hash = 0xAEB66595;
    Perfect_Strike_Gundam_VoiceFileList.unk_enum_0x8 = 0x000005AD;
    return Perfect_Strike_Gundam_VoiceFileList;
}

unit_voice_hash_list_0x28 Perfect_Strike_Gundam_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Perfect_Strike_Gundam_ArcadeSelectHash;
    Perfect_Strike_Gundam_ArcadeSelectHash.hash_1 = 0x1A28F10B; // VO_20_P08_CHARA_SELECT_01
Perfect_Strike_Gundam_ArcadeSelectHash.hash_2 = 0x8321A0B1; // VO_20_P08_CHARA_SELECT_02
Perfect_Strike_Gundam_ArcadeSelectHash.hash_3 = 0xF4269027; // VO_20_P08_CHARA_SELECT_03
Perfect_Strike_Gundam_ArcadeSelectHash.hash_4 = 0x6A420584; // VO_20_P08_CHARA_SELECT_04
Perfect_Strike_Gundam_ArcadeSelectHash.hash_5 = 0;
Perfect_Strike_Gundam_ArcadeSelectHash.hash_6 = 0;
Perfect_Strike_Gundam_ArcadeSelectHash.hash_7 = 0;
Perfect_Strike_Gundam_ArcadeSelectHash.hash_8 = 0;
Perfect_Strike_Gundam_ArcadeSelectHash.hash_9 = 0;
Perfect_Strike_Gundam_ArcadeSelectHash.hash_10 = 0;

    return Perfect_Strike_Gundam_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Perfect_Strike_Gundam_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Perfect_Strike_Gundam_ArcadeContinueNoHash;
    Perfect_Strike_Gundam_ArcadeContinueNoHash.hash_1 = 0xF43C988F; // VO_20_P08_GAME_OVER_01
Perfect_Strike_Gundam_ArcadeContinueNoHash.hash_2 = 0x6D35C935; // VO_20_P08_GAME_OVER_02
Perfect_Strike_Gundam_ArcadeContinueNoHash.hash_3 = 0x1A32F9A3; // VO_20_P08_GAME_OVER_03
Perfect_Strike_Gundam_ArcadeContinueNoHash.hash_4 = 0;
Perfect_Strike_Gundam_ArcadeContinueNoHash.hash_5 = 0;

    return Perfect_Strike_Gundam_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Perfect_Strike_Gundam_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Perfect_Strike_Gundam_ArcadeContinueHash;
    Perfect_Strike_Gundam_ArcadeContinueHash.hash_1 = 0x69F99677; // VO_20_P08_CONTINUE_DEC_01
Perfect_Strike_Gundam_ArcadeContinueHash.hash_2 = 0xF0F0C7CD; // VO_20_P08_CONTINUE_DEC_02
Perfect_Strike_Gundam_ArcadeContinueHash.hash_3 = 0x87F7F75B; // VO_20_P08_CONTINUE_DEC_03
Perfect_Strike_Gundam_ArcadeContinueHash.hash_4 = 0x199362F8; // VO_20_P08_CONTINUE_DEC_04
Perfect_Strike_Gundam_ArcadeContinueHash.hash_5 = 0;

    return Perfect_Strike_Gundam_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Perfect_Strike_Gundam_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Perfect_Strike_Gundam_ArcadeContinueYesHash;
    Perfect_Strike_Gundam_ArcadeContinueYesHash.hash_1 = 0xD583346C; // VO_20_P08_CONTINUE_01
Perfect_Strike_Gundam_ArcadeContinueYesHash.hash_2 = 0x4C8A65D6; // VO_20_P08_CONTINUE_02
Perfect_Strike_Gundam_ArcadeContinueYesHash.hash_3 = 0x3B8D5540; // VO_20_P08_CONTINUE_03
Perfect_Strike_Gundam_ArcadeContinueYesHash.hash_4 = 0x69F99677; // VO_20_P08_CONTINUE_DEC_01
Perfect_Strike_Gundam_ArcadeContinueYesHash.hash_5 = 0xF0F0C7CD; // VO_20_P08_CONTINUE_DEC_02
Perfect_Strike_Gundam_ArcadeContinueYesHash.hash_6 = 0x87F7F75B; // VO_20_P08_CONTINUE_DEC_03
Perfect_Strike_Gundam_ArcadeContinueYesHash.hash_7 = 0x199362F8; // VO_20_P08_CONTINUE_DEC_04
Perfect_Strike_Gundam_ArcadeContinueYesHash.hash_8 = 0;
Perfect_Strike_Gundam_ArcadeContinueYesHash.hash_9 = 0;
Perfect_Strike_Gundam_ArcadeContinueYesHash.hash_10 = 0;

    return Perfect_Strike_Gundam_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Perfect_Strike_Gundam_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Perfect_Strike_Gundam_BandaiNamcoGamesHash;
    Perfect_Strike_Gundam_BandaiNamcoGamesHash.hash_1 = 0xE6FFF21B; // VO_20_P08_BNG_LOGO_01
Perfect_Strike_Gundam_BandaiNamcoGamesHash.hash_2 = 0;

    return Perfect_Strike_Gundam_BandaiNamcoGamesHash;
}

unit_hash_info Perfect_Strike_Gundam_inject_unit_hash_info()
{
    unit_hash_info Perfect_Strike_Gundam;
    Perfect_Strike_Gundam.UnitID = 0x00004E71;
    Perfect_Strike_Gundam.unk0 = 0xDDC3CBD6;
    Perfect_Strike_Gundam.DataScript = 0x60FC3C8F;
    Perfect_Strike_Gundam.ModelText = 0x139332DF;
    Perfect_Strike_Gundam.OMO = 0x27372255;
    Perfect_Strike_Gundam.EIDX = 0x64A9124F;
    Perfect_Strike_Gundam.Sound = 0x6EC6AD77;
    Perfect_Strike_Gundam.GlobalPilotVoice = 0x0C19F1BE;
    Perfect_Strike_Gundam.WeaponImage = 0x029E9702;
    Perfect_Strike_Gundam.IngameImage = 0x029E9702;
    Perfect_Strike_Gundam.KPKP = 0x69097578;
    Perfect_Strike_Gundam.VoiceFileList = 0xAEB66595;
    Perfect_Strike_Gundam.Stream = 0xFE2BF6F2;

    return Perfect_Strike_Gundam;
}

unit_unk_enum_info Perfect_Strike_Gundam_inject_unk_enum()
{
    unit_unk_enum_info Perfect_Strike_Gundam_unk_Enum;
    Perfect_Strike_Gundam_unk_Enum.UnitID = 0x00004E71;
    Perfect_Strike_Gundam_unk_Enum.unk_enum = 0x1;
    return Perfect_Strike_Gundam_unk_Enum;
}

unit_update_unit_id_list Perfect_Strike_Gundam_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Perfect_Strike_Gundam_Update_Unit_ID_List;
    Perfect_Strike_Gundam_Update_Unit_ID_List.UnitID = 0x00004E71;
    return Perfect_Strike_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list Perfect_Strike_Gundam_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Perfect_Strike_Gundam_Unit_ID_List_2;
    Perfect_Strike_Gundam_Unit_ID_List_2.UnitID = 0x00004E71;
    return Perfect_Strike_Gundam_Unit_ID_List_2;
}

unit_string_info Perfect_Strike_Gundam_inject_string()
{
    add_long_pilot_name_string_ID("F20081", 13);
    add_short_pilot_name_string_ID("S20081", 13);
    add_long_unit_name_string_ID("P20081", 13);
    add_short_unit_name_string_ID("Q20081", 13);

    unit_string_info Perfect_Strike_Gundam_Gundam_String;
    Perfect_Strike_Gundam_Gundam_String.UnitID = 0x00004E71;
    Perfect_Strike_Gundam_Gundam_String.unk_enum = 0xFFFFFFFF;
    Perfect_Strike_Gundam_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[13].long_pilot_name_str;
    Perfect_Strike_Gundam_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[13].short_pilot_name_str;
    Perfect_Strike_Gundam_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[13].long_unit_name_str;
    Perfect_Strike_Gundam_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[13].short_unit_name_str;

    return Perfect_Strike_Gundam_Gundam_String;
}
                        