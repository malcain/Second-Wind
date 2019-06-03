class cfgpatches
{
	class jsrs_soundmod_sonic_cracks
	{
		units[]={};
		weapons[]={};
		requiredversion=0.1;
		requiredaddons[]=
		{
			"a3_weapons_f",
			"a3_sounds_f"
		};
		version="1";
		projectname="jsrs - soundmod";
		author="lordjarhead";
	};
};
class cfgsoundsets
{
	class jsrs_sc_minigun_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_minigun_close_soundshader",
			"jsrs_sc_minigun_mid_soundshader"
		};
		volumefactor=0.75;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_prc";
		frequencyrandomizer=3;
	};
	class jsrs_sc_556x45mm_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_556x45mm_close_soundshader",
			"jsrs_sc_556x45mm_medium_soundshader",
			"jsrs_sc_556x45mm_far_soundshader"
		};
		volumefactor=1.25;
		volumerandomizer=1;
		volumecurve="jsrs_wpn_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_prc";
		frequencyrandomizer=2;
	};
	class jsrs_sc_65x55mm_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_65x55mm_close_soundshader",
			"jsrs_sc_65x55mm_medium_soundshader",
			"jsrs_sc_65x55mm_far_soundshader"
		};
		volumefactor=1.2;
		volumerandomizer=1;
		volumecurve="jsrs_wpn_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_prc";
		frequencyrandomizer=2;
	};
	class jsrs_sc_762x39mm_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_762x39mm_close_soundshader",
			"jsrs_sc_762x39mm_medium_soundshader",
			"jsrs_sc_762x39mm_far_soundshader"
		};
		volumefactor=1.25;
		volumerandomizer=1;
		volumecurve="jsrs_wpn_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_prc";
		frequencyrandomizer=2;
	};
	class jsrs_sc_93x64mm_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_93x64mm_close_soundshader",
			"jsrs_sc_93x64mm_medium_soundshader",
			"jsrs_sc_93x64mm_far_soundshader"
		};
		volumefactor=1.3;
		volumerandomizer=1;
		volumecurve="jsrs_wpn_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_prc";
		frequencyrandomizer=2;
	};
	class jsrs_sc_9x19mm_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_9x19mm_close_soundshader",
			"jsrs_sc_9x19mm_medium_soundshader"
		};
		volumefactor=1;
		volumerandomizer=1;
		volumecurve="jsrs_wpn_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_prc";
		frequencyrandomizer=2;
	};
	class jsrs_sc_11x43mm_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_11x43mm_close_soundshader",
			"jsrs_sc_11x43mm_medium_soundshader"
		};
		volumefactor=1.1;
		volumerandomizer=1;
		volumecurve="jsrs_wpn_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_prc";
		frequencyrandomizer=2;
	};
	class jsrs_sc_127x99mm_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_127x99mm_close_soundshader",
			"jsrs_sc_127x99mm_medium_soundshader",
			"jsrs_sc_127x99mm_far_soundshader"
		};
		volumefactor=1.4;
		volumerandomizer=1;
		volumecurve="jsrs_wpn_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_prc";
		frequencyrandomizer=2;
	};
	class jsrs_sc_30x90mm_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_30x90mm_close_soundshader",
			"jsrs_sc_30x90mm_medium_soundshader",
			"jsrs_sc_30x90mm_far_soundshader"
		};
		volumefactor=1.5;
		volumerandomizer=1;
		volumecurve="jsrs_wpn_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_prc";
		frequencyrandomizer=2;
	};
	class jsrs_sc_houses_reflectors_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_reflectors_houses_soundshader"
		};
		volumefactor=0.94999999;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_htl_prc";
		frequencyrandomizer=3;
		soundshaderslimit=3;
	};
	class jsrs_sc_556mm_reflectors_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_reflectors_houses_soundshader",
			"jsrs_sc_556mm_reflectors_forest_soundshader"
		};
		volumefactor=0.5;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_tl_prc";
		frequencyrandomizer=3;
		soundshaderslimit=2;
	};
	class jsrs_sc_762mm_reflectors_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_reflectors_houses_soundshader",
			"jsrs_sc_762mm_reflectors_forest_soundshader"
		};
		volumefactor=0.5;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_tl_prc";
		frequencyrandomizer=3;
		soundshaderslimit=2;
	};
	class jsrs_sc_20mm_reflectors_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_reflectors_houses_soundshader",
			"jsrs_sc_20mm_reflectors_forest_soundshader"
		};
		volumefactor=0.5;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_tl_prc";
		frequencyrandomizer=3;
		soundshaderslimit=2;
	};
	class jsrs_sc_65mm_reflectors_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_reflectors_houses_soundshader",
			"jsrs_sc_65mm_reflectors_forest_soundshader"
		};
		volumefactor=0.5;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_tl_prc";
		frequencyrandomizer=3;
		soundshaderslimit=2;
	};
	class jsrs_sc_9mm_reflectors_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_reflectors_houses_soundshader",
			"jsrs_sc_9mm_reflectors_forest_soundshader"
		};
		volumefactor=0.5;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_tl_prc";
		frequencyrandomizer=3;
		soundshaderslimit=2;
	};
	class jsrs_sc_127mm_reflectors_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_reflectors_houses_soundshader",
			"jsrs_sc_127mm_reflectors_forest_soundshader"
		};
		volumefactor=0.5;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_sc_tl_prc";
		frequencyrandomizer=3;
		soundshaderslimit=2;
	};
	class jsrs_sc_bullet_flyby_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_bullet_flyby_soundshader"
		};
		volumefactor=1;
		volumecurve="jsrs_wpn_sd_vl_sin";
		volumerandomizer=3;
		spatial=1;
		doppler=0;
		loop=0;
		frequencyrandomizer=2;
		soundshaderslimit=2;
	};
	class jsrs_sc_arty_flyby_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_arty_flyby_soundshader"
		};
		volumefactor=1;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		frequencyrandomizer=3;
		soundshaderslimit=2;
	};
	class jsrs_sc_rocket_flyby_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_rocket_flyby_soundshader"
		};
		volumefactor=1;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		frequencyrandomizer=3;
		soundshaderslimit=2;
	};
	class jsrs_sc_wire_flyby_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_wire_flyby_soundshader"
		};
		volumefactor=1;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		frequencyrandomizer=3;
		soundshaderslimit=2;
	};
	class jsrs_sc_20mm_flyby_soundset
	{
		soundshaders[]=
		{
			"jsrs_sc_20mm_flyby_soundshader"
		};
		volumefactor=1;
		volumecurve="jsrs_wpn_sd_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		frequencyrandomizer=3;
		soundshaderslimit=2;
	};
};
class cfgsoundshaders
{
	class jsrs_sc_minigun_close_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_close_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_close_distance_2.ogg",
				1
			}
		};
		volume=1;
		range=400;
		rangecurve[]=
		{
			{0,1},
			{85,0},
			{400,0}
		};
	};
	class jsrs_sc_minigun_mid_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_medium_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_medium_distance_2.ogg",
				1
			}
		};
		volume=1;
		range=400;
		rangecurve[]=
		{
			{0,0},
			{85,1},
			{150,0},
			{400,0}
		};
	};
	class jsrs_sc_556x45mm_close_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_close_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_close_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_close_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_close_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_close_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_close_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_close_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_close_distance_8.ogg",
				1
			}
		};
		volume=1.15;
		range=12;
		rangecurve[]=
		{
			{0,1},
			{6,1},
			{12,0}
		};
	};
	class jsrs_sc_556x45mm_medium_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_medium_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_medium_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_medium_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_medium_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_medium_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_medium_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_medium_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_medium_distance_8.ogg",
				1
			}
		};
		volume=1;
		range=200;
		rangecurve[]=
		{
			{0,0},
			{12,1},
			{200,0}
		};
	};
	class jsrs_sc_556x45mm_far_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_far_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_far_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_far_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_far_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_far_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_far_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_far_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\556x45mm\soniccrack_far_distance_8.ogg",
				1
			}
		};
		volume=1;
		range=1200;
		rangecurve[]=
		{
			{0,0},
			{12,0},
			{200,1},
			{1200,0}
		};
	};
	class jsrs_sc_65x55mm_close_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_close_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_close_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_close_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_close_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_close_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_close_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_close_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_close_distance_8.ogg",
				1
			}
		};
		volume=1.1;
		range=12;
		rangecurve[]=
		{
			{0,1},
			{6,1},
			{12,0}
		};
	};
	class jsrs_sc_65x55mm_medium_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_medium_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_medium_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_medium_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_medium_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_medium_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_medium_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_medium_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_medium_distance_8.ogg",
				1
			}
		};
		volume=1;
		range=200;
		rangecurve[]=
		{
			{0,0},
			{12,1},
			{200,0}
		};
	};
	class jsrs_sc_65x55mm_far_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_far_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_far_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_far_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_far_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_far_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_far_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_far_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\65x55mm\soniccrack_far_distance_8.ogg",
				1
			}
		};
		volume=1;
		range=1200;
		rangecurve[]=
		{
			{0,0},
			{12,0},
			{200,1},
			{1200,0}
		};
	};
	class jsrs_sc_762x39mm_close_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_close_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_close_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_close_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_close_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_close_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_close_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_close_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_close_distance_8.ogg",
				1
			}
		};
		volume=1.2;
		range=12;
		rangecurve[]=
		{
			{0,1},
			{6,1},
			{12,0}
		};
	};
	class jsrs_sc_762x39mm_medium_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_medium_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_medium_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_medium_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_medium_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_medium_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_medium_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_medium_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_medium_distance_8.ogg",
				1
			}
		};
		volume=1.1;
		range=200;
		rangecurve[]=
		{
			{0,0},
			{12,1},
			{200,0}
		};
	};
	class jsrs_sc_762x39mm_far_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_far_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_far_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_far_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_far_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_far_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_far_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_far_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\762x39mm\soniccrack_far_distance_8.ogg",
				1
			}
		};
		volume=1.1;
		range=1200;
		rangecurve[]=
		{
			{0,0},
			{12,0},
			{200,1},
			{1200,0}
		};
	};
	class jsrs_sc_93x64mm_close_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_close_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_close_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_close_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_close_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_close_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_close_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_close_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_close_distance_8.ogg",
				1
			}
		};
		volume=1.3;
		range=12;
		rangecurve[]=
		{
			{0,1},
			{6,1},
			{12,0}
		};
	};
	class jsrs_sc_93x64mm_medium_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_medium_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_medium_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_medium_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_medium_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_medium_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_medium_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_medium_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_medium_distance_8.ogg",
				1
			}
		};
		volume=1.2;
		range=200;
		rangecurve[]=
		{
			{0,0},
			{12,1},
			{200,0}
		};
	};
	class jsrs_sc_93x64mm_far_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_far_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_far_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_far_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_far_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_far_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_far_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_far_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\93x64mm\soniccrack_far_distance_8.ogg",
				1
			}
		};
		volume=1.2;
		range=1200;
		rangecurve[]=
		{
			{0,0},
			{12,0},
			{200,1},
			{1200,0}
		};
	};
	class jsrs_sc_9x19mm_close_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_close_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_close_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_close_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_close_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_close_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_close_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_close_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_close_distance_8.ogg",
				1
			}
		};
		volume=1.2;
		range=12;
		rangecurve[]=
		{
			{0,1},
			{6,1},
			{12,0}
		};
	};
	class jsrs_sc_9x19mm_medium_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_medium_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_medium_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_medium_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_medium_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_medium_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_medium_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_medium_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\9x19mm\soniccrack_medium_distance_8.ogg",
				1
			}
		};
		volume=1;
		range=200;
		rangecurve[]=
		{
			{0,0},
			{12,1},
			{200,0}
		};
	};
	class jsrs_sc_11x43mm_close_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_close_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_close_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_close_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_close_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_close_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_close_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_close_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_close_distance_8.ogg",
				1
			}
		};
		volume=1.2;
		range=12;
		rangecurve[]=
		{
			{0,1},
			{6,1},
			{12,0}
		};
	};
	class jsrs_sc_11x43mm_medium_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_medium_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_medium_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_medium_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_medium_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_medium_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_medium_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_medium_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\11x43mm\soniccrack_medium_distance_8.ogg",
				1
			}
		};
		volume=1;
		range=200;
		rangecurve[]=
		{
			{0,0},
			{12,1},
			{200,0}
		};
	};
	class jsrs_sc_127x99mm_close_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_close_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_close_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_close_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_close_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_close_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_close_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_close_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_close_distance_8.ogg",
				1
			}
		};
		volume=1.25;
		range=12;
		rangecurve[]=
		{
			{0,1},
			{6,1},
			{12,0}
		};
	};
	class jsrs_sc_127x99mm_medium_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_medium_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_medium_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_medium_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_medium_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_medium_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_medium_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_medium_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_medium_distance_8.ogg",
				1
			}
		};
		volume=1;
		range=200;
		rangecurve[]=
		{
			{0,0},
			{12,1},
			{200,0}
		};
	};
	class jsrs_sc_127x99mm_far_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_far_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_far_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_far_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_far_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_far_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_far_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_far_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\127x99mm\soniccrack_far_distance_8.ogg",
				1
			}
		};
		volume=1;
		range=1200;
		rangecurve[]=
		{
			{0,0},
			{12,0},
			{200,1},
			{1200,0}
		};
	};
	class jsrs_sc_30x90mm_close_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_close_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_close_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_close_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_close_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_close_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_close_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_close_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_close_distance_8.ogg",
				1
			}
		};
		volume=1.45;
		range=12;
		rangecurve[]=
		{
			{0,1},
			{6,1},
			{12,0}
		};
	};
	class jsrs_sc_30x90mm_medium_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_medium_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_medium_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_medium_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_medium_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_medium_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_medium_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_medium_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_medium_distance_8.ogg",
				1
			}
		};
		volume=1.25;
		range=200;
		rangecurve[]=
		{
			{0,0},
			{12,1},
			{200,0}
		};
	};
	class jsrs_sc_30x90mm_far_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_far_distance_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_far_distance_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_far_distance_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_far_distance_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_far_distance_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_far_distance_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_far_distance_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_cracks\30x90mm\soniccrack_far_distance_8.ogg",
				1
			}
		};
		volume=1.25;
		range=1200;
		rangecurve[]=
		{
			{0,0},
			{12,0},
			{200,1},
			{1200,0}
		};
	};
	class jsrs_sc_reflectors_houses_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_8.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_9.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_10.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_11.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_12.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_13.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_14.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_15.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\houses_16.ogg",
				1
			}
		};
		volume="houses max interior";
		limitation=1;
		range=250;
		rangecurve="jsrs_basic_vl_sin";
	};
	class jsrs_sc_bullet_flyby_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\bullet_flyby_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\bullet_flyby_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\bullet_flyby_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\bullet_flyby_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\bullet_flyby_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\bullet_flyby_6.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\bullet_flyby_7.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\bullet_flyby_8.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\bullet_flyby_9.ogg",
				1
			}
		};
		volume=1;
		range=200;
	};
	class jsrs_sc_556mm_reflectors_houses_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\556mm_houses_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\556mm_houses_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\556mm_houses_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\556mm_houses_4.ogg",
				1
			}
		};
		volume="houses max interior";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_556mm_reflectors_forest_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\556mm_forest_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\556mm_forest_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\556mm_forest_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\556mm_forest_4.ogg",
				1
			}
		};
		volume="forest";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_762mm_reflectors_houses_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\762mm_houses_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\762mm_houses_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\762mm_houses_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\762mm_houses_4.ogg",
				1
			}
		};
		volume="houses max interior";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_762mm_reflectors_forest_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\762mm_forest_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\762mm_forest_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\762mm_forest_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\762mm_forest_4.ogg",
				1
			}
		};
		volume="forest";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_65mm_reflectors_houses_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\65mm_houses_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\65mm_houses_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\65mm_houses_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\65mm_houses_4.ogg",
				1
			}
		};
		volume="houses max interior";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_65mm_reflectors_forest_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\65mm_forest_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\65mm_forest_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\65mm_forest_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\65mm_forest_4.ogg",
				1
			}
		};
		volume="forest";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_127mm_reflectors_houses_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\127mm_houses_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\127mm_houses_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\127mm_houses_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\127mm_houses_4.ogg",
				1
			}
		};
		volume="houses max interior";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_127mm_reflectors_forest_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\127mm_forest_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\127mm_forest_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\127mm_forest_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\127mm_forest_4.ogg",
				1
			}
		};
		volume="forest";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_9mm_reflectors_houses_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\9mm_houses_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\9mm_houses_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\9mm_houses_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\9mm_houses_4.ogg",
				1
			}
		};
		volume="houses max interior";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_9mm_reflectors_forest_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\9mm_forest_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\9mm_forest_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\9mm_forest_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\9mm_forest_4.ogg",
				1
			}
		};
		volume="forest";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_20mm_reflectors_houses_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\20mm_houses_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\20mm_houses_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\20mm_houses_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\20mm_houses_4.ogg",
				1
			}
		};
		volume="houses max interior";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_20mm_reflectors_forest_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\20mm_forest_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\20mm_forest_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\20mm_forest_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\sc_reflectors\20mm_forest_4.ogg",
				1
			}
		};
		volume="forest";
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_arty_flyby_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_6.ogg",
				1
			}
		};
		volume=1;
		range=200;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_rocket_flyby_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\rocket_flyby_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\rocket_flyby_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\rocket_flyby_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\rocket_flyby_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\rocket_flyby_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\rocket_flyby_6.ogg",
				1
			}
		};
		volume=1;
		range=500;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_20mm_flyby_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\20mm_flyby_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\20mm_flyby_2.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\20mm_flyby_3.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\20mm_flyby_4.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\20mm_flyby_5.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\20mm_flyby_6.ogg",
				1
			}
		};
		volume=1;
		range=50;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
	class jsrs_sc_wire_flyby_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\wire_flyby_1.ogg",
				1
			},
			
			{
				"\jsrs_soundmod_snd_warfare\sounds\flyby\wire_flyby_2.ogg",
				1
			}
		};
		volume=1;
		range=500;
		rangecurve="jsrs_basic_vl_sin";
		frequency="((speed factor [250, 990]) * 0.1) + 1.05";
		limitation=1;
	};
};
class mode_semiauto
{
};
class mode_burst: mode_semiauto
{
};
class mode_fullauto: mode_semiauto
{
};
class cfgammo
{
	class default;
	class bombcore;
	class rocketcore;
	class timebombcore;
	class flarebase;
	class grenadecore;
	class missilecore;
	class laserbombcore;
	class submunitioncore;
	class submunitionbase: submunitioncore
	{
		soundfakefall1[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_2.ogg",
			2.5,
			1,
			750
		};
		soundfakefall2[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_3.ogg",
			2.5,
			1,
			750
		};
		soundfakefall3[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_4.ogg",
			2.5,
			1,
			750
		};
		soundfakefall4[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_5.ogg",
			2.5,
			1,
			750
		};
		soundfakefall5[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_6.ogg",
			2.5,
			1,
			750
		};
		soundfakefall6[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_1.ogg",
			2.5,
			1,
			750
		};
		soundfakefall[]=
		{
			"soundfakefall1",
			0.16599999,
			"soundfakefall2",
			0.16599999,
			"soundfakefall3",
			0.16599999,
			"soundfakefall4",
			0.16599999,
			"soundfakefall5",
			0.16599999,
			"soundfakefall6",
			0.16599999
		};
	};
	class submunitionbullet: submunitionbase
	{
	};
	class shellcore;
	class bulletcore;
	class shotguncore;
	class shotgunbase: shotguncore
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_11x43mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class bulletbase: bulletcore
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_556x45mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class B_12Gauge_Slug: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_556x45mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_556x45_ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_556x45mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_556x45_ball_tracer_red: b_556x45_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_556x45mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_556x45_ball_tracer_green: b_556x45_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_556x45mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_556x45_ball_tracer_yellow: b_556x45_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_556x45mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_56x15_dual: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_556x45mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_65x39_caseless: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_65x55mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_65x39_caseless_green: b_65x39_caseless
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_65x55mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_65x39_case: b_65x39_caseless
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_65x55mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_65x39_case_green: b_65x39_case
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_65x55mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_65x39_case_yellow: b_65x39_case
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_65x55mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_556x45_dual: b_556x45_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_556x45mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_762x51_ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_762x39mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_762x54_ball: b_762x51_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_762x39mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_762x51_tracer_red: b_762x51_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_762x39mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_762x51_tracer_green: b_762x51_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_762x39mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_408_ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_9x21_ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_9x19mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_9x21_ball_tracer_green: b_9x21_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_9x19mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_127x33_ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_127x99_ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_127x99_ball_tracer_red: b_127x99_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_127x99_ball_tracer_green: b_127x99_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_127x99_ball_tracer_yellow: b_127x99_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_127x99_slap: b_127x99_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_127x99_slap_tracer_red: b_127x99_slap
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_127x99_slap_tracer_green: b_127x99_slap
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_127x99_slap_tracer_yellow: b_127x99_slap
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_127x108_ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_127x108_apds: b_127x108_ball
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class b_45acp_ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_11x43mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class B_93x64_Ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_93x64mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class B_338_Ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class B_338_NM_Ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class B_127x54_Ball: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_127x99mm_soundset",
			"jsrs_sc_houses_reflectors_soundset",
			"jsrs_sc_sniper_soundset"
		};
	};
	class B_580x42_Ball_F: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_65x55mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class B_50BW_Ball_F: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_11x43mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class B_762x39_Ball_F: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_762x39mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class B_762x39_Ball_Green_F: B_762x39_Ball_F
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_762x39mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class B_545x39_Ball_F: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_556x45mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class B_545x39_Ball_Green_F: B_545x39_Ball_F
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_556x45mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_65x39_minigun_caseless: submunitionbullet
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_minigun_soundset"
		};
	};
	class b_65x39_minigun_caseless_red_splash: b_65x39_caseless
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_minigun_soundset"
		};
	};
	class b_65x39_minigun_caseless_yellow_splash: b_65x39_minigun_caseless_red_splash
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_minigun_soundset"
		};
	};
	class b_65x39_minigun_caseless_green_splash: b_65x39_minigun_caseless_red_splash
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_minigun_soundset"
		};
	};
	class b_762x54_tracer_yellow: b_762x54_ball
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_minigun_soundset"
		};
	};
	class b_762x51_minigun_tracer_red: submunitionbullet
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_minigun_soundset"
		};
	};
	class b_762x51_minigun_tracer_red_splash: b_762x51_ball
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_minigun_soundset"
		};
	};
	class b_19mm_he: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_he: b_19mm_he
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_he_tracer_red: b_30mm_he
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_he_tracer_green: b_30mm_he
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_he_tracer_yellow: b_30mm_he
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_mp: b_30mm_he
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_mp_tracer_red: b_30mm_mp
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_mp_tracer_green: b_30mm_mp
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_mp_tracer_yellow: b_30mm_mp
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_40mm_gpr: b_30mm_he
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_40mm_gpr_tracer_red: b_40mm_gpr
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_40mm_gpr_tracer_green: b_40mm_gpr
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_40mm_gpr_tracer_yellow: b_40mm_gpr
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_20mm: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_20mm_tracer_red: b_20mm
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_25mm: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_ap: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_ap_tracer_red: b_30mm_ap
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_ap_tracer_green: b_30mm_ap
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_ap_tracer_yellow: b_30mm_ap
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_apfsds: b_30mm_ap
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_apfsds_tracer_red: b_30mm_apfsds
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_apfsds_tracer_green: b_30mm_apfsds
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_30mm_apfsds_tracer_yellow: b_30mm_apfsds
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_40mm_apfsds: b_30mm_apfsds
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class b_35mm_aa: bulletbase
	{
		soundsetbulletfly[]=
		{
			"jsrs_sc_bullet_flyby_soundset"
		};
		soundsetsoniccrack[]=
		{
			"jsrs_sc_30x90mm_soundset",
			"jsrs_sc_houses_reflectors_soundset"
		};
	};
	class shellbase: shellcore
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
		soundsetfly[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
		soundfakefall1[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_2.ogg",
			2.5,
			1,
			750
		};
		soundfakefall2[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_3.ogg",
			2.5,
			1,
			750
		};
		soundfakefall3[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_4.ogg",
			2.5,
			1,
			750
		};
		soundfakefall4[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_5.ogg",
			2.5,
			1,
			750
		};
		soundfakefall5[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_6.ogg",
			2.5,
			1,
			750
		};
		soundfakefall6[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_1.ogg",
			2.5,
			1,
			750
		};
		soundfakefall[]=
		{
			"soundfakefall1",
			0.16599999,
			"soundfakefall2",
			0.16599999,
			"soundfakefall3",
			0.16599999,
			"soundfakefall4",
			0.16599999,
			"soundfakefall5",
			0.16599999,
			"soundfakefall6",
			0.16599999
		};
	};
	class rocketbase: rocketcore
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
		soundsetfly[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
		soundfly[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\soundfly1.ogg",
			1,
			1,
			750
		};
		soundengine[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\soundfly1.ogg",
			1,
			1,
			750
		};
	};
	class missilebase: missilecore
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
		soundsetfly[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
		soundfly[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\soundfly2.ogg",
			1,
			1,
			750
		};
		soundengine[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\soundfly2.ogg",
			1,
			1,
			750
		};
	};
	class m_pg_at: missilebase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class m_at: m_pg_at
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class m_mo_82mm_at: missilebase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class m_mo_82mm_at_lg: m_mo_82mm_at
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class missile_agm_02_f: missilebase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_wire_flyby_soundset"
		};
	};
	class m_mo_120mm_at: m_mo_82mm_at
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class m_mo_120mm_at_lg: m_mo_120mm_at
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class m_rpg32_f: missilebase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class m_rpg32_aa_f: m_rpg32_f
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class m_nlaw_at_f: missilebase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class m_scalpel_at: missilebase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_wire_flyby_soundset"
		};
	};
	class m_scalpel_at_hidden: m_scalpel_at
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_wire_flyby_soundset"
		};
	};
	class m_titan_aa: missilebase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class m_zephyr: m_titan_aa
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_wire_flyby_soundset"
		};
	};
	class m_zephyr_mi06: m_zephyr
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_wire_flyby_soundset"
		};
	};
	class m_air_aa: missilebase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class m_air_aa_mi02: m_air_aa
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class m_titan_at: missilebase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class m_titan_ap: m_titan_at
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class m_air_at: m_titan_at
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class r_80mm_he: rocketbase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class r_60mm_he: r_80mm_he
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_rocket_flyby_soundset"
		};
	};
	class r_230mm_he: submunitionbase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
		soundsetfly[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class r_230mm_fly: shellbase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
		soundsetfly[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class cluster_155mm_amos: submunitionbase
	{
		soundfakefall1[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_2.ogg",
			2.5,
			1,
			750
		};
		soundfakefall2[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_3.ogg",
			2.5,
			1,
			750
		};
		soundfakefall3[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_4.ogg",
			2.5,
			1,
			750
		};
		soundfakefall4[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_5.ogg",
			2.5,
			1,
			750
		};
		soundfakefall5[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_6.ogg",
			2.5,
			1,
			750
		};
		soundfakefall6[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_1.ogg",
			2.5,
			1,
			750
		};
		soundfakefall[]=
		{
			"soundfakefall1",
			0.16599999,
			"soundfakefall2",
			0.16599999,
			"soundfakefall3",
			0.16599999,
			"soundfakefall4",
			0.16599999,
			"soundfakefall5",
			0.16599999,
			"soundfakefall6",
			0.16599999
		};
	};
	class mo_cluster_ap: shellbase
	{
		soundfakefall1[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_2.ogg",
			2.5,
			1,
			750
		};
		soundfakefall2[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_3.ogg",
			2.5,
			1,
			750
		};
		soundfakefall3[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_4.ogg",
			2.5,
			1,
			750
		};
		soundfakefall4[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_5.ogg",
			2.5,
			1,
			750
		};
		soundfakefall5[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_6.ogg",
			2.5,
			1,
			750
		};
		soundfakefall6[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_1.ogg",
			2.5,
			1,
			750
		};
		soundfakefall[]=
		{
			"soundfakefall1",
			0.16599999,
			"soundfakefall2",
			0.16599999,
			"soundfakefall3",
			0.16599999,
			"soundfakefall4",
			0.16599999,
			"soundfakefall5",
			0.16599999,
			"soundfakefall6",
			0.16599999
		};
	};
	class sh_120mm_he: shellbase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_120mm_he_tracer_red: sh_120mm_he
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_120mm_he_tracer_green: sh_120mm_he
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_120mm_he_tracer_yellow: sh_120mm_he
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_120mm_apfsds: shellbase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_120mm_apfsds_tracer_red: sh_120mm_apfsds
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_120mm_apfsds_tracer_green: sh_120mm_apfsds
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_120mm_apfsds_tracer_yellow: sh_120mm_apfsds
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_155mm_amos: shellbase
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
		soundsetfly[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_82mm_amos: sh_155mm_amos
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
		soundsetfly[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_82mm_amos_guided: submunitionbase
	{
		soundfakefall1[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_2.ogg",
			2.5,
			1,
			750
		};
		soundfakefall2[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_3.ogg",
			2.5,
			1,
			750
		};
		soundfakefall3[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_4.ogg",
			2.5,
			1,
			750
		};
		soundfakefall4[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_5.ogg",
			2.5,
			1,
			750
		};
		soundfakefall5[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_6.ogg",
			2.5,
			1,
			750
		};
		soundfakefall6[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_1.ogg",
			2.5,
			1,
			750
		};
		soundfakefall[]=
		{
			"soundfakefall1",
			0.16599999,
			"soundfakefall2",
			0.16599999,
			"soundfakefall3",
			0.16599999,
			"soundfakefall4",
			0.16599999,
			"soundfakefall5",
			0.16599999,
			"soundfakefall6",
			0.16599999
		};
	};
	class sh_82mm_amos_lg: sh_82mm_amos_guided
	{
		soundfakefall1[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_2.ogg",
			2.5,
			1,
			750
		};
		soundfakefall2[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_3.ogg",
			2.5,
			1,
			750
		};
		soundfakefall3[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_4.ogg",
			2.5,
			1,
			750
		};
		soundfakefall4[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_5.ogg",
			2.5,
			1,
			750
		};
		soundfakefall5[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_6.ogg",
			2.5,
			1,
			750
		};
		soundfakefall6[]=
		{
			"\jsrs_soundmod_snd_warfare\sounds\arty_flyby_1.ogg",
			2.5,
			1,
			750
		};
		soundfakefall[]=
		{
			"soundfakefall1",
			0.16599999,
			"soundfakefall2",
			0.16599999,
			"soundfakefall3",
			0.16599999,
			"soundfakefall4",
			0.16599999,
			"soundfakefall5",
			0.16599999,
			"soundfakefall6",
			0.16599999
		};
	};
	class sh_155mm_amos_guided: sh_82mm_amos_guided
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
		soundsetfly[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
	class sh_155mm_amos_lg: sh_82mm_amos_lg
	{
		soundsetsoniccrack[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
		soundsetfly[]=
		{
			"jsrs_sc_arty_flyby_soundset"
		};
	};
};
class cfgMods
{
	author="LordJarhead";
	timepacked="1540581984";
};
