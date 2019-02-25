VD_WeaponArrayRifles = [];
VD_WeaponArrayPistols = [];
VD_WeaponArrayPistolsAI = [];
VD_WeaponArrayLaunchers = [];
VD_WeaponArrayAll = [];

//ILF3

VD_EquipmentUniformsLIB = ["U_LIB_FSJ_Soldier","U_LIB_FSJ_Soldier_camo","U_LIB_FSJ_Soldier_dak","U_LIB_FSJ_Soldier_dak_camo","U_LIB_ST_Soldier_E44","U_LIB_ST_MGunner_E44","U_LIB_ST_Medic_E44","U_LIB_ST_Unterofficier_E44","U_LIB_ST_Soldier_E44_Camo","U_LIB_ST_Soldier_E44_Camo2","U_LIB_ST_Soldier_Camo","U_LIB_ST_Soldier_Camo2","U_LIB_ST_Sniper","U_LIB_ST_Sniper2","U_LIB_GER_Tank_crew_private","U_LIB_GER_Tank_crew_unterofficer","U_LIB_GER_Tank_crew_leutnant","U_LIB_GER_Spg_crew_private","U_LIB_GER_Spg_crew_unterofficer","U_LIB_GER_Spg_crew_leutnant","U_LIB_GER_Soldier2","U_LIB_GER_Soldier3","U_LIB_GER_Schutze","U_LIB_GER_Schutze_HBT","U_LIB_GER_Soldier_camo","U_LIB_GER_Soldier_camo2","U_LIB_GER_Soldier_camo3","U_LIB_GER_Soldier_camo4","U_LIB_GER_Soldier_camo5","U_LIB_GER_Pionier","U_LIB_GER_LW_pilot","U_LIB_GER_Funker","U_LIB_GER_Art_schutze","U_LIB_GER_Oberschutze","U_LIB_GER_Gefreiter","U_LIB_GER_Unterofficer","U_LIB_GER_Unterofficer_HBT","U_LIB_GER_Art_unterofficer","U_LIB_GER_Recruit","U_LIB_GER_Medic","U_LIB_GER_Leutnant","U_LIB_GER_Art_leutnant","U_LIB_GER_Oberleutnant","U_LIB_GER_Hauptmann","U_LIB_GER_Oberst","U_LIB_GER_Scharfschutze","U_LIB_GER_MG_schutze","U_LIB_GER_MG_schutze_HBT","U_LIB_WP_Soldier_camo_1","U_LIB_WP_Soldier_camo_2","U_LIB_WP_Soldier_camo_3","U_LIB_SOV_Strelok","U_LIB_SOV_Strelok_summer","U_LIB_SOV_Strelokart","U_LIB_SOV_Tank_private_field","U_LIB_SOV_Starshina","U_LIB_SOV_Efreitor","U_LIB_SOV_Efreitor_summer","U_LIB_SOV_Sergeant","U_LIB_SOV_Sergeant_inset_pocket","U_LIB_SOV_Stsergeant","U_LIB_SOV_Leutenant","U_LIB_SOV_Pilot","U_LIB_SOV_Leutenant_inset_pocket","U_LIB_SOV_Artleutenant","U_LIB_SOV_Stleutenant","U_LIB_SOV_Kapitan","U_LIB_SOV_Kapitan_summer","U_LIB_SOV_Razvedchik_am","U_LIB_SOV_Razvedchik_lis","U_LIB_SOV_Razvedchik_mix","U_LIB_SOV_Razvedchik_autumn","U_LIB_SOV_Sniper","U_LIB_SOV_Sniper_spring","U_LIB_SOV_Sniper_autumn","U_LIB_SOV_Tank_ryadovoi","U_LIB_SOV_Tank_sergeant","U_LIB_SOV_Tank_leutenant","U_LIB_SOV_Tank_kapitan","U_LIB_US_AB_Uniform_M42","U_LIB_US_AB_Uniform_M42_Medic","U_LIB_US_AB_Uniform_M42_506","U_LIB_US_AB_Uniform_M42_Gas","U_LIB_US_AB_Uniform_M42_FC","U_LIB_US_AB_Uniform_M42_corporal","U_LIB_US_AB_Uniform_M42_NCO","U_LIB_US_AB_Uniform_M43","U_LIB_US_AB_Uniform_M43_Medic","U_LIB_US_AB_Uniform_M43_Flag","U_LIB_US_AB_Uniform_M43_FC","U_LIB_US_AB_Uniform_M43_corporal","U_LIB_US_AB_Uniform_M43_NCO","U_LIB_US_Pilot","U_LIB_US_Pilot_2","U_LIB_US_Bomber_Pilot","U_LIB_US_Bomber_Crew","U_LIB_US_Private","U_LIB_US_Private_1st","U_LIB_US_Corp","U_LIB_US_Sergant","U_LIB_US_Eng","U_LIB_US_Med","U_LIB_US_Tank_Crew","U_LIB_US_Tank_Crew2","U_LIB_US_NAC_Uniform","U_LIB_US_NAC_Uniform_2","U_LIB_US_NAC_Med","U_LIB_US_Rangers_Uniform","U_LIB_US_Rangers_Private_1st","U_LIB_US_Rangers_Corp","U_LIB_US_Rangers_Sergant","U_LIB_US_Rangers_Eng","U_LIB_US_Rangers_Med","U_LIB_CIV_Citizen_1","U_LIB_CIV_Citizen_2","U_LIB_CIV_Citizen_3","U_LIB_CIV_Citizen_4","U_LIB_CIV_Citizen_5","U_LIB_CIV_Citizen_6","U_LIB_CIV_Citizen_7","U_LIB_CIV_Citizen_8","U_LIB_CIV_Worker_1","U_LIB_CIV_Worker_2","U_LIB_CIV_Worker_3","U_LIB_CIV_Worker_4","U_LIB_CIV_Woodlander_1","U_LIB_CIV_Woodlander_2","U_LIB_CIV_Woodlander_3","U_LIB_CIV_Woodlander_4","U_LIB_CIV_Villager_1","U_LIB_CIV_Villager_2","U_LIB_CIV_Villager_3","U_LIB_CIV_Villager_4","U_LIB_CIV_Rocker_1","U_LIB_CIV_Functionary_1","U_LIB_CIV_Functionary_2","U_LIB_CIV_Functionary_3","U_LIB_CIV_Functionary_4","U_LIB_CIV_Priest","U_LIB_CIV_Doctor","U_LIB_CIV_Schoolteacher","U_LIB_CIV_Schoolteacher_2","U_LIB_CIV_Assistant","U_LIB_CIV_Assistant_2","U_LIB_DAK_Soldier","U_LIB_DAK_Soldier_2","U_LIB_DAK_Soldier_3","U_LIB_DAK_Sentry","U_LIB_DAK_Sentry_2","U_LIB_DAK_Medic","U_LIB_DAK_NCO","U_LIB_DAK_NCO_2","U_LIB_DAK_lieutenant","U_LIB_DAK_Spg_crew_private","U_LIB_DAK_Spg_crew_unterofficer","U_LIB_DAK_Spg_crew_leutnant","U_LIB_NKVD_Efreitor","U_LIB_NKVD_Strelok","U_LIB_NKVD_Starshina","U_LIB_NKVD_Sergeant","U_LIB_NKVD_Leutenant","U_LIB_NKVD_StLeutenant","U_LIB_GER_Soldier3_w","U_LIB_GER_Soldier_camo_w","U_LIB_GER_Scharfschutze_w","U_LIB_GER_Scharfschutze_2_w","U_LIB_SOV_Strelok_w","U_LIB_SOV_Strelok_2_w","U_LIB_SOV_Sniper_w","U_LIB_US_Private_w","U_LIB_US_AB_Uniform_M42_W","U_LIB_US_AB_Uniform_M43_W"];

VD_EquipmentVestsLIB = ["V_LIB_GER_FSJ_VestKar98","V_LIB_GER_FSJ_VestKar98_Camo","V_LIB_GER_FSJ_VestKar98_DAK","V_LIB_GER_TankPrivateBelt","V_LIB_GER_VestMP40","V_LIB_GER_VestSTG","V_LIB_GER_VestKar98","V_LIB_GER_VestG43","V_LIB_GER_SniperBelt","V_LIB_GER_VestMG","V_LIB_GER_VestUnterofficer","V_LIB_GER_FieldOfficer","V_LIB_GER_OfficerVest","V_LIB_GER_OfficerBelt","V_LIB_GER_PrivateBelt","V_LIB_GER_PioneerVest","V_LIB_WP_MP40Vest","V_LIB_WP_STGVest","V_LIB_WP_Kar98Vest","V_LIB_WP_G43Vest","V_LIB_WP_SniperBela","V_LIB_WP_MGVest","V_LIB_WP_OfficerVest","V_LIB_SOV_IShBrVestMG","V_LIB_SOV_IShBrVestPPShMag","V_LIB_SOV_IShBrVestPPShDisc","V_LIB_SOV_RA_OfficerVest","V_LIB_SOV_RA_SniperVest","V_LIB_SOV_RA_Belt","V_LIB_SOV_RA_TankOfficerSet","V_LIB_SOV_RA_PPShBelt","V_LIB_SOV_RA_MosinBelt","V_LIB_SOV_RA_SVTBelt","V_LIB_SOV_RA_MGBelt","V_LIB_SOV_RAZV_SVTBelt","V_LIB_SOV_RAZV_OfficerVest","V_LIB_SOV_RAZV_MGBelt","V_LIB_SOV_RAZV_PPShBelt","V_LIB_US_AB_Vest_Bar","V_LIB_US_AB_Vest_M1919","V_LIB_US_AB_Vest_Asst_MG","V_LIB_US_AB_Vest_Carbine","V_LIB_US_AB_Vest_Carbine_eng","V_LIB_US_AB_Vest_Carbine_nco","V_LIB_US_AB_Vest_Carbine_nco_Radio","V_LIB_US_AB_Vest_Garand","V_LIB_US_AB_Vest_Grenadier","V_LIB_US_AB_Vest_Thompson","V_LIB_US_AB_Vest_Thompson_nco","V_LIB_US_AB_Vest_Thompson_nco_Radio","V_LIB_US_AB_Vest_45","V_LIB_US_LifeVest","V_LIB_US_Vest_Bar","V_LIB_US_Vest_M1919","V_LIB_US_Vest_Asst_MG","V_LIB_US_Vest_Carbine","V_LIB_US_Vest_Carbine_eng","V_LIB_US_Vest_Carbine_nco","V_LIB_US_Vest_Carbine_nco_Radio","V_LIB_US_Vest_Garand","V_LIB_US_Vest_Grenadier","V_LIB_US_Vest_Medic","V_LIB_US_Vest_Medic2","V_LIB_US_Vest_Thompson","V_LIB_US_Vest_Thompson_nco","V_LIB_US_Vest_Thompson_nco_Radio","V_LIB_US_Vest_45","V_LIB_US_Assault_Vest","V_LIB_US_Assault_Vest_Light","V_LIB_US_Assault_Vest_Thompson","V_LIB_US_Assault_Vest_dday","V_LIB_DAK_VestMP40","V_LIB_DAK_VestSTG","V_LIB_DAK_VestKar98","V_LIB_DAK_VestG43","V_LIB_DAK_SniperBelt","V_LIB_DAK_VestMG","V_LIB_DAK_VestUnterofficer","V_LIB_DAK_FieldOfficer","V_LIB_DAK_OfficerVest","V_LIB_DAK_OfficerBelt","V_LIB_DAK_PrivateBelt","V_LIB_DAK_PioneerVest"];

VD_EquipmentHeadgearsLIB = ["H_LIB_GER_FSJ_M38_Helmet","H_LIB_GER_FSJ_M38_Helmet_os","H_LIB_GER_FSJ_M38_Helmet_grey","H_LIB_GER_FSJ_M38_Helmet_grey_os","H_LIB_GER_FSJ_M38_Helmet_DAK","H_LIB_GER_FSJ_M38_Helmet_Cover","H_LIB_GER_FSJ_M44_Helmet","H_LIB_GER_FSJ_M44_Helmet_os","H_LIB_GER_FSJ_M44_HelmetCamo1","H_LIB_GER_FSJ_M44_HelmetCamo2","H_LIB_GER_FSJ_M44_Helmet_Medic","H_LIB_GER_FSJ_M44_Helmet_Winter","H_LIB_GER_FSJ_M44_HelmetUtility","H_LIB_ST_Helmet","H_LIB_ST_Helmet2","H_LIB_GER_Fieldcap","H_LIB_GER_Fieldcap2","H_LIB_GER_Fieldcap_w","H_LIB_GER_TankOfficerCap","H_LIB_GER_TankOfficerCap2","H_LIB_GER_TankPrivateCap","H_LIB_GER_TankPrivateCap2","H_LIB_GER_SPGPrivateCap","H_LIB_GER_Helmet","H_LIB_GER_Helmet_net","H_LIB_GER_Helmet_ns","H_LIB_GER_Helmet_os","H_LIB_GER_Helmet_Medic","H_LIB_GER_Helmet_painted","H_LIB_GER_Helmet_net_painted","H_LIB_GER_Helmet_ns_painted","H_LIB_GER_Helmet_os_painted","H_LIB_GER_Helmet_Glasses","H_LIB_GER_HelmetUtility","H_LIB_GER_HelmetUtility_Grass","H_LIB_GER_HelmetUtility_Oak","H_LIB_GER_HelmetCamo","H_LIB_GER_HelmetCamo2","H_LIB_GER_HelmetCamo3","H_LIB_GER_HelmetCamo4","H_LIB_GER_OfficerCap","H_LIB_GER_Cap","H_LIB_GER_LW_PilotHelmet","H_LIB_GER_Ushanka","H_LIB_WP_Helmet","H_LIB_WP_Helmet_camo","H_LIB_WP_Helmet_med","H_LIB_WP_Cap","H_LIB_SOV_RA_PrivateCap","H_LIB_SOV_RA_OfficerCap","H_LIB_SOV_RA_Helmet","H_LIB_SOV_TankHelmet","H_LIB_SOV_PilotHelmet","H_LIB_SOV_Ushanka","H_LIB_SOV_Ushanka2","H_LIB_US_AB_Helmet","H_LIB_US_AB_Helmet_2","H_LIB_US_AB_Helmet_3","H_LIB_US_AB_Helmet_4","H_LIB_US_AB_Helmet_5","H_LIB_US_AB_Helmet_Jump_1","H_LIB_US_AB_Helmet_Jump_2","H_LIB_US_AB_Helmet_Clear_1","H_LIB_US_AB_Helmet_Clear_2","H_LIB_US_AB_Helmet_Clear_3","H_LIB_US_AB_Helmet_Medic_1","H_LIB_US_AB_Helmet_Plain_1","H_LIB_US_AB_Helmet_Plain_2","H_LIB_US_AB_Helmet_Plain_3","H_LIB_US_AB_Helmet_NCO_1","H_LIB_US_AB_Helmet_NCO_2","H_LIB_US_AB_Helmet_CO_1","H_LIB_US_AB_Helmet_CO_2","H_LIB_US_Helmet_Pilot","H_LIB_US_Helmet_Pilot_Glasses_Up","H_LIB_US_Helmet_Pilot_Glasses_Down","H_LIB_US_Helmet_Pilot_Respirator","H_LIB_US_Helmet_Pilot_Respirator_Glasses_Up","H_LIB_US_Helmet_Pilot_Respirator_Glasses_Down","H_LIB_US_Pilot_Cap","H_LIB_US_Pilot_Cap_Khaki","H_LIB_US_Helmet","H_LIB_US_Helmet_ns","H_LIB_US_Helmet_os","H_LIB_US_Helmet_Net","H_LIB_US_Helmet_Net_ns","H_LIB_US_Helmet_Net_os","H_LIB_US_Helmet_Med","H_LIB_US_Helmet_Med_ns","H_LIB_US_Helmet_Med_os","H_LIB_US_Helmet_Cap","H_LIB_US_Helmet_CO","H_LIB_US_Helmet_NCO","H_LIB_US_Helmet_First_lieutenant","H_LIB_US_Helmet_Second_lieutenant","H_LIB_US_Helmet_Tank","H_LIB_US_Rangers_Helmet","H_LIB_US_Rangers_Helmet_ns","H_LIB_US_Rangers_Helmet_os","H_LIB_US_Rangers_Helmet_Cap","H_LIB_US_Rangers_Helmet_First_lieutenant","H_LIB_US_Rangers_Helmet_Second_lieutenant","H_LIB_US_Rangers_Helmet_NCO","H_LIB_CIV_Worker_Cap_1","H_LIB_CIV_Worker_Cap_2","H_LIB_CIV_Worker_Cap_3","H_LIB_CIV_Worker_Cap_4","H_LIB_CIV_Villager_Cap_1","H_LIB_CIV_Villager_Cap_2","H_LIB_CIV_Villager_Cap_3","H_LIB_CIV_Villager_Cap_4","H_LIB_DAK_PithHelmet","H_LIB_DAK_Helmet","H_LIB_DAK_Helmet_2","H_LIB_DAK_Helmet_net","H_LIB_DAK_Helmet_net_2","H_LIB_DAK_Helmet_ns","H_LIB_DAK_Helmet_ns_2","H_LIB_DAK_Helmet_Glasses","H_LIB_DAK_OfficerCap","H_LIB_DAK_Cap","H_LIB_NKVD_PrivateCap","H_LIB_NKVD_OfficerCap","H_LIB_GER_Helmet_w","H_LIB_GER_Helmet_net_w","H_LIB_GER_Helmet_ns_w","H_LIB_GER_HelmetCamo_w","H_LIB_GER_HelmetCamob_w","H_LIB_GER_HelmetCamo2_w","H_LIB_GER_HelmetCamo2b_w","H_LIB_GER_HelmetCamo4_w","H_LIB_GER_Helmet_Glasses_w","H_LIB_SOV_RA_Helmet_w","H_LIB_US_Helmet_w","H_LIB_US_Helmet_Cover_w","H_LIB_US_Helmet_Net_w","H_LIB_US_Helmet_Med_w","H_LIB_US_Helmet_Cap_w","H_LIB_US_Helmet_First_lieutenant_w","H_LIB_US_Helmet_Second_lieutenant_w"];

VD_EquipmentBackpacksLIB =["B_LIB_GER_A_frame","B_LIB_GER_A_frame_kit","B_LIB_GER_A_frame_zeltbahn","B_LIB_GER_Radio","B_LIB_GER_Backpack","B_LIB_GER_SapperBackpack_empty","B_LIB_GER_MedicBackpack_Empty","B_LIB_GER_Tonister34_cowhide","B_LIB_GER_Panzer_Empty","B_LIB_SOV_RA_GasBag","B_LIB_SOV_RA_MedicalBag_Empty","B_LIB_SOV_RA_Radio","B_LIB_SOV_RA_Rucksack","B_LIB_SOV_RA_Rucksack_Green","B_LIB_SOV_RA_Rucksack2","B_LIB_SOV_RA_Rucksack2_Green","B_LIB_SOV_RA_Shinel","B_LIB_SOV_RA_MGAmmoBag_Empty","B_LIB_US_M36","B_LIB_US_M36_Rope","B_LIB_US_M36_Bandoleer","B_LIB_US_M36_Rocketbag_Empty","B_LIB_US_Backpack","B_LIB_US_Backpack_dday","B_LIB_US_Backpack_Mk2","B_LIB_US_Backpack_Bandoleer","B_LIB_US_Backpack_RocketBag_Empty","B_LIB_US_RocketBag_Empty","B_LIB_US_Radio","B_LIB_US_Bandoleer","B_LIB_US_M2Flamethrower","B_LIB_DAK_A_frame","B_LIB_DAK_A_frame_kit","B_LIB_GER_Radio_ACRE2","B_LIB_SOV_RA_Radio_ACRE2","B_LIB_US_Radio_ACRE2"];

VD_EquipmentGogglesLIB =["None","Mask_M40","Mask_M40_OD","Mask_M50","L_shemagh_white","L_Shemagh_OD","L_Shemagh_Tan","L_Shemagh_Red","L_Shemagh_Gry","LCG_Shemagh_Tan","LBG_Shemagh_Tan","LOG_Shemagh_Tan","LCG_Shemagh_OD","LOG_Shemagh_OD","LBG_Shemagh_OD","LBG_Shemagh_Gry","LOG_Shemagh_Gry","LCG_Shemagh_Gry","LCG_Shemagh_White","LOG_Shemagh_White","LBG_Shemagh_White","NeckTight","NeckTight_OD","NeckTight_WhiteCLR","NeckTight_WhiteBLK","NeckTight_WhiteO","NeckTight_ODCLR","NeckTight_ODBLK","NeckTight_ODO","NeckTight_Dmaripat","NeckTight_DMBLK","NeckTight_DMCLR","NeckTight_DMO","NeckTight_Tan","NeckTight_TanBLK","NeckTight_TanCLR","NeckTight_TanO","NeckTight_Red","NeckTight_Gry","NeckTight_GryBLK","NeckTight_GryCLR","NeckTight_GryO","PU_shemagh_White","PU_shemagh_OD","PU_shemagh_Tan","PU_shemagh_GryCLR","PU_shemagh_GryBLK","PU_shemagh_GryO","PU_shemagh_ODO","PU_shemagh_ODCLR","PU_shemagh_ODBLK","PU_shemagh_TanBLK","PU_shemagh_TanCLR","PU_shemagh_TanO","PU_shemagh_WhiteO","PU_shemagh_WhiteBLK","PU_shemagh_WhiteCLR","LIB_Glasses","G_LIB_Binoculars","G_LIB_Dienst_Brille","G_LIB_Dienst_Brille2","G_LIB_Dust_Goggles","G_LIB_GER_Headset","G_LIB_GER_Gloves1","G_LIB_GER_Gloves2","G_LIB_GER_Gloves3","G_LIB_GER_Gloves4","G_LIB_GER_Gloves5","G_LIB_Headwrap","G_LIB_Scarf_G","G_LIB_Scarf_B","G_LIB_Scarf2_G","G_LIB_Scarf2_B","G_LIB_Headwrap_gloves","G_LIB_Watch1","G_LIB_Watch2","G_LIB_Mohawk"];


VD_weaponArrayPistolsLIB =["CHR_FlashLight","CHR_FlashLight_Night","LIB_P38","LIB_P08","LIB_M1896","LIB_WaltherPPK","LIB_TT33","LIB_M1895","LIB_Colt_M1911","LIB_FLARE_PISTOL"];
VD_weaponArrayRiflesLIB =["LIB_MP40","LIB_MP38","LIB_PPSh41_m","LIB_M1A1_Thompson","LIB_M3_GreaseGun","LIB_K98","LIB_G3340","LIB_M9130","LIB_M38","LIB_M44","LIB_M1903A3_Springfield","LIB_MP44","LIB_FG42G","LIB_SVT_40","LIB_G43","LIB_G41","LIB_M1_Garand","LIB_M1_Carbine","LIB_PTRD","LIB_M2_Flamethrower","LIB_DELISLE","LIB_DP28","LIB_DT","LIB_DT_OPTIC","LIB_MG42","LIB_MG34","LIB_M1919A4","LIB_M1918A2_BAR","LIB_K98ZF39","LIB_M9130PU","LIB_M1903A4_Springfield","LIB_M1928_Thompson","LIB_M1928A1_Thompson","LIB_K98_Late","LIB_M1A1_Carbine","LIB_MG34_PT","LIB_M1919A6"];
VD_weaponArrayLaunchersLIB = ["LIB_PzFaust_30m","LIB_RPzB","LIB_M1A1_Bazooka","LIB_PzFaust_60m","LIB_Faustpatrone","LIB_RPzB_w","LIB_M2_Tripod","LIB_Laffete_Tripod","LIB_BM37_Tripod","LIB_BM37_Barrel","LIB_GrWr34_Tripod","LIB_GrWr34_Barrel","LIB_M2_60_Tripod","LIB_M2_60_Barrel"];


//CUP weapons
VD_weaponArrayPistolsCUP = ("getnumber (_x >> 'type') isEqualTo 2 && getText (_x >> 'DLC') == 'CUP_Weapons' && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_weaponArrayRiflesCUP = ("getnumber (_x >> 'type') isEqualTo 1 && getText (_x >> 'DLC') == 'CUP_Weapons' && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_weaponArrayLaunchersCUP = ("getnumber (_x >> 'type') isEqualTo 4 && getText (_x >> 'DLC') == 'CUP_Weapons' && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};


// CUP equipment

VD_EquipmentUniformsCUP = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 801 && getNumber (_x>> 'scope') >1 && getText (_x >> 'Author') == 'Community Upgrade Project'" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentVestsCUP = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 701 && getNumber (_x >> 'scope') >1 && getText (_x >> 'DLC') == 'CUP_Units'" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentHeadgearsCUP = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 605 && getNumber (_x>> 'scope') >1 && getText (_x >> 'DLC') == 'CUP_Units'" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentBackpacksCUP = ("getnumber (_x >> 'isbackpack') isEqualTo 1 && getNumber (_x>> 'scope') >1 && getText (_x >> 'DLC') == 'CUP_Weapons'" configClasses (configfile >> "CfgVehicles")) apply {configName _x};
VD_EquipmentGogglesCUP = ("getNumber (_x >> 'scope') >1 && getText (_x >> 'DLC') == 'CUP_Units'" configClasses (configfile >> "CfgGlasses")) apply {configName _x};

//Ravaged Rifles
VD_WeaponArrayRiflesRavaged = ["Rusty_srifle_DMR_02_F","Rusty_srifle_DMR_03_F","Rusty_srifle_DMR_04_F","Rusty_DMR_05_base_F","Rusty_srifle_EBR_F","Rusty_MMG_01_tan_F","Rusty_MMG_02_black_F","Rusty_LMG_Zafir_F"];

//Ravage uniforms
VD_EquipmentUniformsRavage = ["U_BG_Guerilla1_1_rvg","U_I_G_Soldier_para_F","U_BG_Guerrilla_6_1R","U_BG_Guerrilla_6_1NG","U_C_WorkerCoverallsBlack","U_C_WorkerCoverallsCamo","U_C_WorkerCoverallsBandit"];
VD_EquipmentVestsRavage = ["rvg_legstrapbag_1","rvg_legstrapbag_2","rvg_legstrapbag_3","rvg_legstrapbag_4","rvg_multipocket_1","rvg_multipocket_2","rvg_multipocket_3","rvg_multipocket_4","rvg_multipocket_5","V_EOD_blue_F","V_EOD_olive_F","V_EOD_coyote_F","V_EOD_IDAP_blue_F","V_O2Tank","V_O2Tank_1"];
VD_EquipmentHeadgearsRavage = ["H_BandCap_rvg","rvg_bandage_1","rvg_bandage_2","rvg_bandage_3","rvg_safari_1","rvg_safari_2","rvg_safari_3","rvg_skate_1","rvg_skate_2","rvg_skate_3","rvg_racing_1","rvg_racing_2","rvg_racing_3","rvg_racing_4","rvg_racing_5","rvg_presshelmet_1","rvg_presshelmet_2","rvg_presshelmet_3"];
VD_EquipmentBackpacksRavage = ["rvg_bergan","rvg_assault","rvg_kitbag","rvg_tactical","rvg_field","rvg_carryall_1","rvg_carryall_2","rvg_legstrappack_1","rvg_legstrappack_2","rvg_legstrappack_3","rvg_legstrappack_4"];
VD_EquipmentGogglesRavage = ["rvg_balaclava_1","rvg_balaclava_2","rvg_balaclava_3","rvg_balaclava_4","rvg_balaclava_5","rvg_balaclavaLow_1","rvg_balaclavaLow_2","rvg_balaclavaLow_3","rvg_balaclavaLow_4","rvg_balaclavaLow_5","rvg_balaclavaCombat_1","rvg_balaclavaCombat_2","rvg_balaclavaCombat_3","rvg_balaclavaCombat_4","rvg_balaclavaCombat_5","rvg_bandana_1","rvg_bandana_2","rvg_bandana_3","rvg_bandana_4","rvg_bandana_5","rvg_bandanaAvi_1","rvg_bandanaAvi_2","rvg_bandanaAvi_3","rvg_bandanaAvi_4","rvg_bandanaAvi_5","rvg_bandanaShades_1","rvg_bandanaShades_2","rvg_bandanaShades_3","rvg_bandanaShades_4","rvg_bandanaShades_5","rvg_bandanaSport_1","rvg_bandanaSport_2","rvg_bandanaSport_3","rvg_bandanaSport_4","rvg_bandanaSport_5","rvg_respirator_1","rvg_respirator_2","rvg_respirator_3","rvg_respirator_4","rvg_respirator_5","rvg_eyeprotector"];

//Vanilla

VD_EquipmentUniformsVanilla = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 801 && getNumber (_x>> 'scope') >1 && getText (_x >> 'Author') == 'Bohemia Interactive'" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
//VD_EquipmentVestsVanilla = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 701 && getNumber (_x >> 'scope') >1 && getText (_x >> 'Author') == 'Bohemia Interactive'" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentHeadgearsVanilla = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 605 && getNumber (_x>> 'scope') >1 && getText (_x >> 'Author') == 'Bohemia Interactive'" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentBackpacksVanilla = ("getnumber (_x >> 'isbackpack') isEqualTo 1 && getNumber (_x>> 'scope') >1 && getText (_x >> 'Author') == 'Bohemia Interactive'" configClasses (configfile >> "CfgVehicles")) apply {configName _x};
VD_EquipmentGogglesVanilla = ("getNumber (_x >> 'scope') >1 && getText (_x >> 'Author') == 'Bohemia Interactive'" configClasses (configfile >> "CfgGlasses")) apply {configName _x};

VD_EquipmentVestsVanilla = ["V_Rangemaster_belt","V_BandollierB_khk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli","V_PlateCarrier1_rgr","V_PlateCarrier2_rgr","V_PlateCarrier2_blk","V_PlateCarrierGL_rgr","V_PlateCarrierGL_blk","V_PlateCarrierGL_mtp","V_PlateCarrier1_blk","V_PlateCarrierSpec_rgr","V_PlateCarrierSpec_blk","V_PlateCarrierSpec_mtp","V_Chestrig_khk","V_Chestrig_rgr","V_Chestrig_blk","V_Chestrig_oli","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_blk","V_TacVest_camo","V_TacVest_blk_POLICE","V_TacVestIR_blk","V_HarnessO_brn","V_HarnessOGL_brn","V_HarnessO_gry","V_HarnessOGL_gry","V_PlateCarrierIA1_dgtl","V_PlateCarrierIA2_dgtl","V_PlateCarrierIAGL_dgtl","V_PlateCarrierIAGL_oli","V_RebreatherB","V_RebreatherIR","V_RebreatherIA","V_PlateCarrier_Kerry","V_PlateCarrierL_CTRG","V_PlateCarrierH_CTRG","V_I_G_resistanceLeader_F","V_Press_F","V_TacChestrig_grn_F","V_TacChestrig_oli_F","V_TacChestrig_cbr_F","V_PlateCarrier1_tna_F","V_PlateCarrier2_tna_F","V_PlateCarrierSpec_tna_F","V_PlateCarrierGL_tna_F","V_HarnessO_ghex_F","V_HarnessOGL_ghex_F","V_BandollierB_ghex_F","V_TacVest_gen_F","V_PlateCarrier1_rgr_noflag_F","V_PlateCarrier2_rgr_noflag_F","V_DeckCrew_yellow_F","V_DeckCrew_blue_F","V_DeckCrew_green_F","V_DeckCrew_red_F","V_DeckCrew_white_F","V_DeckCrew_brown_F","V_DeckCrew_violet_F","V_Plain_medical_F","V_Plain_crystal_F","V_Pocketed_olive_F","V_Pocketed_coyote_F","V_Pocketed_black_F","V_Safety_yellow_F","V_Safety_orange_F","V_Safety_blue_F","V_LegStrapBag_black_F","V_LegStrapBag_coyote_F","V_LegStrapBag_olive_F"];

/*

VD_EquipmentGogglesVanilla = ["None","Mask_M40","Mask_M40_OD","Mask_M50","L_shemagh_white","L_Shemagh_OD","L_Shemagh_Tan","L_Shemagh_Red","L_Shemagh_Gry","LCG_Shemagh_Tan","LBG_Shemagh_Tan","LOG_Shemagh_Tan","LCG_Shemagh_OD","LOG_Shemagh_OD","LBG_Shemagh_OD","LBG_Shemagh_Gry","LOG_Shemagh_Gry","LCG_Shemagh_Gry","LCG_Shemagh_White","LOG_Shemagh_White","LBG_Shemagh_White","NeckTight","NeckTight_OD","NeckTight_WhiteCLR","NeckTight_WhiteBLK","NeckTight_WhiteO","NeckTight_ODCLR","NeckTight_ODBLK","NeckTight_ODO","NeckTight_Dmaripat","NeckTight_DMBLK","NeckTight_DMCLR","NeckTight_DMO","NeckTight_Tan","NeckTight_TanBLK","NeckTight_TanCLR","NeckTight_TanO","NeckTight_Red","NeckTight_Gry","NeckTight_GryBLK","NeckTight_GryCLR","NeckTight_GryO","PU_shemagh_White","PU_shemagh_OD","PU_shemagh_Tan","PU_shemagh_GryCLR","PU_shemagh_GryBLK","PU_shemagh_GryO","PU_shemagh_ODO","PU_shemagh_ODCLR","PU_shemagh_ODBLK","PU_shemagh_TanBLK","PU_shemagh_TanCLR","PU_shemagh_TanO","PU_shemagh_WhiteO","PU_shemagh_WhiteBLK","PU_shemagh_WhiteCLR","G_Balaclava_oli","G_Balaclava_lowprofile","G_Balaclava_combat","G_Bandanna_khk","G_Bandanna_aviator","G_Bandanna_shades","G_Bandanna_sport","G_Respirator_white_F","G_EyeProtectors_F","G_Spectacles","G_Spectacles_Tinted","G_Combat","G_Lowprofile","G_Shades_Black","G_Shades_Green","G_Shades_Red","G_Squares","G_Squares_Tinted","G_Sport_BlackWhite","G_Sport_Blackyellow","G_Sport_Greenblack","G_Sport_Checkered","G_Sport_Red","G_Tactical_Black","G_Aviator","G_Lady_Blue","G_Diving","G_B_Diving","G_O_Diving","G_I_Diving","G_Goggles_VR","G_Balaclava_blk","G_Bandanna_blk","G_Bandanna_oli","G_Bandanna_tan","G_Bandanna_beast","G_Shades_Blue","G_Sport_Blackred","G_Tactical_Clear","G_Balaclava_TI_blk_F","G_Balaclava_TI_tna_F","G_Balaclava_TI_G_blk_F","G_Balaclava_TI_G_tna_F","G_Combat_Goggles_tna_F","G_Respirator_yellow_F","G_Respirator_blue_F","G_EyeProtectors_Earpiece_F","G_WirelessEarpiece_F"];


VD_EquipmentHeadgearsVanilla = ["H_Tank_black_F","H_Headbandage_clean_F","H_Hat_Safari_sand_F","H_Helmet_Skate","H_RacingHelmet_1_black_F","H_PASGT_basic_black_F","H_HelmetB","H_HelmetB_camo","H_HelmetB_light","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_mcamo","H_Booniehat_tan","H_Booniehat_dgtl","H_Booniehat_khk_hs","H_HelmetSpecB","H_HelmetSpecB_paint1","H_HelmetSpecB_paint2","H_HelmetSpecB_blk","H_HelmetSpecB_snakeskin","H_HelmetSpecB_sand","H_HelmetIA","H_HelmetB_grass","H_HelmetB_snakeskin","H_HelmetB_desert","H_HelmetB_black","H_HelmetB_sand","H_Cap_red","H_Cap_blu","H_Cap_oli","H_Cap_headphones","H_Cap_tan","H_Cap_blk","H_Cap_blk_CMMG","H_Cap_brn_SPECOPS","H_Cap_tan_specops_US","H_Cap_khaki_specops_UK","H_Cap_grn","H_Cap_grn_BI","H_Cap_blk_Raven","H_Cap_blk_ION","H_Cap_oli_hs","H_Cap_press","H_Cap_usblack","H_Cap_surfer","H_Cap_police","H_HelmetCrew_B","H_HelmetCrew_O","H_HelmetCrew_I","H_PilotHelmetFighter_B","H_PilotHelmetFighter_O","H_PilotHelmetFighter_I","H_PilotHelmetHeli_B","H_PilotHelmetHeli_O","H_PilotHelmetHeli_I","H_CrewHelmetHeli_B","H_CrewHelmetHeli_O","H_CrewHelmetHeli_I","H_HelmetO_ocamo","H_HelmetLeaderO_ocamo","H_MilCap_ocamo","H_MilCap_mcamo","H_MilCap_gry","H_MilCap_dgtl","H_MilCap_blue","H_HelmetB_light_grass","H_HelmetB_light_snakeskin","H_HelmetB_light_desert","H_HelmetB_light_black","H_HelmetB_light_sand","H_HelmetO_oucamo","H_HelmetLeaderO_oucamo","H_HelmetSpecO_ocamo","H_HelmetSpecO_blk","H_Bandanna_surfer","H_Bandanna_khk","H_Bandanna_khk_hs","H_Bandanna_cbr","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Bandanna_mcamo","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_khk","H_ShemagOpen_tan","H_Beret_blk","H_Beret_02","H_Beret_Colonel","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_khk","H_Watchcap_camo","H_StrawHat","H_StrawHat_dark","H_Hat_blue","H_Hat_brown","H_Hat_camo","H_Hat_grey","H_Hat_checker","H_Hat_tan","H_RacingHelmet_1_F","H_RacingHelmet_2_F","H_RacingHelmet_3_F","H_RacingHelmet_4_F","H_RacingHelmet_1_blue_F","H_RacingHelmet_1_green_F","H_RacingHelmet_1_red_F","H_RacingHelmet_1_white_F","H_RacingHelmet_1_yellow_F","H_RacingHelmet_1_orange_F","H_Cap_marshal","H_HelmetB_TI_tna_F","H_HelmetO_ViperSP_hex_F","H_HelmetO_ViperSP_ghex_F","H_HelmetB_tna_F","H_HelmetB_Enh_tna_F","H_HelmetB_Light_tna_F","H_HelmetSpecO_ghex_F","H_HelmetLeaderO_ghex_F","H_HelmetO_ghex_F","H_HelmetCrew_O_ghex_F","H_MilCap_tna_F","H_MilCap_ghex_F","H_Booniehat_tna_F","H_Beret_gen_F","H_MilCap_gen_F","H_Hat_Safari_olive_F","H_Construction_basic_yellow_F","H_Construction_basic_white_F","H_Construction_basic_orange_F","H_Construction_basic_red_F","H_Construction_basic_vrana_F","H_Construction_basic_black_F","H_Construction_earprot_yellow_F","H_Construction_earprot_white_F","H_Construction_earprot_orange_F","H_Construction_earprot_red_F","H_Construction_earprot_vrana_F","H_Construction_earprot_black_F","H_Construction_headset_yellow_F","H_Construction_headset_white_F","H_Construction_headset_orange_F","H_Construction_headset_red_F","H_Construction_headset_vrana_F","H_Construction_headset_black_F","H_EarProtectors_yellow_F","H_EarProtectors_white_F","H_EarProtectors_orange_F","H_EarProtectors_red_F","H_EarProtectors_black_F","H_HeadSet_yellow_F","H_HeadSet_white_F","H_HeadSet_orange_F","H_HeadSet_red_F","H_HeadSet_black_F","H_PASGT_basic_blue_press_F","H_PASGT_basic_blue_F","H_PASGT_basic_white_F","H_PASGT_basic_olive_F","H_PASGT_neckprot_blue_press_F","H_HeadBandage_stained_F","H_HeadBandage_bloody_F","H_Cap_White_IDAP_F","H_Cap_Orange_IDAP_F","H_Cap_Black_IDAP_F","H_WirelessEarpiece_F"];


VD_EquipmentVestsVanilla = ["V_Rangemaster_belt","V_BandollierB_khk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli","V_PlateCarrier1_rgr","V_PlateCarrier2_rgr","V_PlateCarrier2_blk","V_PlateCarrierGL_rgr","V_PlateCarrierGL_blk","V_PlateCarrierGL_mtp","V_PlateCarrier1_blk","V_PlateCarrierSpec_rgr","V_PlateCarrierSpec_blk","V_PlateCarrierSpec_mtp","V_Chestrig_khk","V_Chestrig_rgr","V_Chestrig_blk","V_Chestrig_oli","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_blk","V_TacVest_camo","V_TacVest_blk_POLICE","V_TacVestIR_blk","V_HarnessO_brn","V_HarnessOGL_brn","V_HarnessO_gry","V_HarnessOGL_gry","V_PlateCarrierIA1_dgtl","V_PlateCarrierIA2_dgtl","V_PlateCarrierIAGL_dgtl","V_PlateCarrierIAGL_oli","V_RebreatherB","V_RebreatherIR","V_RebreatherIA","V_PlateCarrier_Kerry","V_PlateCarrierL_CTRG","V_PlateCarrierH_CTRG","V_I_G_resistanceLeader_F","V_Press_F","V_TacChestrig_grn_F","V_TacChestrig_oli_F","V_TacChestrig_cbr_F","V_PlateCarrier1_tna_F","V_PlateCarrier2_tna_F","V_PlateCarrierSpec_tna_F","V_PlateCarrierGL_tna_F","V_HarnessO_ghex_F","V_HarnessOGL_ghex_F","V_BandollierB_ghex_F","V_TacVest_gen_F","V_PlateCarrier1_rgr_noflag_F","V_PlateCarrier2_rgr_noflag_F","V_DeckCrew_yellow_F","V_DeckCrew_blue_F","V_DeckCrew_green_F","V_DeckCrew_red_F","V_DeckCrew_white_F","V_DeckCrew_brown_F","V_DeckCrew_violet_F","V_Plain_medical_F","V_Plain_crystal_F","V_Pocketed_olive_F","V_Pocketed_coyote_F","V_Pocketed_black_F","V_Safety_yellow_F","V_Safety_orange_F","V_Safety_blue_F","V_LegStrapBag_black_F","V_LegStrapBag_coyote_F","V_LegStrapBag_olive_F"];

//Vanilla uniformItems
VD_EquipmentUniformsVanilla =
["U_B_CombatUniform_mcam","U_B_CombatUniform_mcam_tshirt","U_B_CombatUniform_mcam_vest","U_B_GhillieSuit","U_B_HeliPilotCoveralls","U_B_Wetsuit","U_O_CombatUniform_ocamo","U_O_GhillieSuit","U_O_PilotCoveralls","U_O_Wetsuit","U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour","U_C_Poloshirt_salmon","U_C_Poloshirt_redwhite","U_Rangemaster","U_OrestesBody","U_B_CombatUniform_mcam_worn","U_B_PilotCoveralls","U_O_CombatUniform_oucamo","U_O_SpecopsUniform_ocamo","U_O_OfficerUniform_ocamo","U_I_CombatUniform","U_I_CombatUniform_shortsleeve","U_I_pilotCoveralls","U_I_HeliPilotCoveralls","U_I_GhillieSuit","U_I_OfficerUniform","U_I_Wetsuit","U_Competitor","U_BG_Guerilla1_1","U_BG_Guerilla2_1","U_BG_Guerilla2_2","U_BG_Guerilla2_3","U_BG_Guerilla3_1","U_BG_leader","U_C_Poor_1","U_C_WorkerCoveralls","U_C_HunterBody_grn","U_B_CTRG_1","U_B_CTRG_2","U_B_CTRG_3","U_B_survival_uniform","U_I_G_Story_Protagonist_F","U_I_G_resistanceLeader_F","U_C_Journalist","U_C_Scientist","U_B_Protagonist_VR","U_O_Protagonist_VR","U_I_Protagonist_VR","U_C_Protagonist_VR","U_BG_Guerrilla_6_1","U_C_Driver_1","U_C_Driver_2","U_C_Driver_3","U_C_Driver_4","U_Marshal","U_C_Driver_1_black","U_C_Driver_1_blue","U_C_Driver_1_green","U_C_Driver_1_red","U_C_Driver_1_white","U_C_Driver_1_yellow","U_C_Driver_1_orange","U_B_FullGhillie_lsh","U_B_FullGhillie_sard","U_B_FullGhillie_ard","U_O_FullGhillie_lsh","U_O_FullGhillie_sard","U_O_FullGhillie_ard","U_I_FullGhillie_lsh","U_I_FullGhillie_sard","U_I_FullGhillie_ard","U_B_T_Soldier_F","U_B_T_Soldier_AR_F","U_B_T_Soldier_SL_F","U_B_T_Sniper_F","U_B_T_FullGhillie_tna_F","U_B_CTRG_Soldier_F","U_B_CTRG_Soldier_2_F","U_B_CTRG_Soldier_3_F","U_B_GEN_Soldier_F","U_B_GEN_Commander_F","U_O_T_Soldier_F","U_O_T_Officer_F","U_O_T_Sniper_F","U_O_T_FullGhillie_tna_F","U_O_V_Soldier_Viper_F","U_O_V_Soldier_Viper_hex_F","U_I_C_Soldier_Para_1_F","U_I_C_Soldier_Para_2_F","U_I_C_Soldier_Para_3_F","U_I_C_Soldier_Para_4_F","U_I_C_Soldier_Para_5_F","U_I_C_Soldier_Bandit_1_F","U_I_C_Soldier_Bandit_2_F","U_I_C_Soldier_Bandit_3_F","U_I_C_Soldier_Bandit_4_F","U_I_C_Soldier_Bandit_5_F","U_I_C_Soldier_Camo_F","U_C_man_sport_1_F","U_C_man_sport_2_F","U_C_man_sport_3_F","U_C_Man_casual_1_F","U_C_Man_casual_2_F","U_C_Man_casual_3_F","U_C_Man_casual_4_F","U_C_Man_casual_5_F","U_C_Man_casual_6_F","U_B_CTRG_Soldier_urb_1_F","U_B_CTRG_Soldier_urb_2_F","U_B_CTRG_Soldier_urb_3_F","U_C_IDAP_Man_shorts_F","U_C_IDAP_Man_casual_F","U_C_IDAP_Man_cargo_F","U_C_IDAP_Man_Tee_F","U_C_IDAP_Man_Jeans_F","U_C_IDAP_Man_TeeShorts_F","U_C_Paramedic_01_F","U_C_Mechanic_01_F","U_BG_Guerilla1_2_F","U_C_ConstructionCoverall_Red_F","U_C_ConstructionCoverall_Vrana_F","U_C_ConstructionCoverall_Black_F","U_C_ConstructionCoverall_Blue_F","U_O_officer_noInsignia_hex_F","U_Tank_green_F"];

VD_EquipmentBackpacksVanilla = ["B_Bergen_mcamo_F","B_AssaultPack_khk","B_Kitbag_rgr","B_TacticalPack_rgr","B_FieldPack_khk","B_Carryall_khk","B_LegStrapBag_black_F","B_AssaultPack_dgtl","B_AssaultPack_rgr","B_AssaultPack_sgg","B_AssaultPack_blk","B_AssaultPack_cbr","B_AssaultPack_mcamo","B_AssaultPack_ocamo","B_Kitbag_mcamo","B_Kitbag_sgg","B_Kitbag_cbr","B_TacticalPack_mcamo","B_TacticalPack_ocamo","B_TacticalPack_blk","B_TacticalPack_oli","B_FieldPack_ocamo","B_FieldPack_oucamo","B_FieldPack_cbr","B_FieldPack_blk","B_Carryall_ocamo","B_Carryall_oucamo","B_Carryall_mcamo","B_Carryall_cbr","B_FieldPack_oli","B_Carryall_oli","B_AssaultPack_Kerry","Horse_bergen","Horse_bergenru","horse_tack","B_Bergen_dgtl_F","B_Bergen_hex_F","B_Bergen_tna_F","B_AssaultPack_tna_F","B_Carryall_ghex_F","B_FieldPack_ghex_F","B_ViperHarness_blk_F","B_ViperHarness_ghex_F","B_ViperHarness_hex_F","B_ViperHarness_khk_F","B_ViperHarness_oli_F","B_ViperLightHarness_blk_F","B_ViperLightHarness_ghex_F","B_ViperLightHarness_hex_F","B_ViperLightHarness_khk_F","B_ViperLightHarness_oli_F","B_Messenger_Coyote_F","B_Messenger_Olive_F","B_Messenger_Black_F","B_Messenger_Gray_F","B_Messenger_IDAP_F","B_LegStrapBag_coyote_F","B_LegStrapBag_olive_F"];
*/

//Vanilla Arma Weapons + DLC

VD_WeaponArrayRiflesVanilla = ("getnumber (_x >> 'type') isEqualTo 1 && getNumber (_x>> 'scope') >1 && getText (_x >> 'Author') == 'Bohemia Interactive'" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_WeaponArrayPistolsVanilla = ("getnumber (_x >> 'type') isEqualTo 2 && getNumber (_x>> 'scope') >1 && getText (_x >> 'Author') == 'Bohemia Interactive'" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_WeaponArrayLaunchersVanilla = ("getnumber (_x >> 'type') isEqualTo 4 && getNumber (_x>> 'scope') >1 && getText (_x >> 'Author') == 'Bohemia Interactive'" configClasses (configfile >> "CfgWeapons")) apply {configName _x};

/*melee weapon mod that rocks! Maxjoiner's Max Melee Weapons mod is available on steam or armaholic: http://www.armaholic.com/page.php?id=33693*/
VD_MAX_weaponArrayMelee = ("getnumber (_x >> 'type') isEqualTo 2 && getText (_x >> 'Author') == 'Maxjoiner' && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};

//weapon arrays
VD_WeaponArrayRifles = ("getnumber (_x >> 'type') isEqualTo 1 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_WeaponArrayPistols = ("getnumber (_x >> 'type') isEqualTo 2 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_WeaponArrayLaunchers = ("getnumber (_x >> 'type') isEqualTo 4 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};



/*weapon slot specific arrays, considerimg user settings (blacklisted classnames for arrays, additional classnames for arrays and replacement of arrays based on VD_Settings.sqf entires*/

//rifles
if (count VD_WeaponArrayRiflesBlacklist >=1) then {VD_WeaponArrayRifles = VD_WeaponArrayRifles - VD_WeaponArrayRiflesBlacklist;};
if (count VD_WeaponArrayRiflesAdditional >= 1) then {VD_WeaponArrayRifles append VD_WeaponArrayRiflesAdditional};
if (count VD_WeaponArrayRiflesReplace >= 1) then {VD_WeaponArrayRifles = VD_WeaponArrayRiflesReplace};
if (VD_NoRavagedRifles) then {VD_WeaponArrayRifles = VD_WeaponArrayRifles - VD_WeaponArrayRiflesRavaged;};
if (VD_NoVanillaRifles) then {VD_WeaponArrayRifles = VD_WeaponArrayRifles - VD_WeaponArrayRiflesVanilla;};
if (VD_NoCUPRifles) then {VD_WeaponArrayRifles = VD_WeaponArrayRifles - VD_WeaponArrayRiflesCUP;};
if (VD_NoLIBRifles) then {VD_WeaponArrayRifles = VD_WeaponArrayRifles - VD_WeaponArrayRiflesLIB;};
//Handgun array for AI equipper function, excluding Melee weapons

if (count VD_WeaponArrayPistolsBlacklist >=1) then {VD_WeaponArrayPistols = VD_WeaponArrayPistols - VD_WeaponArrayPistolsBlacklist;};
if (count VD_WeaponArrayPistolsAdditional >= 1) then {VD_WeaponArrayPistols append VD_WeaponArrayPistolsAdditional};
if (count VD_WeaponArrayPistolsReplace >= 1) then {VD_WeaponArrayPistols = VD_WeaponArrayPistolsReplace};
if (VD_NoVanillaPistols) then {VD_WeaponArrayPistols = VD_WeaponArrayPistols - VD_WeaponArrayPistolsVanilla;};
if (VD_NoCUPPistols) then {VD_WeaponArrayPistols = VD_WeaponArrayPistols - VD_WeaponArrayPistolsCUP;};
if (VD_NoLIBPistols) then {VD_WeaponArrayPistols = VD_WeaponArrayPistols - VD_WeaponArrayPistolsLIB;};
VD_WeaponArrayPistolsAI = VD_WeaponArrayPistols - VD_MAX_weaponArrayMelee;

if (count VD_WeaponArrayLaunchersBlacklist >=1) then {VD_WeaponArrayLaunchers = VD_WeaponArrayLaunchers - VD_WeaponArrayLaunchersBlacklist;};
if (count VD_WeaponArrayLaunchersAdditional >= 1) then {VD_WeaponArrayLaunchers append VD_WeaponArrayLaunchersAdditional};
if (count VD_WeaponArrayLaunchersReplace >= 1) then {VD_WeaponArrayLaunchers = VD_WeaponArrayLaunchersReplace};
if (VD_NoVanillaLaunchers) then {VD_WeaponArrayLaunchers = VD_WeaponArrayLaunchers - VD_WeaponArrayLaunchersVanilla;};
if (VD_NoCUPLaunchers) then {VD_WeaponArrayLaunchers = VD_WeaponArrayLaunchers - VD_WeaponArrayLaunchersCUP;};
if (VD_NoLIBLaunchers) then {VD_WeaponArrayLaunchers = VD_WeaponArrayLaunchers - VD_WeaponArrayLaunchersLIB;};


//combined weapons array used for loot drops
VD_WeaponArrayAll append VD_WeaponArrayRifles;
VD_WeaponArrayAll append VD_WeaponArrayPistols;
VD_WeaponArrayAll append VD_WeaponArrayLaunchers;


//equipment
VD_EquipmentUniforms = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 801 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentVests = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 701 && getNumber (_x >> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentHeadgears = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 605 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentBackpacks = ("getnumber (_x >> 'isbackpack') isEqualTo 1 && getNumber (_x>> 'scope') >1 && getNumber (_x>> 'maximumLoad') != 0" configClasses (configfile >> "CfgVehicles")) apply {configName _x};
VD_EquipmentGoggles = ("getNumber (_x >> 'scope') >1" configClasses (configfile >> "CfgGlasses")) apply {configName _x};



if (count VD_EquipmentGogglesBlacklist >=1) then {VD_EquipmentGoggles = VD_EquipmentGoggles - VD_EquipmentGogglesBlacklist;};
if (count VD_EquipmentGogglesAdditional >= 1) then {VD_EquipmentGoggles append VD_EquipmentGogglesAdditional};
if (count VD_EquipmentGogglesReplace >= 1) then {VD_EquipmentGoggles = VD_EquipmentGogglesReplace};
if (VD_NoRavageGoggles) then {VD_EquipmentGoggles = VD_EquipmentGoggles - VD_EquipmentGogglesRavage;};
if (VD_NoVanillaGoggles) then {VD_EquipmentGoggles = VD_EquipmentGoggles - VD_EquipmentGogglesVanilla;};
if (VD_NoCUPGoggles) then {VD_EquipmentGoggles = VD_EquipmentGoggles - VD_EquipmentGogglesCUP;};
if (VD_NoLIBGoggles) then {VD_EquipmentGoggles = VD_EquipmentGoggles - VD_EquipmentGogglesLIB;};

if (count VD_EquipmentUniformsBlacklist >=1) then {VD_EquipmentUniforms = VD_EquipmentUniforms - VD_EquipmentUniformsBlacklist;};
if (count VD_EquipmentUniformsAdditional >= 1) then {VD_EquipmentUniforms append VD_EquipmentUniformsAdditional};
if (count VD_EquipmentUniformsReplace >= 1) then {VD_EquipmentUniforms = VD_EquipmentUniformsReplace};
if (VD_NoVanillaUniforms) then {VD_EquipmentUniforms = VD_EquipmentUniforms - VD_EquipmentUniformsVanilla;};
if (VD_NoRavageUniforms) then {VD_EquipmentUniforms = VD_EquipmentUniforms - VD_EquipmentUniformsRavage;};
if (VD_NoCUPUniforms) then {VD_EquipmentUniforms = VD_EquipmentUniforms - VD_EquipmentUniformsCUP;};
if (VD_NoLIBUniforms) then {VD_EquipmentUniforms = VD_EquipmentUniforms - VD_EquipmentUniformsLIB;};

if (count VD_EquipmentBackpacksBlacklist >=1) then {VD_EquipmentBackpacks = VD_EquipmentBackpacks - VD_EquipmentBackpacksBlacklist;};
if (count VD_EquipmentBackpacksAdditional >= 1) then {VD_EquipmentBackpacks append VD_EquipmentBackpacksAdditional};
if (count VD_EquipmentBackpacksReplace >= 1) then {VD_EquipmentBackpacks = VD_EquipmentBackpacksReplace};
if (VD_NoVanillaBackpacks) then {VD_EquipmentBackpacks = VD_EquipmentBackpacks - VD_EquipmentBackpacksVanilla;};
if (VD_NoRavageBackpacks) then {VD_EquipmentBackpacks = VD_EquipmentBackpacks - VD_EquipmentBackpacksRavage;};
if (VD_NoCUPBackpacks) then {VD_EquipmentBackpacks = VD_EquipmentBackpacks - VD_EquipmentBackpacksCUP;};
if (VD_NoLIBBackpacks) then {VD_EquipmentBackpacks = VD_EquipmentBackpacks - VD_EquipmentBackpacksLIB;};

if (count VD_EquipmentHeadgearsBlacklist >=1) then {VD_EquipmentHeadgears = VD_EquipmentHeadgears - VD_EquipmentHeadgearsBlacklist;};
if (count VD_EquipmentHeadgearsAdditional >= 1) then {VD_EquipmentHeadgears append VD_EquipmentHeadgearsAdditional};
if (count VD_EquipmentHeadgearsReplace >= 1) then {VD_EquipmentHeadgears = VD_EquipmentHeadgearsReplace};
if (VD_NoVanillaHeadgears) then {VD_EquipmentHeadgears = VD_EquipmentHeadgears - VD_EquipmentHeadgearsVanilla;};
if (VD_NoRavageHeadgears) then {VD_EquipmentHeadgears = VD_EquipmentHeadgears - VD_EquipmentHeadgearsRavage;};
if (VD_NoCUPHeadgears) then {VD_EquipmentHeadgears = VD_EquipmentHeadgears - VD_EquipmentHeadgearsCUP;};
if (VD_NoLIBHeadgears) then {VD_EquipmentHeadgears = VD_EquipmentHeadgears - VD_EquipmentHeadgearsLIB;};

if (count VD_EquipmentVestsBlacklist >=1) then {VD_EquipmentVests = VD_EquipmentVests - VD_EquipmentVestsBlacklist;};
if (count VD_EquipmentVestsAdditional >= 1) then {VD_EquipmentVests append VD_EquipmentVestsAdditional};
if (count VD_EquipmentVestsReplace >= 1) then {VD_EquipmentVests = VD_EquipmentVestsReplace};
if (VD_NoVanillaVests) then {VD_EquipmentVests = VD_EquipmentVests - VD_EquipmentVestsVanilla;};
if (VD_NoRavageVests) then {VD_EquipmentVests = VD_EquipmentVests - VD_EquipmentVestsRavage;};
if (VD_NoCUPVests) then {VD_EquipmentVests = VD_EquipmentVests - VD_EquipmentVestsCUP;};
if (VD_NoLIBVests) then {VD_EquipmentVests = VD_EquipmentVests - VD_EquipmentVestsLIB;};






//weapon attachments
VD_EquipmentMuzzles = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 101 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentOptics = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 201 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentBipods = ("getnumber (_x >> 'itemInfo' >> 'type') isEqualTo 302 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
VD_EquipmentFlashlights = ["acc_flashlight","acc_flashlight_smg_01","acc_flashlight_pistol"];


if (count VD_EquipmentMuzzlesBlacklist >=1) then {VD_EquipmentMuzzles = VD_EquipmentMuzzles - VD_EquipmentMuzzlesBlacklist;};
if (count VD_EquipmentMuzzlesAdditional >= 1) then {VD_EquipmentMuzzles append VD_EquipmentMuzzlesAdditional};
if (count VD_EquipmentMuzzlesReplace >= 1) then {VD_EquipmentMuzzles = VD_EquipmentMuzzlesReplace};

if (count VD_EquipmentOpticsBlacklist >=1) then {VD_EquipmentOptics = VD_EquipmentOptics - VD_EquipmentOpticsBlacklist;};
if (count VD_EquipmentOpticsAdditional >= 1) then {VD_EquipmentOptics append VD_EquipmentOpticsAdditional};
if (count VD_EquipmentOpticsReplace >= 1) then {VD_EquipmentOptics = VD_EquipmentOpticsReplace};

if (count VD_EquipmentFlashlightsBlacklist >=1) then {VD_EquipmentFlashlights = VD_EquipmentFlashlights - VD_EquipmentFlashlightsBlacklist};
if (count VD_EquipmentFlashlightsAdditional >= 1) then {VD_EquipmentFlashlights append VD_EquipmentFlashlightsAdditional};
if (count VD_EquipmentFlashlightsReplace >= 1) then {VD_EquipmentFlashlights = VD_EquipmentFlashlightsReplace};

if (count VD_EquipmentBipodsBlacklist >=1) then {VD_EquipmentBipods = VD_EquipmentBipods - VD_EquipmentBipodsBlacklist;};
if (count VD_EquipmentBipodsAdditional >= 1) then {VD_EquipmentBipods append VD_EquipmentBipodsAdditional};
if (count VD_EquipmentBipodsReplace >= 1) then {VD_EquipmentBipods = VD_EquipmentBipodsReplace};


VD_EquipmentOptics = VD_EquipmentOptics - [
"edn_Wirecoil",
"edn_Woodplank",
"edn_Steelplate",
"edn_Sandbag",
"edn_Cinderblock",
"edn_camonet",
"edn_Metalpipe"];

//CrashSite Objects
VD_CS_Wrecks = ["Land_Wreck_Heli_Attack_01_F","Land_Wreck_Heli_Attack_02_F","Land_UWreck_MV22_F"];
//Bandit Camp Spawned Objects and Structures
VD_BCclutterSmall = ["Land_Garbage_square5_F","Land_LuggageHeap_02_F","Land_CampingChair_V1_F","Land_WoodenLog_F","Axe_woodblock"];

VD_BCclutterBig = ["Pile_of_wood","Mass_grave","Land_Scrap_MRAP_01_F","Land_WoodenCart_F","Land_Wreck_T72_hull_F","Land_stand_meat_EP1","Land_ScrapHeap_2_F","TargetP_Inf2_Acc1_F","Land_ScrapHeap_1_F"];
VD_BCclutterMedium = ["Fort_Crate_wood","Land_Pallet_MilBoxes_F","Land_Sacks_heap_F","Land_Basket_F","Land_PaperBox_open_full_F","Land_Cages_F","Land_Sacks_goods_F","Land_WaterBarrel_F","Land_CanisterFuel_F","Wooden_barrel","Land_PaperBox_closed_F","Land_PaperBox_open_empty_F","Land_CanisterPlastic_F","Land_Bucket_clean_F","Land_MetalBarrel_F","Land_Sack_F","Land_WoodenCrate_01_stack_x3_F"];

VD_BCclutterAll = ["Land_Garbage_square5_F","Land_LuggageHeap_02_F","Land_CampingChair_V1_F","Land_WoodenLog_F","Axe_woodblock","Pile_of_wood","Land_stand_meat_EP1","Land_ScrapHeap_2_F","TargetP_Inf2_Acc1_F","Land_ScrapHeap_1_F","Fort_Crate_wood","Land_Pallet_MilBoxes_F","Land_Sacks_heap_F","Land_Basket_F","Land_PaperBox_open_full_F","Land_Cages_F","Land_Sacks_goods_F","Land_WaterBarrel_F","Land_CanisterFuel_F",
"Wooden_barrel","Land_PaperBox_closed_F","Land_PaperBox_open_empty_F","Land_CanisterPlastic_F","Land_Bucket_clean_F","Land_MetalBarrel_F","Land_Sack_F","Land_WoodenCrate_01_stack_x3_F"];
VD_BCtentsSmall = ["Land_TentDome_F","Land_TentA_F"];
VD_BCtentsBig = ["Camp","Land_tent_east"];
VD_BCcampfire = ["Campfire_burning_F"];
VD_Camonets = ["CamoNet_BLUFOR_open_F"];


VD_SW_Wrecks = ["Land_Boat_06_wreck_F","Land_Wreck_Traw2_F","Land_Wreck_Traw_F","Land_UWreck_FishingBoat_F"];
VD_SW_WreckClutter = ["Land_Sack_F","Land_BarrelTrash_F","Land_Sacks_goods_F","Land_CratesWooden_F","Land_Cages_F","Land_GarbagePallet_F","Land_GarbageBarrel_01_F","Land_Pallets_F",
"Land_Garbage_square5_F","Land_CratesShabby_F","Land_CanisterPlastic_F","Land_Garbage_line_F","Land_WoodenBox_F","Land_Sacks_heap_F","Land_PaperBox_closed_F","Land_GarbageBags_F",
"Land_Pallets_F","Land_GarbageBags_F"];
//Arrays for Items, weapons, equipment;
VD_currencyArray = ["rvg_money"];

VD_itemArray1 = [
"rvg_plasticBottleEmpty",
 "rvg_canteenEmpty",
 "rvg_canOpener",
 "rvg_plasticBottle",
 "rvg_plasticBottlePurified",
 "rvg_spirit",
 "rvg_franta",
 "rvg_beans",
 "rvg_bacon",
 "rvg_milk",
 "rvg_rice",
 "rvg_rustyCan",
 "rvg_hose",
 "rvg_guttingKnife",
 "rvg_tire",
 "rvg_purificationTablets",
 "rvg_flare",
 "rvg_rustyCanEmpty",
 "rvg_beansEmpty",
 "rvg_baconEmpty",
 "rvg_spiritEmpty",
 "rvg_frantaEmpty",
 "rvg_rustyCanEmpty",
 "rvg_beansEmpty",
 "rvg_baconEmpty",
 "rvg_spiritEmpty",
 "rvg_frantaEmpty",
 "rvg_matches",
 "rvg_canisterFuel_Empty",
"rvg_canisterFuel",
 "rvg_Geiger",
 "rvg_docFolder",
 "rvg_toolkit",
 "rvg_antiRad",
 "rvg_sleepingBag_Blue",
 "rvg_foldedTent",
 "rvg_money",
 "rvg_notepad",
 "rvg_docFolder",
 "rvg_rustyCanEmpty",
 "MineDetector",
 "Medikit",
 "ToolKit"
];

VD_medicalArray =[
"rvg_antiRad",
"FirstAidKit",
"Medikit",
"rvg_purificationTablets"];

VD_EDN_MatArray =[
"edn_Wirecoil",
"edn_Woodplank",
"edn_Steelplate",
"edn_Sandbag",
"edn_Cinderblock",
"edn_camonet",
"edn_Metalpipe"];


VD_ExplosivesArray = [
"APERSBoundingMine_Range_Mag",
"APERSMine_Range_Mag",
"APERSTripMine_Wire_Mag",
"ATMine_Range_Mag",
"ClaymoreDirectionalMine_Remote_Mag",
"DemoCharge_Remote_Mag",
"SatchelCharge_Remote_Mag",
"IEDLandBig_Remote_Mag",
"IEDUrbanBig_Remote_Mag",
"SLAMDirectionalMine_Wire_Mag",
"IEDLandSmall_Remote_Mag",
"IEDUrbanSmall_Remote_Mag"
];

VD_GrenadesArray = [
"Chemlight_blue",
"Chemlight_green",
"Chemlight_red",
"Chemlight_yellow",
"I_IR_Grenade",
"O_IR_Grenade",
"B_IR_Grenade",
"rvg_flare",
"MiniGrenade",
"HandGrenade"];

// for distance check, do not alter!
VD_HO_Spawn_ArrayBL = [];
VD_CS_Spawn_ArrayBL = [];
VD_BC_Spawn_ArrayBL = [];
VD_SW_Spawn_ArrayBL = [];
//positioncheckarray - ignore
VD_SW_Spawn_Array = ["VD_SW_Spawn_1", "VD_SW_Spawn_2", "VD_SW_Spawn_3", "VD_SW_Spawn_4", "VD_SW_Spawn_5", "VD_SW_Spawn_6", "VD_SW_Spawn_7", "VD_SW_Spawn_8", "VD_SW_Spawn_9","VD_SW_Spawn_10","VD_SW_Spawn_11","VD_SW_Spawn_12","VD_SW_Spawn_13","VD_SW_Spawn_14","VD_SW_Spawn_15","VD_SW_Spawn_16","VD_SW_Spawn_17","VD_SW_Spawn_18","VD_SW_Spawn_19","VD_SW_Spawn_20"];
//poscheckarray - ignore
VD_BC_Spawn_Array = ["VD_BC_Spawn_1", "VD_BC_Spawn_2", "VD_BC_Spawn_3", "VD_BC_Spawn_4", "VD_BC_Spawn_5", "VD_BC_Spawn_6", "VD_BC_Spawn_7", "VD_BC_Spawn_8", "VD_BC_Spawn_9","VD_BC_Spawn_10","VD_BC_Spawn_11","VD_BC_Spawn_12","VD_BC_Spawn_13","VD_BC_Spawn_14","VD_BC_Spawn_15","VD_BC_Spawn_16","VD_BC_Spawn_17","VD_BC_Spawn_18","VD_BC_Spawn_19","VD_BC_Spawn_20"];
