

#include "G_Self_Perfect_Pack.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info G_Self_Perfect_Pack_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info G_Self_Perfect_Pack_VoiceFileList;
    G_Self_Perfect_Pack_VoiceFileList.UnitID = 0x0000A42F;
    G_Self_Perfect_Pack_VoiceFileList.index = 0x0000014C;
    G_Self_Perfect_Pack_VoiceFileList.voice_file_list_hash = 0x4DC06D7A;
    G_Self_Perfect_Pack_VoiceFileList.unk_enum_0x8 = 0x000005DD;
    return G_Self_Perfect_Pack_VoiceFileList;
}

unit_voice_hash_list_0x28 G_Self_Perfect_Pack_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 G_Self_Perfect_Pack_ArcadeSelectHash;
    G_Self_Perfect_Pack_ArcadeSelectHash.hash_1 = 0x3997BEEC; // VO_42_P03_CHARA_SELECT_01
G_Self_Perfect_Pack_ArcadeSelectHash.hash_2 = 0xA09EEF56; // VO_42_P03_CHARA_SELECT_02
G_Self_Perfect_Pack_ArcadeSelectHash.hash_3 = 0xD799DFC0; // VO_42_P03_CHARA_SELECT_03
G_Self_Perfect_Pack_ArcadeSelectHash.hash_4 = 0;
G_Self_Perfect_Pack_ArcadeSelectHash.hash_5 = 0;
G_Self_Perfect_Pack_ArcadeSelectHash.hash_6 = 0;
G_Self_Perfect_Pack_ArcadeSelectHash.hash_7 = 0;
G_Self_Perfect_Pack_ArcadeSelectHash.hash_8 = 0;
G_Self_Perfect_Pack_ArcadeSelectHash.hash_9 = 0;
G_Self_Perfect_Pack_ArcadeSelectHash.hash_10 = 0;

    return G_Self_Perfect_Pack_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 G_Self_Perfect_Pack_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 G_Self_Perfect_Pack_ArcadeContinueNoHash;
    G_Self_Perfect_Pack_ArcadeContinueNoHash.hash_1 = 0x230CC3F2; // VO_42_P03_GAME_OVER_01
G_Self_Perfect_Pack_ArcadeContinueNoHash.hash_2 = 0xBA059248; // VO_42_P03_GAME_OVER_02
G_Self_Perfect_Pack_ArcadeContinueNoHash.hash_3 = 0;
G_Self_Perfect_Pack_ArcadeContinueNoHash.hash_4 = 0;
G_Self_Perfect_Pack_ArcadeContinueNoHash.hash_5 = 0;

    return G_Self_Perfect_Pack_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 G_Self_Perfect_Pack_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 G_Self_Perfect_Pack_ArcadeContinueHash;
    G_Self_Perfect_Pack_ArcadeContinueHash.hash_1 = 0x4A46D990; // VO_42_P03_CONTINUE_DEC_01
G_Self_Perfect_Pack_ArcadeContinueHash.hash_2 = 0xD34F882A; // VO_42_P03_CONTINUE_DEC_02
G_Self_Perfect_Pack_ArcadeContinueHash.hash_3 = 0;
G_Self_Perfect_Pack_ArcadeContinueHash.hash_4 = 0;
G_Self_Perfect_Pack_ArcadeContinueHash.hash_5 = 0;

    return G_Self_Perfect_Pack_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 G_Self_Perfect_Pack_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 G_Self_Perfect_Pack_ArcadeContinueYesHash;
    G_Self_Perfect_Pack_ArcadeContinueYesHash.hash_1 = 0xE80AA78D; // VO_42_P03_CONTINUE_01
G_Self_Perfect_Pack_ArcadeContinueYesHash.hash_2 = 0x7103F637; // VO_42_P03_CONTINUE_02
G_Self_Perfect_Pack_ArcadeContinueYesHash.hash_3 = 0x4A46D990; // VO_42_P03_CONTINUE_DEC_01
G_Self_Perfect_Pack_ArcadeContinueYesHash.hash_4 = 0xD34F882A; // VO_42_P03_CONTINUE_DEC_02
G_Self_Perfect_Pack_ArcadeContinueYesHash.hash_5 = 0;
G_Self_Perfect_Pack_ArcadeContinueYesHash.hash_6 = 0;
G_Self_Perfect_Pack_ArcadeContinueYesHash.hash_7 = 0;
G_Self_Perfect_Pack_ArcadeContinueYesHash.hash_8 = 0;
G_Self_Perfect_Pack_ArcadeContinueYesHash.hash_9 = 0;
G_Self_Perfect_Pack_ArcadeContinueYesHash.hash_10 = 0;

    return G_Self_Perfect_Pack_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 G_Self_Perfect_Pack_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 G_Self_Perfect_Pack_BandaiNamcoGamesHash;
    G_Self_Perfect_Pack_BandaiNamcoGamesHash.hash_1 = 0;
G_Self_Perfect_Pack_BandaiNamcoGamesHash.hash_2 = 0;

    return G_Self_Perfect_Pack_BandaiNamcoGamesHash;
}

unit_hash_info G_Self_Perfect_Pack_inject_unit_hash_info()
{
    unit_hash_info G_Self_Perfect_Pack;
    G_Self_Perfect_Pack.UnitID = 0x0000A42F;
    G_Self_Perfect_Pack.unk0 = 0xDDC3CBD6;
    G_Self_Perfect_Pack.DataScript = 0xB6CDBAE6;
    G_Self_Perfect_Pack.ModelText = 0xC5A2B4B6;
    G_Self_Perfect_Pack.OMO = 0x138FCA2F;
    G_Self_Perfect_Pack.EIDX = 0x5011FA35;
    G_Self_Perfect_Pack.Sound = 0x73991A4C;
    G_Self_Perfect_Pack.GlobalPilotVoice = 0x47D3FD03;
    G_Self_Perfect_Pack.WeaponImage = 0xE5BB16A2;
    G_Self_Perfect_Pack.IngameImage = 0x3BAB7779;
    G_Self_Perfect_Pack.KPKP = 0xC8FA9647;
    G_Self_Perfect_Pack.VoiceFileList = 0x4DC06D7A;
    G_Self_Perfect_Pack.Stream = 0x30F30CD7;

    return G_Self_Perfect_Pack;
}

unit_unk_enum_info G_Self_Perfect_Pack_inject_unk_enum()
{
    unit_unk_enum_info G_Self_Perfect_Pack_unk_Enum;
    G_Self_Perfect_Pack_unk_Enum.UnitID = 0x0000A42F;
    G_Self_Perfect_Pack_unk_Enum.unk_enum = 0x1;
    return G_Self_Perfect_Pack_unk_Enum;
}

unit_update_unit_id_list G_Self_Perfect_Pack_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list G_Self_Perfect_Pack_Update_Unit_ID_List;
    G_Self_Perfect_Pack_Update_Unit_ID_List.UnitID = 0x0000A42F;
    return G_Self_Perfect_Pack_Update_Unit_ID_List;
}

unit_update_unit_id_list G_Self_Perfect_Pack_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list G_Self_Perfect_Pack_Unit_ID_List_2;
    G_Self_Perfect_Pack_Unit_ID_List_2.UnitID = 0x0000A42F;
    return G_Self_Perfect_Pack_Unit_ID_List_2;
}

unit_string_info G_Self_Perfect_Pack_inject_string()
{
    add_long_pilot_name_string_ID("F42031", 61);
    add_short_pilot_name_string_ID("S42031", 61);
    add_long_unit_name_string_ID("P42031", 61);
    add_short_unit_name_string_ID("Q42031", 61);

    unit_string_info G_Self_Perfect_Pack_Gundam_String;
    G_Self_Perfect_Pack_Gundam_String.UnitID = 0x0000A42F;
    G_Self_Perfect_Pack_Gundam_String.unk_enum = 0xFFFFFFFF;
    G_Self_Perfect_Pack_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[61].long_pilot_name_str;
    G_Self_Perfect_Pack_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[61].short_pilot_name_str;
    G_Self_Perfect_Pack_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[61].long_unit_name_str;
    G_Self_Perfect_Pack_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[61].short_unit_name_str;

    return G_Self_Perfect_Pack_Gundam_String;
}
                        