class cfgpatches
{
	class jsrs_soundmod_framework
	{
		units[]={};
		weapons[]={};
		requiredversion=0.1;
		requiredaddons[]=
		{
			"a3_data_f",
			"a3_sounds_f",
			"a3_weapons_f"
		};
		version="1";
		projectname="jsrs - soundmod";
		author="lordjarhead";
	};
};
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class cfgsoundeffects
{
	class attenuationseffects
	{
		class jsrs_Car_Attenuation
		{
			class Equalizer0
			{
				center[]={100,250,1000,5000};
				bandwidth[]={2,2,2,2};
				gain[]={0.63095737,0.56234133,0.39810717,0.31622776};
			};
			class Equalizer1
			{
				center[]={60,500,3000,8000};
				bandwidth[]={2,2,2,2};
				gain[]={0.70794576,0.50118721,0.3548134,0.17782794};
			};
			class Echo
			{
				WetDryMix=0.1;
				Feedback=0.1;
				Delay=50;
			};
		};
		class jsrs_SemiOpenCar_Attenuation
		{
			class Equalizer0
			{
				center[]={100,250,1000,5000};
				bandwidth[]={1,1,1,1};
				gain[]={1,0.89125091,0.79432821,0.70794576};
			};
			class Equalizer1
			{
				center[]={60,500,3000,8000};
				bandwidth[]={1,1,1,1};
				gain[]={1,0.89125091,0.79432821,0.70794576};
			};
			class Echo
			{
				WetDryMix=0.1;
				Feedback=0.1;
				Delay=10;
			};
		};
		class jsrs_OpenCar_Attenuation
		{
			class Equalizer0
			{
				center[]={100,250,1000,5000};
				bandwidth[]={2,2,2,2};
				gain[]={1,1,1,1};
			};
			class Equalizer1
			{
				center[]={60,500,3000,8000};
				bandwidth[]={2,2,2,2};
				gain[]={1,1,1,1};
			};
			class Echo
			{
				WetDryMix=0;
				Feedback=0;
				Delay=1;
			};
		};
		class jsrs_Truck_Attenuation
		{
			class Equalizer0
			{
				center[]={100,250,1000,5000};
				bandwidth[]={2,2,2,2};
				gain[]={1,0.89125091,0.63095737,0.50118721};
			};
			class Equalizer1
			{
				center[]={50,500,2500,10000};
				bandwidth[]={2,2,2,2};
				gain[]={1,0.89125091,0.79432821,0.50118721};
			};
			class Echo
			{
				WetDryMix=0;
				Feedback=0;
				Delay=1;
			};
		};
		class jsrs_Mrap_Attenuation
		{
			class Equalizer0
			{
				center[]={100,250,1000,5000};
				bandwidth[]={2,2,2,2};
				gain[]={0.89125091,0.89125091,0.79432821,0.39810717};
			};
			class Equalizer1
			{
				center[]={50,500,2500,10000};
				bandwidth[]={2,2,2,2};
				gain[]={0.89125091,0.89125091,0.79432821,0.39810717};
			};
			class Echo
			{
				WetDryMix=0;
				Feedback=0;
				Delay=1;
			};
		};
		class jsrs_Tank_Attenuation
		{
			class Equalizer0
			{
				center[]={100,250,2500,7500};
				bandwidth[]={2,2,2,2};
				gain[]={0.89125091,0.84139514,0.39810717,0.12589253};
			};
			class Equalizer1
			{
				center[]={50,500,5000,10000};
				bandwidth[]={2,2,2,2};
				gain[]={0.89125091,0.84139514,0.39810717,0.12589253};
			};
			class Echo
			{
				WetDryMix=0;
				Feedback=0;
				Delay=1;
			};
		};
	};
};
class cfgsoundcurves
{
	class jsrs_envi_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.47},
			{0.2,0.34999999},
			{0.30000001,0.1},
			{0.40000001,0.079999998},
			{0.5,0.050000001},
			{0.60000002,0.026000001},
			{0.69999999,0.014},
			{0.80000001,0.0099999998},
			{0.89999998,0.0049999999},
			{1,0}
		};
	};
	class jsrs_distance_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.94999999},
			{0.2,0.66000003},
			{0.30000001,0.41999999},
			{0.40000001,0.22},
			{0.5,0.15000001},
			{0.60000002,0.1},
			{0.69999999,0.079999998},
			{0.80000001,0.050000001},
			{0.89999998,0.0049999999},
			{1,0}
		};
	};
	class jsrs_basic_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.75},
			{0.2,0.56},
			{0.30000001,0.41999999},
			{0.40000001,0.31999999},
			{0.5,0.22},
			{0.60000002,0.15000001},
			{0.69999999,0.079999998},
			{0.80000001,0.050000001},
			{0.89999998,0.015},
			{1,0}
		};
	};
	class jsrs_exp_small_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.050000001,0.72000003},
			{0.1,0.5},
			{0.15000001,0.34400001},
			{0.2,0.22499999},
			{0.25,0.19499999},
			{0.30000001,0.15000001},
			{0.34999999,0.12},
			{0.40000001,0.090000004},
			{0.44999999,0.07},
			{0.5,0.045000002},
			{0.60000002,0.025},
			{0.69999999,0.0125},
			{0.80000001,0.0055},
			{0.89999998,0.0024999999},
			{1,0}
		};
	};
	class jsrs_exp_medium_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.050000001,0.81999999},
			{0.1,0.56},
			{0.15000001,0.39399999},
			{0.2,0.27500001},
			{0.25,0.22499999},
			{0.30000001,0.25},
			{0.34999999,0.17},
			{0.40000001,0.15000001},
			{0.44999999,0.125},
			{0.5,0.090000004},
			{0.60000002,0.075000003},
			{0.69999999,0.045000002},
			{0.80000001,0.0125},
			{0.89999998,0.025},
			{1,0}
		};
	};
	class jsrs_exp_big_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.050000001,0.89999998},
			{0.1,0.63999999},
			{0.15000001,0.47},
			{0.2,0.34999999},
			{0.25,0.30000001},
			{0.30000001,0.25},
			{0.34999999,0.2},
			{0.40000001,0.175},
			{0.44999999,0.145},
			{0.5,0.12},
			{0.60000002,0.094999999},
			{0.69999999,0.075000003},
			{0.80000001,0.0425},
			{0.89999998,0.029999999},
			{1,0}
		};
	};
	class jsrs_exp_new_vl_sin
	{
		points[]=
		{
			{0,1},
			{1,0}
		};
	};
	class jsrs_wpn_vl_sin_backup
	{
		points[]=
		{
			{0,1},
			{0.026000001,0.92500001},
			{0.057999998,0.63999999},
			{0.102,0.34999999},
			{0.15800001,0.2},
			{0.23199999,0.15000001},
			{0.31200001,0.090000004},
			{0.40000001,0.059999999},
			{0.47999999,0.039999999},
			{0.56,0.02},
			{0.63999999,0.0074999998},
			{0.80000001,0.00050000002},
			{1,0}
		};
	};
	class jsrs_wpn_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.5},
			{0.2,0.32499999},
			{0.30000001,0.25},
			{0.40000001,0.2},
			{0.5,0.175},
			{0.60000002,0.15000001},
			{0.69999999,0.125},
			{0.80000001,0.1},
			{0.89999998,0.050000001},
			{1,0}
		};
	};
	class jsrs_wpn_pistol_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.25},
			{0.2,0.075000003},
			{0.30000001,0.0099999998},
			{0.40000001,0.0074999998},
			{0.5,0.0049999999},
			{0.60000002,0.001},
			{0.69999999,0.00075000001},
			{0.80000001,0.00025000001},
			{0.89999998,9.9999997e-005},
			{1,0}
		};
	};
	class jsrs_wpn_smg_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.30000001},
			{0.2,0.125},
			{0.30000001,0.050000001},
			{0.40000001,0.025},
			{0.5,0.0099999998},
			{0.60000002,0.0049999999},
			{0.69999999,0.0024999999},
			{0.80000001,0.00075000001},
			{0.89999998,9.9999997e-005},
			{1,0}
		};
	};
	class jsrs_wpn_rifle556_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.40000001},
			{0.2,0.175},
			{0.30000001,0.1},
			{0.40000001,0.075000003},
			{0.5,0.050000001},
			{0.60000002,0.0099999998},
			{0.69999999,0.0074999998},
			{0.80000001,0.0024999999},
			{0.89999998,0.00050000002},
			{1,0}
		};
	};
	class jsrs_wpn_rifle762_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.44999999},
			{0.2,0.22499999},
			{0.30000001,0.15000001},
			{0.40000001,0.1},
			{0.5,0.075000003},
			{0.60000002,0.050000001},
			{0.69999999,0.025},
			{0.80000001,0.0099999998},
			{0.89999998,0.0049999999},
			{1,0}
		};
	};
	class jsrs_wpn_dmr_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.47499999},
			{0.2,0.25},
			{0.30000001,0.175},
			{0.40000001,0.125},
			{0.5,0.1},
			{0.60000002,0.075000003},
			{0.69999999,0.050000001},
			{0.80000001,0.015},
			{0.89999998,0.0049999999},
			{1,0}
		};
	};
	class jsrs_wpn_mg_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.5},
			{0.2,0.27500001},
			{0.30000001,0.2},
			{0.40000001,0.15000001},
			{0.5,0.125},
			{0.60000002,0.1},
			{0.69999999,0.075000003},
			{0.80000001,0.050000001},
			{0.89999998,0.0099999998},
			{1,0}
		};
	};
	class jsrs_wpn_sniper_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.5},
			{0.2,0.32499999},
			{0.30000001,0.25},
			{0.40000001,0.2},
			{0.5,0.175},
			{0.60000002,0.15000001},
			{0.69999999,0.125},
			{0.80000001,0.1},
			{0.89999998,0.050000001},
			{1,0}
		};
	};
	class jsrs_wpn_sd_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.56999999},
			{0.2,0.25},
			{0.30000001,0.11},
			{0.40000001,0.090000004},
			{0.5,0.079999998},
			{0.60000002,0.059999999},
			{0.69999999,0.039999999},
			{0.80000001,0.0099999998},
			{0.89999998,0.0049999999},
			{1,0}
		};
	};
	class jsrs_wpn_veh_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.050000001,0.93000001},
			{0.1,0.63999999},
			{0.15000001,0.34999999},
			{0.2,0.22499999},
			{0.25,0.15000001},
			{0.30000001,0.12},
			{0.34999999,0.1},
			{0.40000001,0.079999998},
			{0.44999999,0.050000001},
			{0.5,0.037500001},
			{0.60000002,0.0175},
			{0.69999999,0.0099999998},
			{0.80000001,0.0074999998},
			{0.89999998,0.001},
			{1,0}
		};
	};
	class jsrs_basic_pn_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.97000003},
			{0.2,0.94999999},
			{0.30000001,0.85000002},
			{0.40000001,0.70999998},
			{0.5,0.51999998},
			{0.60000002,0.31999999},
			{0.69999999,0.18000001},
			{0.80000001,0.1},
			{0.89999998,0.029999999},
			{1,0}
		};
	};
	class jsrs_proc_pn_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.94999999},
			{0.2,0.80000001},
			{0.30000001,0.60000002},
			{0.40000001,0.37},
			{0.5,0.22},
			{0.60000002,0.14},
			{0.69999999,0.079999998},
			{0.80000001,0.039999999},
			{0.89999998,0.029999999},
			{1,0}
		};
	};
	class jsrs_proc_wpn_small_pn_sin
	{
		points[]=
		{
			{0,1},
			{0.0099999998,0.5},
			{0.02,0.40000001},
			{0.1,0.30000001},
			{0.2,0.2},
			{0.30000001,0.1},
			{0.40000001,0.050000001},
			{0.89999998,0.015},
			{1,0}
		};
	};
	class jsrs_proc_wpn_med_pn_sin
	{
		points[]=
		{
			{0,1},
			{0.0099999998,0.75},
			{0.02,0.60000002},
			{0.1,0.44999999},
			{0.2,0.30000001},
			{0.30000001,0.15000001},
			{0.40000001,0.1},
			{0.89999998,0.050000001},
			{1,0}
		};
	};
	class jsrs_proc_wpn_big_pn_sin
	{
		points[]=
		{
			{0,1},
			{0.0099999998,0.80000001},
			{0.02,0.69999999},
			{0.1,0.5},
			{0.2,0.34999999},
			{0.30000001,0.2},
			{0.40000001,0.15000001},
			{0.89999998,0.1},
			{1,0}
		};
	};
	class jsrs_sc_proc_pc_sin
	{
		points[]=
		{
			{0,1},
			{1,0}
		};
	};
	class jsrs_vehicle_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.94999999},
			{0.2,0.66000003},
			{0.30000001,0.41999999},
			{0.40000001,0.22},
			{0.5,0.15000001},
			{0.60000002,0.1},
			{0.69999999,0.079999998},
			{0.80000001,0.050000001},
			{0.89999998,0.0049999999},
			{1,0}
		};
	};
	class jsrs_exp_huge_vl_sin
	{
		points[]=
		{
			{0,1},
			{1,0.89999998}
		};
	};
};
class cfgsound3dprocessors
{
	class jsrs_VehicleExterior_prc
	{
		type="emitter";
		innerRange=0;
		range=10;
		radius=5;
	};
	class jsrs_VehicleInterior_Front_prc
	{
		type="surround_panner";
		radius=10;
		reference="vehicle";
		volumeFrontLeft=1;
		volumeFrontRight=1;
		volumeBackLeft=0.30000001;
		volumeBackRight=0.30000001;
	};
	class jsrs_VehicleInterior_Back_prc
	{
		type="surround_panner";
		radius=10;
		reference="vehicle";
		volumeFrontLeft=0.30000001;
		volumeFrontRight=0.30000001;
		volumeBackLeft=1;
		volumeBackRight=1;
	};
	class jsrs_VehicleInterior_Middle_prc
	{
		type="surround_panner";
		radius=10;
		reference="vehicle";
		volumeFrontLeft=1;
		volumeFrontRight=1;
		volumeBackLeft=1;
		volumeBackRight=1;
	};
	class jsrs_exp_stereo_huge_prc
	{
		type="panner";
		innerrange=5000;
		range=5000;
		rangecurve="jsrs_exp_huge_vl_sin";
	};
	class jsrs_envi_thunder_prc
	{
		type="panner";
		innerrange=2000;
		range=5000;
		rangecurve="jsrs_exp_huge_vl_sin";
	};
	class jsrs_exp_stereo_small_prc
	{
		type="panner";
		innerrange=100;
		range=600;
		rangecurve="jsrs_basic_vl_sin";
	};
	class jsrs_exp_stereo_medium_prc
	{
		type="panner";
		innerrange=200;
		range=1000;
		rangecurve="jsrs_basic_vl_sin";
	};
	class jsrs_exp_stereo_big_prc
	{
		type="panner";
		innerrange=300;
		range=1500;
		rangecurve="jsrs_basic_vl_sin";
	};
	class jsrs_sound_small_prc
	{
		type="panner";
		innerrange=0;
		range=1;
		rangecurve="jsrs_proc_pn_sin";
	};
	class jsrs_wpn_dist_prc
	{
		type="panner";
		innerrange=500;
		range=2000;
		rangecurve="jsrs_proc_wpn_dist_pn_sin";
	};
	class jsrs_wpn_silenced_prc
	{
		type="panner";
		innerrange=1;
		range=20;
		rangecurve="jsrs_proc_pn_sin";
	};
	class jsrs_wpn_small_prc
	{
		type="panner";
		innerrange=1;
		range=5;
		rangecurve="jsrs_proc_pn_sin";
	};
	class jsrs_wpn_small_tl_prc
	{
		type="panner";
		innerrange=1;
		range=150;
		rangecurve="jsrs_basic_pn_sin";
	};
	class jsrs_wpn_echo_prc
	{
		type="panner";
		innerrange=1;
		range=50;
		rangecurve="jsrs_basic_pn_sin";
	};
	class jsrs_wpn_medium_prc
	{
		type="panner";
		innerrange=2;
		range=20;
		rangecurve="jsrs_proc_pn_sin";
	};
	class jsrs_wpn_medium_tl_prc
	{
		type="panner";
		innerrange=40;
		range=400;
		rangecurve="jsrs_basic_pn_sin";
	};
	class jsrs_wpn_big_prc
	{
		type="panner";
		innerrange=5;
		range=50;
		rangecurve="jsrs_proc_pn_sin";
	};
	class jsrs_wpn_big_tl_prc
	{
		type="panner";
		innerrange=60;
		range=600;
		rangecurve="jsrs_basic_pn_sin";
	};
	class jsrs_exp_small_prc
	{
		type="panner";
		innerrange=0;
		range=40;
		rangecurve="jsrs_proc_pn_sin";
	};
	class jsrs_exp_small_tl_prc
	{
		type="panner";
		innerrange=5;
		range=50;
		rangecurve="jsrs_basic_pn_sin";
	};
	class jsrs_exp_medium_prc
	{
		type="panner";
		innerrange=5;
		range=50;
		rangecurve="jsrs_proc_pn_sin";
	};
	class jsrs_exp_medium_tl_prc
	{
		type="panner";
		innerrange=20;
		range=200;
		rangecurve="jsrs_basic_pn_sin";
	};
	class jsrs_exp_big_prc
	{
		type="panner";
		innerrange=5;
		range=70;
		rangecurve="jsrs_proc_pn_sin";
	};
	class jsrs_exp_big_tl_prc
	{
		type="panner";
		innerrange=30;
		range=300;
		rangecurve="jsrs_basic_pn_sin";
	};
	class jsrs_sc_prc
	{
		type="panner";
		innerrange=10;
		range=25;
		rangecurve="jsrs_sc_proc_pc_sin";
	};
	class jsrs_sc_tl_prc
	{
		type="panner";
		innerrange=4;
		range=100;
		rangecurve="jsrs_basic_pn_sin";
	};
	class jsrs_fst_prc
	{
		type="panner";
		innerrange=1.5;
		range=6;
		rangecurve="jsrs_proc_pn_sin";
	};
	class jsrs_sc_htl_prc
	{
		type="panner";
		innerrange=10;
		range=50;
		rangecurve="jsrs_basic_pn_sin";
	};
	class jsrs_db_ve_prc
	{
		type="panner";
		innerrange=2;
		range=5;
		rangecurve="jsrs_sc_proc_pc_sin";
	};
};
class cfgdistancefilters
{
	class jsrs_vehicle_exterior_attenuation_distance
	{
		type="lowpassfilter";
		mincutofffrequency=150;
		qfactor=1;
		innerrange=10;
		range=200;
		powerfactor=32;
	};
	class jsrs_vehicle_interior_attenuation_filter
	{
		type="lowPassFilter";
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=0;
		range=50;
		powerFactor=2;
	};
	class jsrs_vehicle_interior_attenuation_back
	{
		type="lowpassfilter";
		mincutofffrequency=400;
		qfactor=1;
		innerrange=0;
		range=50;
		powerfactor=5;
	};
	class jsrs_vehicle_exterior_distancefilter
	{
		type="lowPassFilter";
		minCutoffFrequency=200;
		qFactor=1;
		innerRange=50;
		range=200;
		powerFactor=32;
	};
	class jsrs_basic_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=350;
		qfactor=1;
		innerrange=7;
		range=1500;
		powerfactor=40;
	};
	class jsrs_basic_envi_dia
	{
		type="lowpassfilter";
		mincutofffrequency=420;
		qfactor=1;
		innerrange=5;
		range=500;
		powerfactor=40;
	};
	class jsrs_veh_rear_dia
	{
		type="lowpassfilter";
		mincutofffrequency=125;
		qfactor=1;
		innerrange=1;
		range=75;
		powerfactor=50;
	};
	class jsrs_fst_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=200;
		qfactor=1;
		innerrange=15;
		range=200;
		powerfactor=30;
	};
	class jsrs_wpn_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=75;
		qfactor=1;
		innerrange=50;
		range=1500;
		powerfactor=15;
	};
	class jsrs_wpn_echo_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=500;
		qfactor=1;
		innerrange=30;
		range=1000;
		powerfactor=12;
	};
	class jsrs_wpn_pistol_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=200;
		qfactor=1;
		innerrange=5;
		range=800;
		powerfactor=2;
	};
	class jsrs_wpn_smg_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=225;
		qfactor=1;
		innerrange=7;
		range=900;
		powerfactor=5;
	};
	class jsrs_wpn_rifle_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=250;
		qfactor=1;
		innerrange=15;
		range=1000;
		powerfactor=10;
	};
	class jsrs_wpn_mg_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=275;
		qfactor=1;
		innerrange=20;
		range=1250;
		powerfactor=15;
	};
	class jsrs_wpn_sniper_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=300;
		qfactor=1;
		innerrange=30;
		range=1500;
		powerfactor=20;
	};
	class jsrs_wpn_veh_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=180;
		qfactor=0.5;
		innerrange=25;
		range=1800;
		powerfactor=50;
	};
	class jsrs_exp_small_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=190;
		qfactor=1;
		innerrange=25;
		range=1000;
		powerfactor=32;
	};
	class jsrs_exp_medium_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=165;
		qfactor=1;
		innerrange=30;
		range=2000;
		powerfactor=32;
	};
	class jsrs_exp_big_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=150;
		qfactor=1;
		innerrange=75;
		range=3000;
		powerfactor=32;
	};
	class jsrs_exp_huge_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=250;
		qfactor=1;
		innerrange=5000;
		range=5000;
		powerfactor=4;
	};
	class jsrs_envi_thunder_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=250;
		qfactor=1;
		innerrange=2000;
		range=4000;
		powerfactor=16;
	};
};
class cfgMods
{
	author="LordJarhead";
	timepacked="1535151892";
};
