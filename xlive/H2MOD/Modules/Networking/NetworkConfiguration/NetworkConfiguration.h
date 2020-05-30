#pragma once

// enables/disables LIVE netcode, so we can use the LIVE serverlist
#define USE_LIVE_NETCODE 1

#define DEFAULT_NETWORK_HEAP_SIZE 1048576
#define INCREASED_NETWORK_HEAP_SIZE 10485760

struct network_configuration
{
	DWORD field_0;
	DWORD field_4;
	BYTE gap_8[28];
	DWORD field_24;
	DWORD field_28;
	DWORD field_2C;
	DWORD field_30;
	BYTE gap_34[20];
	DWORD field_48;
	DWORD field_4C;
	DWORD field_50;
	DWORD field_54;
	DWORD field_58;
	BYTE gap_5C[16];
	DWORD field_6C;
	DWORD field_70;
	DWORD field_74;
	DWORD field_78;
	DWORD field_7C;
	DWORD field_80;
	DWORD field_84;
	DWORD field_88;
	DWORD field_8C;
	float field_90;
	float field_94;
	float field_98;
	DWORD unk_total_flt_array_elements;
	float unk_floats_A0[7];
	BYTE gap_BC[36];
	DWORD field_E0;
	float field_E4;
	float field_E8;
	float field_EC;
	float field_F0;
	DWORD field_F4;
	DWORD field_F8;
	DWORD field_FC;
	DWORD field_100;
	float field_104;
	DWORD field_108;
	DWORD field_10C;
	float field_110;
	int field_114;
	int field_118;
	float field_11C;
	int field_120;
	DWORD field_124;
	DWORD field_128;
	DWORD field_12C;
	DWORD field_130;
	DWORD field_134;
	DWORD field_138;
	DWORD field_13C;
	DWORD field_140;
	BYTE field_144;
	DWORD field_148;
	DWORD field_14C;
	DWORD field_150;
	DWORD field_154;
	DWORD max_bits_per_second_single_player;
	DWORD max_bits_per_second_full_lobby;
	DWORD max_bits_per_second_splitscreen_players;
	DWORD field_164;
	DWORD field_168;
	DWORD field_16C;
	DWORD field_170;
	DWORD field_174;
	float field_178;
	DWORD field_17C;
	float field_180;
	DWORD field_184;
	DWORD field_188;
	DWORD field_18C;
	float field_190;
	DWORD field_194;
	float field_198;
	DWORD field_19C;
	DWORD field_1A0;
	DWORD field_1A4;
	DWORD field_1A8;
	float field_1AC;
	DWORD field_1B0;
	DWORD field_1B4;
	DWORD field_1B8;
	DWORD field_1BC;
	DWORD field_1C0;
	float field_1C4;
	float field_1C8;
	DWORD field_1CC;
	float field_1D0;
	DWORD field_1D4;
	DWORD field_1D8;
	DWORD field_1DC;
	DWORD field_1E0;
	DWORD field_1E4;
	DWORD field_1E8;
	DWORD field_1EC;
	DWORD field_1F0;
	DWORD field_1F4;
	DWORD field_1F8;
	float field_1FC;
	DWORD field_200;
};
static_assert(sizeof(network_configuration) == 0x204, "Invalid network_configuration size");

namespace NetworkConfiguration
{
	void ApplyPatches();
}
