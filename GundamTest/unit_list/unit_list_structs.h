#pragma once

struct pointer_list{
	int
		pointer;
};

struct unit_voice_file_list_info{
	int
		UnitID,
		index,
		voice_file_list_hash,
		unk_enum_0x8;
};

struct unit_voice_hash_list_0x28{
	int
		hash_1,
		hash_2,
		hash_3,
		hash_4,
		hash_5,
		hash_6,
		hash_7,
		hash_8,
		hash_9,
		hash_10;
};

struct unit_voice_hash_list_0x18{
	int
		hash_1,
		hash_2,
		hash_3,
		hash_4,
		hash_5,
		hash_6;
};

struct unit_voice_hash_list_0x14{
	int
		hash_1,
		hash_2,
		hash_3,
		hash_4,
		hash_5;
};

struct unit_voice_hash_list_0x8{
	int
		hash_1,
		hash_2;
};

struct unit_hash_info{
	int
		UnitID,
		unk0,
		DataScript,
		ModelText,
		OMO,
		EIDX,
		Sound,
		GlobalPilotVoice,
		WeaponImage,
		IngameImage,
		KPKP,
		VoiceFileList,
		Stream;
};

struct map_hash_info{
	int
		map_hash,
		unk_enum;
};

struct unit_unk_enum_info{
	int
		UnitID,
		unk_enum;
};

struct unit_unk_enum_info_2{
	int
		UnitIDinDecimal,
		unk_index,
		UnitID;
};

struct unit_update_unit_id_list{
	int
		UnitID;
};


struct unit_string_info{
	int
		UnitID,
		unk_enum,
		long_unit_name_str,
		short_unit_name_str,
		long_pilot_name_str,
		short_pilot_name_str;
};

struct unit_string{
	char
		long_unit_name_str[8],
		short_unit_name_str[8],
		long_pilot_name_str[8],
		short_pilot_name_str[8];
};


