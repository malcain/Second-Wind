class CfgVehicles {
	class Ruins;	// External class reference
	
	class land_Objects17_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Cihlovej_dum_mini_ruins.p3d";
	};
	
	class land_Objects22_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\trafostanica_mala_ruins.p3d";
	};
	
	class land_Objects23_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\tovarna2_ruins.p3d";
	};
	
	class land_Objects28_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Hruzdum_ruins.p3d";
	};
	
	class land_Objects35_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\tovarna2_ruins.p3d";
	};
	
	class land_Objects77_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Sara_domek_hospoda_ruins.p3d";
	};
	
	class land_Objects78_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Sara_stodola3_ruins.p3d";
	};
	
	class land_Objects79_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Sara_stodola3_ruins.p3d";
	};
	
	class land_Objects80_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Sara_stodola_ruins.p3d";
	};
	
	class land_Objects81_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Sara_zluty_statek_in_ruins.p3d";
	};
	
	class land_Objects82_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Sara_domek_zluty_BEZ_ruins.p3d";
	};
	
	class land_Objects83_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Statek_brana_ruins.p3d";
	};
	
	class land_Objects84_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Sara_domek_podhradi_1_ruins.p3d";
	};
	
	class land_Objects92_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Hotel_ruins.p3d";
	};
	
	class land_Objects95_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\kostel3_ruins.p3d";
	};
	
	class land_Objects100_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\benzina_schnell_ruins.p3d";
	};
	
	class land_Objects101_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Tovarna1_ruins.p3d";
	};
	
	class land_Objects106_ruins : Ruins {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = $STR_SAR_RUINS_NAME;
		model = "\SAR_ru_architect\ruins\Hotel_ruins";
	};
	class HouseBase;	// External class reference
	
	class House : HouseBase {
		class DestructionEffects;	// External class reference
	};
	
	class SAR_default_objects_with_ruins : House {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		armor = 1000;
	};
	
	class land_Objects17 : SAR_default_objects_with_ruins {
		scope = public;
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_017;
		model = "\SAR_ru_architect\saray.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Cihlovej_dum_mini_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects22 : SAR_default_objects_with_ruins {
		scope = public;
		ladders[] = {{"start", "end"}};
		mapSize = 20;
		displayName = $STR_SAR_NAME_OBJECT_022;
		model = "\SAR_ru_architect\hrusevka.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\trafostanica_mala_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects23 : SAR_default_objects_with_ruins {
		scope = public;
		mapSize = 20;
		displayName = $STR_SAR_NAME_OBJECT_023;
		model = "\SAR_ru_architect\univermag.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\tovarna2_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects28 : SAR_default_objects_with_ruins {
		scope = public;
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_028;
		model = "\SAR_ru_architect\Izba1.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Hruzdum_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects35 : land_Objects22 {
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_035;
		model = "\SAR_ru_architect\hrusevka_new_2.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\tovarna2_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects77 : land_Objects35 {
		displayName = $STR_SAR_NAME_OBJECT_077;
		model = "\SAR_ru_architect\Izba_no.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Sara_domek_hospoda_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects78 : land_Objects35 {
		displayName = $STR_SAR_NAME_OBJECT_078;
		model = "\SAR_ru_architect\1_House_with_placed_objects.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Sara_stodola3_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects79 : land_Objects35 {
		displayName = $STR_SAR_NAME_OBJECT_079;
		model = "\SAR_ru_architect\2_House_with_placed_objects.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Sara_stodola3_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects80 : land_Objects35 {
		displayName = $STR_SAR_NAME_OBJECT_080;
		model = "\SAR_ru_architect\3_House_with_placed_objects.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Sara_stodola_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects81 : land_Objects35 {
		displayName = $STR_SAR_NAME_OBJECT_081;
		model = "\SAR_ru_architect\4_House_with_placed_objects.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Sara_zluty_statek_in_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects82 : land_Objects35 {
		displayName = $STR_SAR_NAME_OBJECT_082;
		model = "\SAR_ru_architect\5_House_with_placed_objects.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Sara_domek_zluty_BEZ_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects83 : land_Objects35 {
		displayName = $STR_SAR_NAME_OBJECT_083;
		model = "\SAR_ru_architect\6_House_with_placed_objects.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Statek_brana_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects84 : land_Objects35 {
		displayName = $STR_SAR_NAME_OBJECT_084;
		model = "\SAR_ru_architect\7_House_with_placed_objects.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Sara_domek_podhradi_1_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects92 : land_Objects35 {
		displayName = $STR_SAR_NAME_OBJECT_092;
		model = "\SAR_ru_architect\Haus_zavod_no.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Hotel_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects95 : SAR_default_objects_with_ruins {
		scope = public;
		ladders[] = {{"start", "end"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_095;
		model = "\SAR_ru_architect\Haus_nev_Farm.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\kostel3_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects100 : SAR_default_objects_with_ruins {
		scope = public;
		ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}, {"start4", "end4"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_100;
		model = "\SAR_ru_architect\big_haus_nevs.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\benzina_schnell_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects101 : land_Objects100 {
		displayName = $STR_SAR_NAME_OBJECT_101;
		model = "\SAR_ru_architect\kontora.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Tovarna1_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class land_Objects106 : land_Objects100 {
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_106;
		model = "\SAR_ru_architect\stroyka.p3d";
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\SAR_ru_architect\ruins\Hotel_ruins";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class SAR_default_objects_fence : House {
		scope = private;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		destrType = "DestructTree";
		mapSize = 1;
		side = TCivilian;
		cost = 1;
		armor = 100;
	};
	
	class land_Objects36 : SAR_default_objects_fence {
		scope = public;
		displayName = $STR_SAR_NAME_OBJECT_036;
		model = "\SAR_ru_architect\Fenceof6sections.p3d";
	};
	
	class land_Objects37 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_037;
		model = "\SAR_ru_architect\Fence7section.p3d";
	};
	
	class land_Objects38 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_038;
		model = "\SAR_ru_architect\Fence1section.p3d";
	};
	
	class land_Objects39 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_039;
		model = "\SAR_ru_architect\Columnelectric.p3d";
	};
	
	class land_Objects40 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_040;
		model = "\SAR_ru_architect\Columnwud.p3d";
	};
	
	class land_Objects41 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_041;
		model = "\SAR_ru_architect\Fence7sectionsHW3.p3d";
	};
	
	class land_Objects42 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_042;
		model = "\SAR_ru_architect\Fence4sectionsHW3.p3d";
		armor = 500;
	};
	
	class land_Objects43 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_043;
		model = "\SAR_ru_architect\Fence1sectionsHW3.p3d";
	};
	
	class land_Objects44 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_044;
		model = "\SAR_ru_architect\Fence4sectionsHW4.p3d";
	};
	
	class land_Objects45 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_045;
		model = "\SAR_ru_architect\Fence5sectionsHW4.p3d";
	};
	
	class land_Objects50 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_050;
		model = "\SAR_ru_architect\Fence1sectionsHW4.p3d";
	};
	
	class land_Objects51 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_051;
		model = "\SAR_ru_architect\Columnelectric2.p3d";
	};
	
	class land_Objects57 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_057;
		model = "\SAR_ru_architect\sectionofthefallenfence.p3d";
		armor = 500;
	};
	
	class land_Objects60 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_060;
		model = "\SAR_ru_architect\fencefrom2trees.p3d";
		armor = 500;
	};
	
	class land_Objects61 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_061;
		model = "\SAR_ru_architect\fence2fromtrees.p3d";
	};
	
	class land_Objects69 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_069;
		model = "\SAR_ru_architect\brokenfence.p3d";
	};
	
	class land_Objects93 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_093;
		model = "\SAR_ru_architect\Sectionconcretelargefence.p3d";
		armor = 1000;
	};
	
	class land_Objects99 : land_Objects36 {
		displayName = $STR_SAR_NAME_OBJECT_099;
		model = "\SAR_ru_architect\vodokazka3.p3d";
		armor = 10000;
	};
	
	class SAR_default_objects_tent : House {
		scope = private;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		destrType = "DestructTent";
		mapSize = 1;
		side = TCivilian;
		cost = 1;
		armor = 250;
	};
	
	class land_Objects55 : SAR_default_objects_tent {
		scope = public;
		displayName = $STR_SAR_NAME_OBJECT_055;
		model = "\SAR_ru_architect\boxessmalwod.p3d";
	};
	
	class land_Objects119 : SAR_default_objects_tent {
		scope = public;
		ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}, {"start4", "end4"}};
		vehicleClass = "SAR_ru_architect";
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_119;
		model = "\SAR_ru_architect\a_garazik.p3d";
		armor = 10000;
	};
	
	class SAR_default_objects_static : House {
		scope = private;
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		armor = 10000;
	};
	
	class land_Objects : SAR_default_objects_static {
		scope = public;
		displayName = $STR_SAR_NAME_OBJECT_001;
		model = "\SAR_ru_architect\blok2.p3d";
	};
	
	class land_Objects2 : land_Objects {
		mapSize = 2;
		displayName = $STR_SAR_NAME_OBJECT_002;
		model = "\SAR_ru_architect\blok.p3d";
	};
	
	class land_Objects3 : land_Objects {
		displayName = $STR_SAR_NAME_OBJECT_003;
		model = "\SAR_ru_architect\kotel.p3d";
	};
	
	class land_Objects4 : land_Objects {
		displayName = $STR_SAR_NAME_OBJECT_004;
		model = "\SAR_ru_architect\kotelkis.p3d";
	};
	
	class land_Objects5 : land_Objects {
		displayName = $STR_SAR_NAME_OBJECT_005;
		model = "\SAR_ru_architect\mangal.p3d";
	};
	
	class land_Objects6 : land_Objects {
		displayName = $STR_SAR_NAME_OBJECT_006;
		model = "\SAR_ru_architect\samogonnyi.p3d";
	};
	
	class land_Objects7 : land_Objects {
		displayName = $STR_SAR_NAME_OBJECT_007;
		model = "\SAR_ru_architect\stol1.p3d";
	};
	
	class land_Objects8 : land_Objects {
		displayName = $STR_SAR_NAME_OBJECT_008;
		model = "\SAR_ru_architect\stol2.p3d";
	};
	
	class land_Objects9 : land_Objects {
		displayName = $STR_SAR_NAME_OBJECT_009;
		model = "\SAR_ru_architect\karta.p3d";
	};
	
	class land_Objects10 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_010;
		model = "\SAR_ru_architect\military.p3d";
	};
	
	class land_Objects11 : land_Objects {
		displayName = $STR_SAR_NAME_OBJECT_011;
		model = "\SAR_ru_architect\ukreplenie.p3d";
	};
	
	class land_Objects12 : land_Objects {
		ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}, {"start4", "end4"}};
		mapSize = 20;
		displayName = $STR_SAR_NAME_OBJECT_012;
		model = "\SAR_ru_architect\zerkovka.p3d";
	};
	
	class land_Objects13 : land_Objects {
		mapSize = 20;
		displayName = $STR_SAR_NAME_OBJECT_013;
		model = "\SAR_ru_architect\zerkovka_1.p3d";
	};
	
	class land_Objects14 : land_Objects {
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_014;
		model = "\SAR_ru_architect\zerkovka_2.p3d";
	};
	
	class land_Objects15 : land_Objects {
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_015;
		model = "\SAR_ru_architect\vagonsik.p3d";
	};
	
	class land_Objects16 : land_Objects {
		displayName = $STR_SAR_NAME_OBJECT_016;
		model = "\SAR_ru_architect\raziya.p3d";
		armor = 500;
	};
	
	class land_Objects18 : land_Objects {
		mapSize = 2;
		displayName = $STR_SAR_NAME_OBJECT_018;
		model = "\SAR_ru_architect\sartir.p3d";
		armor = 1000;
	};
	
	class land_Objects19 : land_Objects {
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_019;
		model = "\SAR_ru_architect\wodhaus.p3d";
	};
	
	class land_Objects20 : land_Objects {
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_020;
		model = "\SAR_ru_architect\wodhaus_1.p3d";
	};
	
	class land_Objects21 : land_Objects {
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_021;
		model = "\SAR_ru_architect\wodhaus_dvor.p3d";
	};
	
	class land_Objects24 : land_Objects {
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_024;
		model = "\SAR_ru_architect\zaporosez.p3d";
	};
	
	class land_Objects25 : land_Objects {
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_025;
		model = "\SAR_ru_architect\haus_wod_1.p3d";
	};
	
	class land_Objects26 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_026;
		model = "\SAR_ru_architect\haus_wod_2.p3d";
	};
	
	class land_Objects27 : land_Objects {
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_027;
		model = "\SAR_ru_architect\haus_wod_3.p3d";
	};
	
	class land_Objects29 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_029;
		model = "\SAR_ru_architect\haus_wod_4.p3d";
	};
	
	class land_Objects30 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_030;
		model = "\SAR_ru_architect\haus_wod_5.p3d";
	};
	
	class land_Objects31 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_031;
		model = "\SAR_ru_architect\statuia_eroy.p3d";
	};
	
	class land_Objects32 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_032;
		model = "\SAR_ru_architect\haus_wod_6.p3d";
	};
	
	class land_Objects33 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_033;
		model = "\SAR_ru_architect\Maz.p3d";
	};
	
	class land_Objects34 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_034;
		model = "\SAR_ru_architect\Maz1.p3d";
	};
	
	class land_Objects46 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_046;
		model = "\SAR_ru_architect\carpart1.p3d";
	};
	
	class land_Objects47 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_047;
		model = "\SAR_ru_architect\treepart1.p3d";
		armor = 500;
	};
	
	class land_Objects48 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_048;
		model = "\SAR_ru_architect\treepart2.p3d";
		armor = 500;
	};
	
	class land_Objects49 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_049;
		model = "\SAR_ru_architect\fireplace1.p3d";
	};
	
	class land_Objects52 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_052;
		model = "\SAR_ru_architect\treepart3.p3d";
		armor = 500;
	};
	
	class land_Objects53 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_053;
		model = "\SAR_ru_architect\treepart4.p3d";
		armor = 500;
	};
	
	class land_Objects54 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_054;
		model = "\SAR_ru_architect\brokenladder.p3d";
		armor = 500;
	};
	
	class land_Objects56 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_056;
		model = "\SAR_ru_architect\smallprotectivewall1.p3d";
		armor = 1000;
	};
	
	class land_Objects58 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_058;
		model = "\SAR_ru_architect\wheels.p3d";
		armor = 1000;
	};
	
	class land_Objects59 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_059;
		model = "\SAR_ru_architect\smallcart.p3d";
	};
	
	class land_Objects62 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_062;
		model = "\SAR_ru_architect\Souls.p3d";
		armor = 1000;
	};
	
	class land_Objects63 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_063;
		model = "\SAR_ru_architect\supportfirewood.p3d";
		armor = 1000;
	};
	
	class land_Objects64 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_064;
		model = "\SAR_ru_architect\smallbrokenmachine.p3d";
	};
	
	class land_Objects65 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_065;
		model = "\SAR_ru_architect\combinedwood.p3d";
	};
	
	class land_Objects66 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 2;
		displayName = $STR_SAR_NAME_OBJECT_066;
		model = "\SAR_ru_architect\payphone.p3d";
	};
	
	class land_Objects67 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_067;
		model = "\SAR_ru_architect\Fireanddust.p3d";
	};
	
	class land_Objects68 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_068;
		model = "\SAR_ru_architect\Bags.p3d";
	};
	
	class land_Objects70 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_070;
		model = "\SAR_ru_architect\Heapboxes.p3d";
		armor = 500;
	};
	
	class land_Objects71 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_071;
		model = "\SAR_ru_architect\Russiantomb1.p3d";
	};
	
	class land_Objects72 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_072;
		model = "\SAR_ru_architect\Russiantomb2.p3d";
	};
	
	class land_Objects73 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_073;
		model = "\SAR_ru_architect\Tableandchairs.p3d";
	};
	
	class land_Objects74 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_074;
		model = "\SAR_ru_architect\trunkstreescombined.p3d";
		armor = 1000;
	};
	
	class land_Objects75 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_075;
		model = "\SAR_ru_architect\Fieldcamp.p3d";
		armor = 1000;
	};
	
	class land_Objects76 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_076;
		model = "\SAR_ru_architect\Armybed.p3d";
	};
	
	class land_Objects85 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 2;
		displayName = $STR_SAR_NAME_OBJECT_085;
		model = "\SAR_ru_architect\kolodz.p3d";
	};
	
	class land_Objects86 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 3;
		displayName = $STR_SAR_NAME_OBJECT_086;
		model = "\SAR_ru_architect\bmp_break.p3d";
	};
	
	class land_Objects87 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 2;
		displayName = $STR_SAR_NAME_OBJECT_087;
		model = "\SAR_ru_architect\konteyner.p3d";
	};
	
	class land_Objects88 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_088;
		model = "\SAR_ru_architect\xram.p3d";
	};
	
	class land_Objects89 : land_Objects {
		ladders[] = {{"start", "end"}};
		displayName = $STR_SAR_NAME_OBJECT_089;
		model = "\SAR_ru_architect\akdu.p3d";
	};
	
	class land_Objects90 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 2;
		displayName = $STR_SAR_NAME_OBJECT_090;
		model = "\SAR_ru_architect\kolodez2.p3d";
	};
	
	class land_Objects91 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_091;
		model = "\SAR_ru_architect\Haus_zavod.p3d";
	};
	
	class land_Objects94 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_094;
		model = "\SAR_ru_architect\Haus_nev_anten.p3d";
	};
	
	class land_Objects96 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_096;
		model = "\SAR_ru_architect\Towerofradio.p3d";
		armor = 1000;
	};
	
	class land_Objects97 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_097;
		model = "\SAR_ru_architect\vodokazka.p3d";
	};
	
	class land_Objects98 : land_Objects {
		ladders[] = {{"start", "end"}};
		mapSize = 10;
		displayName = $STR_SAR_NAME_OBJECT_098;
		model = "\SAR_ru_architect\vodokazka2.p3d";
	};
	
	class land_Objects102 : land_Objects {
		ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}, {"start4", "end4"}};
		mapSize = 5;
		displayName = $STR_SAR_NAME_OBJECT_102;
		model = "\SAR_ru_architect\Watchtower.p3d";
	};
	
	class land_Objects104 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_104;
		model = "\SAR_ru_architect\zisterns.p3d";
	};
	
	class land_Objects105 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_105;
		model = "\SAR_ru_architect\kran.p3d";
	};
	
	class land_Objects107 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_107;
		model = "\SAR_ru_architect\trubs.p3d";
	};
	
	class land_Objects108 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_108;
		model = "\SAR_ru_architect\plits.p3d";
	};
	
	class land_Objects109 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_109;
		model = "\SAR_ru_architect\metalkonstrukts.p3d";
	};
	
	class land_Objects110 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_110;
		model = "\SAR_ru_architect\kamaz_wertolet.p3d";
	};
	
	class land_Objects111 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_111;
		model = "\SAR_ru_architect\kamaz_tent.p3d";
	};
	
	class land_Objects112 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_112;
		model = "\SAR_ru_architect\kamaz_pozarka.p3d";
	};
	
	class land_Objects113 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_113;
		model = "\SAR_ru_architect\kamaz_diablo_wod.p3d";
	};
	
	class land_Objects114 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_114;
		model = "\SAR_ru_architect\kamaz_bort.p3d";
	};
	
	class land_Objects115 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_115;
		model = "\SAR_ru_architect\kamaz_blokpost.p3d";
	};
	
	class land_Objects116 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_116;
		model = "\SAR_ru_architect\kamaz_awtobas.p3d";
	};
	
	class land_Objects117 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_117;
		model = "\SAR_ru_architect\a_zil_2.p3d";
	};
	
	class land_Objects118 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_118;
		model = "\SAR_ru_architect\a_uaz_dovn.p3d";
	};
	
	class land_Objects120 : land_Objects102 {
		displayName = $STR_SAR_NAME_OBJECT_120;
		model = "\SAR_ru_architect\a_ekskawator.p3d";
	};
	
	class land_Objects121 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_1";
		model = "\SAR_ru_architect\dead\1_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects122 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_2";
		model = "\SAR_ru_architect\dead\2_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects123 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_3";
		model = "\SAR_ru_architect\dead\3_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects124 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_4";
		model = "\SAR_ru_architect\dead\4_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects125 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_5";
		model = "\SAR_ru_architect\dead\5_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects126 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_6";
		model = "\SAR_ru_architect\dead\6_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects127 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_7";
		model = "\SAR_ru_architect\dead\7_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects128 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_8";
		model = "\SAR_ru_architect\dead\8_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects129 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_9";
		model = "\SAR_ru_architect\dead\9_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects130 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_10";
		model = "\SAR_ru_architect\dead\10_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects131 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_11";
		model = "\SAR_ru_architect\dead\11_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects132 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_12";
		model = "\SAR_ru_architect\dead\12_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects133 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_13";
		model = "\SAR_ru_architect\dead\13_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects134 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_14";
		model = "\SAR_ru_architect\dead\14_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects135 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_15";
		model = "\SAR_ru_architect\dead\15_ruins.p3d";
		armor = 10000;
	};
	
	class land_Objects136 : land_Objects102 {
		scope = public;
		ladders[] = {{"start", "end"}};
		vehicleClass = "SAR_ru_architect";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		side = TCivilian;
		cost = 1;
		mapSize = 1;
		displayName = "Ruins_16";
		model = "\SAR_ru_architect\dead\16_ruins.p3d";
		armor = 10000;
	};
};
