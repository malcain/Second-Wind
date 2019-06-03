class cfgpatches
{
	class jsrs_soundmod_explosions
	{
		units[]={};
		weapons[]={};
		requiredversion=0.1;
		requiredaddons[]=
		{
			"a3_weapons_f",
			"a3_sounds_f",
			"a3_sounds_f_orange",
			"jsrs_soundmod_framework"
		};
		version="1";
		projectname="jsrs - soundmod";
		author="lordjarhead";
	};
};
class cfgsoundsets
{
	class jsrs_explosion_echo_small_soundset
	{
		soundshaders[]=
		{
			"jsrs_explosion_echo_small_soundshader",
			"jsrs_explosion_echo_houses_soundshader"
		};
		volumefactor=1.4;
		volumecurve="jsrs_basic_vl_sin";
		volumerandomizer=0.5;
		sound3dprocessingtype="jsrs_wpn_small_tl_prc";
		spatial=1;
		doppler=0;
		loop=0;
		distancefilter="jsrs_wpn_echo_lp_dia";
		frequencyrandomizer=2;
		soundshaderslimit=2;
		occlusionfactor=0.2;
		obstructionfactor=0;
	};
	class jsrs_explosion_echo_medium_soundset
	{
		soundshaders[]=
		{
			"jsrs_explosion_echo_medium_soundshader",
			"jsrs_explosion_echo_houses_soundshader"
		};
		volumefactor=1.4;
		volumecurve="jsrs_basic_vl_sin";
		volumerandomizer=0.5;
		sound3dprocessingtype="jsrs_wpn_small_tl_prc";
		spatial=1;
		doppler=0;
		loop=0;
		distancefilter="jsrs_wpn_echo_lp_dia";
		frequencyrandomizer=2;
		soundshaderslimit=2;
		occlusionfactor=0.2;
		obstructionfactor=0;
	};
	class jsrs_explosion_echo_big_soundset
	{
		soundshaders[]=
		{
			"jsrs_explosion_echo_big_soundshader",
			"jsrs_explosion_echo_houses_soundshader"
		};
		volumefactor=1.4;
		volumecurve="jsrs_basic_vl_sin";
		volumerandomizer=0.5;
		sound3dprocessingtype="jsrs_wpn_small_tl_prc";
		spatial=1;
		doppler=0;
		loop=0;
		distancefilter="jsrs_wpn_echo_lp_dia";
		frequencyrandomizer=2;
		soundshaderslimit=2;
		occlusionfactor=0.2;
		obstructionfactor=0;
	};
	class jsrs_shockwave_small_soundset
	{
		soundshaders[]=
		{
			"jsrs_explosion_shockwave_soundshader"
		};
		volumefactor=0.69999999;
		volumecurve="jsrs_basic_vl_sin";
		volumerandomizer=1.35;
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_small_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
		occlusionfactor=0.89999998;
		obstructionfactor=0.89999998;
	};
	class jsrs_shockwave_big_soundset
	{
		soundshaders[]=
		{
			"jsrs_explosion_big_shockwave_soundshader"
		};
		volumefactor=0.89999998;
		volumecurve="jsrs_basic_vl_sin";
		volumerandomizer=1.45;
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_small_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=4;
		occlusionfactor=0.94999999;
		obstructionfactor=0.94999999;
	};
	class jsrs_shockwave_huge_soundset
	{
		soundshaders[]=
		{
			"jsrs_explosion_big_shockwave_soundshader",
			"jsrs_distance_explosion_big_shockwave_soundshader"
		};
		volumefactor=1;
		volumecurve="jsrs_exp_huge_vl_sin";
		volumerandomizer=1.5;
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_huge_prc";
		distancefilter="jsrs_exp_huge_lp_dia";
		frequencyrandomizer=4;
		occlusionfactor=0.94999999;
		obstructionfactor=0.94999999;
	};
	class jsrs_40mm_explosion_stereo_soundset
	{
		soundshaders[]=
		{
			"jsrs_40mm_explosion_stereo_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_small_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
		occlusionfactor=0.25;
		obstructionfactor=0.25;
	};
	class jsrs_he_explosion_stereo_soundset
	{
		soundshaders[]=
		{
			"jsrs_he_explosion_stereo_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_small_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
		occlusionfactor=0.25;
		obstructionfactor=0.25;
	};
	class jsrs_handgrenade_explosion_stereo_soundset
	{
		soundshaders[]=
		{
			"jsrs_handgrenade_explosion_stereo_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_medium_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
		occlusionfactor=0.25;
		obstructionfactor=0.25;
	};
	class jsrs_rocket_explosion_stereo_soundset
	{
		soundshaders[]=
		{
			"jsrs_rocket_explosion_stereo_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_medium_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
		occlusionfactor=0.25;
		obstructionfactor=0.25;
	};
	class jsrs_missile_explosion_stereo_soundset
	{
		soundshaders[]=
		{
			"jsrs_missile_explosion_stereo_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_big_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
		occlusionfactor=0.25;
		obstructionfactor=0.25;
	};
	class jsrs_vehicle_explosion_stereo_soundset
	{
		soundshaders[]=
		{
			"jsrs_vehicle_explosion_stereo_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_medium_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
		occlusionfactor=0.25;
		obstructionfactor=0.25;
	};
	class jsrs_shell_explosion_stereo_soundset
	{
		soundshaders[]=
		{
			"jsrs_shell_explosion_stereo_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_big_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
		occlusionfactor=0.25;
		obstructionfactor=0.25;
	};
	class jsrs_mortar_explosion_stereo_soundset
	{
		soundshaders[]=
		{
			"jsrs_mortar_explosion_stereo_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_big_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
		occlusionfactor=0.25;
		obstructionfactor=0.25;
	};
	class jsrs_bomb_explosion_stereo_soundset
	{
		soundshaders[]=
		{
			"jsrs_bomb_explosion_stereo_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_big_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
		occlusionfactor=0.25;
		obstructionfactor=0.25;
	};
	class jsrs_cluster_deploy_soundset
	{
		soundshaders[]=
		{
			"jsrs_cluster_deploy_close_distance_soundshader",
			"jsrs_cluster_deploy_medium_distance_soundshader"
		};
		volumefactor=0.80000001;
		volumecurve="jsrs_exp_medium_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_medium_prc";
		distancefilter="jsrs_exp_medium_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_20mm_explosion_soundset
	{
		soundshaders[]=
		{
			"jsrs_20mm_explosion_close_distance_soundshader",
			"jsrs_20mm_explosion_medium_distance_soundshader",
			"jsrs_20mm_explosion_far_distance_soundshader"
		};
		volumefactor=1.05;
		volumecurve="jsrs_exp_new_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_medium_prc";
		distancefilter="jsrs_exp_medium_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_small_explosion_soundset
	{
		soundshaders[]=
		{
			"jsrs_small_explosion_close_distance_soundshader",
			"jsrs_small_explosion_medium_distance_soundshader",
			"jsrs_small_explosion_far_distance_soundshader",
			"jsrs_small_explosion_very_far_distance_soundshader"
		};
		volumefactor=1.05;
		volumecurve="jsrs_exp_new_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_medium_prc";
		distancefilter="jsrs_exp_medium_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_small_explosion_reflector_soundset
	{
		soundshaders[]=
		{
			"jsrs_small_explosion_reflector_houses_soundshader",
			"jsrs_small_explosion_reflector_forest_soundshader",
			"jsrs_small_explosion_reflector_meadow_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_small_tl_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_grenade_explosion_soundset
	{
		soundshaders[]=
		{
			"jsrs_grenade_explosion_close_distance_soundshader",
			"jsrs_grenade_explosion_medium_distance_soundshader",
			"jsrs_grenade_explosion_far_distance_soundshader",
			"jsrs_grenade_explosion_very_far_distance_soundshader"
		};
		volumefactor=1.725;
		volumecurve="jsrs_exp_new_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_medium_prc";
		distancefilter="jsrs_exp_medium_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_grenade_explosion_reflector_soundset
	{
		soundshaders[]=
		{
			"jsrs_grenade_explosion_reflector_houses_soundshader",
			"jsrs_grenade_explosion_reflector_forest_soundshader",
			"jsrs_grenade_explosion_reflector_meadow_soundshader"
		};
		volumefactor=1;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_small_tl_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_mortar_explosion_soundset
	{
		soundshaders[]=
		{
			"jsrs_mortar_explosion_close_distance_soundshader",
			"jsrs_mortar_explosion_medium_distance_soundshader",
			"jsrs_mortar_explosion_far_distance_soundshader",
			"jsrs_mortar_explosion_very_far_distance_soundshader"
		};
		volumefactor=1.64;
		volumecurve="jsrs_exp_new_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_medium_prc";
		distancefilter="jsrs_exp_medium_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_rocket_explosion_soundset
	{
		soundshaders[]=
		{
			"jsrs_rocket_explosion_close_distance_soundshader",
			"jsrs_rocket_explosion_medium_distance_soundshader",
			"jsrs_rocket_explosion_far_distance_soundshader",
			"jsrs_rocket_explosion_very_far_distance_soundshader"
		};
		volumefactor=1.65;
		volumecurve="jsrs_exp_new_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_medium_prc";
		distancefilter="jsrs_exp_medium_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_shell_explosion_soundset
	{
		soundshaders[]=
		{
			"jsrs_shell_explosion_close_distance_soundshader",
			"jsrs_shell_explosion_medium_distance_soundshader",
			"jsrs_shell_explosion_far_distance_soundshader",
			"jsrs_shell_explosion_very_far_distance_soundshader"
		};
		volumefactor=1.75;
		volumecurve="jsrs_exp_new_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_medium_prc";
		distancefilter="jsrs_exp_medium_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_shell_huge_explosion_soundset
	{
		soundshaders[]=
		{
			"jsrs_bomb_explosion_close_distance_soundshader",
			"jsrs_bomb_explosion_medium_distance_soundshader",
			"jsrs_huge_explosion_reflector_soundshader"
		};
		volumefactor=1.5;
		volumecurve="jsrs_exp_medium_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_medium_prc";
		distancefilter="jsrs_exp_medium_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_shell_explosion_reflector_soundset
	{
		soundshaders[]=
		{
			"jsrs_shell_explosion_reflector_houses_soundshader",
			"jsrs_shell_explosion_reflector_forest_soundshader",
			"jsrs_shell_explosion_reflector_meadow_soundshader"
		};
		volumefactor=1.15;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_medium_tl_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_bomb_explosion_soundset
	{
		soundshaders[]=
		{
			"jsrs_bomb_explosion_close_distance_soundshader",
			"jsrs_bomb_explosion_medium_distance_soundshader",
			"jsrs_bomb_explosion_far_distance_soundshader",
			"jsrs_bomb_explosion_very_far_distance_soundshader"
		};
		volumefactor=1.825;
		volumecurve="jsrs_exp_new_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_medium_prc";
		distancefilter="jsrs_exp_medium_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_bomb_explosion_reflector_soundset
	{
		soundshaders[]=
		{
			"jsrs_bomb_explosion_reflector_houses_soundshader",
			"jsrs_bomb_explosion_reflector_forest_soundshader",
			"jsrs_bomb_explosion_reflector_meadow_soundshader"
		};
		volumefactor=1.25;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_big_tl_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_vehicle_explosion_soundset
	{
		soundshaders[]=
		{
			"jsrs_vehicle_explosion_close_distance_soundshader",
			"jsrs_vehicle_explosion_medium_distance_soundshader",
			"jsrs_vehicle_explosion_far_distance_soundshader",
			"jsrs_vehicle_explosion_very_far_distance_soundshader"
		};
		volumefactor=1.25;
		volumecurve="jsrs_exp_new_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_medium_prc";
		distancefilter="jsrs_exp_medium_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_vehicle_explosion_reflector_soundset
	{
		soundshaders[]=
		{
			"jsrs_vehicle_explosion_reflector_houses_soundshader",
			"jsrs_vehicle_explosion_reflector_forest_soundshader",
			"jsrs_vehicle_explosion_reflector_meadow_soundshader"
		};
		volumefactor=1;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_medium_tl_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=4;
	};
	class jsrs_huge_explosion_reflector_soundset
	{
		soundshaders[]=
		{
			"jsrs_huge_explosion_reflector_soundshader"
		};
		volumefactor=1.15;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_exp_stereo_huge_prc";
		distancefilter="jsrs_exp_huge_lp_dia";
		frequencyrandomizer=2;
	};
	class jsrs_shell_ap_soundset
	{
		soundshaders[]=
		{
			"jsrs_shell_ap_soundshader",
			"jsrs_shell_dist_ap_soundshader"
		};
		volumefactor=1.25;
		volumecurve="jsrs_exp_new_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_small_prc";
		distancefilter="jsrs_exp_small_lp_dia";
		frequencyrandomizer=4;
		soundshaderslimit=2;
	};
	class jsrs_20mm_ap_soundset
	{
		soundshaders[]=
		{
			"jsrs_20mm_ap_soundshader",
			"jsrs_20mm_dist_ap_soundshader"
		};
		volumefactor=1.25;
		volumecurve="jsrs_exp_new_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_exp_small_prc";
		distancefilter="jsrs_exp_small_lp_dia";
		frequencyrandomizer=4;
		soundshaderslimit=2;
	};
	class jsrs_small_debris_soundset
	{
		soundshaders[]=
		{
			"jsrs_small_debris_regular_soundshader",
			"jsrs_small_debris_houses_soundshader"
		};
		volumefactor=0.5;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_sc_tl_prc";
		frequencyrandomizer=3;
	};
	class jsrs_medium_debris_soundset
	{
		soundshaders[]=
		{
			"jsrs_medium_debris_regular_soundshader",
			"jsrs_medium_debris_houses_soundshader"
		};
		volumefactor=0.60000002;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_sc_tl_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
	};
	class jsrs_big_debris_soundset
	{
		soundshaders[]=
		{
			"jsrs_big_debris_regular_soundshader",
			"jsrs_big_debris_houses_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_sc_tl_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
	};
	class jsrs_vehicle_debris_soundset
	{
		soundshaders[]=
		{
			"jsrs_medium_debris_regular_soundshader",
			"jsrs_vehicle_debris_soundshader"
		};
		volumefactor=0.60000002;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		soundshaderslimit=2;
		sound3dprocessingtype="jsrs_db_ve_prc";
		distancefilter="jsrs_basic_lp_dia";
		frequencyrandomizer=3;
	};
};
class cfgsoundshaders
{
	class jsrs_cluster_deploy_close_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\cluster_deploy\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\cluster_deploy\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\cluster_deploy\close_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\cluster_deploy\close_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=100;
	};
	class jsrs_cluster_deploy_medium_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\cluster_deploy\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\cluster_deploy\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\cluster_deploy\medium_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\cluster_deploy\medium_distance_4.ogg",
				1
			}
		};
		volume=1.5;
		range=350;
		rangecurve[]=
		{
			{0,0},
			{50,1},
			{350,0}
		};
	};
	class jsrs_huge_explosion_reflector_soundshader
	{
		samples[]=
		{
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\Explosions\Huge\Distance_shock_1.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\Explosions\Huge\Distance_shock_2.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\Explosions\Huge\Distance_shock_3.ogg",
				1
			}
		};
		volume=2;
		range=3000;
		rangecurve[]=
		{
			{0,0},
			{100,1},
			{3000,0}
		};
	};
	class jsrs_20mm_explosion_close_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\close_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\close_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=100;
	};
	class jsrs_20mm_explosion_medium_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\medium_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\medium_distance_4.ogg",
				1
			}
		};
		volume=1.5;
		range=400;
		rangecurve[]=
		{
			{0,0},
			{100,1},
			{400,0}
		};
	};
	class jsrs_20mm_explosion_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\20mm\far_distance_4.ogg",
				1
			}
		};
		volume=1;
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{100,0},
			{400,1},
			{2000,0}
		};
	};
	class jsrs_small_explosion_close_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\close_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\close_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=100;
	};
	class jsrs_small_explosion_medium_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\medium_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\medium_distance_4.ogg",
				1
			}
		};
		volume=1.5;
		range=400;
		rangecurve[]=
		{
			{0,0},
			{100,1},
			{400,0}
		};
	};
	class jsrs_small_explosion_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\far_distance_4.ogg",
				1
			}
		};
		volume=1;
		range=800;
		rangecurve[]=
		{
			{0,0},
			{100,0},
			{400,1},
			{800,0}
		};
	};
	class jsrs_small_explosion_very_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\very_far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\small\very_far_distance_4.ogg",
				1
			}
		};
		volume=1;
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{400,0},
			{800,1},
			{2000,0}
		};
	};
	class jsrs_grenade_explosion_close_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\close_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\close_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=100;
	};
	class jsrs_grenade_explosion_medium_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\medium_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\medium_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=400;
		rangecurve[]=
		{
			{0,0},
			{100,1},
			{400,0}
		};
	};
	class jsrs_grenade_explosion_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\far_distance_4.ogg",
				1
			}
		};
		volume=1.5;
		range=800;
		rangecurve[]=
		{
			{0,0},
			{100,0},
			{400,1},
			{800,0}
		};
	};
	class jsrs_grenade_explosion_very_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\very_far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\grenades\very_far_distance_4.ogg",
				1
			}
		};
		volume=1;
		range=2700;
		rangecurve[]=
		{
			{0,0},
			{400,0},
			{800,1},
			{2700,0}
		};
	};
	class jsrs_shell_explosion_close_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\close_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\close_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=100;
	};
	class jsrs_shell_explosion_medium_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\medium_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\medium_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=400;
		rangecurve[]=
		{
			{0,0},
			{100,1},
			{400,0}
		};
	};
	class jsrs_shell_explosion_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\far_distance_4.ogg",
				1
			}
		};
		volume=1.5;
		rangecurve[]=
		{
			{0,0},
			{100,0},
			{400,1},
			{800,0}
		};
	};
	class jsrs_shell_explosion_very_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\very_far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shells\very_far_distance_4.ogg",
				1
			}
		};
		volume=1;
		range=3300;
		rangecurve[]=
		{
			{0,0},
			{400,0},
			{800,1},
			{3300,0}
		};
	};
	class jsrs_mortar_explosion_close_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\close_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\close_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=100;
	};
	class jsrs_mortar_explosion_medium_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\medium_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\medium_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=400;
		rangecurve[]=
		{
			{0,0},
			{100,1},
			{400,0}
		};
	};
	class jsrs_mortar_explosion_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\far_distance_4.ogg",
				1
			}
		};
		volume=1.5;
		range=800;
		rangecurve[]=
		{
			{0,0},
			{100,0},
			{400,1},
			{800,0}
		};
	};
	class jsrs_mortar_explosion_very_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\very_far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\mortar\very_far_distance_4.ogg",
				1
			}
		};
		volume=1;
		range=4000;
		rangecurve[]=
		{
			{0,0},
			{400,0},
			{800,1},
			{4000,0}
		};
	};
	class jsrs_rocket_explosion_close_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\close_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\close_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=100;
	};
	class jsrs_rocket_explosion_medium_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\medium_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\medium_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=400;
		rangecurve[]=
		{
			{0,0},
			{100,1},
			{400,0}
		};
	};
	class jsrs_rocket_explosion_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\far_distance_4.ogg",
				1
			}
		};
		volume=1.5;
		range=800;
		rangecurve[]=
		{
			{0,0},
			{100,0},
			{400,1},
			{800,0}
		};
	};
	class jsrs_rocket_explosion_very_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\very_far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\rocket\very_far_distance_4.ogg",
				1
			}
		};
		volume=1;
		range=4000;
		rangecurve[]=
		{
			{0,0},
			{400,0},
			{800,1},
			{4000,0}
		};
	};
	class jsrs_bomb_explosion_close_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\close_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\close_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=100;
	};
	class jsrs_bomb_explosion_medium_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\medium_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\medium_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=400;
		rangecurve[]=
		{
			{0,0},
			{100,1},
			{400,0}
		};
	};
	class jsrs_bomb_explosion_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\far_distance_4.ogg",
				1
			}
		};
		volume=1.5;
		range=800;
		rangecurve[]=
		{
			{0,0},
			{100,0},
			{400,1},
			{800,0}
		};
	};
	class jsrs_bomb_explosion_very_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\very_far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\bombs\very_far_distance_4.ogg",
				1
			}
		};
		volume=1;
		range=5000;
		rangecurve[]=
		{
			{0,0},
			{400,0},
			{800,1},
			{5000,0}
		};
	};
	class jsrs_vehicle_explosion_close_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\close_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\close_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\close_distance_4.ogg",
				1
			}
		};
		volume=2.5;
		range=100;
	};
	class jsrs_vehicle_explosion_medium_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\medium_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\medium_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\medium_distance_4.ogg",
				1
			}
		};
		volume=2;
		range=400;
		rangecurve[]=
		{
			{0,0},
			{100,1},
			{400,0}
		};
	};
	class jsrs_vehicle_explosion_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\far_distance_4.ogg",
				1
			}
		};
		volume=1.5;
		range=800;
		rangecurve[]=
		{
			{0,0},
			{100,0},
			{400,1},
			{800,0}
		};
	};
	class jsrs_vehicle_explosion_very_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\very_far_distance_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\very_far_distance_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\vehicles\very_far_distance_4.ogg",
				1
			}
		};
		volume=1;
		range=3000;
		rangecurve[]=
		{
			{0,0},
			{50,0},
			{150,0},
			{300,1},
			{3000,0}
		};
	};
	class jsrs_explosion_echo_small_soundshader
	{
		samples[]=
		{
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_s\explo_s_1.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_s\explo_s_2.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_s\explo_s_3.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_s\explo_s_4.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_s\explo_s_5.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_s\explo_s_6.ogg",
				1
			}
		};
		volume=5;
		range=1000;
		rangecurve[]=
		{
			{0,0},
			{30,1},
			{1000,0}
		};
	};
	class jsrs_explosion_echo_medium_soundshader
	{
		samples[]=
		{
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_m\explo_m_1.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_m\explo_m_2.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_m\explo_m_3.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_m\explo_m_4.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_m\explo_m_5.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_m\explo_m_6.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_m\explo_m_7.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_m\explo_m_8.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_m\explo_m_9.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_m\explo_m_10.ogg",
				1
			}
		};
		volume=5;
		range=1000;
		rangecurve[]=
		{
			{0,0},
			{30,1},
			{1000,0}
		};
	};
	class jsrs_explosion_echo_big_soundshader
	{
		samples[]=
		{
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_b\explo_b_1.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_b\explo_b_2.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_b\explo_b_3.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_b\explo_b_4.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_b\explo_b_5.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_b\explo_b_6.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_b\explo_b_7.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_b\explo_b_8.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_b\explo_b_9.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\explo_b\explo_b_10.ogg",
				1
			}
		};
		volume=5;
		range=1000;
		rangecurve[]=
		{
			{0,0},
			{30,1},
			{1000,0}
		};
	};
	class jsrs_explosion_echo_houses_soundshader
	{
		samples[]=
		{
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_1.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_2.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_3.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_4.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_5.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_6.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_7.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_8.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_9.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_10.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_11.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_12.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_14.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_15.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_16.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_17.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_18.ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Warfare\Sounds\echo\houses\houses_19.ogg",
				1
			}
		};
		volume="5 * houses";
		range=1000;
		rangecurve[]=
		{
			{0,0},
			{30,1},
			{1000,0}
		};
	};
	class jsrs_explosion_shockwave_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\small_explosion_shockwave_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\small_explosion_shockwave_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\small_explosion_shockwave_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\small_explosion_shockwave_4.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\small_explosion_shockwave_5.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\small_explosion_shockwave_6.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\small_explosion_shockwave_7.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\small_explosion_shockwave_8.ogg",
				1
			}
		};
		volume=1.25;
		range=25;
		limitation=1;
	};
	class jsrs_explosion_big_shockwave_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\big_explosion_shockwave_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\big_explosion_shockwave_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\big_explosion_shockwave_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\big_explosion_shockwave_4.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\big_explosion_shockwave_5.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\big_explosion_shockwave_6.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\big_explosion_shockwave_7.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\big_explosion_shockwave_8.ogg",
				1
			}
		};
		volume=1.5;
		range=65;
		limitation=1;
	};
	class jsrs_distance_explosion_big_shockwave_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\huge_distance_explosion_shockwave_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\huge_distance_explosion_shockwave_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\explosions\shockwave\huge_distance_explosion_shockwave_3.ogg",
				1
			}
		};
		volume=1.25;
		range=4000;
		limitation=1;
	};
	class jsrs_small_debris_regular_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\small\meadow_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\small\meadow_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\small\meadow_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\small\meadow_4.ogg",
				1
			}
		};
		volume="2*(1-houses)";
		range=100;
		limitation=1;
	};
	class jsrs_small_debris_houses_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\small\houses_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\small\houses_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\small\houses_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\small\houses_4.ogg",
				1
			}
		};
		volume="2*houses";
		range=50;
		limitation=1;
	};
	class jsrs_medium_debris_regular_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\medium\meadow_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\medium\meadow_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\medium\meadow_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\medium\meadow_4.ogg",
				1
			}
		};
		volume="2*(1-houses)";
		range=65;
		limitation=1;
	};
	class jsrs_medium_debris_houses_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\medium\houses_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\medium\houses_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\medium\houses_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\medium\houses_4.ogg",
				1
			}
		};
		volume="2*houses";
		range=65;
		limitation=1;
	};
	class jsrs_big_debris_regular_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\big\meadow_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\big\meadow_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\big\meadow_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\big\meadow_4.ogg",
				1
			}
		};
		volume="2*(1-houses)";
		range=80;
		limitation=1;
	};
	class jsrs_big_debris_houses_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\big\houses_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\big\houses_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\big\houses_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\big\houses_4.ogg",
				1
			}
		};
		volume="2*houses";
		range=80;
		limitation=1;
	};
	class jsrs_vehicle_debris_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\vehicle\vehicle_debris_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\vehicle\vehicle_debris_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\vehicle\vehicle_debris_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\debris\vehicle\vehicle_debris_4.ogg",
				1
			}
		};
		volume=1;
		range=75;
		limitation=1;
	};
	class jsrs_small_explosion_reflector_houses_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\small\houses.ogg",
				1
			}
		};
		volume="houses";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_small_explosion_reflector_meadow_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\small\meadow.ogg",
				1
			}
		};
		volume="meadows max sea/2";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_small_explosion_reflector_forest_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\small\forest.ogg",
				1
			}
		};
		volume="forest";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_grenade_explosion_reflector_houses_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\grenade\houses.ogg",
				1
			}
		};
		volume="houses";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_grenade_explosion_reflector_meadow_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\grenade\meadow.ogg",
				1
			}
		};
		volume="meadows max sea/2";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_grenade_explosion_reflector_forest_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\grenade\forest.ogg",
				1
			}
		};
		volume="forest";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_Bomb_explosion_reflector_houses_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\Bomb\houses.ogg",
				1
			}
		};
		volume="houses";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_Bomb_explosion_reflector_meadow_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\Bomb\meadow.ogg",
				1
			}
		};
		volume="meadows max sea/2";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_Bomb_explosion_reflector_forest_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\Bomb\forest.ogg",
				1
			}
		};
		volume="forest";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_Shell_explosion_reflector_houses_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\Shell\houses.ogg",
				1
			}
		};
		volume="houses";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_Shell_explosion_reflector_meadow_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\Shell\meadow.ogg",
				1
			}
		};
		volume="meadows max sea/2";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_Shell_explosion_reflector_forest_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\Shell\forest.ogg",
				1
			}
		};
		volume="forest";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_vehicle_explosion_reflector_houses_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\vehicle\houses.ogg",
				1
			}
		};
		volume="houses";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_vehicle_explosion_reflector_meadow_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\vehicle\meadow.ogg",
				1
			}
		};
		volume="meadows max sea/2";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_vehicle_explosion_reflector_forest_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\reflections\vehicle\forest.ogg",
				1
			}
		};
		volume="forest";
		range=300;
		limitation=1;
		rangecurve[]=
		{
			{0,2},
			{50,1},
			{100,0}
		};
	};
	class jsrs_40mm_explosion_stereo_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\stereo\40mm.ogg",
				1
			}
		};
		volume="0.5";
		range=750;
		rangecurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
		limitation=1;
	};
	class jsrs_he_explosion_stereo_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\stereo\he.ogg",
				1
			}
		};
		volume="0.5";
		range=750;
		rangecurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
		limitation=1;
	};
	class jsrs_handgrenade_explosion_stereo_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\stereo\handgrenade.ogg",
				1
			}
		};
		volume="0.5";
		range=750;
		rangecurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
		limitation=1;
	};
	class jsrs_rocket_explosion_stereo_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\stereo\rocket.ogg",
				1
			}
		};
		volume="0.5";
		range=750;
		rangecurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
		limitation=1;
	};
	class jsrs_missile_explosion_stereo_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\stereo\missile.ogg",
				1
			}
		};
		volume="0.5";
		range=750;
		rangecurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
		limitation=1;
	};
	class jsrs_mortar_explosion_stereo_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\stereo\mortar.ogg",
				1
			}
		};
		volume="0.5";
		range=750;
		rangecurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
		limitation=1;
	};
	class jsrs_vehicle_explosion_stereo_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\stereo\vehicle.ogg",
				1
			}
		};
		volume="0.5";
		range=750;
		rangecurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
		limitation=1;
	};
	class jsrs_shell_explosion_stereo_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\stereo\shell.ogg",
				1
			}
		};
		volume="0.5";
		range=750;
		rangecurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
		limitation=1;
	};
	class jsrs_bomb_explosion_stereo_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\stereo\bomb.ogg",
				1
			}
		};
		volume="0.5";
		range=750;
		rangecurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
		limitation=1;
	};
	class jsrs_20mm_ap_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_4.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_5.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_6.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_7.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_8.ogg",
				1
			}
		};
		volume=1;
		range=500;
		rangecurve[]=
		{
			{0,1},
			{125,0},
			{500,0}
		};
	};
	class jsrs_20mm_dist_ap_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_dist_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_dist_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_dist_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_dist_4.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_dist_5.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_dist_6.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_dist_7.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\20mm_dist_8.ogg",
				1
			}
		};
		volume=1;
		range=500;
		rangecurve[]=
		{
			{0,0},
			{125,1},
			{500,1}
		};
	};
	class jsrs_shell_ap_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_4.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_5.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_6.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_7.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_8.ogg",
				1
			}
		};
		volume=1;
		range=500;
		rangecurve[]=
		{
			{0,1},
			{175,0},
			{500,0}
		};
	};
	class jsrs_shell_dist_ap_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_dist_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_dist_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_dist_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_dist_4.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_dist_5.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_dist_6.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_dist_7.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_warfare\sounds\ap\shell_dist_8.ogg",
				1
			}
		};
		volume=1;
		range=500;
		rangecurve[]=
		{
			{0,0},
			{175,1},
			{500,1}
		};
	};
};
class cfgammo
{
	class default;
	class bulletcore;
	class bulletbase: bulletcore
	{
	};
	class shellcore;
	class flarecore;
	class shotdeploycore;
	class submunitioncore;
	class submunitionbase: submunitioncore
	{
	};
	class missilecore;
	class grenadecore;
	class bombcore;
	class laserbombcore;
	class ammo_Bomb_LaserGuidedBase: laserbombcore
	{
	};
	class rocketcore;
	class minecore;
	class boundingminecore;
	class directionalbombcore;
	class pipebombcore;
	class grenade: default
	{
		soundimpactsoft1[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\groundsoft_1.ogg",
			1,
			1,
			75
		};
		soundimpactsoft2[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\groundsoft_2.ogg",
			1,
			1,
			75
		};
		soundimpactsoft3[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\groundsoft_3.ogg",
			1,
			1,
			75
		};
		soundimpactsoft4[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\groundsoft_4.ogg",
			1,
			1,
			75
		};
		soundimpactsoft5[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\groundsoft_5.ogg",
			1,
			1,
			75
		};
		soundimpacthard1[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\groundhard_1.ogg",
			1,
			1,
			75
		};
		soundimpacthard2[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\groundhard_2.ogg",
			1,
			1,
			75
		};
		soundimpacthard3[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\groundhard_3.ogg",
			1,
			1,
			75
		};
		soundimpacthard4[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\groundhard_4.ogg",
			1,
			1,
			75
		};
		soundimpacthard5[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\groundhard_5.ogg",
			1,
			1,
			75
		};
		soundimpactfoliage1[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\foliage_1.ogg",
			1,
			1,
			75
		};
		soundimpactfoliage2[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\foliage_2.ogg",
			1,
			1,
			75
		};
		soundimpactfoliage3[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\foliage_3.ogg",
			1,
			1,
			75
		};
		soundimpactfoliage4[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\foliage_4.ogg",
			1,
			1,
			75
		};
		soundimpactfoliage5[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\foliage_5.ogg",
			1,
			1,
			75
		};
		soundimpactmetal1[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\metal_1.ogg",
			1,
			1,
			75
		};
		soundimpactmetal2[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\metal_2.ogg",
			1,
			1,
			75
		};
		soundimpactmetal3[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\metal_3.ogg",
			1,
			1,
			75
		};
		soundimpactmetal4[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\metal_4.ogg",
			1,
			1,
			75
		};
		soundimpactmetal5[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\metal_5.ogg",
			1,
			1,
			75
		};
		soundimpactwood1[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\wood_1.ogg",
			1,
			1,
			75
		};
		soundimpactwood2[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\wood_2.ogg",
			1,
			1,
			75
		};
		soundimpactwood3[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\wood_3.ogg",
			1,
			1,
			75
		};
		soundimpactwood4[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\wood_4.ogg",
			1,
			1,
			75
		};
		soundimpactwood5[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\wood_5.ogg",
			1,
			1,
			75
		};
		soundimpactwater1[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\water_1.ogg",
			1,
			1,
			75
		};
		soundimpactwater2[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\water_2.ogg",
			1,
			1,
			75
		};
		soundimpactwater3[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\water_3.ogg",
			1,
			1,
			75
		};
		soundimpactwater4[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\water_4.ogg",
			1,
			1,
			75
		};
		soundimpactwater5[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\water_5.ogg",
			1,
			1,
			75
		};
		soundimpactglass1[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\glass_1.ogg",
			1,
			1,
			75
		};
		soundimpactglass2[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\glass_2.ogg",
			1,
			1,
			75
		};
		soundimpactglass3[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\glass_3.ogg",
			1,
			1,
			75
		};
		soundimpactglass4[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\glass_4.ogg",
			1,
			1,
			75
		};
		soundimpactglass5[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\glass_5.ogg",
			1,
			1,
			75
		};
		soundimpactplastic1[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\plastic_1.ogg",
			1,
			1,
			75
		};
		soundimpactplastic2[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\plastic_2.ogg",
			1,
			1,
			75
		};
		soundimpactplastic3[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\plastic_3.ogg",
			1,
			1,
			75
		};
		soundimpactplastic4[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\plastic_4.ogg",
			1,
			1,
			75
		};
		soundimpactplastic5[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\plastic_5.ogg",
			1,
			1,
			75
		};
		soundimpactrubber1[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\rubber_1.ogg",
			1,
			1,
			75
		};
		soundimpactrubber2[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\rubber_2.ogg",
			1,
			1,
			75
		};
		soundimpactrubber3[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\rubber_3.ogg",
			1,
			1,
			75
		};
		soundimpactrubber4[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\rubber_4.ogg",
			1,
			1,
			75
		};
		soundimpactrubber5[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\rubber_5.ogg",
			1,
			1,
			75
		};
		soundimpactwall1[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\wall_1.ogg",
			1,
			1,
			75
		};
		soundimpactwall2[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\wall_2.ogg",
			1,
			1,
			75
		};
		soundimpactwall3[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\wall_3.ogg",
			1,
			1,
			75
		};
		soundimpactwall4[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\wall_4.ogg",
			1,
			1,
			75
		};
		soundimpactwall5[]=
		{
			"jsrs_soundmod_snd_warfare\sounds\bounce\wall_5.ogg",
			1,
			1,
			75
		};
		impactgroundsoft[]=
		{
			"soundimpactsoft1",
			0.2,
			"soundimpactsoft2",
			0.2,
			"soundimpactsoft3",
			0.2,
			"soundimpactsoft4",
			0.2,
			"soundimpactsoft5",
			0.2
		};
		impactgroundhard[]=
		{
			"soundimpacthard1",
			0.2,
			"soundimpacthard2",
			0.2,
			"soundimpacthard3",
			0.2,
			"soundimpacthard4",
			0.2,
			"soundimpacthard5",
			0.2
		};
		impactiron[]=
		{
			"soundimpactmetal1",
			0.2,
			"soundimpactmetal2",
			0.2,
			"soundimpactmetal3",
			0.2,
			"soundimpactmetal4",
			0.2,
			"soundimpactmetal5",
			0.2
		};
		impactarmor[]=
		{
			"soundimpactmetal1",
			0.2,
			"soundimpactmetal2",
			0.2,
			"soundimpactmetal3",
			0.2,
			"soundimpactmetal4",
			0.2,
			"soundimpactmetal5",
			0.2
		};
		impactbuilding[]=
		{
			"soundimpactwall1",
			0.2,
			"soundimpactwall2",
			0.2,
			"soundimpactwall3",
			0.2,
			"soundimpactwall4",
			0.2,
			"soundimpactwall5",
			0.2
		};
		impactfoliage[]=
		{
			"soundimpactfoliage1",
			0.2,
			"soundimpactfoliage2",
			0.2,
			"soundimpactfoliage3",
			0.2,
			"soundimpactfoliage4",
			0.2,
			"soundimpactfoliage5",
			0.2
		};
		impactwood[]=
		{
			"soundimpactwood1",
			0.2,
			"soundimpactwood2",
			0.2,
			"soundimpactwood3",
			0.2,
			"soundimpactwood4",
			0.2,
			"soundimpactwood5",
			0.2
		};
		impactglass[]=
		{
			"soundimpactglass1",
			0.2,
			"soundimpactglass2",
			0.2,
			"soundimpactglass3",
			0.2,
			"soundimpactglass4",
			0.2,
			"soundimpactglass5",
			0.2
		};
		impactglassarmored[]=
		{
			"soundimpacthard1",
			0.2,
			"soundimpacthard2",
			0.2,
			"soundimpacthard3",
			0.2,
			"soundimpacthard4",
			0.2,
			"soundimpacthard5",
			0.2
		};
		impactconcrete[]=
		{
			"soundimpacthard1",
			0.2,
			"soundimpacthard2",
			0.2,
			"soundimpacthard3",
			0.2,
			"soundimpacthard4",
			0.2,
			"soundimpacthard5",
			0.2
		};
		impactrubber[]=
		{
			"soundimpactrubber1",
			0.2,
			"soundimpactrubber2",
			0.2,
			"soundimpactrubber3",
			0.2,
			"soundimpactrubber4",
			0.2,
			"soundimpactrubber5",
			0.2
		};
		impactplastic[]=
		{
			"soundimpactplastic1",
			0.2,
			"soundimpactplastic2",
			0.2,
			"soundimpactplastic3",
			0.2,
			"soundimpactplastic4",
			0.2,
			"soundimpactplastic5",
			0.2
		};
		impactdefault[]=
		{
			"soundimpacthard1",
			0.2,
			"soundimpacthard2",
			0.2,
			"soundimpacthard3",
			0.2,
			"soundimpacthard4",
			0.2,
			"soundimpacthard5",
			0.2
		};
		impactmetal[]=
		{
			"soundimpactmetal1",
			0.2,
			"soundimpactmetal2",
			0.2,
			"soundimpactmetal3",
			0.2,
			"soundimpactmetal4",
			0.2,
			"soundimpactmetal5",
			0.2
		};
		impactmetalplate[]=
		{
			"soundimpactmetal1",
			0.2,
			"soundimpactmetal2",
			0.2,
			"soundimpactmetal3",
			0.2,
			"soundimpactmetal4",
			0.2,
			"soundimpactmetal5",
			0.2
		};
		impactwater[]=
		{
			"soundimpactwater1",
			0.2,
			"soundimpactwater2",
			0.2,
			"soundimpactwater3",
			0.2,
			"soundimpactwater4",
			0.2,
			"soundimpactwater5",
			0.2
		};
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_handgrenade_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset"
		};
	};
	class grenadehand: grenade
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_handgrenade_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
	class SmokeShell: grenadehand
	{
		SmokeShellBurst_1[]=
		{
			"JSRS_Soundmod_Snd_Warfare\Sounds\Smoke\Burst_1.ogg",
			2.5,
			1,
			200
		};
		SmokeShellBurst_2[]=
		{
			"JSRS_Soundmod_Snd_Warfare\Sounds\Smoke\Burst_2.ogg",
			2.5,
			1,
			200
		};
		SmokeShellBurst_3[]=
		{
			"JSRS_Soundmod_Snd_Warfare\Sounds\Smoke\Burst_3.ogg",
			2.5,
			1,
			200
		};
		SmokeShellBurst_4[]=
		{
			"JSRS_Soundmod_Snd_Warfare\Sounds\Smoke\Burst_4.ogg",
			2.5,
			1,
			200
		};
		SmokeShellBurst_5[]=
		{
			"JSRS_Soundmod_Snd_Warfare\Sounds\Smoke\Burst_5.ogg",
			2.5,
			1,
			200
		};
		SmokeShellSoundLoop1[]=
		{
			"JSRS_Soundmod_Snd_Warfare\Sounds\Smoke\Smoke_1.ogg",
			0.5,
			1,
			70
		};
		SmokeShellSoundLoop2[]=
		{
			"JSRS_Soundmod_Snd_Warfare\Sounds\Smoke\Smoke_2.ogg",
			0.5,
			1,
			70
		};
		SmokeShellSoundLoop3[]=
		{
			"JSRS_Soundmod_Snd_Warfare\Sounds\Smoke\Smoke_3.ogg",
			0.5,
			1,
			70
		};
		SmokeShellSoundLoop4[]=
		{
			"JSRS_Soundmod_Snd_Warfare\Sounds\Smoke\Smoke_4.ogg",
			0.5,
			1,
			70
		};
		grenadeFireSound[]=
		{
			"SmokeShellBurst_1",
			0.2,
			"SmokeShellBurst_2",
			0.2,
			"SmokeShellBurst_3",
			0.2,
			"SmokeShellBurst_4",
			0.2,
			"SmokeShellBurst_5",
			0.2
		};
		grenadeBurningSound[]=
		{
			"SmokeShellSoundLoop1",
			0.25,
			"SmokeShellSoundLoop2",
			0.25,
			"SmokeShellSoundLoop3",
			0.25,
			"SmokeShellSoundLoop4",
			0.25
		};
	};
	class shellbase: shellcore
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_m_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class lightningbolt: shellbase
	{
		soundsetexplosion[]={};
	};
	class shotdeploybase: shotdeploycore
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_small_explosion_soundset",
			"jsrs_40mm_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class apersminedispenser_deploy: shotdeploybase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_small_explosion_soundset",
			"jsrs_40mm_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class missilebase: missilecore
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_missile_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class rocketbase: rocketcore
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class grenadebase: grenadecore
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_handgrenade_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
	class fuelexplosion: default
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_vehicle_explosion_soundset",
			"jsrs_vehicle_explosion_stereo_soundset",
			"jsrs_vehicle_explosion_reflector_soundset",
			"jsrs_vehicle_debris_soundset"
		};
	};
	class fuelexplosionbig: fuelexplosion
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_vehicle_explosion_soundset",
			"jsrs_vehicle_explosion_stereo_soundset",
			"jsrs_vehicle_explosion_reflector_soundset",
			"jsrs_vehicle_debris_soundset"
		};
	};
	class helicopterexplosmall: shellbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_vehicle_explosion_stereo_soundset",
			"jsrs_vehicle_explosion_reflector_soundset",
			"jsrs_vehicle_debris_soundset"
		};
	};
	class helicopterexplobig: helicopterexplosmall
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_vehicle_explosion_soundset",
			"jsrs_vehicle_explosion_stereo_soundset",
			"jsrs_vehicle_explosion_reflector_soundset",
			"jsrs_vehicle_debris_soundset"
		};
	};
	class smallsecondary: helicopterexplosmall
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_small_explosion_soundset",
			"jsrs_he_explosion_stereo_soundset",
			"jsrs_small_reflector_soundset"
		};
	};
	class gatling_30mm_he_plane_cas_01_f: bulletbase
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_19mm_he: bulletbase
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_30mm_he: b_19mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_30mm_he_tracer_red: b_30mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_30mm_he_tracer_green: b_30mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_30mm_he_tracer_yellow: b_30mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_30mm_mp: b_30mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_30mm_mp_tracer_red: b_30mm_mp
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_30mm_mp_tracer_green: b_30mm_mp
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_30mm_mp_tracer_yellow: b_30mm_mp
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_40mm_gpr: b_30mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_small_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_40mm_gpr_tracer_red: b_40mm_gpr
	{
		soundsetexplosion[]=
		{
			"jsrs_small_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_40mm_gpr_tracer_green: b_40mm_gpr
	{
		soundsetexplosion[]=
		{
			"jsrs_small_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_40mm_gpr_tracer_yellow: b_40mm_gpr
	{
		soundsetexplosion[]=
		{
			"jsrs_small_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_20mm: bulletbase
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_20mm_tracer_red: b_20mm
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_25mm: bulletbase
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class b_30mm_ap: bulletbase
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_ap_soundset"
		};
	};
	class b_30mm_ap_tracer_red: b_30mm_ap
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_ap_soundset"
		};
	};
	class b_30mm_ap_tracer_green: b_30mm_ap
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_ap_soundset"
		};
	};
	class b_30mm_ap_tracer_yellow: b_30mm_ap
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_ap_soundset"
		};
	};
	class b_30mm_apfsds: b_30mm_ap
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_ap_soundset"
		};
	};
	class b_30mm_apfsds_tracer_red: b_30mm_apfsds
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_ap_soundset"
		};
	};
	class b_30mm_apfsds_tracer_green: b_30mm_apfsds
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_ap_soundset"
		};
	};
	class b_30mm_apfsds_tracer_yellow: b_30mm_apfsds
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_ap_soundset"
		};
	};
	class b_40mm_apfsds: b_30mm_apfsds
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_ap_soundset"
		};
	};
	class b_35mm_aa: bulletbase
	{
		soundsetexplosion[]=
		{
			"jsrs_20mm_explosion_soundset",
			"jsrs_explosion_echo_small_soundset"
		};
	};
	class m_pg_at: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_missile_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class m_at: m_pg_at
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_missile_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class m_mo_82mm_at: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_missile_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class m_mo_82mm_at_lg: m_mo_82mm_at
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_missile_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class missile_agm_02_f: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_missile_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class m_mo_120mm_at: m_mo_82mm_at
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_missile_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class m_mo_120mm_at_lg: m_mo_120mm_at
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_missile_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class m_rpg32_f: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class m_rpg32_aa_f: m_rpg32_f
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class r_pg32v_f: rocketbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class r_tbg32v_f: r_pg32v_f
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class m_nlaw_at_f: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class m_scalpel_at: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_missile_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class m_scalpel_at_hidden: m_scalpel_at
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_missile_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class m_titan_aa: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class m_zephyr: m_titan_aa
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class m_zephyr_mi06: m_zephyr
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class m_air_aa: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class m_air_aa_mi02: m_air_aa
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class m_titan_at: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class m_titan_ap: m_titan_at
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class m_air_at: m_titan_at
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class r_80mm_he: rocketbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class r_60mm_he: r_80mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class r_230mm_he: submunitionbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class r_230mm_fly: shellbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class cluster_155mm_amos: submunitionbase
	{
		soundsetexplosion[]=
		{
			"jsrs_grenade_explosion_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_handgrenade_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
	class mo_cluster_ap: shellbase
	{
		soundsetexplosion[]=
		{
			"jsrs_grenade_explosion_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_handgrenade_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
	class sh_120mm_he: shellbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class sh_120mm_he_tracer_red: sh_120mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class sh_120mm_he_tracer_green: sh_120mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class sh_120mm_he_tracer_yellow: sh_120mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class sh_120mm_apfsds: shellbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_ap_soundset",
			"jsrs_he_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
	class sh_120mm_apfsds_tracer_red: sh_120mm_apfsds
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_ap_soundset",
			"jsrs_he_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
	class sh_120mm_apfsds_tracer_green: sh_120mm_apfsds
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_ap_soundset",
			"jsrs_he_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
	class sh_120mm_apfsds_tracer_yellow: sh_120mm_apfsds
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_ap_soundset",
			"jsrs_he_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
	class sh_125mm_he: sh_120mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class sh_125mm_apfsds: sh_120mm_apfsds
	{
		soundsetexplosion[]=
		{
			"jsrs_shell_ap_soundset"
		};
	};
	class sh_155mm_amos: shellbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class sh_82mm_amos: sh_155mm_amos
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_mortar_explosion_soundset",
			"jsrs_mortar_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class sh_82mm_amos_guided: submunitionbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_mortar_explosion_soundset",
			"jsrs_mortar_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class sh_82mm_amos_lg: sh_82mm_amos_guided
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_mortar_explosion_soundset",
			"jsrs_mortar_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class sh_155mm_amos_guided: sh_82mm_amos_guided
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class sh_155mm_amos_lg: sh_82mm_amos_lg
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class g_40mm_he: grenadebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_40mm_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
	class g_20mm_he: g_40mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_40mm_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class g_40mm_hedp: g_40mm_he
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_40mm_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
	class minebase: minecore
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_mortar_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class boundingminebase: boundingminecore
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class directionalbombbase: directionalbombcore
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class pipebombbase: pipebombcore
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class atmine_range_ammo: minebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_mortar_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class underwatermine_range_ammo: minebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class underwatermineab_range_ammo: underwatermine_range_ammo
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class underwaterminepdm_range_ammo: underwatermine_range_ammo
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class apersmine_range_ammo: minebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_he_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class UXO1_Ammo_Base_F: apersmine_range_ammo
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_he_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class apersminedispenser_mine_ammo: apersmine_range_ammo
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_small_explosion_soundset",
			"jsrs_he_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class apersminedispenser_ammo: pipebombbase
	{
		soundsetexplosion[]=
		{
			"jsrs_cluster_deploy_soundset"
		};
	};
	class apersminedispenser_ammo_scripted: apersminedispenser_ammo
	{
		soundsetexplosion[]=
		{
			"jsrs_cluster_deploy_soundset"
		};
	};
	class apersboundingmine_range_ammo: boundingminebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_he_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class slamdirectionalmine_wire_ammo: directionalbombbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_handgrenade_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class aperstripmine_wire_ammo: directionalbombbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_handgrenade_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class claymoredirectionalmine_remote_ammo: directionalbombbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_shell_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_medium_debris_soundset"
		};
	};
	class satchelcharge_remote_ammo: pipebombbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class democharge_remote_ammo: pipebombbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_mortar_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class iedurbanbig_remote_ammo: pipebombbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class iedlandbig_remote_ammo: pipebombbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class iedurbansmall_remote_ammo: pipebombbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_handgrenade_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class iedlandsmall_remote_ammo: pipebombbase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_grenade_explosion_soundset",
			"jsrs_handgrenade_explosion_stereo_soundset",
			"jsrs_grenade_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class Bo_GBU12_LGB: ammo_Bomb_LaserGuidedBase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class bo_gbu12_lgb_mi10: Bo_GBU12_LGB
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class bomb_04_f: ammo_Bomb_LaserGuidedBase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class bomb_03_f: ammo_Bomb_LaserGuidedBase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_huge_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_bomb_explosion_soundset",
			"jsrs_bomb_explosion_stereo_soundset",
			"jsrs_bomb_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class missile_aa_04_f: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class missile_aa_03_f: missile_aa_04_f
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_big_soundset",
			"jsrs_explosion_echo_big_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_shell_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class rocket_04_he_f: missilebase
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class rocket_04_ap_f: rocket_04_he_f
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class rocket_03_he_f: rocket_04_he_f
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class rocket_03_ap_f: rocket_04_ap_f
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_medium_soundset",
			"jsrs_rocket_explosion_soundset",
			"jsrs_rocket_explosion_stereo_soundset",
			"jsrs_shell_explosion_reflector_soundset",
			"jsrs_big_debris_soundset"
		};
	};
	class mini_grenade: grenadehand
	{
		soundsetexplosion[]=
		{
			"jsrs_shockwave_small_soundset",
			"jsrs_explosion_echo_small_soundset",
			"jsrs_small_explosion_soundset",
			"jsrs_he_explosion_stereo_soundset",
			"jsrs_small_explosion_reflector_soundset",
			"jsrs_small_debris_soundset"
		};
	};
};
class cfgMods
{
	author="LordJarhead";
	timepacked="1540752631";
};
