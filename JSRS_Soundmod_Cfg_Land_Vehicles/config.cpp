class cfgpatches
{
	class jsrs_soundmod_landvehicles
	{
		units[]={};
		weapons[]={};
		requiredversion=0.1;
		requiredaddons[]=
		{
			"a3_soft_f",
			"a3_sounds_f",
			"a3_soft_f_exp",
			"a3_sounds_f_exp"
		};
		version="1";
		projectname="jsrs - soundmod";
		author="lordjarhead";
	};
};
class cfgsoundsets
{
	class jsrs_engine_base_ext_soundset
	{
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		distancefilter="jsrs_vehicle_exterior_distancefilter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.5;
		obstructionfactor=0.30000001;
		volumefactor=1;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_base_int_soundset
	{
		sound3dprocessingtype="vehicleint_front_3dprocessingtype";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumefactor=1;
		spatial=0;
		loop=1;
	};
	class jsrs_engine_mrap_base_ext_soundset
	{
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.5;
		obstructionfactor=0.30000001;
		volumefactor=1;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_mrap_base_int_soundset
	{
		sound3dprocessingtype="vehicleint_front_3dprocessingtype";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumefactor=1;
		spatial=0;
		loop=1;
	};
	class jsrs_engine_apc_base_ext_soundset
	{
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.5;
		obstructionfactor=0.30000001;
		volumefactor=1;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_apc_base_int_soundset
	{
		sound3dprocessingtype="vehicleint_front_3dprocessingtype";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumefactor=1;
		spatial=0;
		loop=1;
	};
	class jsrs_engine_tank_base_ext_soundset
	{
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.5;
		obstructionfactor=0.30000001;
		volumefactor=1;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_tank_base_int_soundset
	{
		sound3dprocessingtype="vehicleint_front_3dprocessingtype";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumefactor=1;
		spatial=0;
		loop=1;
	};
	class jsrs_base_tires_ext_soundset
	{
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		occlusionfactor=0.5;
		obstructionfactor=0.30000001;
		volumefactor=1;
		spatial=1;
		loop=1;
	};
	class jsrs_base_tires_int_soundset
	{
		sound3dprocessingtype="vehicleint_middle_3dprocessingtype";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumefactor=1;
		spatial=0;
		loop=1;
	};
	class jsrs_base_tires_open_soundset
	{
		sound3dprocessingtype="vehicleint_middle_3dprocessingtype";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		volumefactor=1;
		spatial=0;
		loop=1;
	};
	class jsrs_base_tracks_ext_soundset
	{
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.5;
		obstructionfactor=0.30000001;
		volumefactor=1;
		spatial=1;
		loop=1;
	};
	class jsrs_base_tracks_int_soundset
	{
		sound3dprocessingtype="vehicleint_middle_3dprocessingtype";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumefactor=1;
		spatial=0;
		loop=1;
	};
	class jsrs_base_drive_water_ext_soundset
	{
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.5;
		obstructionfactor=0.30000001;
		volumefactor=1;
		spatial=1;
		loop=1;
	};
	class jsrs_base_drive_water_int_soundset
	{
		sound3dprocessingtype="vehicleint_middle_3dprocessingtype";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumefactor=1;
		spatial=0;
		loop=1;
	};
	class jsrs_vehicle_base_body_int_soundset
	{
		sound3dprocessingtype="vehicleint_middle_3dprocessingtype";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumefactor=1;
		spatial=0;
		loop=1;
	};
	class jsrs_vehicle_base_body_open_soundset
	{
		sound3dprocessingtype="vehicleint_middle_3dprocessingtype";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		volumefactor=1;
		spatial=0;
		loop=1;
	};
	class jsrs_vehicle_base_body_ext_soundset
	{
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		occlusionfactor=0.5;
		obstructionfactor=0.30000001;
		volumefactor=1;
		spatial=1;
		loop=1;
	};
	class jsrs_tires_movement_dirt_int_01_soundset
	{
		volumefactor=0.80000001;
		spatial=0;
		loop=1;
		sound3dprocessingtype="vehicleint_middle_3dprocessingtype";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
	};
	class jsrs_tires_movement_dirt_ext_01_soundset
	{
		volumefactor=0.80000001;
		spatial=1;
		loop=1;
		volumecurve="jsrs_vehicle_vl_sin";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		occlusionfactor=0.5;
		obstructionfactor=0.30000001;
	};
	class jsrs_tracks_surface_movement_int_settings
	{
		volumefactor=0.2;
		spatial=0;
		loop=1;
		sound3dprocessingtype="vehicleint_middle_3dprocessingtype";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
	};
	class jsrs_tracks_surface_movement_ext_settings
	{
		volumefactor=0.40000001;
		spatial=1;
		loop=1;
		volumecurve="jsrs_vehicle_vl_sin";
		distancefilter="jsrs_vehicle_exterior_attenuation_distance";
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		occlusionfactor=0.5;
		obstructionfactor=0.30000001;
	};
	class jsrs_offroad_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_offroad_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_offroad_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_offroad_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_offroad_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_offroad_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_offroad_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_offroad_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_offroad_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_offroad_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_offroad_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_offroad_02_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_02_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_offroad_02_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_02_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_offroad_02_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_02_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_offroad_02_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_02_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_offroad_02_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_offroad_02_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_offroad_02_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_02_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_offroad_02_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_02_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_offroad_02_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_offroad_02_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_offroad_02_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_offroad_02_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_lsv_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_lsv_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_lsv_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.60000002;
	};
	class jsrs_lsv_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_lsv_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_lsv_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_lsv_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_lsv_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_lsv_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_lsv_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_lsv_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_lsv_02_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_02_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_lsv_02_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_02_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_lsv_02_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_02_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.40000001;
	};
	class jsrs_lsv_02_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_02_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_lsv_02_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_lsv_02_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_lsv_02_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_02_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_lsv_02_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_02_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_lsv_02_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_lsv_02_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_lsv_02_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_lsv_02_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_suv_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_suv_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_suv_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_suv_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_suv_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_suv_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_suv_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_suv_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_suv_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_suv_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_suv_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_suv_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_suv_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_suv_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_suv_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_suv_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_suv_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_suv_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_hatchback_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_hatchback_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_hatchback_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_hatchback_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_hatchback_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_hatchback_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_hatchback_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_hatchback_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_hatchback_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_hatchback_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_hatchback_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_hatchback_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_hatchback_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_hatchback_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_hatchback_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_hatchback_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_hatchback_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_hatchback_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_quadbike_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_quadbike_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_quadbike_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_quadbike_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_quadbike_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_quadbike_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_quadbike_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_quadbike_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_quadbike_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_quadbike_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_quadbike_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_quadbike_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_quadbike_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_quadbike_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_quadbike_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_quadbike_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_quadbike_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_quadbike_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_van_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_van_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_van_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_van_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_van_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_van_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_van_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_van_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_van_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_van_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_van_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_van_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_van_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_van_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_van_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_van_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_van_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_van_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_truck_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_truck_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_truck_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.55000001;
	};
	class jsrs_truck_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_truck_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_truck_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_truck_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_truck_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.80000001;
	};
	class jsrs_truck_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Back_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_truck_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_truck_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Back_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_wheeled_apc_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_wheeled_apc_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_wheeled_apc_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_wheeled_apc_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_wheeled_apc_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_wheeled_apc_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_wheeled_apc_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_apc_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_wheeled_apc_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_apc_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_wheeled_apc_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Middle_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_wheeled_apc_01_water_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_01_water_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_wheeled_apc_01_water_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_01_water_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_apc_02_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_02_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_wheeled_apc_02_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_02_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_wheeled_apc_02_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_02_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_wheeled_apc_02_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_02_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_wheeled_apc_02_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_wheeled_apc_02_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_wheeled_apc_02_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_02_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_apc_02_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_02_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_wheeled_apc_02_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_02_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_apc_02_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_wheeled_apc_02_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Middle_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_wheeled_apc_02_water_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_02_water_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_wheeled_apc_02_water_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_02_water_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_apc_03_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_03_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_wheeled_apc_03_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_03_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_wheeled_apc_03_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_03_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_wheeled_apc_03_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_03_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_wheeled_apc_03_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_wheeled_apc_03_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_wheeled_apc_03_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_03_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_apc_03_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_03_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_wheeled_apc_03_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_03_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_apc_03_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_wheeled_apc_03_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Middle_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_wheeled_apc_03_water_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_03_water_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_wheeled_apc_03_water_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_apc_03_water_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_tracked_apc_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_tracked_apc_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_tracked_apc_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_tracked_apc_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_tracked_apc_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_tracked_apc_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_tracked_apc_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_tracked_apc_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_tracked_apc_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_tracked_apc_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_tracked_apc_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Middle_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_tracked_apc_02_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_02_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_tracked_apc_02_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_02_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_tracked_apc_02_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_02_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.85000002;
	};
	class jsrs_tracked_apc_02_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_02_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_tracked_apc_02_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_tracked_apc_02_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_tracked_apc_02_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_02_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_tracked_apc_02_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_02_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_tracked_apc_02_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_02_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_tracked_apc_02_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_tracked_apc_02_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Middle_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_tracked_apc_03_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_03_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_tracked_apc_03_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_03_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_tracked_apc_03_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_03_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_tracked_apc_03_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_03_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_tracked_apc_03_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_tracked_apc_03_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_tracked_apc_03_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_03_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_tracked_apc_03_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_03_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_tracked_apc_03_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_apc_03_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_tracked_apc_03_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_tracked_apc_03_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Middle_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_truck_02_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_02_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_truck_02_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_02_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_truck_02_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_02_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.55000001;
	};
	class jsrs_truck_02_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_02_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_truck_02_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_truck_02_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_truck_02_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_02_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_truck_02_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_02_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.57999998;
	};
	class jsrs_truck_02_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_02_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Back_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_truck_02_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_truck_02_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Back_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_truck_03_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_03_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_truck_03_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_03_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_truck_03_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_03_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.55000001;
	};
	class jsrs_truck_03_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_03_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_truck_03_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_truck_03_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_truck_03_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_03_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_truck_03_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_03_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.57999998;
	};
	class jsrs_truck_03_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_truck_03_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Back_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_truck_03_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_truck_03_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Back_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_mrap_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mrap_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_mrap_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_mrap_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mrap_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mrap_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_mrap_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_mrap_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mrap_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_mrap_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mrap_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_mrap_02_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_02_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mrap_02_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_02_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_mrap_02_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_02_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.64999998;
	};
	class jsrs_mrap_02_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_02_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mrap_02_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mrap_02_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_mrap_02_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_02_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_mrap_02_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_02_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_mrap_02_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_02_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_mrap_02_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mrap_02_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_mrap_03_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_03_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mrap_03_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_03_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_mrap_03_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_03_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_mrap_03_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_03_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mrap_03_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mrap_03_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_mrap_03_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_03_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_mrap_03_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_03_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mrap_03_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_03_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Front_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_mrap_03_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mrap_03_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Front_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_mrap_03_water_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_03_water_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_mrap_03_water_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_03_water_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_mbt_01_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_01_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mbt_01_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_01_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.15000001;
	};
	class jsrs_mbt_01_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_01_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.85000002;
	};
	class jsrs_mbt_01_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_01_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_mbt_01_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mbt_01_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_mbt_01_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_01_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_mbt_01_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_01_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mbt_01_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_01_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.80000001;
	};
	class jsrs_mbt_01_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mbt_01_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Middle_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_mbt_02_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_02_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mbt_02_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_02_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mbt_02_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_02_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.85000002;
	};
	class jsrs_mbt_02_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_02_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_mbt_02_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mbt_02_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_mbt_02_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_02_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_mbt_02_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_02_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mbt_02_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_02_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_mbt_02_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mbt_02_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Middle_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_mbt_03_idle_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_03_idle_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mbt_03_low_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_03_low_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mbt_03_high_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_03_high_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.85000002;
	};
	class jsrs_mbt_03_distance_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_03_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_mbt_03_start_exterior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mbt_03_start_exterior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleExterior_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumefactor=0.5;
		spatial=1;
		loop=0;
	};
	class jsrs_mbt_03_idle_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_03_idle_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_mbt_03_low_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_03_low_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_mbt_03_high_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mbt_03_high_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_mbt_03_start_interior_soundSet
	{
		soundShaders[]=
		{
			"jsrs_mbt_03_start_interior_soundshader"
		};
		playTrigger="((thrust factor[0,0.5])* (((abs(speed)) factor[0,5]) - 0.1))";
		posOffset[]={0,0,0};
		distanceFilter="jsrs_vehicle_interior_attenuation_filter";
		sound3DProcessingType="jsrs_VehicleInterior_Middle_prc";
		volumeCurve="jsrs_vehicle_vl_sin";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class jsrs_mrap_water_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_water_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_mrap_water_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_mrap_water_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_tank_water_exterior_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tank_water_exterior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_tank_water_interior_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tank_water_interior_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_driving_noises_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_driving_noises_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_offroad_driving_noises_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_offroad_driving_noises_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_tracked_rolling_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_rolling_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_tracked_offroad_rolling_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tracked_offroad_rolling_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_windy_open_driving_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_windy_open_driving_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_vehicle_interior_silent_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_vehicle_interior_silent_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_vehicle_interior_noisy_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_vehicle_interior_noisy_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_light_vehicle_rain_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_light_vehicle_rain_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_light_vehicle_rain_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_light_vehicle_rain_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_heavy_vehicle_rain_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_heavy_vehicle_rain_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_heavy_vehicle_rain_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_heavy_vehicle_rain_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_light_vehicle_water_moving_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_light_vehicle_water_moving_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_light_vehicle_water_moving_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_light_vehicle_water_moving_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_medium_vehicle_water_moving_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_medium_vehicle_water_moving_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_medium_vehicle_water_moving_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_medium_vehicle_water_moving_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_heavy_vehicle_water_moving_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_heavy_vehicle_water_moving_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_heavy_vehicle_water_moving_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_heavy_vehicle_water_moving_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_light_rattle_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_light_rattle_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_light_offroad_rattle_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_light_offroad_rattle_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_light_rattle_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_light_rattle_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_light_offroad_rattle_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_light_offroad_rattle_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_medium_rattle_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_medium_rattle_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_medium_offroad_rattle_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_medium_offroad_rattle_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_medium_rattle_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_medium_rattle_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_medium_offroad_rattle_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_medium_offroad_rattle_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_heavy_rattle_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_heavy_rattle_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_heavy_offroad_rattle_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_heavy_offroad_rattle_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_heavy_rattle_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_heavy_rattle_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_wheeled_heavy_offroad_rattle_ext_soundset: jsrs_vehicle_base_body_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_wheeled_heavy_offroad_rattle_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_tracked_rattle_ext_soundset: jsrs_base_tracks_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_tracked_rattle_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_tracked_rattle_int_soundset: jsrs_base_tracks_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_tracked_rattle_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=1;
	};
	class jsrs_tires_close_dry_soundset: jsrs_base_tires_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_close_dry_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_tires_close_wet_soundset: jsrs_base_tires_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_close_wet_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_tires_distance_soundset: jsrs_base_tires_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_distance_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_tires_asphalt_slow_ext_soundset: jsrs_base_tires_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_asphalt_slow_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_tires_asphalt_fast_ext_soundset: jsrs_base_tires_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_asphalt_fast_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_tires_offroad_slow_ext_soundset: jsrs_base_tires_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_offroad_slow_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.64999998;
	};
	class jsrs_tires_offroad_fast_ext_soundset: jsrs_base_tires_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_offroad_fast_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_tires_grass_ext_soundset: jsrs_base_tires_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_grass_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.75;
	};
	class jsrs_tires_asphalt_slow_int_soundset: jsrs_base_tires_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_asphalt_slow_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.25;
	};
	class jsrs_tires_asphalt_fast_int_soundset: jsrs_base_tires_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_asphalt_fast_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_tires_offroad_slow_int_soundset: jsrs_base_tires_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_offroad_slow_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_tires_offroad_fast_int_soundset: jsrs_base_tires_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_offroad_fast_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.44999999;
	};
	class jsrs_tires_grass_int_soundset: jsrs_base_tires_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_tires_grass_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_tracks_slow_ext_soundset: jsrs_base_tracks_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_tracks_slow_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_tracks_fast_ext_soundset: jsrs_base_tracks_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_tracks_fast_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_tracks_slow_int_soundset: jsrs_base_tracks_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_tracks_slow_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.80000001;
	};
	class jsrs_tracks_fast_int_soundset: jsrs_base_tracks_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_tracks_fast_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.94999999;
	};
	class jsrs_tracks_grass_ext_soundset: jsrs_base_tracks_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_tracks_grass_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_tracks_grass_int_soundset: jsrs_base_tracks_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_tracks_grass_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.85000002;
	};
	class jsrs_tracks_dirt_ext_soundset: jsrs_base_tracks_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_tracks_dirt_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_tracks_dirt_int_soundset: jsrs_base_tracks_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_tracks_dirt_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.85000002;
	};
	class jsrs_light_tracks_slow_ext_soundset: jsrs_base_tracks_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_light_tracks_slow_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_light_tracks_fast_ext_soundset: jsrs_base_tracks_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_light_tracks_fast_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_light_tracks_slow_int_soundset: jsrs_base_tracks_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_light_tracks_slow_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.80000001;
	};
	class jsrs_light_tracks_fast_int_soundset: jsrs_base_tracks_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_light_tracks_fast_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.94999999;
	};
	class jsrs_light_tracks_grass_ext_soundset: jsrs_base_tracks_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_light_tracks_grass_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_light_tracks_grass_int_soundset: jsrs_base_tracks_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_light_tracks_grass_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.85000002;
	};
	class jsrs_light_tracks_dirt_ext_soundset: jsrs_base_tracks_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_light_tracks_dirt_ext_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_light_tracks_dirt_int_soundset: jsrs_base_tracks_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_light_tracks_dirt_int_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_Middle_prc";
		posoffset[]={0,0,0};
		volumefactor=0.85000002;
	};
	class jsrs_engine_exhaust_1_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_1_soundshader"
		};
		shape="RearSemispace60";
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.75;
		obstructionfactor=0.75;
		volumefactor=0.5;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_exhaust_2_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_2_soundshader"
		};
		shape="RearSemispace60";
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.75;
		obstructionfactor=0.75;
		volumefactor=0.5;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_exhaust_3_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_3_soundshader"
		};
		shape="RearSemispace60";
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.75;
		obstructionfactor=0.75;
		volumefactor=0.5;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_exhaust_4_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_4_soundshader"
		};
		shape="RearSemispace60";
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.75;
		obstructionfactor=0.75;
		volumefactor=0.5;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_exhaust_5_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_5_soundshader"
		};
		shape="RearSemispace60";
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.75;
		obstructionfactor=0.75;
		volumefactor=0.5;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_exhaust_6_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_6_soundshader"
		};
		shape="RearSemispace60";
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.75;
		obstructionfactor=0.75;
		volumefactor=0.5;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_exhaust_7_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_7_soundshader"
		};
		shape="RearSemispace60";
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.75;
		obstructionfactor=0.75;
		volumefactor=0.5;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_exhaust_8_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_8_soundshader"
		};
		shape="RearSemispace60";
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.75;
		obstructionfactor=0.75;
		volumefactor=0.5;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_exhaust_9_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_9_soundshader"
		};
		shape="RearSemispace60";
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.75;
		obstructionfactor=0.75;
		volumefactor=0.5;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_exhaust_10_ext_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_10_soundshader"
		};
		shape="RearSemispace60";
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		distancefilter="jsrs_vehicle_interior_attenuation_filter";
		volumecurve="jsrs_vehicle_vl_sin";
		occlusionfactor=0.75;
		obstructionfactor=0.75;
		volumefactor=0.5;
		spatial=1;
		loop=1;
	};
	class jsrs_engine_exhaust_1_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_1_soundshader"
		};
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_engine_exhaust_2_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_2_soundshader"
		};
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_engine_exhaust_3_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_3_soundshader"
		};
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_engine_exhaust_4_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_4_soundshader"
		};
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_engine_exhaust_5_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_5_soundshader"
		};
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_engine_exhaust_6_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_6_soundshader"
		};
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_engine_exhaust_7_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_7_soundshader"
		};
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_engine_exhaust_8_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_8_soundshader"
		};
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_engine_exhaust_9_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_9_soundshader"
		};
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_engine_exhaust_10_int_soundset: jsrs_vehicle_base_body_int_soundset
	{
		soundShaders[]=
		{
			"jsrs_engine_exhaust_10_soundshader"
		};
		sound3dprocessingtype="VehicleInt_Back_3DProcessingType";
		posoffset[]={0,0,0};
		volumefactor=0.5;
	};
	class jsrs_gear_exterior_01_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_gear_exterior_01_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_gear_interior_01_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_gear_interior_01_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_gear_exterior_02_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_gear_exterior_02_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_gear_interior_02_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_gear_interior_02_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_gear_exterior_03_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_gear_exterior_03_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_gear_interior_03_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_gear_interior_03_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_gear_exterior_04_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_gear_exterior_04_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_gear_interior_04_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_gear_interior_04_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
	class jsrs_gear_exterior_05_soundset: jsrs_engine_base_ext_soundset
	{
		soundshaders[]=
		{
			"jsrs_gear_exterior_05_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleExterior_prc";
		posoffset[]={0,0,0};
		volumefactor=0.34999999;
	};
	class jsrs_gear_interior_05_soundset: jsrs_engine_base_int_soundset
	{
		soundshaders[]=
		{
			"jsrs_gear_interior_05_soundshader"
		};
		sound3dprocessingtype="jsrs_VehicleInterior_back_prc";
		posoffset[]={0,0,0};
		volumefactor=0.69999999;
	};
};
class cfgsoundshaders
{
	class jsrs_offroad_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_offroad_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=50;
	};
	class jsrs_offroad_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_offroad_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_offroad_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_offroad_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_offroad_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_offroad_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_offroad_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_distance.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	3500) factor[(1500/	3500),(2000/	3500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_offroad_02_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	7000) factor[(100/	7000),(1500/	7000)])*0.25";
		volume="1*engineon*(((rpm/	7000) factor[(100/	7000),(600/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_offroad_02_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	7000) factor[(100/	7000),(1500/	7000)])*0.25";
		volume="1*engineon*(((rpm/	7000) factor[(100/	7000),(600/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
		range=50;
	};
	class jsrs_offroad_02_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_offroad_02_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=50;
	};
	class jsrs_offroad_02_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_offroad_02_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=50;
	};
	class jsrs_offroad_02_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_offroad_02_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_offroad_02_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_distance.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	7000) factor[(1000/	7000),(2000/	7000)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_lsv_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	7000) factor[(100/	7000),(1500/	7000)])*0.25";
		volume="1*engineon*(((rpm/	7000) factor[(100/	7000),(600/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_lsv_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	7000) factor[(100/	7000),(1500/	7000)])*0.25";
		volume="1*engineon*(((rpm/	7000) factor[(100/	7000),(600/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
		range=50;
	};
	class jsrs_lsv_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_lsv_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=50;
	};
	class jsrs_lsv_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_lsv_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=50;
	};
	class jsrs_lsv_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_lsv_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_lsv_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_distance.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	7000) factor[(1000/	7000),(2000/	7000)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_lsv_02_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	7000) factor[(100/	7000),(1500/	7000)])*0.25";
		volume="1*engineon*(((rpm/	7000) factor[(100/	7000),(600/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_lsv_02_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	7000) factor[(100/	7000),(1500/	7000)])*0.25";
		volume="1*engineon*(((rpm/	7000) factor[(100/	7000),(600/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
		range=50;
	};
	class jsrs_lsv_02_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_lsv_02_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=50;
	};
	class jsrs_lsv_02_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_lsv_02_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	7000) factor[(1400/	7000),(1800/	7000)])";
		range=50;
	};
	class jsrs_lsv_02_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_lsv_02_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_lsv_02_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	7000) factor[(500/	7000),(7000/	7000)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	7000) factor[(1000/	7000),(2000/	7000)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_suv_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	6000) factor[(100/	6000),(600/	6000)])*0.25";
		volume="1*engineon*(((rpm/	6000) factor[(100/	6000),(600/	6000)])	*	((rpm/	6000) factor[(1000/	6000),(600/	6000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_suv_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	6000) factor[(100/	6000),(600/	6000)])*0.25";
		volume="1*engineon*(((rpm/	6000) factor[(100/	6000),(600/	6000)])	*	((rpm/	6000) factor[(1000/	6000),(600/	6000)]))";
		range=50;
	};
	class jsrs_suv_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	6000) factor[(600/	6000),(6000/	6000)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	6000) factor[(600/	6000),(1000/	6000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_suv_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	6000) factor[(600/	6000),(6000/	6000)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	6000) factor[(600/	6000),(1000/	6000)])";
		range=50;
	};
	class jsrs_suv_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	6000) factor[(600/	6000),(6000/	6000)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	6000) factor[(600/	6000),(1000/	6000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_suv_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	6000) factor[(600/	6000),(6000/	6000)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	6000) factor[(600/	6000),(1000/	6000)])";
		range=50;
	};
	class jsrs_suv_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_suv_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_suv_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	6000) factor[(500/	6000),(6000/	6000)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	6000) factor[(500/	6000),(2000/	6000)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_hatchback_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	6900) factor[(100/	6900),(600/	6900)])*0.25";
		volume="1*engineon*(((rpm/	6900) factor[(100/	6900),(600/	6900)])	*	((rpm/	6900) factor[(1000/	6900),(600/	6900)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_hatchback_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	6900) factor[(100/	6900),(600/	6900)])*0.25";
		volume="1*engineon*(((rpm/	6900) factor[(100/	6900),(600/	6900)])	*	((rpm/	6900) factor[(1000/	6900),(600/	6900)]))";
		range=50;
	};
	class jsrs_hatchback_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	6900) factor[(600/	6900),(6900/	6900)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	6900) factor[(600/	6900),(1000/	6900)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_hatchback_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	6900) factor[(600/	6900),(6900/	6900)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	6900) factor[(600/	6900),(1000/	6900)])";
		range=50;
	};
	class jsrs_hatchback_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	6900) factor[(600/	6900),(6900/	6900)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	6900) factor[(600/	6900),(1000/	6900)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_hatchback_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	6900) factor[(600/	6900),(6900/	6900)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	6900) factor[(600/	6900),(1000/	6900)])";
		range=50;
	};
	class jsrs_hatchback_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_hatchback_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_hatchback_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	6900) factor[(500/	6900),(6900/	6900)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	6900) factor[(500/	6900),(2000/	6900)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_quadbike_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2000) factor[(100/	2000),(800/	2000)])*0.25";
		volume="1*engineon*(((rpm/	2000) factor[(100/	2000),(600/	2000)])	*	((rpm/	2000) factor[(800/	2000),(600/	2000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_quadbike_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2000) factor[(100/	2000),(800/	2000)])*0.25";
		volume="1*engineon*(((rpm/	2000) factor[(100/	2000),(600/	2000)])	*	((rpm/	2000) factor[(800/	2000),(600/	2000)]))";
		range=50;
	};
	class jsrs_quadbike_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	2000) factor[(600/	2000),(2000/	2000)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	2000) factor[(600/	2000),(800/	2000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_quadbike_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	2000) factor[(600/	2000),(2000/	2000)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	2000) factor[(600/	2000),(800/	2000)])";
		range=50;
	};
	class jsrs_quadbike_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	2000) factor[(600/	2000),(2000/	2000)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	2000) factor[(600/	2000),(800/	2000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_quadbike_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	2000) factor[(600/	2000),(2000/	2000)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	2000) factor[(600/	2000),(800/	2000)])";
		range=50;
	};
	class jsrs_quadbike_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_quadbike_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_quadbike_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2000) factor[(500/	2000),(2000/	2000)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	2000) factor[(500/	2000),(2000/	2000)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_van_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(800/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(800/	3500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_van_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(800/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(800/	3500)]))";
		range=50;
	};
	class jsrs_van_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(800/	3500),(1400/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_van_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(800/	3500),(1400/	3500)])";
		range=50;
	};
	class jsrs_van_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(800/	3500),(1400/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_van_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(800/	3500),(1400/	3500)])";
		range=50;
	};
	class jsrs_van_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_van_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_van_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(500/	3500),(3500/	3500)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	3500) factor[(500/	3500),(1400/	3500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_truck_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="0.5*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_truck_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=50;
	};
	class jsrs_truck_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="0.6*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_truck_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_truck_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="0.7*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_truck_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_truck_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_truck_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_truck_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(1500/	3500),(2000/	3500)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	3500) factor[(1500/	3500),(2000/	3500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_truck_02_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_truck_02_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=50;
	};
	class jsrs_truck_02_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_truck_02_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_truck_02_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_truck_02_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_truck_02_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_truck_02_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_truck_02_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(1500/	3500),(2000/	3500)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	3500) factor[(1500/	3500),(2000/	3500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_truck_03_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\truck_03_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_truck_03_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\truck_03_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=50;
	};
	class jsrs_truck_03_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\truck_03_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_truck_03_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\truck_03_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_truck_03_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\truck_03_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_truck_03_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\truck_03_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_truck_03_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_truck_03_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_truck_03_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_03\truck_03_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(1500/	3500),(2000/	3500)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	3500) factor[(1500/	3500),(2000/	3500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_mrap_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\mrap_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	4500) factor[(100/	4500),(1400/	4500)])*0.25";
		volume="1*engineon*(((rpm/	4500) factor[(100/	4500),(600/	4500)])	*	((rpm/	4500) factor[(1400/	4500),(800/	4500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_mrap_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\mrap_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	4500) factor[(100/	4500),(1400/	4500)])*0.25";
		volume="1*engineon*(((rpm/	4500) factor[(100/	4500),(600/	4500)])	*	((rpm/	4500) factor[(1400/	4500),(800/	4500)]))";
		range=50;
	};
	class jsrs_mrap_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\mrap_01_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	4500) factor[(600/	4500),(4500/	4500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	4500) factor[(800/	4500),(1400/	4500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_mrap_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\mrap_01_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	4500) factor[(600/	4500),(4500/	4500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	4500) factor[(800/	4500),(1400/	4500)])";
		range=50;
	};
	class jsrs_mrap_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\mrap_01_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	4500) factor[(600/	4500),(4500/	4500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	4500) factor[(800/	4500),(1400/	4500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{30,0.75},
			{100,0.34999999},
			{300,0.25},
			{500,0.2},
			{1000,0.15000001},
			{1400,0}
		};
	};
	class jsrs_mrap_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\mrap_01_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	4500) factor[(600/	4500),(4500/	4500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	4500) factor[(800/	4500),(1400/	4500)])";
		range=50;
	};
	class jsrs_mrap_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mrap_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mrap_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_01\mrap_01_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	4500) factor[(1500/	4500),(2000/	4500)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	4500) factor[(1500/	4500),(2000/	4500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_mrap_02_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\mrap_02_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	4500) factor[(100/	4500),(1400/	4500)])*0.25";
		volume="1*engineon*(((rpm/	4500) factor[(100/	4500),(600/	4500)])	*	((rpm/	4500) factor[(1400/	4500),(800/	4500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_mrap_02_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\mrap_02_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	4500) factor[(100/	4500),(1400/	4500)])*0.25";
		volume="1*engineon*(((rpm/	4500) factor[(100/	4500),(600/	4500)])	*	((rpm/	4500) factor[(1400/	4500),(800/	4500)]))";
		range=50;
	};
	class jsrs_mrap_02_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\mrap_02_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	4500) factor[(600/	4500),(4500/	4500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	4500) factor[(800/	4500),(1400/	4500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_mrap_02_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\mrap_02_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	4500) factor[(600/	4500),(4500/	4500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	4500) factor[(800/	4500),(1400/	4500)])";
		range=50;
	};
	class jsrs_mrap_02_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\mrap_02_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	4500) factor[(600/	4500),(4500/	4500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	4500) factor[(800/	4500),(1400/	4500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{30,0.75},
			{100,0.34999999},
			{300,0.25},
			{500,0.2},
			{1000,0.15000001},
			{1400,0}
		};
	};
	class jsrs_mrap_02_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\mrap_02_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	4500) factor[(600/	4500),(4500/	4500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	4500) factor[(800/	4500),(1400/	4500)])";
		range=50;
	};
	class jsrs_mrap_02_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mrap_02_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mrap_02_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_02\mrap_02_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	4500) factor[(1500/	4500),(2000/	4500)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	4500) factor[(1500/	4500),(2000/	4500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_mrap_03_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\mrap_03_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(1400/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(800/	3500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_mrap_03_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\mrap_03_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(1400/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(800/	3500)]))";
		range=50;
	};
	class jsrs_mrap_03_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\mrap_03_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(800/	3500),(1400/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_mrap_03_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\mrap_03_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(800/	3500),(1400/	3500)])";
		range=50;
	};
	class jsrs_mrap_03_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\mrap_03_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(800/	3500),(1400/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{30,0.75},
			{100,0.34999999},
			{300,0.25},
			{500,0.2},
			{1000,0.15000001},
			{1400,0}
		};
	};
	class jsrs_mrap_03_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\mrap_03_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(800/	3500),(1400/	3500)])";
		range=50;
	};
	class jsrs_mrap_03_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mrap_03_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mrap_03_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\mrap_03_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(1500/	3500),(2000/	3500)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	3500) factor[(1500/	3500),(2000/	3500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_mrap_03_water_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\mrap_03_water_ext.ogg",
				1
			}
		};
		frequency=1;
		volume="1.4*engineon*thrust*water";
		range=300;
	};
	class jsrs_mrap_03_water_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mrap_03\mrap_03_water_int.ogg",
				1
			}
		};
		frequency=1;
		volume="1.4*engineon*thrust*water";
		range=50;
	};
	class jsrs_wheeled_apc_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2800) factor[(100/	2800),(600/	2800)])*0.25";
		volume="1*engineon*(((rpm/	2800) factor[(100/	2800),(600/	2800)])	*	((rpm/	2800) factor[(1000/	2800),(600/	2800)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_wheeled_apc_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2800) factor[(100/	2800),(600/	2800)])*0.25";
		volume="1*engineon*(((rpm/	2800) factor[(100/	2800),(600/	2800)])	*	((rpm/	2800) factor[(1000/	2800),(600/	2800)]))";
		range=50;
	};
	class jsrs_wheeled_apc_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	2800) factor[(600/	2800),(2800/	2800)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	2800) factor[(600/	2800),(1000/	2800)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_wheeled_apc_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	2800) factor[(600/	2800),(2800/	2800)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	2800) factor[(600/	2800),(1000/	2800)])";
		range=50;
	};
	class jsrs_wheeled_apc_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_high_ext.ogg",
				1
			}
		};
		frequency="0.25	+	((rpm/	2800) factor[(600/	2800),(2800/	2800)])*0.75";
		volume="1.4*engineon*thrust*((rpm/	2800) factor[(600/	2800),(1000/	2800)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_wheeled_apc_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_high_int.ogg",
				1
			}
		};
		frequency="0.25	+	((rpm/	2800) factor[(600/	2800),(2800/	2800)])*0.75";
		volume="1.4*engineon*thrust*((rpm/	2800) factor[(600/	2800),(1000/	2800)])";
		range=50;
	};
	class jsrs_wheeled_apc_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_wheeled_apc_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_wheeled_apc_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2800) factor[(1500/	2800),(2000/	2800)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	2800) factor[(1500/	2800),(2000/	2800)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_wheeled_apc_01_water_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_water_ext.ogg",
				1
			}
		};
		frequency=1;
		volume="1.4*engineon*thrust*water";
		range=300;
	};
	class jsrs_wheeled_apc_01_water_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_water_int.ogg",
				1
			}
		};
		frequency=1;
		volume="1.4*engineon*thrust*water";
		range=50;
	};
	class jsrs_wheeled_apc_02_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_wheeled_apc_02_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=50;
	};
	class jsrs_wheeled_apc_02_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_wheeled_apc_02_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_wheeled_apc_02_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_wheeled_apc_02_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_wheeled_apc_02_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_wheeled_apc_02_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_wheeled_apc_02_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(1500/	3500),(2000/	3500)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	3500) factor[(1500/	3500),(2000/	3500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_wheeled_apc_02_water_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_water_ext.ogg",
				1
			}
		};
		frequency=1;
		volume="1.4*engineon*thrust*water";
		range=300;
	};
	class jsrs_wheeled_apc_02_water_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_water_int.ogg",
				1
			}
		};
		frequency=1;
		volume="1.4*engineon*thrust*water";
		range=50;
	};
	class jsrs_wheeled_apc_03_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_wheeled_apc_03_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(100/	3500),(600/	3500)])*0.25";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(600/	3500)])	*	((rpm/	3500) factor[(1000/	3500),(600/	3500)]))";
		range=50;
	};
	class jsrs_wheeled_apc_03_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_low_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_wheeled_apc_03_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_low_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_wheeled_apc_03_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_wheeled_apc_03_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.95";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_wheeled_apc_03_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_wheeled_apc_03_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_wheeled_apc_03_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_distance.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(1500/	3500),(2000/	3500)])*0.25";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	3500) factor[(1500/	3500),(2000/	3500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_wheeled_apc_03_water_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_water_ext.ogg",
				1
			}
		};
		frequency=1;
		volume="1.4*engineon*thrust*water";
		range=300;
	};
	class jsrs_wheeled_apc_03_water_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_water_int.ogg",
				1
			}
		};
		frequency=1;
		volume="1.4*engineon*thrust*water";
		range=50;
	};
	class jsrs_tracked_apc_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\tracked_apc_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2640) factor[(100/	2640),(600/	2640)])*0.25";
		volume="1*engineon*(((rpm/	2640) factor[(100/	2640),(600/	2640)])	*	((rpm/	2640) factor[(1000/	2640),(600/	2640)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_tracked_apc_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\tracked_apc_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2640) factor[(100/	2640),(2600/	2640)])*0.25";
		volume="1*engineon*((rpm/	2640) factor[(100/	2640),(600/	2640)])";
		range=50;
	};
	class jsrs_tracked_apc_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\tracked_apc_01_low_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2640) factor[(600/	2640),(2640/	2640)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	2640) factor[(600/	2640),(1000/	2640)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tracked_apc_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\tracked_apc_01_low_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2640) factor[(600/	2640),(2640/	2640)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	2640) factor[(600/	2640),(1000/	2640)])";
		range=50;
	};
	class jsrs_tracked_apc_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\tracked_apc_01_high_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2640) factor[(600/	2640),(2640/	2640)])*0.35";
		volume="1.4*engineon*thrust*((rpm/	2640) factor[(600/	2640),(1000/	2640)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tracked_apc_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\tracked_apc_01_high_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2640) factor[(600/	2640),(2640/	2640)])*0.35";
		volume="1.4*engineon*thrust*((rpm/	2640) factor[(600/	2640),(1000/	2640)])";
		range=50;
	};
	class jsrs_tracked_apc_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_tracked_apc_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_tracked_apc_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_01\tracked_apc_01_distance.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2640) factor[(600/	2640),(2640/	2640)])*0.35";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	2640) factor[(600/	2640),(1000/	2640)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_tracked_apc_02_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\tracked_apc_02_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2300) factor[(600/	2300),(1250/	2300)])*0.35";
		volume="1*engineon*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(1250/	2300),(850/	2300)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_tracked_apc_02_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\tracked_apc_02_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2300) factor[(600/	2300),(2250/	2300)])*0.35";
		volume="1*engineon*((rpm/	2300) factor[(100/	2300),(200/	2300)])";
		range=50;
	};
	class jsrs_tracked_apc_02_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\tracked_apc_02_low_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	2300) factor[(850/	2300),(1300/	2300)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tracked_apc_02_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\tracked_apc_02_low_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	2300) factor[(850/	2300),(1300/	2300)])";
		range=50;
	};
	class jsrs_tracked_apc_02_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\tracked_apc_02_high_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*0.35";
		volume="1.4*engineon*thrust*((rpm/	2300) factor[(850/	2300),(1300/	2300)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tracked_apc_02_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\tracked_apc_02_high_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*0.35";
		volume="1.4*engineon*thrust*((rpm/	2300) factor[(850/	2300),(1300/	2300)])";
		range=50;
	};
	class jsrs_tracked_apc_02_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_tracked_apc_02_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_tracked_apc_02_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_02\tracked_apc_02_distance.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*0.35";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	2300) factor[(850/	2300),(1300/	2300)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_tracked_apc_03_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\tracked_apc_03_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2300) factor[(400/	2300),(900/	2300)])*0.35";
		volume="1*engineon*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(750/	2300),(700/	2300)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_tracked_apc_03_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\tracked_apc_03_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2300) factor[(400/	2300),(2200/	2300)])*0.35";
		volume="1*engineon*((rpm/	2300) factor[(100/	2300),(200/	2300)])";
		range=50;
	};
	class jsrs_tracked_apc_03_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\tracked_apc_03_low_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	2300) factor[(600/	2300),(1000/	2300)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tracked_apc_03_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\tracked_apc_03_low_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	2300) factor[(600/	2300),(1000/	2300)])";
		range=50;
	};
	class jsrs_tracked_apc_03_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\tracked_apc_03_high_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*0.35";
		volume="1.4*engineon*thrust*((rpm/	2300) factor[(600/	2300),(1000/	2300)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tracked_apc_03_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\tracked_apc_03_high_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*0.35";
		volume="1.4*engineon*thrust*((rpm/	2300) factor[(600/	2300),(1000/	2300)])";
		range=50;
	};
	class jsrs_tracked_apc_03_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_tracked_apc_03_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_tracked_apc_03_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\tracked_apc_03\tracked_apc_03_distance.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*0.35";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	2300) factor[(600/	2300),(1000/	2300)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_mbt_01_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\mbt_01_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(400/	3500),(900/	3500)])*0.35";
		volume="1*engineon*(((rpm/	3500) factor[(100/	3500),(200/	3500)])	*	((rpm/	3500) factor[(750/	3500),(700/	3500)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_mbt_01_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\mbt_01_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	3500) factor[(400/	3500),(2200/	3500)])*0.35";
		volume="1*engineon*((rpm/	3500) factor[(100/	3500),(200/	3500)])";
		range=50;
	};
	class jsrs_mbt_01_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\mbt_01_low_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_mbt_01_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\mbt_01_low_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_mbt_01_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\mbt_01_high_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.35";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_mbt_01_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\mbt_01_high_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.35";
		volume="1.4*engineon*thrust*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=50;
	};
	class jsrs_mbt_01_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mbt_01_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mbt_01_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_01\mbt_01_distance.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	3500) factor[(600/	3500),(3500/	3500)])*0.35";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	3500) factor[(600/	3500),(1000/	3500)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_mbt_02_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\mbt_02_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	6000) factor[(400/	6000),(900/	6000)])*0.35";
		volume="1*engineon*(((rpm/	6000) factor[(100/	6000),(200/	6000)])	*	((rpm/	6000) factor[(750/	6000),(700/	6000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_mbt_02_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\mbt_02_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	6000) factor[(400/	6000),(2200/	6000)])*0.35";
		volume="1*engineon*((rpm/	6000) factor[(100/	6000),(200/	6000)])";
		range=50;
	};
	class jsrs_mbt_02_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\mbt_02_low_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	6000) factor[(600/	6000),(6000/	6000)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	6000) factor[(600/	6000),(1000/	6000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_mbt_02_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\mbt_02_low_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	6000) factor[(600/	6000),(6000/	6000)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	6000) factor[(600/	6000),(1000/	6000)])";
		range=50;
	};
	class jsrs_mbt_02_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\mbt_02_high_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	6000) factor[(600/	6000),(6000/	6000)])*0.35";
		volume="1.4*engineon*thrust*((rpm/	6000) factor[(600/	6000),(1000/	6000)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_mbt_02_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\mbt_02_high_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	6000) factor[(600/	6000),(6000/	6000)])*0.35";
		volume="1.4*engineon*thrust*((rpm/	6000) factor[(600/	6000),(1000/	6000)])";
		range=50;
	};
	class jsrs_mbt_02_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mbt_02_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mbt_02_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_02\mbt_02_distance.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	6000) factor[(600/	6000),(6000/	6000)])*0.35";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	6000) factor[(600/	6000),(1000/	6000)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_mbt_03_idle_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\mbt_03_idle_ext.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2640) factor[(400/	2640),(1500/	2640)])*0.35";
		volume="1*engineon*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(1500/	2640),(1000/	2640)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_mbt_03_idle_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\mbt_03_idle_int.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	2640) factor[(400/	2640),(2600/	2640)])*0.35";
		volume="1*engineon*((rpm/	2640) factor[(100/	2640),(200/	2640)])";
		range=50;
	};
	class jsrs_mbt_03_low_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\mbt_03_low_ext.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2640) factor[(600/	2640),(2640/	2640)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	2640) factor[(700/	2640),(1500/	2640)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_mbt_03_low_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\mbt_03_low_int.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2640) factor[(600/	2640),(2640/	2640)])*0.35";
		volume="1*engineon* (1-thrust)*((rpm/	2640) factor[(700/	2640),(1500/	2640)])";
		range=50;
	};
	class jsrs_mbt_03_high_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\mbt_03_high_ext.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	2640) factor[(600/	2640),(2640/	2640)])*0.75";
		volume="1.4*engineon*thrust*((rpm/	2640) factor[(700/	2640),(1000/	2640)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_mbt_03_high_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\mbt_03_high_int.ogg",
				1
			}
		};
		frequency="0.5	+	((rpm/	2640) factor[(600/	2640),(2640/	2640)])*0.75";
		volume="1.4*engineon*thrust*((rpm/	2640) factor[(700/	2640),(1000/	2640)])";
		range=50;
	};
	class jsrs_mbt_03_start_exterior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\Burst_ext_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\Burst_ext_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\Burst_ext_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=100;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mbt_03_start_interior_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\Burst_int_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\Burst_int_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\Burst_int_3.ogg",
				1
			}
		};
		frequency="1 -  (0.09 * ((abs(latslipdrive)) factor [0.01,0.15]))";
		range=50;
		volume="engineon * 1 * 1.1 * (rpm factor[0,1])";
	};
	class jsrs_mbt_03_distance_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\mbt_03\mbt_03_distance.ogg",
				1
			}
		};
		frequency="0.85	+	((rpm/	2640) factor[(600/	2640),(2640/	2640)])*0.35";
		volume="1*engineon* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-35) max 35)/	95)])*((rpm/	2640) factor[(700/	2640),(1000/	2640)])";
		range=2000;
		rangecurve[]=
		{
			{0,0},
			{30,0.15000001},
			{70,0.5},
			{300,1},
			{2000,0}
		};
	};
	class jsrs_wheeled_driving_noises_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\wheeled_driving_noises_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\wheeled_driving_noises_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\wheeled_driving_noises_3.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1 *asphalt*(1-water)* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-7) max 7)/	95),(((-80) max 80)/	95)])";
		range=50;
	};
	class jsrs_wheeled_offroad_driving_noises_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\wheeled_offroad_driving_noises_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\wheeled_offroad_driving_noises_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\wheeled_offroad_driving_noises_3.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1 *(1-asphalt)*(1-water)* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-7) max 7)/	95),(((-80) max 80)/	95)])";
		range=50;
	};
	class jsrs_tracked_rolling_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\tracked_rolling_noises_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\tracked_rolling_noises_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\tracked_rolling_noises_3.ogg",
				1
			}
		};
		frequency="1* (abs(speed) factor [0, 8])";
		volume="1 * 1.5 * 1 *asphalt*(1-water)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-20) max 20)/	95)])";
		range=50;
	};
	class jsrs_tracked_offroad_rolling_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\tracked_offroad_rolling_noises_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\tracked_offroad_rolling_noises_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\tracked_offroad_rolling_noises_3.ogg",
				1
			}
		};
		frequency="1* (abs(speed) factor [0, 8])";
		volume="1 * 1.5 * 1 *(1-asphalt)*(1-water)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-20) max 20)/	95)])";
		range=50;
	};
	class jsrs_windy_open_driving_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\exterior\windy_open_driving_1.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1 *(1-water)* ((((-speed*3.6) max speed*3.6)/	95) factor[(((-7) max 7)/	95),(((-60) max 60)/	95)])";
		range=50;
	};
	class jsrs_light_vehicle_rain_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\exterior\light_vehicle_rain.ogg",
				1
			}
		};
		frequency=1;
		volume="1.5 * 1 * rain";
		range=50;
	};
	class jsrs_light_vehicle_rain_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\light_vehicle_rain.ogg",
				1
			}
		};
		frequency=1;
		volume="1.5 * 1 * rain";
		range=50;
	};
	class jsrs_heavy_vehicle_rain_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\exterior\heavy_vehicle_rain.ogg",
				1
			}
		};
		frequency=1;
		volume="1.5 * 1 * rain";
		range=50;
	};
	class jsrs_heavy_vehicle_rain_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\heavy_vehicle_rain.ogg",
				1
			}
		};
		frequency=1;
		volume="1.5 * 1 * rain";
		range=50;
	};
	class jsrs_wheeled_light_rattle_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_light_rattle_int.ogg",
				1
			}
		};
		frequency=1;
		volume="2.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_wheeled_light_offroad_rattle_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_light_rattle_offroad_int.ogg",
				1
			}
		};
		frequency=1;
		volume="3.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [10, 40])";
		range=50;
	};
	class jsrs_wheeled_light_rattle_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_light_rattle_ext.ogg",
				1
			}
		};
		frequency=1;
		volume="2.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_wheeled_light_offroad_rattle_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_light_rattle_offroad_ext.ogg",
				1
			}
		};
		frequency=1;
		volume="3.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [10, 40])";
		range=50;
	};
	class jsrs_wheeled_medium_rattle_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_medium_rattle_int.ogg",
				1
			}
		};
		frequency=1;
		volume="2.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_wheeled_medium_offroad_rattle_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_medium_rattle_offroad_int.ogg",
				1
			}
		};
		frequency=1;
		volume="3.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [10, 40])";
		range=50;
	};
	class jsrs_wheeled_medium_rattle_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_medium_rattle_ext.ogg",
				1
			}
		};
		frequency=1;
		volume="2.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_wheeled_medium_offroad_rattle_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_medium_rattle_offroad_ext.ogg",
				1
			}
		};
		frequency=1;
		volume="3.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [10, 40])";
		range=50;
	};
	class jsrs_wheeled_heavy_rattle_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_heavy_rattle_int.ogg",
				1
			}
		};
		frequency=1;
		volume="2.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_wheeled_heavy_offroad_rattle_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_heavy_rattle_offroad_int.ogg",
				1
			}
		};
		frequency=1;
		volume="3.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [10, 40])";
		range=50;
	};
	class jsrs_wheeled_heavy_rattle_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_heavy_rattle_ext.ogg",
				1
			}
		};
		frequency=1;
		volume="2.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_wheeled_heavy_offroad_rattle_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\rattle\wheeled_heavy_rattle_offroad_ext.ogg",
				1
			}
		};
		frequency=1;
		volume="3.5 *(1-water)* ((damper0 factor [0.05,1 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [10, 40])";
		range=50;
	};
	class jsrs_tracked_rattle_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\heavy_tracked_ext_rattle.ogg",
				1
			}
		};
		frequency=1;
		volume="2 * 2 *(angvelocity max 0.04)*(speed factor[1, 5])";
		range=50;
	};
	class jsrs_tracked_rattle_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\heavy_tracked_int_rattle.ogg",
				1
			}
		};
		frequency=1;
		volume="2 * 2 *(angvelocity max 0.04)*(speed factor[1, 5])";
		range=50;
	};
	class jsrs_light_vehicle_water_moving_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\Noises\Exterior\light_vehicle_water_moving.ogg",
				1
			}
		};
		frequency="1* (speed factor [0, 10])";
		volume="2.5 *water * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_light_vehicle_water_moving_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\Noises\interior\light_vehicle_water_moving.ogg",
				1
			}
		};
		frequency="1* (speed factor [0, 10])";
		volume="2.5 *water * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_medium_vehicle_water_moving_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\Noises\Exterior\medium_vehicle_water_moving.ogg",
				1
			}
		};
		frequency="1* (speed factor [0, 10])";
		volume="2.5 *water * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_medium_vehicle_water_moving_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\Noises\interior\medium_vehicle_water_moving.ogg",
				1
			}
		};
		frequency="1* (speed factor [0, 10])";
		volume="2.5 *water * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_heavy_vehicle_water_moving_ext_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\Noises\Exterior\heavy_vehicle_water_moving.ogg",
				1
			}
		};
		frequency="1* (speed factor [0, 10])";
		volume="2.5 *water * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_heavy_vehicle_water_moving_int_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\Noises\interior\heavy_vehicle_water_moving.ogg",
				1
			}
		};
		frequency="1* (speed factor [0, 10])";
		volume="2.5 *water * (speed factor [0, 10])";
		range=50;
	};
	class jsrs_tires_close_dry_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\close_dry.ogg",
				1
			}
		};
		frequency=1;
		volume="1*campos*(1-rain)*asphalt* (abs(speed) factor [4, 40])";
		range=600;
	};
	class jsrs_tires_close_wet_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\close_wet.ogg",
				1
			}
		};
		frequency=1;
		volume="1*campos*rain*asphalt* (abs(speed) factor [4, 40])";
		range=800;
	};
	class jsrs_tires_distance_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\far_car.ogg",
				1
			}
		};
		frequency=1;
		volume="1*campos*asphalt* (abs(speed) factor [4, 40])";
		range=2000;
	};
	class jsrs_tires_asphalt_slow_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\road_ext_slow.ogg",
				1
			}
		};
		frequency=1;
		volume="0.7 * 0.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latslip))) * 1.8*(abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.25*asphalt*(1+0.7*((abs(speed)) factor[5,15]))";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tires_asphalt_fast_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\road_ext_fast.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1.0 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latslip))) * (abs(speed) factor [4, 10]) * 0.25*asphalt*(1+0.7*((abs(speed)) factor[5,15]))";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tires_offroad_slow_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\dirt_ext_slow.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latslip))) * 1.8*(abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.25*(1-asphalt)*(1+0.7*((abs(speed)) factor[5,15]))";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tires_offroad_fast_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\dirt_ext_fast.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latslip))) * (abs(speed) factor [4, 10]) * 0.25*(1-asphalt)*(1+0.7*((abs(speed)) factor[5,15]))";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tires_grass_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\grass_ext_all.ogg",
				1
			}
		};
		frequency="1*(speed factor[0, 3])";
		volume="1 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latslip))) * (abs(speed) factor [1, 10]) * 0.6*grass";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tires_asphalt_slow_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\road_int_slow.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 0.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latslip))) * 1.8*(abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.25*asphalt*(1+0.7*((abs(speed)) factor[5,15]))";
		range=50;
	};
	class jsrs_tires_asphalt_fast_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\road_int_fast.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latslip))) * (abs(speed) factor [4, 10]) * 0.25*asphalt*(1+0.7*((abs(speed)) factor[5,15]))";
		range=50;
	};
	class jsrs_tires_offroad_slow_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\dirt_int_slow.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latslip))) * 1.8*(abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.25*(1-asphalt)*(1+0.7*((abs(speed)) factor[5,15]))";
		range=50;
	};
	class jsrs_tires_offroad_fast_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\dirt_int_fast.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latslip))) * (abs(speed) factor [4, 10]) * 0.25*(1-asphalt)*(1+0.7*((abs(speed)) factor[5,15]))";
		range=50;
	};
	class jsrs_tires_grass_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tires\grass_int_all.ogg",
				1
			}
		};
		frequency="1*(speed factor[0, 3])";
		volume="1 * 1.5 * 1 * ((abs(speed)) factor[10,20])";
		range=50;
	};
	class jsrs_tracks_slow_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\heavy_tracked_ext_tracks_slow.ogg",
				1
			}
		};
		frequency="1*((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-15) max 15)/	95)])";
		volume="1 * 1 *(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-15) max 15)/	95)])*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-37) max 37)/	95)]))";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tracks_fast_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\heavy_tracked_ext_tracks_fast.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-37) max 37)/	95),(((-45) max 45)/	95)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tracks_slow_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\heavy_tracked_int_tracks_slow.ogg",
				1
			}
		};
		frequency="1*((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-15) max 15)/	95)])";
		volume="1 * 1.5 * 1 *(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-15) max 15)/	95)])*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-37) max 37)/	95)]))";
		range=50;
	};
	class jsrs_tracks_fast_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\heavy_tracked_int_tracks_fast.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1.5 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-37) max 37)/	95),(((-45) max 45)/	95)])";
		range=50;
	};
	class jsrs_tracks_grass_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\heavy_tracked_ext_tracks_grass.ogg",
				1
			}
		};
		frequency="1*(speed factor[0, 3])";
		volume="1 * 2 * 1 *((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-5) max 5)/	95)])*grass";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tracks_grass_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\heavy_tracked_int_tracks_grass.ogg",
				1
			}
		};
		frequency="1*(speed factor[0, 3])";
		volume="1 * 1.5 * 1 *((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-5) max 5)/	95)])*grass";
		range=50;
	};
	class jsrs_tracks_dirt_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\heavy_tracked_ext_tracks_grass.ogg",
				1
			}
		};
		frequency="1*(speed factor[0, 3])";
		volume="1 * 2 * 1 *((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-5) max 5)/	95)])*(1-asphalt)";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_tracks_dirt_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\heavy_tracked_int_tracks_grass.ogg",
				1
			}
		};
		frequency="1*(speed factor[0, 3])";
		volume="1 * 1.5 * 1 *((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-5) max 5)/	95)])*(1-asphalt)";
		range=50;
	};
	class jsrs_light_tracks_slow_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\light_tracked_ext_tracks_slow.ogg",
				1
			}
		};
		frequency="1*((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-15) max 15)/	95)])";
		volume="1 * 1 *(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-15) max 15)/	95)])*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-37) max 37)/	95)]))";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_light_tracks_fast_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\light_tracked_ext_tracks_fast.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-37) max 37)/	95),(((-45) max 45)/	95)])";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_light_tracks_slow_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\light_tracked_int_tracks_slow.ogg",
				1
			}
		};
		frequency="1*((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-15) max 15)/	95)])";
		volume="1 * 1.5 * 1 *(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-15) max 15)/	95)])*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-37) max 37)/	95)]))";
		range=50;
	};
	class jsrs_light_tracks_fast_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\light_tracked_int_tracks_fast.ogg",
				1
			}
		};
		frequency=1;
		volume="1 * 1.5 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-37) max 37)/	95),(((-45) max 45)/	95)])";
		range=50;
	};
	class jsrs_light_tracks_grass_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\light_tracked_ext_tracks_grass.ogg",
				1
			}
		};
		frequency="1*(speed factor[0, 3])";
		volume="1 * 2 * 1 *((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-5) max 5)/	95)])*grass";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_light_tracks_grass_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\light_tracked_int_tracks_grass.ogg",
				1
			}
		};
		frequency="1*(speed factor[0, 3])";
		volume="1 * 1.5 * 1 *((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-5) max 5)/	95)])*grass";
		range=50;
	};
	class jsrs_light_tracks_dirt_ext_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\light_tracked_ext_tracks_grass.ogg",
				1
			}
		};
		frequency="1*(speed factor[0, 3])";
		volume="1 * 2 * 1 *((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-5) max 5)/	95)])*(1-asphalt)";
		range=400;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{150,0.25},
			{200,0.2},
			{300,0.15000001},
			{400,0}
		};
	};
	class jsrs_light_tracks_dirt_int_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\noises\tracks\light_tracked_int_tracks_grass.ogg",
				1
			}
		};
		frequency="1*(speed factor[0, 3])";
		volume="1 * 1.5 * 1 *((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-5) max 5)/	95)])*(1-asphalt)";
		range=50;
	};
	class jsrs_vehicle_interior_silent_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\vehicle_interior_silent_1.ogg",
				1
			}
		};
		frequency=1;
		volume="1.55 * 0.3 * (rpm factor[425,0])";
		range=60;
	};
	class jsrs_vehicle_interior_noisy_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\noises\interior\vehicle_interior_noisy_1.ogg",
				1
			}
		};
		frequency="(1 + 0.4*((abs(speed)) factor[0,5]))";
		volume="1.55 * 0.2 * (rpm factor[0,425])";
		range=60;
	};
	class jsrs_engine_exhaust_1_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\exhaust\exhaust_1.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	5000) factor[(500/	5000),(5000/	5000)])*0.25";
		volume="0.5*engineon*(((rpm/	5000) factor[(100/	5000),(300/	5000)])	*	((rpm/	5000) factor[(1600/	5000),(800/	5000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_engine_exhaust_2_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\exhaust\exhaust_2.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	5000) factor[(500/	5000),(5000/	5000)])*0.25";
		volume="0.5*engineon*(((rpm/	5000) factor[(100/	5000),(300/	5000)])	*	((rpm/	5000) factor[(1600/	5000),(800/	5000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_engine_exhaust_3_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\exhaust\exhaust_3.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	5000) factor[(500/	5000),(5000/	5000)])*0.25";
		volume="0.5*engineon*(((rpm/	5000) factor[(100/	5000),(300/	5000)])	*	((rpm/	5000) factor[(1600/	5000),(800/	5000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_engine_exhaust_4_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\exhaust\exhaust_4.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	5000) factor[(500/	5000),(5000/	5000)])*0.25";
		volume="0.5*engineon*(((rpm/	5000) factor[(100/	5000),(300/	5000)])	*	((rpm/	5000) factor[(1600/	5000),(800/	5000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_engine_exhaust_5_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\exhaust\exhaust_5.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	5000) factor[(500/	5000),(5000/	5000)])*0.25";
		volume="0.5*engineon*(((rpm/	5000) factor[(100/	5000),(300/	5000)])	*	((rpm/	5000) factor[(1600/	5000),(800/	5000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_engine_exhaust_6_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\exhaust\exhaust_6.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	5000) factor[(500/	5000),(5000/	5000)])*0.25";
		volume="0.5*engineon*(((rpm/	5000) factor[(100/	5000),(300/	5000)])	*	((rpm/	5000) factor[(1600/	5000),(800/	5000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_engine_exhaust_7_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\exhaust\exhaust_7.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	5000) factor[(500/	5000),(5000/	5000)])*0.25";
		volume="0.5*engineon*(((rpm/	5000) factor[(100/	5000),(300/	5000)])	*	((rpm/	5000) factor[(1600/	5000),(800/	5000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_engine_exhaust_8_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\exhaust\exhaust_8.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	5000) factor[(500/	5000),(5000/	5000)])*0.25";
		volume="0.5*engineon*(((rpm/	5000) factor[(100/	5000),(300/	5000)])	*	((rpm/	5000) factor[(1600/	5000),(800/	5000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_engine_exhaust_9_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\exhaust\exhaust_9.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	5000) factor[(500/	5000),(5000/	5000)])*0.25";
		volume="0.5*engineon*(((rpm/	5000) factor[(100/	5000),(300/	5000)])	*	((rpm/	5000) factor[(1600/	5000),(800/	5000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_engine_exhaust_10_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_land_vehicles\sounds\engines\exhaust\exhaust_10.ogg",
				1
			}
		};
		frequency="0.95	+	((rpm/	5000) factor[(500/	5000),(5000/	5000)])*0.25";
		volume="0.5*engineon*(((rpm/	5000) factor[(100/	5000),(300/	5000)])	*	((rpm/	5000) factor[(1600/	5000),(800/	5000)]))";
		range=200;
		rangecurve[]=
		{
			{0,1},
			{10,0.75},
			{50,0.34999999},
			{75,0.25},
			{100,0.2},
			{150,0.15000001},
			{200,0}
		};
	};
	class jsrs_gear_exterior_01_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\engines\gear\Vehicle_Gear_exterior_1.ogg",
				1
			}
		};
		frequency="0.5 + ((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-95) max 95)/	95)])*0.75";
		volume="1 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-45) max 45)/	95)])";
		range=300;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{120,0.25},
			{150,0.2},
			{200,0.15000001},
			{300,0}
		};
	};
	class jsrs_gear_interior_01_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\engines\gear\Vehicle_Gear_interior_1.ogg",
				1
			}
		};
		frequency="0.5 + ((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-95) max 95)/	95)])*0.75";
		volume="2 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-45) max 45)/	95)])";
		range=30;
	};
	class jsrs_gear_exterior_02_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\engines\gear\Vehicle_Gear_exterior_2.ogg",
				1
			}
		};
		frequency="0.5 + ((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-95) max 95)/	95)])*0.75";
		volume="1 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-45) max 45)/	95)])";
		range=300;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{120,0.25},
			{150,0.2},
			{200,0.15000001},
			{300,0}
		};
	};
	class jsrs_gear_interior_02_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\engines\gear\Vehicle_Gear_interior_2.ogg",
				1
			}
		};
		frequency="0.5 + ((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-95) max 95)/	95)])*0.75";
		volume="2 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-45) max 45)/	95)])";
		range=30;
	};
	class jsrs_gear_exterior_03_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\engines\gear\Vehicle_Gear_exterior_3.ogg",
				1
			}
		};
		frequency="0.5 + ((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-95) max 95)/	95)])*0.75";
		volume="1 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-45) max 45)/	95)])";
		range=300;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{120,0.25},
			{150,0.2},
			{200,0.15000001},
			{300,0}
		};
	};
	class jsrs_gear_interior_03_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\engines\gear\Vehicle_Gear_interior_3.ogg",
				1
			}
		};
		frequency="0.5 + ((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-95) max 95)/	95)])*0.75";
		volume="2 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-45) max 45)/	95)])";
		range=30;
	};
	class jsrs_gear_exterior_04_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\engines\gear\Vehicle_Gear_exterior_4.ogg",
				1
			}
		};
		frequency="0.5 + ((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-95) max 95)/	95)])*0.75";
		volume="1 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-45) max 45)/	95)])";
		range=300;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{120,0.25},
			{150,0.2},
			{200,0.15000001},
			{300,0}
		};
	};
	class jsrs_gear_interior_04_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\engines\gear\Vehicle_Gear_interior_4.ogg",
				1
			}
		};
		frequency="0.5 + ((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-95) max 95)/	95)])*0.75";
		volume="2 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-45) max 45)/	95)])";
		range=30;
	};
	class jsrs_gear_exterior_05_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\engines\gear\Vehicle_Gear_exterior_5.ogg",
				1
			}
		};
		frequency="0.5 + ((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-95) max 95)/	95)])*0.75";
		volume="1 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-45) max 45)/	95)])";
		range=300;
		rangecurve[]=
		{
			{0,1},
			{20,0.75},
			{70,0.34999999},
			{120,0.25},
			{150,0.2},
			{200,0.15000001},
			{300,0}
		};
	};
	class jsrs_gear_interior_05_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_snd_land_vehicles\sounds\engines\gear\Vehicle_Gear_interior_5.ogg",
				1
			}
		};
		frequency="0.5 + ((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-95) max 95)/	95)])*0.75";
		volume="2 * 1 * ((((-speed*3.6) max speed*3.6)/	95) factor[(((-5) max 5)/	95),(((-45) max 45)/	95)])";
		range=30;
	};
};
class cfgvehicles
{
	class landvehicle;
	class car_f;
	class truck_f;
	class offroad_01_base_f: car_f
	{
		attenuationeffecttype="jsrs_SemiOpenCar_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\car_1.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\car_1.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_01\offroad_01_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_offroad_01_idle_interior_soundset",
				"jsrs_offroad_01_low_interior_soundset",
				"jsrs_offroad_01_high_interior_soundset",
				"jsrs_offroad_01_start_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_light_rattle_int_soundset",
				"jsrs_wheeled_light_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_light_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_offroad_01_idle_exterior_soundset",
				"jsrs_offroad_01_low_exterior_soundset",
				"jsrs_offroad_01_high_exterior_soundset",
				"jsrs_offroad_01_start_exterior_soundset",
				"jsrs_offroad_01_distance_soundset",
				"jsrs_light_vehicle_rain_ext_soundset",
				"jsrs_wheeled_light_rattle_ext_soundset",
				"jsrs_wheeled_light_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class offroad_02_base_f: car_f
	{
		attenuationeffecttype="jsrs_SemiOpenCar_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\car_1.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\car_1.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\offroad_02\offroad_02_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_offroad_02_idle_interior_soundset",
				"jsrs_offroad_02_low_interior_soundset",
				"jsrs_offroad_02_high_interior_soundset",
				"jsrs_offroad_02_start_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_light_rattle_int_soundset",
				"jsrs_wheeled_light_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_light_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_offroad_02_idle_exterior_soundset",
				"jsrs_offroad_02_low_exterior_soundset",
				"jsrs_offroad_02_high_exterior_soundset",
				"jsrs_offroad_02_start_exterior_soundset",
				"jsrs_offroad_02_distance_soundset",
				"jsrs_light_vehicle_rain_ext_soundset",
				"jsrs_wheeled_light_rattle_ext_soundset",
				"jsrs_wheeled_light_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class lsv_01_base_f: car_f
	{
		attenuationeffecttype="jsrs_SemiOpenCar_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\lsv_1.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\lsv_1.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_01\lsv_01_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_lsv_01_idle_interior_soundset",
				"jsrs_lsv_01_low_interior_soundset",
				"jsrs_lsv_01_high_interior_soundset",
				"jsrs_lsv_01_start_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_light_rattle_int_soundset",
				"jsrs_wheeled_light_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_light_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_lsv_01_idle_exterior_soundset",
				"jsrs_lsv_01_low_exterior_soundset",
				"jsrs_lsv_01_high_exterior_soundset",
				"jsrs_lsv_01_start_exterior_soundset",
				"jsrs_lsv_01_distance_soundset",
				"jsrs_light_vehicle_rain_ext_soundset",
				"jsrs_wheeled_light_rattle_ext_soundset",
				"jsrs_wheeled_light_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class lsv_02_base_f: car_f
	{
		attenuationeffecttype="jsrs_SemiOpenCar_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\lsv_2.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\lsv_2.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\lsv_02\lsv_02_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_lsv_02_idle_interior_soundset",
				"jsrs_lsv_02_low_interior_soundset",
				"jsrs_lsv_02_high_interior_soundset",
				"jsrs_lsv_02_start_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_light_rattle_int_soundset",
				"jsrs_wheeled_light_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_light_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_lsv_02_idle_exterior_soundset",
				"jsrs_lsv_02_low_exterior_soundset",
				"jsrs_lsv_02_high_exterior_soundset",
				"jsrs_lsv_02_start_exterior_soundset",
				"jsrs_lsv_02_distance_soundset",
				"jsrs_light_vehicle_rain_ext_soundset",
				"jsrs_wheeled_light_rattle_ext_soundset",
				"jsrs_wheeled_light_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class suv_01_base_f: car_f
	{
		attenuationeffecttype="jsrs_SemiOpenCar_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\suv_1.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\suv_1.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\suv_01\suv_01_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_suv_01_idle_interior_soundset",
				"jsrs_suv_01_low_interior_soundset",
				"jsrs_suv_01_high_interior_soundset",
				"jsrs_suv_01_start_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_light_rattle_int_soundset",
				"jsrs_wheeled_light_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_light_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_suv_01_idle_exterior_soundset",
				"jsrs_suv_01_low_exterior_soundset",
				"jsrs_suv_01_high_exterior_soundset",
				"jsrs_suv_01_start_exterior_soundset",
				"jsrs_suv_01_distance_soundset",
				"jsrs_light_vehicle_rain_ext_soundset",
				"jsrs_wheeled_light_rattle_ext_soundset",
				"jsrs_wheeled_light_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class hatchback_01_base_f: car_f
	{
		attenuationeffecttype="jsrs_SemiOpenCar_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\car_2.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\car_2.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\hatchback_01\hatchback_01_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_hatchback_01_idle_interior_soundset",
				"jsrs_hatchback_01_low_interior_soundset",
				"jsrs_hatchback_01_high_interior_soundset",
				"jsrs_hatchback_01_start_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_light_rattle_int_soundset",
				"jsrs_wheeled_light_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_light_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_hatchback_01_idle_exterior_soundset",
				"jsrs_hatchback_01_low_exterior_soundset",
				"jsrs_hatchback_01_high_exterior_soundset",
				"jsrs_hatchback_01_start_exterior_soundset",
				"jsrs_hatchback_01_distance_soundset",
				"jsrs_light_vehicle_rain_ext_soundset",
				"jsrs_wheeled_light_rattle_ext_soundset",
				"jsrs_wheeled_light_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class van_01_base_f: truck_f
	{
		attenuationeffecttype="jsrs_SemiOpenCar_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\van_1.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\van_1.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\van_01\van_01_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_van_01_idle_interior_soundset",
				"jsrs_van_01_low_interior_soundset",
				"jsrs_van_01_high_interior_soundset",
				"jsrs_van_01_start_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_light_rattle_int_soundset",
				"jsrs_wheeled_light_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_light_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_van_01_idle_exterior_soundset",
				"jsrs_van_01_low_exterior_soundset",
				"jsrs_van_01_high_exterior_soundset",
				"jsrs_van_01_start_exterior_soundset",
				"jsrs_van_01_distance_soundset",
				"jsrs_light_vehicle_rain_ext_soundset",
				"jsrs_wheeled_light_rattle_ext_soundset",
				"jsrs_wheeled_light_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class quadbike_01_base_f: car_f
	{
		attenuationeffecttype="jsrs_SemiOpenCar_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\lsv_2.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\lsv_2.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\quadbike_01\quadbike_01_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_quadbike_01_idle_interior_soundset",
				"jsrs_quadbike_01_low_interior_soundset",
				"jsrs_quadbike_01_high_interior_soundset",
				"jsrs_quadbike_01_start_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_windy_open_driving_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_light_rattle_int_soundset",
				"jsrs_wheeled_light_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_light_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_quadbike_01_idle_exterior_soundset",
				"jsrs_quadbike_01_low_exterior_soundset",
				"jsrs_quadbike_01_high_exterior_soundset",
				"jsrs_quadbike_01_start_exterior_soundset",
				"jsrs_quadbike_01_distance_soundset",
				"jsrs_light_vehicle_rain_ext_soundset",
				"jsrs_wheeled_light_rattle_ext_soundset",
				"jsrs_wheeled_light_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class truck_01_base_f: truck_f
	{
		attenuationeffecttype="jsrs_Truck_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\truck_1.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\truck_1.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_01\truck_01_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_truck_01_idle_interior_soundset",
				"jsrs_truck_01_low_interior_soundset",
				"jsrs_truck_01_high_interior_soundset",
				"jsrs_truck_01_start_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_medium_rattle_int_soundset",
				"jsrs_wheeled_medium_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_medium_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_truck_01_idle_exterior_soundset",
				"jsrs_truck_01_low_exterior_soundset",
				"jsrs_truck_01_high_exterior_soundset",
				"jsrs_truck_01_start_exterior_soundset",
				"jsrs_truck_01_distance_soundset",
				"jsrs_light_vehicle_rain_ext_soundset",
				"jsrs_wheeled_medium_rattle_ext_soundset",
				"jsrs_wheeled_medium_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class truck_02_base_f: truck_f
	{
		attenuationeffecttype="jsrs_truck_attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\truck_2.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\truck_2.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\truck_02\truck_02_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_truck_02_idle_interior_soundset",
				"jsrs_truck_02_low_interior_soundset",
				"jsrs_truck_02_high_interior_soundset",
				"jsrs_truck_02_start_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_medium_rattle_int_soundset",
				"jsrs_wheeled_medium_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_medium_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_truck_02_idle_exterior_soundset",
				"jsrs_truck_02_low_exterior_soundset",
				"jsrs_truck_02_high_exterior_soundset",
				"jsrs_truck_02_start_exterior_soundset",
				"jsrs_truck_02_distance_soundset",
				"jsrs_light_vehicle_rain_ext_soundset",
				"jsrs_wheeled_medium_rattle_ext_soundset",
				"jsrs_wheeled_medium_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class wheeled_apc_f: car_f
	{
	};
	class apc_wheeled_01_base_f: wheeled_apc_f
	{
		attenuationeffecttype="jsrs_Mrap_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\apc_1.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\apc_1.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_01\wheeled_apc_01_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_wheeled_apc_01_idle_interior_soundset",
				"jsrs_wheeled_apc_01_low_interior_soundset",
				"jsrs_wheeled_apc_01_high_interior_soundset",
				"jsrs_wheeled_apc_01_start_interior_soundset",
				"jsrs_wheeled_apc_01_water_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_heavy_rattle_int_soundset",
				"jsrs_wheeled_heavy_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_medium_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_wheeled_apc_01_idle_exterior_soundset",
				"jsrs_wheeled_apc_01_low_exterior_soundset",
				"jsrs_wheeled_apc_01_high_exterior_soundset",
				"jsrs_wheeled_apc_01_start_exterior_soundset",
				"jsrs_wheeled_apc_01_water_exterior_soundset",
				"jsrs_wheeled_apc_01_distance_soundset",
				"jsrs_heavy_vehicle_rain_ext_soundset",
				"jsrs_wheeled_heavy_rattle_ext_soundset",
				"jsrs_wheeled_heavy_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class apc_wheeled_02_base_f: wheeled_apc_f
	{
		attenuationeffecttype="jsrs_Mrap_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\apc_2.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\apc_2.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_02\wheeled_apc_02_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_wheeled_apc_02_idle_interior_soundset",
				"jsrs_wheeled_apc_02_low_interior_soundset",
				"jsrs_wheeled_apc_02_high_interior_soundset",
				"jsrs_wheeled_apc_02_start_interior_soundset",
				"jsrs_wheeled_apc_02_water_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_heavy_rattle_int_soundset",
				"jsrs_wheeled_heavy_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_medium_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_wheeled_apc_02_idle_exterior_soundset",
				"jsrs_wheeled_apc_02_low_exterior_soundset",
				"jsrs_wheeled_apc_02_high_exterior_soundset",
				"jsrs_wheeled_apc_02_start_exterior_soundset",
				"jsrs_wheeled_apc_02_water_exterior_soundset",
				"jsrs_wheeled_apc_02_distance_soundset",
				"jsrs_heavy_vehicle_rain_ext_soundset",
				"jsrs_wheeled_heavy_rattle_ext_soundset",
				"jsrs_wheeled_heavy_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
	class apc_wheeled_03_base_f: wheeled_apc_f
	{
		attenuationeffecttype="jsrs_Mrap_Attenuation";
		soundgetin[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getin\apc_3.ogg",
			0.5,
			1
		};
		soundgetout[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\handling\getout\apc_3.ogg",
			0.5,
			1,
			40
		};
		sounddammage[]=
		{
			".ogg",
			0.5,
			1
		};
		soundengineonint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_start_int.ogg",
			0.5,
			1
		};
		soundengineonext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_start_ext.ogg",
			0.5,
			1,
			125
		};
		soundengineoffint[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_shut_int.ogg",
			0.5,
			1
		};
		soundengineoffext[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\engines\wheeled_apc_03\wheeled_apc_03_shut_ext.ogg",
			0.5,
			1,
			100
		};
		buildcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_building_04.ogg",
			1.5,
			1,
			300
		};
		soundbuildingcrash[]=
		{
			"buildcrash0",
			0.25,
			"buildcrash1",
			0.25,
			"buildcrash2",
			0.25,
			"buildcrash3",
			0.25
		};
		woodcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		woodcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		woodcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		woodcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		woodcrash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		woodcrash5[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
		};
		soundwoodcrash[]=
		{
			"woodcrash0",
			0.16599999,
			"woodcrash1",
			0.16599999,
			"woodcrash2",
			0.16599999,
			"woodcrash3",
			0.16599999,
			"woodcrash4",
			0.16599999,
			"woodcrash5",
			0.16599999
		};
		armorcrash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		armorcrash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		armorcrash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		armorcrash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		soundarmorcrash[]=
		{
			"armorcrash0",
			0.25,
			"armorcrash1",
			0.25,
			"armorcrash2",
			0.25,
			"armorcrash3",
			0.25
		};
		crash0[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		crash1[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		crash2[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		crash3[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_04.ogg",
			1.5,
			1,
			300
		};
		crash4[]=
		{
			"jsrs_soundmod_snd_land_vehicles\sounds\noises\crash_light\crash_vehicle_05.ogg",
			1.5,
			1,
			300
		};
		soundcrashes[]=
		{
			"crash0",
			0.2,
			"crash1",
			0.2,
			"crash2",
			0.2,
			"crash3",
			0.2,
			"crash4",
			0.2
		};
		class sounds
		{
			soundsetsint[]=
			{
				"jsrs_wheeled_apc_03_idle_interior_soundset",
				"jsrs_wheeled_apc_03_low_interior_soundset",
				"jsrs_wheeled_apc_03_high_interior_soundset",
				"jsrs_wheeled_apc_03_start_interior_soundset",
				"jsrs_wheeled_apc_03_water_interior_soundset",
				"jsrs_vehicle_interior_silent_soundset",
				"jsrs_wheeled_driving_noises_soundset",
				"jsrs_wheeled_offroad_driving_noises_soundset",
				"jsrs_light_vehicle_rain_int_soundset",
				"jsrs_wheeled_heavy_rattle_int_soundset",
				"jsrs_wheeled_heavy_offroad_rattle_int_soundset",
				"jsrs_tires_asphalt_slow_int_soundset",
				"jsrs_tires_asphalt_fast_int_soundset",
				"jsrs_tires_offroad_slow_int_soundset",
				"jsrs_tires_offroad_fast_int_soundset",
				"jsrs_tires_grass_int_soundset",
				"jsrs_medium_vehicle_water_moving_int_soundset"
			};
			soundsetsext[]=
			{
				"jsrs_wheeled_apc_03_idle_exterior_soundset",
				"jsrs_wheeled_apc_03_low_exterior_soundset",
				"jsrs_wheeled_apc_03_high_exterior_soundset",
				"jsrs_wheeled_apc_03_start_exterior_soundset",
				"jsrs_wheeled_apc_03_water_exterior_soundset",
				"jsrs_wheeled_apc_03_distance_soundset",
				"jsrs_heavy_vehicle_rain_ext_soundset",
				"jsrs_wheeled_heavy_rattle_ext_soundset",
				"jsrs_wheeled_heavy_offroad_rattle_ext_soundset",
				"jsrs_tires_asphalt_slow_ext_soundset",
				"jsrs_tires_asphalt_fast_ext_soundset",
				"jsrs_tires_offroad_slow_ext_soundset",
				"jsrs_tires_offroad_fast_ext_soundset",
				"jsrs_tires_grass_ext_soundset",
				"jsrs_tires_close_dry_soundset",
				"jsrs_tires_close_wet_soundset",
				"jsrs_tires_distance_soundset",
				"jsrs_light_vehicle_water_moving_ext_soundset"
			};
		};
	};
};
class cfgMods
{
	author="LordJarhead";
	timepacked="1536318570";
};
