class CfgPatches
{
	class hidden_ghillie
	{
		author="r0dx864";
		units[] = {"Altis","B_Sniper_Wdl_F","B_Spotter_Wdl_F","B_Sniper_Desert_F","B_Spotter_Desert_F","B_Sniper_Net_F","B_Spotter_Net_F","B_Sniper_Night_F","B_Spotter_Night_F","B_Sniper_Full_F","B_Sniper_Full_Night_F","B_Sniper_Full_Net_F","B_Sniper_Full_Virtual_F","I_Sniper_Full_F","O_Sniper_Full_F","B_Spotter_Full_F","B_Spotter_Full_Night_F","B_Spotter_Full_Net_F","I_Spotter_Full_F","O_Spotter_Full_F","O_Sniper_mcam_F","O_Spotter_mcam_F","O_Sniper_wdl_F","O_Spotter_wdl_F","I_Sniper_desert_F","I_Spotter_desert_F","I_Sniper_mcam_F","I_Spotter_mcam_F","B_Sniper_Fishnet_F","B_Spotter_Fishnet_F","B_Sniper_Full_Fishnet_F","B_Spotter_Full_Fishnet_F","O_Sniper_Net_F","O_Spotter_Net_F","B_Sniper_Grass_F","B_Spotter_Grass_F","B_Sniper_Full_Grass_F","B_Spotter_Full_Grass_F","B_Sniper_Earthcam_F","B_Spotter_Earthcam_F","B_ghillie_grass_F","B_ghillie_weeds_F","B_ghillie_jungle_F","B_Spotter_virtual_F","B_ghillie_virtual_F","B_Sniper_Ghostex_F","B_Sniper_Devgru_F","B_fullghillie_F","B_ghillie_sniper_F","B_ghillie_spotter_F","O_ghillie_sniper_F","O_ghillie_spotter_F","I_ghillie_sniper_F","I_ghillie_spotter_F","B_ghillie_active_F","B_Sniper_BDU_F","B_Sniper_Full_tna_F","O_Sniper_Full_tna_F","B_ghillie_net_F","B_Sniper_Strands_F","B_ghillie_marpat_F","B_ghillie_Snow_F","B_Sniper_Snow_F","B_ghillie_Vidda_F","B_Sniper_Vidda_F"};
		weapons[] = {"U_B_GhillieSuit_wdl","U_B_GhillieSuit_desert","U_B_GhillieSuit_Net","U_B_GhillieSuit_Night","U_B_GhillieFull","U_B_GhillieFull_Virtual","U_B_GhillieFull_Night","U_B_GhillieFull_Net","U_I_GhillieFull","U_O_GhillieFull","U_O_GhillieSuit_mcam","U_O_GhillieSuit_wdl","U_I_GhillieSuit_desert","U_I_GhillieSuit_mcam","U_B_GhillieSuit_Fishnet","U_B_GhillieFull_Fishnet","U_O_GhillieSuit_Net","U_B_GhillieSuit_Grass","U_B_GhillieFull_Grass","U_B_GhillieSuit_Earthcam","U_B_FullGhillie_grass","U_B_FullGhillie_weeds","U_B_FullGhillie_jungle","U_B_GhillieSuit_virtual","U_B_FullGhillie_virtual","U_B_GhillieSuit_ghostex","U_B_GhillieSuit_devgru","U_B_GhillieSuit_BDU","U_B_GhillieFull_tna","U_O_GhillieFull_tna","U_B_FullGhillie_net","U_B_GhillieSuit_Strands","U_B_FullGhillie_marpat","U_B_FullGhillie_Snow","U_B_GhillieSuit_Snow","U_B_FullGhillie_Vidda","U_B_GhillieSuit_Vidda"};
		requiredVersion = 0.1;
		requiredAddons[] = {"3DEN","A3_3DEN","A3_Map_Altis"};
		version = 0.1;
	};
};
class CfgMods
{
	class Mod_Base;
	class hidden_ghillie: Mod_Base
	{
		name="Hidden Ghillies";
		author="r0dx864";
		logoSmall="\hidden_ghillie\logo.paa";
		logo="\hidden_ghillie\logo.paa";
		tooltipOwned="Hidden Ghillies";
		overview="More textures for your ghillie suit and uniform";
		hideName=0;
		hidePicture=0;
	};
};
class CfgWorlds
{
	class CAWorld;
	class Altis: CAWorld
	{
		cutscenes[] = {"Altis_Idle_Snipers"};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class Altis_Idle_Snipers
		{
			directory = "hidden_ghillie\Idle_Snipers.Altis";
		};
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class B_Soldier_base_F;
	class U_B_GhillieSuit;
	class U_O_GhillieSuit;
	class U_I_GhillieSuit;
	class U_B_FullGhillie_lsh;
	class U_B_GhillieSuit_Base: U_B_GhillieSuit
	{
		scope=1;
		displayName="Ghillie [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_sniper_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_wdl: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Woodland [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Wdl_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_BDU: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie BDU [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_BDU_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_CTRG: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie CTRG [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_CTRG_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_desert: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Desert [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Desert_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_Net: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Camonet [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","\hidden_ghillie\ghillie_camonet.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Net_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_Strands: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Strands [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","\hidden_ghillie\ghillie_strands.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Strands_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_Snow: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Snow [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\nato_snow.paa","\hidden_ghillie\ghillie_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Snow_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_Vidda: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Vidda [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","\hidden_ghillie\ghillie_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Vidda_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_Night: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Night [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_night_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Night_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieFull: U_B_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie MTP [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Full_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieFull_Night: U_B_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie Night [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_night_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Full_Night_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieFull_Net: U_B_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie Camonet [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_camonet.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Full_Net_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieFull_Virtual: U_B_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie Virtual [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelectionsTextures[] = {"#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Full_Virtual_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_I_GhillieFull: U_B_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie Woodland [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_Sniper_Full_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_O_GhillieFull: U_B_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie Desert [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_Sniper_Full_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_O_GhillieSuit_Base: U_O_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie [CSAT]";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa","\A3\Characters_F\OPFOR\Data\tech_oucamo_CO.paa","\hidden_ghillie\ghillie_night_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_ghillie_sniper_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_O_GhillieSuit_mcam: U_O_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie MTP [CSAT]";
//		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa","\A3\Characters_F\OPFOR\Data\tech_oucamo_CO.paa","\hidden_ghillie\ghillie_night_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_Sniper_mcam_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_O_GhillieSuit_wdl: U_O_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie Woodland [CSAT]";
//		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa","\a3\characters_f\OPFOR\Data\tech_rus_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		//{"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa","\A3\Characters_F\OPFOR\Data\tech_oucamo_CO.paa","\hidden_ghillie\ghillie_night_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_Sniper_wdl_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_I_GhillieSuit_Base: U_I_GhillieSuit
	{
		scope=2;
		displayName="Ghillie [AAF]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_ghillie_sniper_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_I_GhillieSuit_desert: U_I_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Desert [AAF]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_Sniper_desert_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_I_GhillieSuit_mcam: U_I_GhillieSuit
	{
		scope=2;
		displayName="Ghillie MTP [AAF]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_Sniper_mcam_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_Fishnet: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Fishnet [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_fishnet_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Fishnet_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieFull_Fishnet: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Fishnet [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_fishnet_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Full_Fishnet_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_O_GhillieSuit_Net: U_O_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie Camonet [CSAT]";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa","\a3\characters_f\OPFOR\Data\tech_rus_co.paa","\hidden_ghillie\ghillie_camonet.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_Sniper_Net_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_Grass: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Grass [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\nato_earthcam.paa","\hidden_ghillie\ghillie_grass.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Grass_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieFull_Grass: U_B_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie Grass [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_grass.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Full_Grass_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_devgru: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Devgru [NATO]";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Devgru_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_ghostex: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Ghostex [NATO]";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Spotter_Ghostex_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_malden: U_B_GhillieSuit
	{
		scope=2;
		displayName="Ghillie Malden [NATO]";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Malden_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_FullGhillie_grass: U_B_FullGhillie_lsh
	{
		scope=2;
		displayName="Full Ghillie (Grass) [NATO]";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_coverall_mixtek.paa","\hidden_ghillie\fullghillie_camo_grass.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_grass_F";
			containerClass = "Supply80";
			mass = 60;
		};
	};
	class U_B_FullGhillie_weeds: U_B_FullGhillie_lsh
	{
		scope=2;
		displayName="Full Ghillie (Weeds) [NATO]";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_coverall_vegicam.paa","\hidden_ghillie\fullghillie_camo_weeds.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_weeds_F";
			containerClass = "Supply80";
			mass = 60;
		};
	};
	class U_B_FullGhillie_jungle: U_B_FullGhillie_lsh
	{
		scope=2;
		displayName="Full Ghillie (Jungle) [NATO]";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_coverall_multiearth.paa","\hidden_ghillie\fullghillie_camo_jungle.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_jungle_F";
			containerClass = "Supply80";
			mass = 60;
		};
	};
	class U_B_FullGhillie_marpat: U_B_FullGhillie_lsh
	{
		scope=2;
		displayName="Full Ghillie (MARPAT) [NATO]";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_coverall_marpat.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_marpat_F";
			containerClass = "Supply80";
			mass = 60;
		};
	};
	class U_B_GhillieSuit_virtual: U_B_GhillieSuit
	{
		displayName="Ghillie Virtual [NATO]";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Spotter_virtual_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_FullGhillie_virtual: U_B_FullGhillie_lsh
	{
		displayName="Full Ghillie (Virtual) [NATO]";
		hiddenSelectionsTextures[] = {"#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_virtual_F";
			containerClass = "Supply80";
			mass = 60;
		};
	};
	class U_B_FullGhillie_active: U_B_FullGhillie_lsh
	{
		displayName="Full Ghillie (Active Camo) [NATO]";
		scope=2;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,0)","#(argb,8,8,3)color(0,0,0,0)"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_active_F";
			containerClass = "Supply80";
			mass = 60;
		};
	};
	class U_B_GhillieFull_tna: U_B_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie Tropical [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Sniper_Full_tna_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_O_GhillieFull_tna: U_O_GhillieSuit
	{
		scope=2;
		displayName = "Ghillie Green Hex [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\OPFOR\Data\ghillie_tna_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_Sniper_Full_tna_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_FullGhillie_net: U_B_FullGhillie_lsh
	{
		scope=2;
		displayName="Full Ghillie (Camonet) [NATO]";
		hiddenSelectionsTextures[] = {"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f\Common\data\ghillie2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_net_F";
			containerClass = "Supply80";
			mass = 60;
		};
	};
	class U_B_FullGhillie_Snow: U_B_FullGhillie_lsh
	{
		scope=2;
		displayName="Full Ghillie (Snow) [NATO]";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_coverall_snow.paa","\hidden_ghillie\fullghillie_camo_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_Snow_F";
			containerClass = "Supply80";
			mass = 60;
		};
	};
	class U_B_FullGhillie_Vidda: U_B_FullGhillie_lsh
	{
		scope=2;
		displayName="Full Ghillie (Vidda) [NATO]";
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","\hidden_ghillie\fullghillie_camo_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_Vidda_F";
			containerClass = "Supply80";
			mass = 60;
		};
	};
};
class CfgVehicleClasses
{
	class snpr_ghillie
	{
		displayName="Men (Hidden Ghillies)";
	};
};
class CfgEditorSubcategories
{
	class EdSubcat_Ghillies
	{
		displayName="Men (Hidden Ghillies)";
	};
};
class CfgVehicles
{
	class man;
	class B_Sniper_F;
	class I_Sniper_F;
	class O_Sniper_F;
	class B_Spotter_F;
	class I_Spotter_F;
	class O_Spotter_F;
	class B_ghillie_lsh_F;
	class O_ghillie_lsh_F;
	class I_ghillie_lsh_F;
	class B_T_Sniper_F;
	class B_T_ghillie_tna_F;
	class B_fullghillie_F: B_ghillie_lsh_F
	{
		scope=2;
		displayName="Sniper (Full Ghillie)";
		vehicleClass="snpr_ghillie";
		editorSubcategory="EdSubcat_Ghillies";
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		class textureSources
		{
			class arid {displayname="Arid";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_ard_co.paa"};};
			class semiarid {displayname="Semiarid";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_sard_co.paa"};};
			class lush {displayname="Lush";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_lsh_co.paa"};};
			class grass {displayname="Grass";textures[]={"\hidden_ghillie\ghillie_coverall_multiearth.paa","\hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class weeds {displayname="Weeds";textures[]={"\hidden_ghillie\ghillie_coverall_earthcam.paa","\hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class jungle {displayname="Jungle";textures[]={"\hidden_ghillie\ghillie_coverall_vegicam.paa","\hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class tropical {displayname="Tropical";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class marpat {displayname="MARPAT";textures[]={"\hidden_ghillie\ghillie_coverall_marpat.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class ethereal {displayname="Ethereal";textures[]={"\hidden_ghillie\ghillie_coverall_grasspat.paa","\hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class wisp {displayname="Wisp";textures[]={"\hidden_ghillie\ghillie_coverall_mixtek.paa","\hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class phantom {displayname="Phantom";textures[]={"\hidden_ghillie\ghillie_coverall_grasstek.paa","\hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class snow {displayname="Snow";textures[]={"\hidden_ghillie\ghillie_coverall_snow.paa","\hidden_ghillie\fullghillie_camo_snow.paa"};};
			class vidda {displayname="Vidda";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","\hidden_ghillie\fullghillie_camo_snow.paa"};};
			class virtual {displayname="Virtual";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
			class night {displayname="Night";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class night_snow {displayname="Night SnowR";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","\hidden_ghillie\fullghillie_camo_snow.paa"};};
			class night_vr {displayname="Night VR";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
			class snow_night {displayname="Snow Night";textures[]={"\hidden_ghillie\ghillie_coverall_snow.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class vr_night {displayname="VR Night";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)","hidden_ghillie\fullghillie_camo_night.paa"};};
			class night_tna {displayname="Night Tropical";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class night_csat {displayname="Night CSAT";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class dragoncam_ard {displayname="Dragoncam Arid";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_ard_co.paa"};};
			class dragoncam_sard {displayname="Dragoncam Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_sard_co.paa"};};
			class dragoncam_lush {displayname="Dragoncam Lush";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_lsh_co.paa"};};
			class dragoncam_jungle {displayname="Dragoncam Jungle";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class dragoncam_tna {displayname="Dragoncam Tropical";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class dragoncam_grass {displayname="Dragoncam Grass";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class dragoncam_weeds {displayname="Dragoncam Weeds";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class dragoncam_night {displayname="Dragoncam Night";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class dragoncam_csat {displayname="Dragoncam CSAT";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class dragoncam_cloudforest {displayname="Dragoncam Cloud Forest";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_cloudforest.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_cloudforest.rvmat"};};
			class dragoncam_net {displayname="Dragoncam Camonet";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
			class cloudforest {displayname="Cloud Forest";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_cloudforest.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_cloudforest.rvmat"};};
			class cloudforest_ard {displayname="Cloud Forest Arid";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_ard_co.paa"};};
			class cloudforest_sard {displayname="Cloud Forest Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_sard_co.paa"};};
			class cloudforest_lush {displayname="Cloud Forest Lush";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_lsh_co.paa"};};
			class cloudforest_jungle {displayname="Cloud Forest Jungle";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class cloudforest_tna {displayname="Cloud Forest Tropical";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class cloudforest_grass {displayname="Cloud Forest Grass";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class cloudforest_weeds {displayname="Cloud Forest Weeds";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class cloudforest_night {displayname="Cloud Forest Night";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class cloudforest_csat {displayname="Cloud Forest CSAT";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class cloudforest_net {displayname="Cloud Forest Camonet";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
			class mtp_grass {displayname="MTP Grass";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class mtp_jungle {displayname="MTP Jungle";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class mtp_weeds {displayname="MTP Weeds";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class mtp_tna {displayname="MTP Tropical";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class mtp_csat {displayname="MTP CSAT";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class mtp_cloudforest {displayname="MTP Cloud Forest";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_cloudforest.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_cloudforest.rvmat"};};
			class mtp_net {displayname="MTP Camonet";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
			class tna_ard {displayname="Tropical Arid";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class tna_sard {displayname="Tropical Semiarid";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class tna_lush {displayname="Tropical Lush";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class tna_grass {displayname="Tropical Grass";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class tna_weeds {displayname="Tropical Weeds";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class tna_night {displayname="Tropical Night";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class tna_csat {displayname="Tropical CSAT";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class tna_cloudforest {displayname="Tropical Cloud Forest";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_cloudforest.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_cloudforest.rvmat"};};
			class tna_net {displayname="Tropical Camonet";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
			class earthcam_ard {displayname="Earthcam Arid";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class earthcam_sard {displayname="Earthcam Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class earthcam_lush {displayname="Earthcam Lush";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class earthcam_grass {displayname="Earthcam Grass";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class earthcam_jungle {displayname="Earthcam Jungle";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
// weeds		class earthcam_weeds {displayname="Earthcam Weeds";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class earthcam_tna {displayname="Earthcam Tropical";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class earthcam_csat {displayname="Earthcam CSAT";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class earthcam_net {displayname="Earthcam Camonet";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
			class grasspat_ard {displayname="Grasspat Arid";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class grasspat_sard {displayname="Grasspat Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class grasspat_lsh {displayname="Grasspat Lush";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
// ethereal		class grasspat_grass {displayname="Grasspat Grass";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class grasspat_jungle {displayname="Grasspat Jungle";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class grasspat_weeds {displayname="Grasspat Weeds";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class grasspat_tna {displayname="Grasspat Tropical";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class grasspat_csat {displayname="Grasspat CSAT";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class grasspat_net {displayname="Grasspat Camonet";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
			class grasstek_ard {displayname="Grasstek Arid";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class grasstek_sard {displayname="Grasstek Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class grasstek_lsh {displayname="Grasstek Lush";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class grasstek_grass {displayname="Grasstek Grass";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class grasstek_jungle {displayname="Grasstek Jungle";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
// phantom		class grasstek_weeds {displayname="Grasstek Weeds";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class grasstek_tna {displayname="Grasstek Tropical";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class grasstek_csat {displayname="Grasstek CSAT";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class grasstek_net {displayname="Grasstek Camonet";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
			class mixtek_ard {displayname="Mixtek Arid";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class mixtek_sard {displayname="Mixtek Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class mixtek_lsh {displayname="Mixtek Lush";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class mixtek_grass {displayname="Mixtek Grass";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
// wisp			class mixtek_jungle {displayname="Mixtek Jungle";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class mixtek_weeds {displayname="Mixtek Weeds";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class mixtek_tna {displayname="Mixtek Tropical";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class mixtek_csat {displayname="Mixtek CSAT";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class mixtek_net {displayname="Mixtek Camonet";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
			class multiearth_ard {displayname="Multiearth Arid";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class multiearth_sard {displayname="Multiearth Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class multiearth_lsh {displayname="Multiearth Lush";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
// grass		class multiearth_grass {displayname="Multiearth Grass";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class multiearth_jungle {displayname="Multiearth Jungle";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class multiearth_weeds {displayname="Multiearth Weeds";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class multiearth_tna {displayname="Multiearth Tropical";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class multiearth_csat {displayname="Multiearth CSAT";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class multiearth_net {displayname="Multiearth Camonet";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
			class vegicam_ard {displayname="Vegicam Arid";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class vegicam_sard {displayname="Vegicam Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class vegicam_lsh {displayname="Vegicam Lush";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class vegicam_grass {displayname="Vegicam Grass";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
// jungle		class vegicam_jungle {displayname="Vegicam Jungle";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class vegicam_weeds {displayname="Vegicam Weeds";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class vegicam_tna {displayname="Vegicam Tropical";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class vegicam_csat {displayname="Vegicam CSAT";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class vegicam_net {displayname="Vegicam Camonet";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
			class austrianpea_ard {displayname="Austrian Pea Arid";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class austrianpea_sard {displayname="Austrian Pea Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class austrianpea_lsh {displayname="Austrian Pea Lush";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class austrianpea_grass {displayname="Austrian Pea Grass";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class austrianpea_jungle {displayname="Austrian Pea Jungle";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class austrianpea_weeds {displayname="Austrian Pea Weeds";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class austrianpea_tna {displayname="Austrian Pea Tropical";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class austrianpea_csat {displayname="Austrian Pea CSAT";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class austrianpea_net {displayname="Austrian Pea Camonet";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f\Common\data\ghillie2_co.paa"};};
		};
	};
	class B_ghillie_sniper_F: B_sniper_F
	{
		scope=2;
		displayName="Sniper (Ghillie)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f\blufor\data\clothing1_co.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};
		class textureSources
		{
			class mtp {displayname="MTP";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class ghost {displayname="Ghost";textures[]={"\hidden_ghillie\nato_grasspat.paa","\hidden_ghillie\ghillie_grass.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class spectre {displayname="Spectre";textures[]={"\hidden_ghillie\nato_mixtek.paa","\hidden_ghillie\ghillie_camonet.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class spook {displayname="Spook";textures[]={"\hidden_ghillie\nato_dragoncam.paa","\hidden_ghillie\ghillie_mesh_tape.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class woodland {displayname="Woodland";textures[]={"\a3\characters_f\blufor\data\clothing_wdl_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class tropical {displayname="Tropical";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class desert {displayname="Desert";textures[]={"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class camonet {displayname="Camonet";textures[]={"\a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","\hidden_ghillie\ghillie_camonet.paa"};};
			class night {displayname="Night";textures[]={"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_night_co.paa"};};
			class fishnet {displayname="Fishnet";textures[]={"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_fishnet_co.paa"};};
			class grass {displayname="Grass";textures[]={"\hidden_ghillie\nato_earthcam.paa","\hidden_ghillie\ghillie_grass.paa"};};
			class devgru {displayname="DEVGRU";textures[]={"\hidden_ghillie\nato_devgru.paa","\a3\characters_f\common\data\ghillie_mcamo_co.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class ghostex {displayname="GhostEx";textures[]={"\hidden_ghillie\nato_ghostex_kilo.paa","\a3\characters_f\common\data\ghillie_mcamo_co.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class snow {displayname="Snow";textures[]={"\hidden_ghillie\nato_snow.paa","\hidden_ghillie\ghillie_snow.paa"};};
			class vidda {displayname="Vidda";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","\hidden_ghillie\ghillie_snow.paa"};};
			class virtual {displayname="Virtual";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
//			class mtp_mcamo {displayname="MTP MTP";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class mtp_wdl {displayname="MTP Woodland";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class mtp_desert {displayname="MTP Desert";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class mtp_tna {displayname="MTP Tropical";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class mtp_camonet {displayname="MTP Camonet";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class mtp_fishnet {displayname="MTP Fishnet";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class mtp_grass {displayname="MTP Grass";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class mtp_meshtape {displayname="MTP Meshtape";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class mtp_night {displayname="MTP Night";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class mtp_strands {displayname="MTP Strands";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class wdl_mcamo {displayname="Woodland MTP";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
//			class wdl_wdl {displayname="Woodland Woodland";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class wdl_desert {displayname="Woodland Desert";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class wdl_tna {displayname="Woodland Tropical";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class wdl_csat {displayname="Woodland CSAT";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"};};
			class wdl_camonet {displayname="Woodland Camonet";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class wdl_fishnet {displayname="Woodland Fishnet";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class wdl_grass {displayname="Woodland Grass";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class wdl_meshtape {displayname="Woodland Meshtape";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class wdl_night {displayname="Woodland Night";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class wdl_strands {displayname="Woodland Strands";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class sage_mcamo {displayname="Sage MTP";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class sage_wdl {displayname="Sage Woodland";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
//			class sage_desert {displayname="Sage Desert";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class sage_tna {displayname="Sage Tropical";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class sage_camonet {displayname="Sage Camonet";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class sage_fishnet {displayname="Sage Fishnet";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class sage_grass {displayname="Sage Grass";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class sage_meshtape {displayname="Sage Meshtape";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class sage_night {displayname="Sage Night";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class sage_strands {displayname="Sage Strands";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\hidden_ghillie\ghillie_strands.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class tna_mcamo {displayname="Tropical MTP";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class tna_wdl {displayname="Tropical Woodland";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class tna_desert {displayname="Tropical Desert";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
//			class tna_tna {displayname="Tropical Tropical";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class tna_camonet {displayname="Tropical Camonet";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class tna_fishnet {displayname="Tropical Fishnet";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class tna_grass {displayname="Tropical Grass";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class tna_meshtape {displayname="Tropical Meshtape";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class tna_night {displayname="Tropical Night";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class tna_strands {displayname="Tropical Strands";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class ctrg_mcamo {displayname="CTRG MTP";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class ctrg_wdl {displayname="CTRG Woodland";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class ctrg_desert {displayname="CTRG Desert";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class ctrg_tna {displayname="CTRG Tropical";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class ctrg_camonet {displayname="CTRG Camonet";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class ctrg_fishnet {displayname="CTRG Fishnet";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class ctrg_grass {displayname="CTRG Grass";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class ctrg_meshtape {displayname="CTRG Meshtape";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
//			class ctrg_night {displayname="CTRG Night";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class ctrg_strands {displayname="CTRG Strands";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class dirty_mcamo {displayname="Dirty MTP";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class dirty_wdl {displayname="Dirty Woodland";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class dirty_desert {displayname="Dirty Desert";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class dirty_tna {displayname="Dirty Tropical";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
//			class dirty_camonet {displayname="Dirty Camonet";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
//			class dirty_fishnet {displayname="Dirty Fishnet";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class dirty_grass {displayname="Dirty Grass";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class dirty_meshtape {displayname="Dirty Meshtape";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class dirty_night {displayname="Dirty Night";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class dirty_strands {displayname="Dirty Strands";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","\hidden_ghillie\ghillie_strands.paa"};};
//			class devgru_mcamo {displayname="Devgru MTP";textures[]={"hidden_ghillie\nato_devgru.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class devgru_wdl {displayname="Devgru Woodland";textures[]={"hidden_ghillie\nato_devgru.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class devgru_desert {displayname="Devgru Desert";textures[]={"hidden_ghillie\nato_devgru.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class devgru_tna {displayname="Devgru Tropical";textures[]={"hidden_ghillie\nato_devgru.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class devgru_camonet {displayname="Devgru Camonet";textures[]={"hidden_ghillie\nato_devgru.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class devgru_fishnet {displayname="Devgru Fishnet";textures[]={"hidden_ghillie\nato_devgru.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class devgru_grass {displayname="Devgru Grass";textures[]={"hidden_ghillie\nato_devgru.paa","hidden_ghillie\ghillie_grass.paa"};};
			class devgru_meshtape {displayname="Devgru Meshtape";textures[]={"hidden_ghillie\nato_devgru.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class devgru_night {displayname="Devgru Night";textures[]={"hidden_ghillie\nato_devgru.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class devgru_strands {displayname="Devgru Strands";textures[]={"hidden_ghillie\nato_devgru.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class malden {displayname="Malden";textures[]={"hidden_ghillie\nato_malden.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class dragoncam_mcamo {displayname="Dragoncam MTP";textures[]={"hidden_ghillie\nato_dragoncam.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class dragoncam_wdl {displayname="Dragoncam Woodland";textures[]={"hidden_ghillie\nato_dragoncam.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class dragoncam_desert {displayname="Dragoncam Desert";textures[]={"hidden_ghillie\nato_dragoncam.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class dragoncam_tna {displayname="Dragoncam Tropical";textures[]={"hidden_ghillie\nato_dragoncam.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class dragoncam_camonet {displayname="Dragoncam Camonet";textures[]={"hidden_ghillie\nato_dragoncam.paa","hidden_ghillie\ghillie_camonet.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class dragoncam_fishnet {displayname="Dragoncam Fishnet";textures[]={"hidden_ghillie\nato_dragoncam.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class dragoncam_grass {displayname="Dragoncam Grass";textures[]={"hidden_ghillie\nato_dragoncam.paa","hidden_ghillie\ghillie_grass.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
//			class dragoncam_meshtape {displayname="Dragoncam Meshtape";textures[]={"hidden_ghillie\nato_dragoncam.paa","hidden_ghillie\ghillie_mesh_tape.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class dragoncam_night {displayname="Dragoncam Night";textures[]={"hidden_ghillie\nato_dragoncam.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class dragoncam_strands {displayname="Dragoncam Strands";textures[]={"hidden_ghillie\nato_dragoncam.paa","\hidden_ghillie\ghillie_strands.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class cloudforest_mcamo {displayname="Cloud Forest MTP";textures[]={"hidden_ghillie\nato_cloudforest.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class cloudforest_wdl {displayname="Cloud Forest Woodland";textures[]={"hidden_ghillie\nato_cloudforest.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class cloudforest_desert {displayname="Cloud Forest Desert";textures[]={"hidden_ghillie\nato_cloudforest.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class cloudforest_tna {displayname="Cloud Forest Tropical";textures[]={"hidden_ghillie\nato_cloudforest.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class cloudforest_camonet {displayname="Cloud Forest Camonet";textures[]={"hidden_ghillie\nato_cloudforest.paa","hidden_ghillie\ghillie_camonet.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class cloudforest_fishnet {displayname="Cloud Forest Fishnet";textures[]={"hidden_ghillie\nato_cloudforest.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class cloudforest_grass {displayname="Cloud Forest Grass";textures[]={"hidden_ghillie\nato_cloudforest.paa","hidden_ghillie\ghillie_grass.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class cloudforest_meshtape {displayname="Cloud Forest Meshtape";textures[]={"hidden_ghillie\nato_cloudforest.paa","hidden_ghillie\ghillie_mesh_tape.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class cloudforest_night {displayname="Cloud Forest Night";textures[]={"hidden_ghillie\nato_cloudforest.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class cloudforest_strands {displayname="Cloud Forest Strands";textures[]={"hidden_ghillie\nato_cloudforest.paa","\hidden_ghillie\ghillie_strands.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class earthcam_mcamo {displayname="Earthcam MTP";textures[]={"hidden_ghillie\nato_earthcam.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class earthcam_wdl {displayname="Earthcam Woodland";textures[]={"hidden_ghillie\nato_earthcam.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class earthcam_desert {displayname="Earthcam Desert";textures[]={"hidden_ghillie\nato_earthcam.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class earthcam_tna {displayname="Earthcam Tropical";textures[]={"hidden_ghillie\nato_earthcam.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class earthcam_camonet {displayname="Earthcam Camonet";textures[]={"hidden_ghillie\nato_earthcam.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class earthcam_fishnet {displayname="Earthcam Fishnet";textures[]={"hidden_ghillie\nato_earthcam.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
//			class earthcam_grass {displayname="Earthcam Grass";textures[]={"hidden_ghillie\nato_earthcam.paa","hidden_ghillie\ghillie_grass.paa"};};
			class earthcam_meshtape {displayname="Earthcam Meshtape";textures[]={"hidden_ghillie\nato_earthcam.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class earthcam_night {displayname="Earthcam Night";textures[]={"hidden_ghillie\nato_earthcam.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class earthcam_strands {displayname="Earthcam Strands";textures[]={"hidden_ghillie\nato_earthcam.paa","\hidden_ghillie\ghillie_strands.paa"};};
//			class ghostex_mcamo {displayname="GhostEx MTP";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class ghostex_wdl {displayname="GhostEx Woodland";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class ghostex_desert {displayname="GhostEx Desert";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class ghostex_tna {displayname="GhostEx Tropical";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class ghostex_camonet {displayname="GhostEx Camonet";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class ghostex_fishnet {displayname="GhostEx Fishnet";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class ghostex_grass {displayname="GhostEx Grass";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","hidden_ghillie\ghillie_grass.paa"};};
			class ghostex_meshtape {displayname="GhostEx Meshtape";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class ghostex_night {displayname="GhostEx Night";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class ghostex_strands {displayname="GhostEx Strands";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class grasspat_mcamo {displayname="Grasspat MTP";textures[]={"hidden_ghillie\nato_grasspat.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class grasspat_wdl {displayname="Grasspat Woodland";textures[]={"hidden_ghillie\nato_grasspat.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class grasspat_desert {displayname="Grasspat Desert";textures[]={"hidden_ghillie\nato_grasspat.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class grasspat_tna {displayname="Grasspat Tropical";textures[]={"hidden_ghillie\nato_grasspat.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class grasspat_camonet {displayname="Grasspat Camonet";textures[]={"hidden_ghillie\nato_grasspat.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class grasspat_fishnet {displayname="Grasspat Fishnet";textures[]={"hidden_ghillie\nato_grasspat.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
//			class grasspat_grass {displayname="Grasspat Grass";textures[]={"hidden_ghillie\nato_grasspat.paa","hidden_ghillie\ghillie_grass.paa"};};
			class grasspat_meshtape {displayname="Grasspat Meshtape";textures[]={"hidden_ghillie\nato_grasspat.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class grasspat_night {displayname="Grasspat Night";textures[]={"hidden_ghillie\nato_grasspat.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class grasspat_strands {displayname="Grasspat Strands";textures[]={"hidden_ghillie\nato_grasspat.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class grasstek_mcamo {displayname="Grasstek MTP";textures[]={"hidden_ghillie\nato_grasstek.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class grasstek_wdl {displayname="Grasstek Woodland";textures[]={"hidden_ghillie\nato_grasstek.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class grasstek_desert {displayname="Grasstek Desert";textures[]={"hidden_ghillie\nato_grasstek.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class grasstek_tna {displayname="Grasstek Tropical";textures[]={"hidden_ghillie\nato_grasstek.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class grasstek_camonet {displayname="Grasstek Camonet";textures[]={"hidden_ghillie\nato_grasstek.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class grasstek_fishnet {displayname="Grasstek Fishnet";textures[]={"hidden_ghillie\nato_grasstek.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class grasstek_grass {displayname="Grasstek Grass";textures[]={"hidden_ghillie\nato_grasstek.paa","hidden_ghillie\ghillie_grass.paa"};};
			class grasstek_meshtape {displayname="Grasstek Meshtape";textures[]={"hidden_ghillie\nato_grasstek.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class grasstek_night {displayname="Grasstek Night";textures[]={"hidden_ghillie\nato_grasstek.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class grasstek_strands {displayname="Grasstek Strands";textures[]={"hidden_ghillie\nato_grasstek.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class mixtek_mcamo {displayname="Mixtek MTP";textures[]={"hidden_ghillie\nato_mixtek.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class mixtek_wdl {displayname="Mixtek Woodland";textures[]={"hidden_ghillie\nato_mixtek.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class mixtek_desert {displayname="Mixtek Desert";textures[]={"hidden_ghillie\nato_mixtek.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class mixtek_tna {displayname="Mixtek Tropical";textures[]={"hidden_ghillie\nato_mixtek.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
//			class mixtek_camonet {displayname="Mixtek Camonet";textures[]={"hidden_ghillie\nato_mixtek.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class mixtek_fishnet {displayname="Mixtek Fishnet";textures[]={"hidden_ghillie\nato_mixtek.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class mixtek_grass {displayname="Mixtek Grass";textures[]={"hidden_ghillie\nato_mixtek.paa","hidden_ghillie\ghillie_grass.paa"};};
			class mixtek_meshtape {displayname="Mixtek Meshtape";textures[]={"hidden_ghillie\nato_mixtek.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class mixtek_night {displayname="Mixtek Night";textures[]={"hidden_ghillie\nato_mixtek.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class mixtek_strands {displayname="Mixtek Strands";textures[]={"hidden_ghillie\nato_mixtek.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class multiearth_mcamo {displayname="Multiearth MTP";textures[]={"hidden_ghillie\nato_multiearth.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class multiearth_wdl {displayname="Multiearth Woodland";textures[]={"hidden_ghillie\nato_multiearth.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class multiearth_desert {displayname="Multiearth Desert";textures[]={"hidden_ghillie\nato_multiearth.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class multiearth_tna {displayname="Multiearth Tropical";textures[]={"hidden_ghillie\nato_multiearth.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class multiearth_camonet {displayname="Multiearth Camonet";textures[]={"hidden_ghillie\nato_multiearth.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class multiearth_fishnet {displayname="Multiearth Fishnet";textures[]={"hidden_ghillie\nato_multiearth.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class multiearth_grass {displayname="Multiearth Grass";textures[]={"hidden_ghillie\nato_multiearth.paa","hidden_ghillie\ghillie_grass.paa"};};
			class multiearth_meshtape {displayname="Multiearth Meshtape";textures[]={"hidden_ghillie\nato_multiearth.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class multiearth_night {displayname="Multiearth Night";textures[]={"hidden_ghillie\nato_multiearth.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class multiearth_strands {displayname="Multiearth Strands";textures[]={"hidden_ghillie\nato_multiearth.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class ctrgx_mcamo {displayname="CTRGX MTP";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class ctrgx_wdl {displayname="CTRGX Woodland";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class ctrgx_desert {displayname="CTRGX Desert";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class ctrgx_tna {displayname="CTRGX Tropical";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class ctrgx_camonet {displayname="CTRGX Camonet";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","hidden_ghillie\ghillie_camonet.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class ctrgx_fishnet {displayname="CTRGX Fishnet";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class ctrgx_grass {displayname="CTRGX Grass";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","hidden_ghillie\ghillie_grass.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class ctrgx_meshtape {displayname="CTRGX Meshtape";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class ctrgx_night {displayname="CTRGX Night";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class ctrgx_strands {displayname="CTRGX Strands";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","\hidden_ghillie\ghillie_strands.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class austrianpea_mcamo {displayname="Austrian Pea MTP";textures[]={"hidden_ghillie\nato_austrianpea.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class austrianpea_wdl {displayname="Austrian Pea Woodland";textures[]={"hidden_ghillie\nato_austrianpea.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class austrianpea_desert {displayname="Austrian Pea Desert";textures[]={"hidden_ghillie\nato_austrianpea.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class austrianpea_tna {displayname="Austrian Pea Tropical";textures[]={"hidden_ghillie\nato_austrianpea.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class austrianpea_camonet {displayname="Austrian Pea Camonet";textures[]={"hidden_ghillie\nato_austrianpea.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class austrianpea_fishnet {displayname="Austrian Pea Fishnet";textures[]={"hidden_ghillie\nato_austrianpea.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class austrianpea_grass {displayname="Austrian Pea Grass";textures[]={"hidden_ghillie\nato_austrianpea.paa","hidden_ghillie\ghillie_grass.paa"};};
			class austrianpea_meshtape {displayname="Austrian Pea Meshtape";textures[]={"hidden_ghillie\nato_austrianpea.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class austrianpea_night {displayname="Austrian Pea Night";textures[]={"hidden_ghillie\nato_austrianpea.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class austrianpea_strands {displayname="Austrian Pea Strands";textures[]={"hidden_ghillie\nato_austrianpea.paa","\hidden_ghillie\ghillie_strands.paa"};};
		};
		uniformClass = "U_B_GhillieSuit_Base";
	};
	class B_ghillie_spotter_F: B_spotter_F
	{
		scope=2;
		displayName="Spotter (Ghillie)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f\blufor\data\clothing1_co.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};
		class textureSources
		{
			class mtp {displayname="MTP";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class ghost {displayname="Ghost";textures[]={"\hidden_ghillie\nato_grasspat.paa","\hidden_ghillie\ghillie_grass.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class spectre {displayname="Spectre";textures[]={"\hidden_ghillie\nato_mixtek.paa","\hidden_ghillie\ghillie_camonet.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class spook {displayname="Spook";textures[]={"\hidden_ghillie\nato_dragoncam.paa","\hidden_ghillie\ghillie_mesh_tape.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class woodland {displayname="Woodland";textures[]={"\a3\characters_f\blufor\data\clothing_wdl_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class tropical {displayname="Tropical";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class desert {displayname="Desert";textures[]={"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class camonet {displayname="Camonet";textures[]={"\a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","\hidden_ghillie\ghillie_camonet.paa"};};
			class night {displayname="Night";textures[]={"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_night_co.paa"};};
			class fishnet {displayname="Fishnet";textures[]={"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_fishnet_co.paa"};};
			class grass {displayname="Grass";textures[]={"\hidden_ghillie\nato_earthcam.paa","\hidden_ghillie\ghillie_grass.paa"};};
			class devgru {displayname="DEVGRU";textures[]={"\hidden_ghillie\nato_devgru.paa","\a3\characters_f\common\data\ghillie_mcamo_co.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class ghostex {displayname="GhostEx";textures[]={"\hidden_ghillie\nato_ghostex_kilo.paa","\a3\characters_f\common\data\ghillie_mcamo_co.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class snow {displayname="Snow";textures[]={"\hidden_ghillie\nato_snow.paa","\hidden_ghillie\ghillie_snow.paa"};};
			class vidda {displayname="Vidda";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","\hidden_ghillie\ghillie_snow.paa"};};
			class virtual {displayname="Virtual";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
//			class mtp_mcamo {displayname="MTP MTP";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class mtp_wdl {displayname="MTP Woodland";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class mtp_desert {displayname="MTP Desert";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class mtp_tna {displayname="MTP Tropical";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class mtp_camonet {displayname="MTP Camonet";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class mtp_fishnet {displayname="MTP Fishnet";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class mtp_grass {displayname="MTP Grass";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class mtp_meshtape {displayname="MTP Meshtape";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class mtp_night {displayname="MTP Night";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class mtp_strands {displayname="MTP Strands";textures[]={"a3\characters_f\blufor\data\clothing1_co.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class wdl_mcamo {displayname="Woodland MTP";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
//			class wdl_wdl {displayname="Woodland Woodland";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class wdl_desert {displayname="Woodland Desert";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class wdl_tna {displayname="Woodland Tropical";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class wdl_csat {displayname="Woodland CSAT";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"};};
			class wdl_camonet {displayname="Woodland Camonet";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class wdl_fishnet {displayname="Woodland Fishnet";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class wdl_grass {displayname="Woodland Grass";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class wdl_meshtape {displayname="Woodland Meshtape";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class wdl_night {displayname="Woodland Night";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class wdl_strands {displayname="Woodland Strands";textures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class sage_mcamo {displayname="Sage MTP";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class sage_wdl {displayname="Sage Woodland";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
//			class sage_desert {displayname="Sage Desert";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class sage_tna {displayname="Sage Tropical";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class sage_camonet {displayname="Sage Camonet";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class sage_fishnet {displayname="Sage Fishnet";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class sage_grass {displayname="Sage Grass";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class sage_meshtape {displayname="Sage Meshtape";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class sage_night {displayname="Sage Night";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class sage_strands {displayname="Sage Strands";textures[]={"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\hidden_ghillie\ghillie_strands.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class tna_mcamo {displayname="Tropical MTP";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class tna_wdl {displayname="Tropical Woodland";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class tna_desert {displayname="Tropical Desert";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
//			class tna_tna {displayname="Tropical Tropical";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class tna_camonet {displayname="Tropical Camonet";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class tna_fishnet {displayname="Tropical Fishnet";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class tna_grass {displayname="Tropical Grass";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class tna_meshtape {displayname="Tropical Meshtape";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class tna_night {displayname="Tropical Night";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class tna_strands {displayname="Tropical Strands";textures[]={"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class ctrg_mcamo {displayname="CTRG MTP";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class ctrg_wdl {displayname="CTRG Woodland";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class ctrg_desert {displayname="CTRG Desert";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class ctrg_tna {displayname="CTRG Tropical";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class ctrg_camonet {displayname="CTRG Camonet";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class ctrg_fishnet {displayname="CTRG Fishnet";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class ctrg_grass {displayname="CTRG Grass";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class ctrg_meshtape {displayname="CTRG Meshtape";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
//			class ctrg_night {displayname="CTRG Night";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class ctrg_strands {displayname="CTRG Strands";textures[]={"a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class dirty_mcamo {displayname="Dirty MTP";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class dirty_wdl {displayname="Dirty Woodland";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class dirty_desert {displayname="Dirty Desert";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class dirty_tna {displayname="Dirty Tropical";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
//			class dirty_camonet {displayname="Dirty Camonet";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","hidden_ghillie\ghillie_camonet.paa"};};
//			class dirty_fishnet {displayname="Dirty Fishnet";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class dirty_grass {displayname="Dirty Grass";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","hidden_ghillie\ghillie_grass.paa"};};
			class dirty_meshtape {displayname="Dirty Meshtape";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class dirty_night {displayname="Dirty Night";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class dirty_strands {displayname="Dirty Strands";textures[]={"a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","\hidden_ghillie\ghillie_strands.paa"};};
//			class devgru_mcamo {displayname="Devgru MTP";textures[]={"hidden_ghillie\nato_devgru.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class devgru_wdl {displayname="Devgru Woodland";textures[]={"hidden_ghillie\nato_devgru.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class devgru_desert {displayname="Devgru Desert";textures[]={"hidden_ghillie\nato_devgru.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class devgru_tna {displayname="Devgru Tropical";textures[]={"hidden_ghillie\nato_devgru.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class devgru_camonet {displayname="Devgru Camonet";textures[]={"hidden_ghillie\nato_devgru.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class devgru_fishnet {displayname="Devgru Fishnet";textures[]={"hidden_ghillie\nato_devgru.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class devgru_grass {displayname="Devgru Grass";textures[]={"hidden_ghillie\nato_devgru.paa","hidden_ghillie\ghillie_grass.paa"};};
			class devgru_meshtape {displayname="Devgru Meshtape";textures[]={"hidden_ghillie\nato_devgru.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class devgru_night {displayname="Devgru Night";textures[]={"hidden_ghillie\nato_devgru.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class devgru_strands {displayname="Devgru Strands";textures[]={"hidden_ghillie\nato_devgru.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class dragoncam_mcamo {displayname="Dragoncam MTP";textures[]={"hidden_ghillie\nato_dragoncam.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class dragoncam_wdl {displayname="Dragoncam Woodland";textures[]={"hidden_ghillie\nato_dragoncam.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class dragoncam_desert {displayname="Dragoncam Desert";textures[]={"hidden_ghillie\nato_dragoncam.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class dragoncam_tna {displayname="Dragoncam Tropical";textures[]={"hidden_ghillie\nato_dragoncam.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class dragoncam_camonet {displayname="Dragoncam Camonet";textures[]={"hidden_ghillie\nato_dragoncam.paa","hidden_ghillie\ghillie_camonet.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class dragoncam_fishnet {displayname="Dragoncam Fishnet";textures[]={"hidden_ghillie\nato_dragoncam.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class dragoncam_grass {displayname="Dragoncam Grass";textures[]={"hidden_ghillie\nato_dragoncam.paa","hidden_ghillie\ghillie_grass.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
//			class dragoncam_meshtape {displayname="Dragoncam Meshtape";textures[]={"hidden_ghillie\nato_dragoncam.paa","hidden_ghillie\ghillie_mesh_tape.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class dragoncam_night {displayname="Dragoncam Night";textures[]={"hidden_ghillie\nato_dragoncam.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class dragoncam_strands {displayname="Dragoncam Strands";textures[]={"hidden_ghillie\nato_dragoncam.paa","\hidden_ghillie\ghillie_strands.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class cloudforest_mcamo {displayname="Cloud Forest MTP";textures[]={"hidden_ghillie\nato_cloudforest.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class cloudforest_wdl {displayname="Cloud Forest Woodland";textures[]={"hidden_ghillie\nato_cloudforest.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class cloudforest_desert {displayname="Cloud Forest Desert";textures[]={"hidden_ghillie\nato_cloudforest.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class cloudforest_tna {displayname="Cloud Forest Tropical";textures[]={"hidden_ghillie\nato_cloudforest.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class cloudforest_camonet {displayname="Cloud Forest Camonet";textures[]={"hidden_ghillie\nato_cloudforest.paa","hidden_ghillie\ghillie_camonet.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class cloudforest_fishnet {displayname="Cloud Forest Fishnet";textures[]={"hidden_ghillie\nato_cloudforest.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class cloudforest_grass {displayname="Cloud Forest Grass";textures[]={"hidden_ghillie\nato_cloudforest.paa","hidden_ghillie\ghillie_grass.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class cloudforest_meshtape {displayname="Cloud Forest Meshtape";textures[]={"hidden_ghillie\nato_cloudforest.paa","hidden_ghillie\ghillie_mesh_tape.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class cloudforest_night {displayname="Cloud Forest Night";textures[]={"hidden_ghillie\nato_cloudforest.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class cloudforest_strands {displayname="Cloud Forest Strands";textures[]={"hidden_ghillie\nato_cloudforest.paa","\hidden_ghillie\ghillie_strands.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class earthcam_mcamo {displayname="Earthcam MTP";textures[]={"hidden_ghillie\nato_earthcam.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class earthcam_wdl {displayname="Earthcam Woodland";textures[]={"hidden_ghillie\nato_earthcam.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class earthcam_desert {displayname="Earthcam Desert";textures[]={"hidden_ghillie\nato_earthcam.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class earthcam_tna {displayname="Earthcam Tropical";textures[]={"hidden_ghillie\nato_earthcam.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class earthcam_camonet {displayname="Earthcam Camonet";textures[]={"hidden_ghillie\nato_earthcam.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class earthcam_fishnet {displayname="Earthcam Fishnet";textures[]={"hidden_ghillie\nato_earthcam.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
//			class earthcam_grass {displayname="Earthcam Grass";textures[]={"hidden_ghillie\nato_earthcam.paa","hidden_ghillie\ghillie_grass.paa"};};
			class earthcam_meshtape {displayname="Earthcam Meshtape";textures[]={"hidden_ghillie\nato_earthcam.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class earthcam_night {displayname="Earthcam Night";textures[]={"hidden_ghillie\nato_earthcam.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class earthcam_strands {displayname="Earthcam Strands";textures[]={"hidden_ghillie\nato_earthcam.paa","\hidden_ghillie\ghillie_strands.paa"};};
//			class ghostex_mcamo {displayname="GhostEx MTP";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class ghostex_wdl {displayname="GhostEx Woodland";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class ghostex_desert {displayname="GhostEx Desert";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class ghostex_tna {displayname="GhostEx Tropical";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class ghostex_camonet {displayname="GhostEx Camonet";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class ghostex_fishnet {displayname="GhostEx Fishnet";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class ghostex_grass {displayname="GhostEx Grass";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","hidden_ghillie\ghillie_grass.paa"};};
			class ghostex_meshtape {displayname="GhostEx Meshtape";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class ghostex_night {displayname="GhostEx Night";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class ghostex_strands {displayname="GhostEx Strands";textures[]={"hidden_ghillie\nato_ghostex_kilo.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class grasspat_mcamo {displayname="Grasspat MTP";textures[]={"hidden_ghillie\nato_grasspat.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class grasspat_wdl {displayname="Grasspat Woodland";textures[]={"hidden_ghillie\nato_grasspat.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class grasspat_desert {displayname="Grasspat Desert";textures[]={"hidden_ghillie\nato_grasspat.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class grasspat_tna {displayname="Grasspat Tropical";textures[]={"hidden_ghillie\nato_grasspat.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class grasspat_camonet {displayname="Grasspat Camonet";textures[]={"hidden_ghillie\nato_grasspat.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class grasspat_fishnet {displayname="Grasspat Fishnet";textures[]={"hidden_ghillie\nato_grasspat.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
//			class grasspat_grass {displayname="Grasspat Grass";textures[]={"hidden_ghillie\nato_grasspat.paa","hidden_ghillie\ghillie_grass.paa"};};
			class grasspat_meshtape {displayname="Grasspat Meshtape";textures[]={"hidden_ghillie\nato_grasspat.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class grasspat_night {displayname="Grasspat Night";textures[]={"hidden_ghillie\nato_grasspat.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class grasspat_strands {displayname="Grasspat Strands";textures[]={"hidden_ghillie\nato_grasspat.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class grasstek_mcamo {displayname="Grasstek MTP";textures[]={"hidden_ghillie\nato_grasstek.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class grasstek_wdl {displayname="Grasstek Woodland";textures[]={"hidden_ghillie\nato_grasstek.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class grasstek_desert {displayname="Grasstek Desert";textures[]={"hidden_ghillie\nato_grasstek.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class grasstek_tna {displayname="Grasstek Tropical";textures[]={"hidden_ghillie\nato_grasstek.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class grasstek_camonet {displayname="Grasstek Camonet";textures[]={"hidden_ghillie\nato_grasstek.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class grasstek_fishnet {displayname="Grasstek Fishnet";textures[]={"hidden_ghillie\nato_grasstek.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class grasstek_grass {displayname="Grasstek Grass";textures[]={"hidden_ghillie\nato_grasstek.paa","hidden_ghillie\ghillie_grass.paa"};};
			class grasstek_meshtape {displayname="Grasstek Meshtape";textures[]={"hidden_ghillie\nato_grasstek.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class grasstek_night {displayname="Grasstek Night";textures[]={"hidden_ghillie\nato_grasstek.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class grasstek_strands {displayname="Grasstek Strands";textures[]={"hidden_ghillie\nato_grasstek.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class mixtek_mcamo {displayname="Mixtek MTP";textures[]={"hidden_ghillie\nato_mixtek.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class mixtek_wdl {displayname="Mixtek Woodland";textures[]={"hidden_ghillie\nato_mixtek.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class mixtek_desert {displayname="Mixtek Desert";textures[]={"hidden_ghillie\nato_mixtek.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class mixtek_tna {displayname="Mixtek Tropical";textures[]={"hidden_ghillie\nato_mixtek.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
//			class mixtek_camonet {displayname="Mixtek Camonet";textures[]={"hidden_ghillie\nato_mixtek.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class mixtek_fishnet {displayname="Mixtek Fishnet";textures[]={"hidden_ghillie\nato_mixtek.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class mixtek_grass {displayname="Mixtek Grass";textures[]={"hidden_ghillie\nato_mixtek.paa","hidden_ghillie\ghillie_grass.paa"};};
			class mixtek_meshtape {displayname="Mixtek Meshtape";textures[]={"hidden_ghillie\nato_mixtek.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class mixtek_night {displayname="Mixtek Night";textures[]={"hidden_ghillie\nato_mixtek.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class mixtek_strands {displayname="Mixtek Strands";textures[]={"hidden_ghillie\nato_mixtek.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class multiearth_mcamo {displayname="Multiearth MTP";textures[]={"hidden_ghillie\nato_multiearth.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class multiearth_wdl {displayname="Multiearth Woodland";textures[]={"hidden_ghillie\nato_multiearth.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class multiearth_desert {displayname="Multiearth Desert";textures[]={"hidden_ghillie\nato_multiearth.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class multiearth_tna {displayname="Multiearth Tropical";textures[]={"hidden_ghillie\nato_multiearth.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class multiearth_camonet {displayname="Multiearth Camonet";textures[]={"hidden_ghillie\nato_multiearth.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class multiearth_fishnet {displayname="Multiearth Fishnet";textures[]={"hidden_ghillie\nato_multiearth.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class multiearth_grass {displayname="Multiearth Grass";textures[]={"hidden_ghillie\nato_multiearth.paa","hidden_ghillie\ghillie_grass.paa"};};
			class multiearth_meshtape {displayname="Multiearth Meshtape";textures[]={"hidden_ghillie\nato_multiearth.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class multiearth_night {displayname="Multiearth Night";textures[]={"hidden_ghillie\nato_multiearth.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class multiearth_strands {displayname="Multiearth Strands";textures[]={"hidden_ghillie\nato_multiearth.paa","\hidden_ghillie\ghillie_strands.paa"};};
			class ctrgx_mcamo {displayname="CTRGX MTP";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class ctrgx_wdl {displayname="CTRGX Woodland";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class ctrgx_desert {displayname="CTRGX Desert";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class ctrgx_tna {displayname="CTRGX Tropical";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class ctrgx_camonet {displayname="CTRGX Camonet";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","hidden_ghillie\ghillie_camonet.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class ctrgx_fishnet {displayname="CTRGX Fishnet";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class ctrgx_grass {displayname="CTRGX Grass";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","hidden_ghillie\ghillie_grass.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class ctrgx_meshtape {displayname="CTRGX Meshtape";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","hidden_ghillie\ghillie_mesh_tape.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class ctrgx_night {displayname="CTRGX Night";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class ctrgx_strands {displayname="CTRGX Strands";textures[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","\hidden_ghillie\ghillie_strands.paa"};materials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};};
			class austrianpea_mcamo {displayname="Austrian Pea MTP";textures[]={"hidden_ghillie\nato_austrianpea.paa","A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class austrianpea_wdl {displayname="Austrian Pea Woodland";textures[]={"hidden_ghillie\nato_austrianpea.paa","A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class austrianpea_desert {displayname="Austrian Pea Desert";textures[]={"hidden_ghillie\nato_austrianpea.paa","A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class austrianpea_tna {displayname="Austrian Pea Tropical";textures[]={"hidden_ghillie\nato_austrianpea.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class austrianpea_camonet {displayname="Austrian Pea Camonet";textures[]={"hidden_ghillie\nato_austrianpea.paa","hidden_ghillie\ghillie_camonet.paa"};};
			class austrianpea_fishnet {displayname="Austrian Pea Fishnet";textures[]={"hidden_ghillie\nato_austrianpea.paa","hidden_ghillie\ghillie_fishnet_co.paa"};};
			class austrianpea_grass {displayname="Austrian Pea Grass";textures[]={"hidden_ghillie\nato_austrianpea.paa","hidden_ghillie\ghillie_grass.paa"};};
			class austrianpea_meshtape {displayname="Austrian Pea Meshtape";textures[]={"hidden_ghillie\nato_austrianpea.paa","hidden_ghillie\ghillie_mesh_tape.paa"};};
			class austrianpea_night {displayname="Austrian Pea Night";textures[]={"hidden_ghillie\nato_austrianpea.paa","hidden_ghillie\ghillie_night_co.paa"};};
			class austrianpea_strands {displayname="Austrian Pea Strands";textures[]={"hidden_ghillie\nato_austrianpea.paa","\hidden_ghillie\ghillie_strands.paa"};};
		};
		uniformClass = "U_B_GhillieSuit_Base";
	};
	class O_fullghillie_F: O_ghillie_lsh_F
	{
		scope=2;
		displayName="Sniper (Full Ghillie)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		class textureSources
		{
			class arid {displayname="Arid";textures[]={"a3\characters_f_mark\opfor\data\ghillie_coverall_csat_co.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_ard_co.paa"};};
			class semiarid {displayname="Semi Arid";textures[]={"a3\characters_f_mark\opfor\data\ghillie_coverall_csat_co.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_sard_co.paa"};};
			class lush {displayname="Lush";textures[]={"a3\characters_f_mark\opfor\data\ghillie_coverall_csat_co.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_lsh_co.paa"};};
			class tropical {displayname="Tropical";textures[]={"a3\characters_f_exp\opfor\data\ghillie_coverall_csat_co.paa","a3\characters_f_exp\opfor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\opfor\data\ghillie_threads_5lod_tna_co.paa"};};
			class grass {displayname="Grass";textures[]={"\hidden_ghillie\ghillie_coverall_multiearth.paa","\hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class weeds {displayname="Weeds";textures[]={"\hidden_ghillie\ghillie_coverall_earthcam.paa","\hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class jungle {displayname="Jungle";textures[]={"\hidden_ghillie\ghillie_coverall_vegicam.paa","\hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class ethereal {displayname="Ethereal";textures[]={"\hidden_ghillie\ghillie_coverall_grasspat.paa","\hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class wisp {displayname="Wisp";textures[]={"\hidden_ghillie\ghillie_coverall_mixtek.paa","\hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class phantom {displayname="Phantom";textures[]={"\hidden_ghillie\ghillie_coverall_grasstek.paa","\hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class virtual {displayname="Virtual";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
			class night {displayname="Night";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class night_csat {displayname="Night CSAT";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class night_snow {displayname="Night Snow";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
			class snow_night {displayname="Snow Night";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)","hidden_ghillie\fullghillie_camo_night.paa"};};
			class Vidda {displayname="Vidda";textures[]={"a3\characters_f_exp\opfor\data\ghillie_coverall_csat_co.paa","\hidden_ghillie\ghillie_snow.paa"};};
			class dragoncam_ard {displayname="Dragoncam Arid";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_ard_co.paa"};};
			class dragoncam_sard {displayname="Dragoncam Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_sard_co.paa"};};
			class dragoncam_lush {displayname="Dragoncam Lush";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_lsh_co.paa"};};
			class dragoncam_jungle {displayname="Dragoncam Jungle";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class dragoncam_tna {displayname="Dragoncam Tropical";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class dragoncam_grass {displayname="Dragoncam Grass";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class dragoncam_weeds {displayname="Dragoncam Weeds";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class dragoncam_night {displayname="Dragoncam Night";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class dragoncam_csat {displayname="Dragoncam CSAT";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class cloudforest_ard {displayname="Cloud Forest Arid";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_ard_co.paa"};};
			class cloudforest_sard {displayname="Cloud Forest Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_sard_co.paa"};};
			class cloudforest_lush {displayname="Cloud Forest Lush";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_lsh_co.paa"};};
			class cloudforest_jungle {displayname="Cloud Forest Jungle";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class cloudforest_tna {displayname="Cloud Forest Tropical";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class cloudforest_grass {displayname="Cloud Forest Grass";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class cloudforest_weeds {displayname="Cloud Forest Weeds";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class cloudforest_night {displayname="Cloud Forest Night";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class cloudforest_csat {displayname="Cloud Forest CSAT";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class oucamo_grass {displayname="CSAT Grass";textures[]={"a3\characters_f_mark\opfor\data\ghillie_coverall_csat_co.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class oucamo_jungle {displayname="CSAT Jungle";textures[]={"a3\characters_f_mark\opfor\data\ghillie_coverall_csat_co.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class oucamo_weeds {displayname="CSAT Weeds";textures[]={"a3\characters_f_mark\opfor\data\ghillie_coverall_csat_co.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class oucamo_tna {displayname="CSAT Tropical";textures[]={"a3\characters_f_mark\opfor\data\ghillie_coverall_csat_co.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class oucamo_csat {displayname="CSAT";textures[]={"a3\characters_f_mark\opfor\data\ghillie_coverall_csat_co.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class tna_ard {displayname="Tropical Arid";textures[]={"a3\characters_f_exp\opfor\data\ghillie_coverall_csat_co.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class tna_sard {displayname="Tropical Semiarid";textures[]={"a3\characters_f_exp\opfor\data\ghillie_coverall_csat_co.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class tna_lush {displayname="Tropical Lush";textures[]={"a3\characters_f_exp\opfor\data\ghillie_coverall_csat_co.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class tna_grass {displayname="Tropical Grass";textures[]={"a3\characters_f_exp\opfor\data\ghillie_coverall_csat_co.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class tna_weeds {displayname="Tropical Weeds";textures[]={"a3\characters_f_exp\opfor\data\ghillie_coverall_csat_co.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class tna_night {displayname="Tropical Night";textures[]={"a3\characters_f_exp\opfor\data\ghillie_coverall_csat_co.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class earthcam_ard {displayname="Earthcam Arid";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class earthcam_sard {displayname="Earthcam Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class earthcam_lush {displayname="Earthcam Lush";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class earthcam_grass {displayname="Earthcam Grass";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class earthcam_jungle {displayname="Earthcam Jungle";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
//			class earthcam_weeds {displayname="Earthcam Weeds";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class earthcam_tna {displayname="Earthcam Tropical";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class earthcam_csat {displayname="Earthcam CSAT";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class grasspat_ard {displayname="Grasspat Arid";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class grasspat_sard {displayname="Grasspat Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class grasspat_lsh {displayname="Grasspat Lush";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
//			class grasspat_grass {displayname="Grasspat Grass";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class grasspat_jungle {displayname="Grasspat Jungle";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class grasspat_weeds {displayname="Grasspat Weeds";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class grasspat_tna {displayname="Grasspat Tropical";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class grasspat_csat {displayname="Grasspat CSAT";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class grasstek_ard {displayname="Grasstek Arid";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class grasstek_sard {displayname="Grasstek Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class grasstek_lsh {displayname="Grasstek Lush";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class grasstek_grass {displayname="Grasstek Grass";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class grasstek_jungle {displayname="Grasstek Jungle";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
//			class grasstek_weeds {displayname="Grasstek Weeds";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class grasstek_tna {displayname="Grasstek Tropical";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class grasstek_csat {displayname="Grasstek CSAT";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class mixtek_ard {displayname="Mixtek Arid";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class mixtek_sard {displayname="Mixtek Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class mixtek_lsh {displayname="Mixtek Lush";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class mixtek_grass {displayname="Mixtek Grass";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
//			class mixtek_jungle {displayname="Mixtek Jungle";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class mixtek_weeds {displayname="Mixtek Weeds";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class mixtek_tna {displayname="Mixtek Tropical";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class mixtek_csat {displayname="Mixtek CSAT";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class multiearth_ard {displayname="Multiearth Arid";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class multiearth_sard {displayname="Multiearth Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class multiearth_lsh {displayname="Multiearth Lush";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
//			class multiearth_grass {displayname="Multiearth Grass";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class multiearth_jungle {displayname="Multiearth Jungle";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class multiearth_weeds {displayname="Multiearth Weeds";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class multiearth_tna {displayname="Multiearth Tropical";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class multiearth_csat {displayname="Multiearth CSAT";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class vegicam_ard {displayname="Vegicam Arid";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class vegicam_sard {displayname="Vegicam Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class vegicam_lsh {displayname="Vegicam Lush";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class vegicam_grass {displayname="Vegicam Grass";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
//			class vegicam_jungle {displayname="Vegicam Jungle";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class vegicam_weeds {displayname="Vegicam Weeds";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class vegicam_tna {displayname="Vegicam Tropical";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class vegicam_csat {displayname="Vegicam CSAT";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class austrianpea_ard {displayname="Austrian Pea Arid";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class austrianpea_sard {displayname="Austrian Pea Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class austrianpea_lsh {displayname="Austrian Pea Lush";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class austrianpea_grass {displayname="Austrian Pea Grass";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class austrianpea_jungle {displayname="Austrian Pea Jungle";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class austrianpea_weeds {displayname="Austrian Pea Weeds";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class austrianpea_tna {displayname="Austrian Pea Tropical";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class austrianpea_csat {displayname="Austrian Pea CSAT";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
		};
	};
	class O_ghillie_sniper_F: O_sniper_F
	{
		scope=2;
		displayName="Sniper (Ghillie)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f\opfor\data\clothing_co.paa","a3\characters_f\opfor\data\tech_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		class textureSources
		{
			class desert {displayname="Desert";textures[]={"a3\characters_f\opfor\data\clothing_co.paa","a3\characters_f\opfor\data\tech_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class mtp {displayname="MTP";textures[]={"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa","\A3\Characters_F\OPFOR\Data\tech_oucamo_CO.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class woodland {displayname="Woodland";textures[]={"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa","\a3\characters_f\OPFOR\Data\tech_rus_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class tropical {displayname="Tropical";textures[]={"a3\characters_f_exp\opfor\data\clothing_tna_co.paa","a3\characters_f_exp\opfor\data\tech_tna_co.paa","a3\characters_f_exp\opfor\data\ghillie_tna_co.paa"};};
			class camonet {displayname="Camonet";textures[]={"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa","\a3\characters_f\OPFOR\Data\tech_rus_co.paa","\hidden_ghillie\ghillie_camonet.paa"};};
		};
		uniformClass = "U_O_GhillieSuit_Base";
	};
	class O_ghillie_spotter_F: O_spotter_F
	{
		scope=2;
		displayName="Spotter (Ghillie)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f\opfor\data\clothing_co.paa","a3\characters_f\opfor\data\tech_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		class textureSources
		{
			class desert {displayname="Desert";textures[]={"a3\characters_f\opfor\data\clothing_co.paa","a3\characters_f\opfor\data\tech_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class mtp {displayname="MTP";textures[]={"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa","\A3\Characters_F\OPFOR\Data\tech_oucamo_CO.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class woodland {displayname="Woodland";textures[]={"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa","\a3\characters_f\OPFOR\Data\tech_rus_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class tropical {displayname="Tropical";textures[]={"a3\characters_f_exp\opfor\data\clothing_tna_co.paa","a3\characters_f_exp\opfor\data\tech_tna_co.paa","a3\characters_f_exp\opfor\data\ghillie_tna_co.paa"};};
			class camonet {displayname="Camonet";textures[]={"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa","\a3\characters_f\OPFOR\Data\tech_rus_co.paa","\hidden_ghillie\ghillie_camonet.paa"};};
		};
		uniformClass = "U_O_GhillieSuit_Base";
	};
	class I_fullghillie_F: I_ghillie_lsh_F
	{
		scope=2;
		displayName="Sniper (Full Ghillie)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		class textureSources
		{
			class arid {displayname="Arid";textures[]={"a3\characters_f_mark\indep\data\ghillie_coverall_aaf_co.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_ard_co.paa"};};
			class semiarid {displayname="Semi Arid";textures[]={"a3\characters_f_mark\indep\data\ghillie_coverall_aaf_co.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_sard_co.paa"};};
			class lush {displayname="Lush";textures[]={"a3\characters_f_mark\indep\data\ghillie_coverall_aaf_co.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_lsh_co.paa"};};
			class grass {displayname="Grass";textures[]={"\hidden_ghillie\ghillie_coverall_multiearth.paa","\hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class weeds {displayname="Weeds";textures[]={"\hidden_ghillie\ghillie_coverall_earthcam.paa","\hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class jungle {displayname="Jungle";textures[]={"\hidden_ghillie\ghillie_coverall_vegicam.paa","\hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class ethereal {displayname="Ethereal";textures[]={"\hidden_ghillie\ghillie_coverall_grasspat.paa","\hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class wisp {displayname="Wisp";textures[]={"\hidden_ghillie\ghillie_coverall_mixtek.paa","\hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class phantom {displayname="Phantom";textures[]={"\hidden_ghillie\ghillie_coverall_grasstek.paa","\hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class virtual {displayname="Virtual";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
			class night {displayname="Night";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class night_csat {displayname="Night CSAT";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class night_snow {displayname="Night Snow";textures[]={"hidden_ghillie\ghillie_coverall_night.paa","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
			class snow_night {displayname="Snow Night";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)","hidden_ghillie\fullghillie_camo_night.paa"};};
			class dragoncam_ard {displayname="Dragoncam Arid";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_ard_co.paa"};};
			class dragoncam_sard {displayname="Dragoncam Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_sard_co.paa"};};
			class dragoncam_lush {displayname="Dragoncam Lush";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_lsh_co.paa"};};
			class dragoncam_jungle {displayname="Dragoncam Jungle";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class dragoncam_tna {displayname="Dragoncam Tropical";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class dragoncam_grass {displayname="Dragoncam Grass";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class dragoncam_weeds {displayname="Dragoncam Weeds";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class dragoncam_night {displayname="Dragoncam Night";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class dragoncam_csat {displayname="Dragoncam CSAT";textures[]={"hidden_ghillie\ghillie_coverall_dragoncam.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class cloudforest_ard {displayname="Cloud Forest Arid";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_ard_co.paa"};};
			class cloudforest_sard {displayname="Cloud Forest Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_sard_co.paa"};};
			class cloudforest_lush {displayname="Cloud Forest Lush";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa","a3\characters_f_mark\common\data\ghillie_threads_5lod_lsh_co.paa"};};
			class cloudforest_jungle {displayname="Cloud Forest Jungle";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class cloudforest_tna {displayname="Cloud Forest Tropical";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class cloudforest_grass {displayname="Cloud Forest Grass";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class cloudforest_weeds {displayname="Cloud Forest Weeds";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class cloudforest_night {displayname="Cloud Forest Night";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class cloudforest_csat {displayname="Cloud Forest CSAT";textures[]={"hidden_ghillie\ghillie_coverall_cloudforest.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class mtp_grass {displayname="MTP Grass";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class mtp_jungle {displayname="MTP Jungle";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class mtp_weeds {displayname="MTP Weeds";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class mtp_tna {displayname="MTP Tropical";textures[]={"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class tna_ard {displayname="Tropical Arid";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class tna_sard {displayname="Tropical Semiarid";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class tna_lush {displayname="Tropical Lush";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class tna_grass {displayname="Tropical Grass";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class tna_weeds {displayname="Tropical Weeds";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class tna_night {displayname="Tropical Night";textures[]={"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","hidden_ghillie\fullghillie_camo_night.paa"};};
			class tna_csat {displayname="Tropical CSAT";textures[]={"a3\characters_f_mark\indep\data\ghillie_coverall_aaf_co.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class earthcam_ard {displayname="Earthcam Arid";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class earthcam_sard {displayname="Earthcam Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class earthcam_lush {displayname="Earthcam Lush";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class earthcam_grass {displayname="Earthcam Grass";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class earthcam_jungle {displayname="Earthcam Jungle";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
//			class earthcam_weeds {displayname="Earthcam Weeds";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class earthcam_tna {displayname="Earthcam Tropical";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class earthcam_csat {displayname="Earthcam CSAT";textures[]={"hidden_ghillie\ghillie_coverall_earthcam.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class grasspat_ard {displayname="Grasspat Arid";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class grasspat_sard {displayname="Grasspat Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class grasspat_lsh {displayname="Grasspat Lush";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
//			class grasspat_grass {displayname="Grasspat Grass";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class grasspat_jungle {displayname="Grasspat Jungle";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class grasspat_weeds {displayname="Grasspat Weeds";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class grasspat_tna {displayname="Grasspat Tropical";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class grasspat_csat {displayname="Grasspat CSAT";textures[]={"hidden_ghillie\ghillie_coverall_grasspat.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class grasstek_ard {displayname="Grasstek Arid";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class grasstek_sard {displayname="Grasstek Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class grasstek_lsh {displayname="Grasstek Lush";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class grasstek_grass {displayname="Grasstek Grass";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class grasstek_jungle {displayname="Grasstek Jungle";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
//			class grasstek_weeds {displayname="Grasstek Weeds";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class grasstek_tna {displayname="Grasstek Tropical";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class grasstek_csat {displayname="Grasstek CSAT";textures[]={"hidden_ghillie\ghillie_coverall_grasstek.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class mixtek_ard {displayname="Mixtek Arid";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class mixtek_sard {displayname="Mixtek Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class mixtek_lsh {displayname="Mixtek Lush";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class mixtek_grass {displayname="Mixtek Grass";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
//			class mixtek_jungle {displayname="Mixtek Jungle";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class mixtek_weeds {displayname="Mixtek Weeds";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class mixtek_tna {displayname="Mixtek Tropical";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class mixtek_csat {displayname="Mixtek CSAT";textures[]={"hidden_ghillie\ghillie_coverall_mixtek.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class multiearth_ard {displayname="Multiearth Arid";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class multiearth_sard {displayname="Multiearth Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class multiearth_lsh {displayname="Multiearth Lush";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
//			class multiearth_grass {displayname="Multiearth Grass";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class multiearth_jungle {displayname="Multiearth Jungle";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class multiearth_weeds {displayname="Multiearth Weeds";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class multiearth_tna {displayname="Multiearth Tropical";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class multiearth_csat {displayname="Multiearth CSAT";textures[]={"hidden_ghillie\ghillie_coverall_multiearth.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class vegicam_ard {displayname="Vegicam Arid";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class vegicam_sard {displayname="Vegicam Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class vegicam_lsh {displayname="Vegicam Lush";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class vegicam_grass {displayname="Vegicam Grass";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
//			class vegicam_jungle {displayname="Vegicam Jungle";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class vegicam_weeds {displayname="Vegicam Weeds";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class vegicam_tna {displayname="Vegicam Tropical";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class vegicam_csat {displayname="Vegicam CSAT";textures[]={"hidden_ghillie\ghillie_coverall_vegicam.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
			class austrianpea_ard {displayname="Austrian Pea Arid";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"};};
			class austrianpea_sard {displayname="Austrian Pea Semiarid";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_mark\common\data\ghillie_threads_sard_ca.paa"};};
			class austrianpea_lsh {displayname="Austrian Pea Lush";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_mark\common\data\ghillie_threads_lsh_ca.paa"};};
			class austrianpea_grass {displayname="Austrian Pea Grass";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","hidden_ghillie\fullghillie_camo_grass.paa"};materials[]={"a3\characters_f_mark\Common\Data\ghillie_coverall.rvmat","hidden_ghillie\ghillie_grass.rvmat"};};
			class austrianpea_jungle {displayname="Austrian Pea Jungle";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","hidden_ghillie\fullghillie_camo_jungle.paa"};};
			class austrianpea_weeds {displayname="Austrian Pea Weeds";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","hidden_ghillie\fullghillie_camo_weeds.paa"};};
			class austrianpea_tna {displayname="Austrian Pea Tropical";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};};
			class austrianpea_csat {displayname="Austrian Pea CSAT";textures[]={"hidden_ghillie\ghillie_coverall_austrianpea.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","a3\characters_f_exp\blufor\data\ghillie_threads_5lod_tna_co.paa"};};
		};
	};
	class I_ghillie_sniper_F: I_sniper_F
	{
		scope=2;
		displayName="Sniper (Ghillie)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		hiddenSelections[] = {"Camo","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		class textureSources
		{
			class woodland {displayname="Woodland";textures[]={"a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class desert {displayname="Desert";textures[]={"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class mtp {displayname="MTP";textures[]={"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
		};
		uniformClass = "U_I_GhillieSuit_Base";
	};
	class I_ghillie_spotter_F: I_spotter_F
	{
		scope=2;
		displayName="Spotter (Ghillie)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		hiddenSelections[] = {"Camo","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		class textureSources
		{
			class woodland {displayname="Woodland";textures[]={"a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class desert {displayname="Desert";textures[]={"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class mtp {displayname="MTP";textures[]={"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
		};
		uniformClass = "U_I_GhillieSuit_Base";
	};
	class B_Sniper_Wdl_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper Woodland";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"woodland", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		uniformClass = "U_B_GhillieSuit_wdl";
	};
	class B_Spotter_Wdl_F: B_ghillie_spotter_F
	{
		scope=2;
		displayName="Spotter Woodland";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"woodland", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		uniformClass = "U_B_GhillieSuit_wdl";
	};
	class B_Sniper_BDU_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper BDU";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"wdl_csat", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa","A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"};
		uniformClass = "U_B_GhillieSuit_BDU";
	};
	class B_Sniper_CTRG_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper CTRG";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"ctrgx_tna", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa","a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};
		hiddenSelectionsMaterials[]={"a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat"};
		uniformClass = "U_B_GhillieSuit_CTRG";
	};
	class B_Sniper_Desert_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper Desert";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"desert", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		uniformClass = "U_B_GhillieSuit_desert";
	};
	class B_Spotter_Desert_F: B_ghillie_spotter_F
	{
		scope=2;
		displayName="Spotter Desert";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"desert", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		uniformClass = "U_B_GhillieSuit_desert";
	};
	class B_Sniper_Net_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper Camonet";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"camonet", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","\hidden_ghillie\ghillie_camonet.paa"};
		uniformClass = "U_B_GhillieSuit_Net";
	};
	class B_Spotter_Net_F: B_ghillie_spotter_F
	{
		scope=2;
		displayName="Spotter Camonet";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"camonet", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\blufor\data\clothing1_dirty_co.paa","\hidden_ghillie\ghillie_camonet.paa"};
		uniformClass = "U_B_GhillieSuit_Net";
	};
	class B_Sniper_Strands_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper Strands";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"Strands", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\hidden_ghillie\ghillie_strands.paa"};
		uniformClass = "U_B_GhillieSuit_Strands";
	};
	class B_Sniper_Vidda_F: B_T_sniper_F
	{
		scope=2;
		displayName="Sniper Vidda";
		faction="BLU_F";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"vidda", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\blufor\data\u_bt_soldier_f_tna_co.paa","\hidden_ghillie\ghillie_snow.paa"};
		uniformClass = "U_B_GhillieSuit_Vidda";
	};
	class B_Sniper_Snow_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper Snow";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"snow", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\nato_snow.paa","\hidden_ghillie\ghillie_snow.paa"};
		uniformClass = "U_B_GhillieSuit_Snow";
	};
	class B_Sniper_Night_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper Night";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"night", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_night_co.paa"};
		weapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		uniformClass = "U_B_GhillieSuit_Night";
	};
	class B_Spotter_Night_F: B_ghillie_spotter_F
	{
		scope=2;
		displayName="Spotter Night";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"night", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_night_co.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		linkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		uniformClass = "U_B_GhillieSuit_Night";
	};

// testing legacy full ghillie patters via VhC


	class B_Sniper_Full_F: B_Sniper_F
	{
//		vehicleClass = "MenSniper";
//		Faction = "BLU_F";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		displayName = "Sniper [Legacy Full]";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		class textureSources
		{
			class mtp {displayname="MTP";textures[]={"\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class woodland {displayname="Woodland";textures[]={"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class tropical {displayname="Tropical";textures[]={"a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class desert {displayname="Desert";textures[]={"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class camonet {displayname="Camonet";textures[]={"\hidden_ghillie\ghillie_camonet.paa"};};
			class night {displayname="Night";textures[]={"\hidden_ghillie\ghillie_night_co.paa"};};
			class fishnet {displayname="Fishnet";textures[]={"\hidden_ghillie\ghillie_fishnet_co.paa"};};
			class grass {displayname="Grass";textures[]={"\hidden_ghillie\ghillie_grass.paa"};};
			class virtual {displayname="Virtual";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
			class meshtape {displayname="Meshtape";textures[]={"hidden_ghillie\ghillie_mesh_tape.paa"};};
		};
	};
	class B_Sniper_Full_tna_F: B_Sniper_Full_F
	{
		displayName = "Sniper Tropical [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		uniformClass = "U_B_GhillieFull_tna";
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};
		textureList[]={"tropical",1};
	};
	class B_Sniper_Full_Night_F: B_Sniper_F
	{
		scope=2;
		displayName = "Sniper Night [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull_Night";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_night_co.paa"};
		weapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
	};
	class B_Sniper_Full_Net_F: B_Sniper_F
	{
		scope=2;
		displayName = "Sniper Camonet [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull_Net";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_camonet.paa"};
//		weapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
//		respawnWeapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
	};
	class B_Sniper_Full_Virtual_F: B_Sniper_F
	{
		scope=2;
		displayName = "Sniper Virtual [Legacy Full]";
		vehicleClass="MenVR";editorSubcategory="EdSubcat_Personnel_VR";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull_Virtual";
		hiddenSelectionsTextures[] = {"#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};
		weapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
	};
	class I_Sniper_Full_F: I_Sniper_F
	{
		displayName = "Sniper [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_I_GhillieFull";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		class textureSources
		{
			class mtp {displayname="MTP";textures[]={"\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class woodland {displayname="Woodland";textures[]={"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class tropical {displayname="Tropical";textures[]={"a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class desert {displayname="Desert";textures[]={"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class camonet {displayname="Camonet";textures[]={"\hidden_ghillie\ghillie_camonet.paa"};};
			class night {displayname="Night";textures[]={"\hidden_ghillie\ghillie_night_co.paa"};};
			class fishnet {displayname="Fishnet";textures[]={"\hidden_ghillie\ghillie_fishnet_co.paa"};};
			class grass {displayname="Grass";textures[]={"\hidden_ghillie\ghillie_grass.paa"};};
			class virtual {displayname="Virtual";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
			class meshtape {displayname="Meshtape";textures[]={"hidden_ghillie\ghillie_mesh_tape.paa"};};
		};
	};
	class O_Sniper_Full_F: O_Sniper_F
	{
		displayName = "Sniper [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_O_GhillieFull";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		class textureSources
		{
			class mtp {displayname="MTP";textures[]={"\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class woodland {displayname="Woodland";textures[]={"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class tropical {displayname="Tropical";textures[]={"a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class desert {displayname="Desert";textures[]={"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class camonet {displayname="Camonet";textures[]={"\hidden_ghillie\ghillie_camonet.paa"};};
			class night {displayname="Night";textures[]={"\hidden_ghillie\ghillie_night_co.paa"};};
			class fishnet {displayname="Fishnet";textures[]={"\hidden_ghillie\ghillie_fishnet_co.paa"};};
			class grass {displayname="Grass";textures[]={"\hidden_ghillie\ghillie_grass.paa"};};
			class virtual {displayname="Virtual";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
			class meshtape {displayname="Meshtape";textures[]={"hidden_ghillie\ghillie_mesh_tape.paa"};};
			class tna {displayname="Tropical";textures[]={"a3\characters_f_exp\OPFOR\Data\ghillie_tna_CO.paa"};};
		};
	};
	class O_Sniper_Full_tna_F: O_Sniper_Full_F
	{
		displayName = "Sniper Tropical [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		uniformClass = "U_O_GhillieFull_tna";
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\OPFOR\Data\ghillie_tna_CO.paa"};
		textureList[]={"tna",1};
	};
	class B_Spotter_Full_F: B_Spotter_F
	{
		displayName = "Spotter [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};
	};
	class B_Spotter_Full_Night_F: B_Spotter_F
	{
		scope=2;
		displayName = "Spotter Night [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull_Night";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_night_co.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		linkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
	};
	class B_Spotter_Full_Net_F: B_Spotter_F
	{
		scope=2;
		displayName = "Spotter Camonet [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull_Net";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_camonet.paa"};
//		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
//		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
	};
	class I_Spotter_Full_F: I_Spotter_F
	{
		displayName = "Spotter Woodland [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_I_GhillieFull";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
	};
	class O_Spotter_Full_F: O_Spotter_F
	{
		displayName = "Spotter Desert [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_O_GhillieFull";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
	};
	class O_Sniper_mcam_F: O_ghillie_sniper_F
	{
		scope=2;
		displayName = "Sniper MTP";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"mtp", 1};
		uniformClass = "U_O_GhillieSuit_mcam";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa","\A3\Characters_F\OPFOR\Data\tech_oucamo_CO.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};
	};
	class O_Spotter_mcam_F: O_ghillie_spotter_F
	{
		scope=2;
		displayName = "Spotter MTP";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"mtp", 1};
		uniformClass = "U_O_GhillieSuit_mcam";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa","\A3\Characters_F\OPFOR\Data\tech_oucamo_CO.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};
	};
	class O_Sniper_wdl_F: O_ghillie_sniper_F
	{
		scope=2;
		displayName = "Sniper Woodland";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"woodland", 1};
		uniformClass = "U_O_GhillieSuit_wdl";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa","\a3\characters_f\OPFOR\Data\tech_rus_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
	};
	class O_Spotter_wdl_F: O_ghillie_spotter_F
	{
		scope=2;
		displayName = "Spotter Woodland";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"woodland", 1};
		uniformClass = "U_O_GhillieSuit_wdl";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa","\a3\characters_f\OPFOR\Data\tech_rus_co.paa","\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
	};
	class I_Sniper_desert_F: I_ghillie_sniper_F
	{
		scope=2;
		displayName = "Sniper Desert";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"desert", 1};
		uniformClass = "U_I_GhillieSuit_desert";
		hiddenSelections[] = {"Camo","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
	};
	class I_Spotter_desert_F: I_ghillie_spotter_F
	{
		scope=2;
		displayName = "Spotter Desert";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"desert", 1};
		uniformClass = "U_I_GhillieSuit_desert";
		hiddenSelections[] = {"Camo","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
	};
	class I_Sniper_mcam_F: I_ghillie_sniper_F
	{
		scope=2;
		displayName = "Sniper MTP";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"mtp", 1};
		uniformClass = "U_I_GhillieSuit_mcam";
		hiddenSelections[] = {"Camo","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};
	};
	class I_Spotter_mcam_F: I_ghillie_spotter_F
	{
		scope=2;
		displayName = "Spotter MTP";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"mtp", 1};
		uniformClass = "U_I_GhillieSuit_mcam";
		hiddenSelections[] = {"Camo","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa","\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};
	};
	class B_Sniper_Fishnet_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper Fishnet";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"fishnet", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
//		hiddenSelectionsTextures[] = {"#(ai,2048,2048,1024)perlinNoise(64,32,0,0.5)","\hidden_ghillie\ghillie_fishnet_co.paa"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_fishnet_co.paa"};
		weapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		uniformClass = "U_B_GhillieSuit_Fishnet";
	};
	class B_Spotter_Fishnet_F: B_ghillie_spotter_F
	{
		scope=2;
		displayName="Spotter Fishnet";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"fishnet", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa","\hidden_ghillie\ghillie_fishnet_co.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		linkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		uniformClass = "U_B_GhillieSuit_Fishnet";
	};
	class B_Sniper_Full_Fishnet_F: B_Sniper_F
	{
		scope=2;
		displayName = "Sniper Fishnet [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull_Fishnet";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_fishnet_co.paa"};
		weapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
	};
	class B_Spotter_Full_Fishnet_F: B_Spotter_F
	{
		scope=2;
		displayName = "Spotter Fishnet [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull_Fishnet";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_fishnet_co.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		linkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
	};
	class O_Sniper_Net_F: O_ghillie_sniper_F
	{
		scope=2;
		displayName = "Sniper Camonet";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"camonet", 1};
		uniformClass = "U_O_GhillieSuit_Net";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa","\a3\characters_f\OPFOR\Data\tech_rus_co.paa","\hidden_ghillie\ghillie_camonet.paa"};
	};
	class O_Spotter_Net_F: O_ghillie_spotter_F
	{
		scope=2;
		displayName = "Spotter Camonet";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"camonet", 1};
		uniformClass = "U_O_GhillieSuit_Net";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa","\a3\characters_f\OPFOR\Data\tech_rus_co.paa","\hidden_ghillie\ghillie_camonet.paa"};
	};
	class B_Sniper_Grass_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper Grass";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"grass", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\nato_earthcam.paa","\hidden_ghillie\ghillie_grass.paa"};
		uniformClass = "U_B_GhillieSuit_Grass";
	};
	class B_Spotter_Grass_F: B_ghillie_spotter_F
	{
		scope=2;
		displayName="Spotter Grass";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"grass", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\nato_earthcam.paa","\hidden_ghillie\ghillie_grass.paa"};
		uniformClass = "U_B_GhillieSuit_Grass";
	};
	class B_Sniper_Full_Grass_F: B_Sniper_F
	{
		scope=2;
		displayName = "Sniper Grass [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull_Grass";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_grass.paa"};
	};
	class B_Spotter_Full_Grass_F: B_Spotter_F
	{
		scope=2;
		displayName = "Spotter Grass [Legacy Full]";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "U_B_GhillieFull_Grass";
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_grass.paa"};
	};
	class B_Sniper_Devgru_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper Devgru";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"devgru", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\nato_devgru.paa","\a3\characters_f\common\data\ghillie_mcamo_co.paa"};
		uniformClass = "U_B_GhillieSuit_devgru";
	};
	class B_Sniper_malden_F: B_ghillie_sniper_F
	{
		scope=2;
		displayName="Sniper Malden";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"malden", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\nato_malden.paa","\a3\characters_f\common\data\ghillie_mcamo_co.paa"};
		uniformClass = "U_B_GhillieSuit_malden";
	};
	class B_Spotter_Ghostex_F: B_ghillie_spotter_F
	{
		scope=2;
		displayName="Spotter Ghostex";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"ghostex", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\nato_ghostex_kilo.paa","\a3\characters_f\common\data\ghillie_mcamo_co.paa"};
		uniformClass = "U_B_GhillieSuit_ghostex";
	};
	class B_ghillie_grass_F: B_fullghillie_F
	{
		scope=2;
		displayName="Sniper (Grass)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"grass", 1};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_coverall_multiearth.paa","\hidden_ghillie\fullghillie_camo_grass.paa"};
		uniformClass = "U_B_FullGhillie_grass";
	};
	class B_ghillie_weeds_F: B_fullghillie_F
	{
		scope=2;
		displayName="Sniper (Weeds)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"woodland", 1};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_coverall_earthcam.paa","\hidden_ghillie\fullghillie_camo_weeds.paa"};
		uniformClass = "U_B_FullGhillie_weeds";
	};
	class B_ghillie_jungle_F: B_fullghillie_F
	{
		scope=2;
		displayName="Sniper (jungle)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"woodland", 1};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_coverall_vegicam.paa","\hidden_ghillie\fullghillie_camo_jungle.paa"};
		uniformClass = "U_B_FullGhillie_jungle";
	};
	class B_ghillie_marpat_F: B_fullghillie_F
	{
		scope=2;
		displayName="Sniper (MARPAT)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"marpat", 1};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_coverall_marpat.paa","a3\characters_f_exp\blufor\data\ghillie_threads_tna_ca.paa"};
		uniformClass = "U_B_FullGhillie_marpat";
	};
	class B_ghillie_net_F: B_fullghillie_F
	{
		scope=2;
		displayName="Sniper (Camonet)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"mtp_net", 1};
		hiddenSelectionsTextures[] = {"a3\characters_f_mark\blufor\data\ghillie_coverall_nato_co.paa","\a3\characters_f\Common\data\ghillie2_co.paa"};
		uniformClass = "U_B_FullGhillie_net";
	};
	class B_ghillie_Vidda_F: B_T_ghillie_tna_F
	{
		scope=2;
		displayName="Sniper (Vidda)";
		faction="BLU_F";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"vidda", 1};
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\blufor\data\ghillie_coverall_nato_co.paa","\hidden_ghillie\fullghillie_camo_snow.paa"};
		uniformClass = "U_B_FullGhillie_Vidda";
	};
	class B_ghillie_Snow_F: B_fullghillie_F
	{
		scope=2;
		displayName="Sniper (Snow)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		textureList[] = {"snow", 1};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_coverall_snow.paa","\hidden_ghillie\fullghillie_camo_snow.paa"};
		uniformClass = "U_B_FullGhillie_Snow";
	};
	class B_Spotter_virtual_F: B_ghillie_spotter_F
	{
		scope=2;
		displayName="Spotter Virtual";
//		side = 1;
//		faction = "BLU_F";
		vehicleClass = "MenVR";editorSubcategory="EdSubcat_Personnel_VR";
		textureList[] = {"virtual", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		linkedItems[] = {"V_Chestrig_blk","G_balaclava_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_blk","G_balaclava_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		uniformClass = "U_B_GhillieSuit_virtual";
		class EventHandlers
		{
			init = "(_this select 0) setObjectTextureGlobal [0,""#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)""];(_this select 0) setObjectTextureGlobal [1,""#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)""];";
		};
	};
	class B_ghillie_virtual_F: B_fullghillie_F
	{
		scope=2;
		displayName="Sniper (Virtual)";
		vehicleClass = "MenVR";editorSubcategory="EdSubcat_Personnel_VR";
		textureList[] = {"virtual", 1};
		hiddenSelectionsTextures[] = {"#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)","#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};
		uniformClass = "U_B_FullGhillie_virtual";
		weapons[] = {"srifle_lrr_lrps_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_lrr_lrps_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_chestrig_blk","G_bandanna_blk","NVGoggles_opfor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_chestrig_blk","G_bandanna_blk","NVGoggles_opfor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		class EventHandlers
		{
			init = "(_this select 0) setObjectTextureGlobal [0,""#(ai,1024,1024,1)perlinNoise(64,32,0,0.5)""];(_this select 0) setObjectTextureGlobal [1,""#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)""];";
		};
	};
	class B_ghillie_active_F: B_ghillie_lsh_F
	{
		displayName="Sniper (Active Camo)";
		vehicleClass="snpr_ghillie";editorSubcategory="EdSubcat_Ghillies";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,0)","#(argb,8,8,3)color(0,0,0,0)"};
		uniformClass = "U_B_FullGhillie_active";
		weapons[] = {"srifle_lrr_lrps_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_lrr_lrps_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_chestrig_blk","G_bandanna_blk","NVGoggles_opfor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_chestrig_blk","G_bandanna_blk","NVGoggles_opfor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		class EventHandlers
		{
			init = "activecamo={private [""_cam"",""_tv"",""_me""];_me=_this select 0;_tv=str random 1000;_cam=""camera"" camCreate getposatl _me;_cam attachto [_me,[0,0,2]];_cam setVectorDirAndUp [[0,0,-1],[0,1,0]];_cam camsetfov 1;_cam camcommit 1;_cam cameraeffect [""internal"",""back"",_tv];{_me setObjectTextureGlobal [_x,format [""#(argb,512,512,1)r2t(%1,1.0)"",_tv]]} foreach [0,1]};if !is3den then{[_this select 0] call activecamo};";
		};
	};
};
class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			class Identity
			{
				class Attributes
				{
					class tex_camo
					{
						property = "tex_camo";
						value = 0;
						control = "tex_camo";
						displayName = "Camouflage";
						tooltip = "Select a texture from the list of texture sources if the unit has any.";
						expression = "[_this,_value,nil] call bis_fnc_initVehicle;";
						defaultValue = "str (getobjecttextures _this)";
						condition = "objectBrain";
						wikiType = "[[String]]";
						validate = "variable";
					};
				};
			};
		};
	};
	class Attributes
	{
		class Title;
		class Combo: Title
		{
			class Controls
			{
				class Title;
				class Value;
			};
		};
		class tex_camo: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					onload = "_ctrl=_this select 0;{_ctrl lbsetdata [_ctrl lbadd (gettext (_x >> ""displayname"")),configname _x]} foreach configproperties [configfile >> ""CfgVehicles"" >> (typeof ((get3DENSelected ""object"") select 0)) >> ""textureSources"",""isclass _x""];lbsort _ctrl;";
				};
			};
		};
	};
};
