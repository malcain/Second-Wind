/*
  Breaking Point Mod for Arma 3

  Released under Arma Public Share Like Licence (APL-SA)
  https://www.bistudio.com/community/licenses/arma-public-license-share-alike

  Alderon Games Pty Ltd
*/

enableSaving [false, false];

BP_ServerInstance = (paramsArray select 0);
BP_Debug = (paramsArray select 1) == 1;
BP_HC = (paramsArray select 2) == 1;
BP_VIP = (paramsArray select 3) == 1;
BP_DynamicWeather = (paramsArray select 4) == 1;
BP_ClientSimulationManager = (paramsArray select 5) == 1;
BP_ServerSimulationManager = (paramsArray select 6) == 1;
BP_ThreadedCleanup = (paramsArray select 7) == 1;
BP_LootMax = (paramsArray select 8);
BP_LootServer = (paramsArray select 9) == 1;
BP_LegionOnly = (paramsArray select 10) == 1;
BP_FastBoot = (paramsArray select 11) == 1;

[] execVm "real_weather.sqf";

		[caveleak_s1,true] execvm "AL_Leaks\cave_leak.sqf";
		[caveleak_s2,true] execvm "AL_Leaks\cave_leak.sqf";
		[caveleak_s3,true] execvm "AL_Leaks\cave_leak.sqf";
		[caveleak_s4,true] execvm "AL_Leaks\cave_leak.sqf";
		[caveleak_s5,true] execvm "AL_Leaks\cave_leak.sqf";

		// leak without sound
		//[caveleak_ns1,false] execvm "AL_Leaks\cave_leak.sqf";

		// exterior leak
		[rainleak1] execvm "AL_Leaks\water_leak.sqf";
		[rainleak2] execvm "AL_Leaks\water_leak.sqf";
		[rainleak3] execvm "AL_Leaks\water_leak.sqf";
		[rainleak4] execvm "AL_Leaks\water_leak.sqf";
		[rainleak5] execvm "AL_Leaks\water_leak.sqf";
		[rainleak6] execvm "AL_Leaks\water_leak.sqf";
		[rainleak7] execvm "AL_Leaks\water_leak.sqf";
		[rainleak8] execvm "AL_Leaks\water_leak.sqf";
		[rainleak9] execvm "AL_Leaks\water_leak.sqf";
		[rainleak10] execvm "AL_Leaks\water_leak.sqf";
		[rainleak11] execvm "AL_Leaks\water_leak.sqf";
		[rainleak12] execvm "AL_Leaks\water_leak.sqf";
		[rainleak13] execvm "AL_Leaks\water_leak.sqf";
		[rainleak14] execvm "AL_Leaks\water_leak.sqf";
		[rainleak15] execvm "AL_Leaks\water_leak.sqf";
		[rainleak16] execvm "AL_Leaks\water_leak.sqf";
		[rainleak17] execvm "AL_Leaks\water_leak.sqf";
		[rainleak18] execvm "AL_Leaks\water_leak.sqf";
		[rainleak19] execvm "AL_Leaks\water_leak.sqf";
		[rainleak20] execvm "AL_Leaks\water_leak.sqf";
		[rainleak21] execvm "AL_Leaks\water_leak.sqf";
		[rainleak22] execvm "AL_Leaks\water_leak.sqf";
		[rainleak23] execvm "AL_Leaks\water_leak.sqf";
		[rainleak24] execvm "AL_Leaks\water_leak.sqf";
		[rainleak25] execvm "AL_Leaks\water_leak.sqf";
		[rainleak26] execvm "AL_Leaks\water_leak.sqf";
		[rainleak27] execvm "AL_Leaks\water_leak.sqf";
		[rainleak28] execvm "AL_Leaks\water_leak.sqf";
		[rainleak29] execvm "AL_Leaks\water_leak.sqf";
		[rainleak30] execvm "AL_Leaks\water_leak.sqf";
		[rainleak31] execvm "AL_Leaks\water_leak.sqf";
		[rainleak32] execvm "AL_Leaks\water_leak.sqf";
		[rainleak33] execvm "AL_Leaks\water_leak.sqf";
		[rainleak34] execvm "AL_Leaks\water_leak.sqf";
		[rainleak35] execvm "AL_Leaks\water_leak.sqf";
		[rainleak36] execvm "AL_Leaks\water_leak.sqf";
		[rainleak37] execvm "AL_Leaks\water_leak.sqf";
		[rainleak38] execvm "AL_Leaks\water_leak.sqf";
		[rainleak39] execvm "AL_Leaks\water_leak.sqf";
		[rainleak40] execvm "AL_Leaks\water_leak.sqf";
		[rainleak41] execvm "AL_Leaks\water_leak.sqf";
		[rainleak42] execvm "AL_Leaks\water_leak.sqf";
		[rainleak43] execvm "AL_Leaks\water_leak.sqf";
		[rainleak44] execvm "AL_Leaks\water_leak.sqf";
		[rainleak45] execvm "AL_Leaks\water_leak.sqf";
		[rainleak46] execvm "AL_Leaks\water_leak.sqf";
		[rainleak47] execvm "AL_Leaks\water_leak.sqf";
		[rainleak48] execvm "AL_Leaks\water_leak.sqf";
		[rainleak49] execvm "AL_Leaks\water_leak.sqf";
		[rainleak50] execvm "AL_Leaks\water_leak.sqf";
		
if (hasInterface) then {
[] execVm "nighttime.sqf";
[] execVM "rain_drop.sqf";
};
	//run on all player clients incl. player host
execVM "AL_radiation\al_ini_fnc.sqf";

waitUntil {!isNil "glowindark"};

if (glowindark) then 
{
	player setVariable ["glowing_player",false,true];
	player setObjectMaterialglobal [0,"\a3\data_f\default.rvmat"]; 
	(backpackContainer player) setObjectMaterialglobal [0,"\a3\data_f\default.rvmat"];			
	while {!isNull player} do
	{
		waitUntil {alive player};
		if (sunOrMoon==0) then 
		{	
			waitUntil {player getVariable "glowing_player"};
			player setObjectMaterialglobal [0, "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"]; 
			(backpackContainer player) setObjectMaterialglobal [0, "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"];
			[[player],"AL_radiation\reveal_target.sqf"] remoteExec ["execVM"];
			waitUntil {!(player getVariable "glowing_player")};
			sleep timetoglow;
			player setObjectMaterialglobal [0,"\a3\data_f\default.rvmat"]; 
			(backpackContainer player) setObjectMaterialglobal [0,"\a3\data_f\default.rvmat"];
		} else {sleep 60};
	};
};
//};

if ((!isServer) && (player != player)) then {waitUntil {player == player};};

//znul = [10,-1,-1,false,true,false,"none",false,false] execVM "ALthunder\alias_thunderbolt.sqf";

//["farty1","H_PilotHelmetFighter_B",false,150,0.01,false,15] execVM "AL_farty\area_toxic_ini.sqf";

// gas leak
//[gas_up1,1,0.04,[0.15,0.3,0]] execvm "AL_Leaks\gas_leak.sqf";
/*[gas_d1,-4,0.07,[0.2,0,0]] execvm "AL_Leaks\gas_leak.sqf";
[gas_d2,-4,0.07,[0.15,0.3,0]] execvm "AL_Leaks\gas_leak.sqf";
[gas_h1,0.5,0.07,[0,0.2,0.5]] execvm "AL_Leaks\gas_leak.sqf";
[gas_h2,2.2,0.07,[0.01,0.0,0.04]] execvm "AL_Leaks\gas_leak.sqf";
[gas_h3,-1,0.07,[0.01,0.0,0.04]] execvm "AL_Leaks\gas_leak.sqf";
[gas_h4,2,0.07,[0.2,0,0]] execvm "AL_Leaks\gas_leak.sqf";
[gas_h5,0,0.07,[0.15,0.3,0]] execvm "AL_Leaks\gas_leak.sqf";
[gas_h6,-3,0.07,[0,0.2,0.5]] execvm "AL_Leaks\gas_leak.sqf";

// fire leak
[fire_d1,-2.5,0.2] execvm "AL_Leaks\fire_leak.sqf";
//[fire_d2,-4,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_h1,-1,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_h2,0.5,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_h3,0.5,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_up1,4,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_up2,3,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_up3,5,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_up4,4,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_up5,4,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_up6,3,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_up7,5,0.2] execvm "AL_Leaks\fire_leak.sqf";
[fire_up8,4,0.27] execvm "AL_Leaks\fire_leak.sqf";
[fire_up9,4,0.27] execvm "AL_Leaks\fire_leak.sqf";
*/
// making an object radioactive
null1 = [rad1,20,220,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null2 = [rad2,30,220,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null3 = [rad3,17,220,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null4 = [rad4,10,220,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null5 = [rad5,10,220,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null6 = [rad6,35,140,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null7 = [rad7,25,220,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null8 = [rad8,52,100,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null9 = [rad9,30,300,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null10 = [rad10,50,200,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null11 = [rad11,35,120,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null12 = [rad12,35,120,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
null13 = [rad13,30,220,"H_PilotHelmetFighter_B","ItemWatch",false,10,false] execvm "AL_radiation\radioactive_object.sqf";
/*
//Strigoi
["strigoi_1",250,false,950,40] execvm "AL_strigoi\strigoi.sqf";
//["strigoi_2",250,false,920,55] execvm "AL_strigoi\strigoi.sqf";
//["strigoi_3",280,false,970,40] execvm "AL_strigoi\strigoi.sqf";
["strigoi_4",250,false,920,50] execvm "AL_strigoi\strigoi.sqf";
["strigoi_5",300,false,980,35] execvm "AL_strigoi\strigoi.sqf";
["strigoi_6",250,false,870,40] execvm "AL_strigoi\strigoi.sqf";
["strigoi_7",230,false,750,35] execvm "AL_strigoi\strigoi.sqf";
["strigoi_8",230,false,850,40] execvm "AL_strigoi\strigoi.sqf";

//Smuggler
//null22 = ["smugg1",false,"",["Land_OfficeCabinet_01_F","Land_ArmChair_01_F","OfficeTable_01_old_F"],5,""] execVM "AL_smuggler\alias_smugg.sqf";
//null22 = ["smugg1",false,"",["Land_OfficeCabinet_01_F","Land_ArmChair_01_F","OfficeTable_01_old_F","BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"],5,""] execVM "AL_smuggler\alias_smugg.sqf";
*/
//Client Init Only
if (isServer) exitWith {};
if (!hasInterface) exitWith {};
if (isDedicated) exitWith {};

// Load map extras
//call compile preprocessFileLineNumbers "bplb\replacements.sqf";
//call compile preprocessFileLineNumbers "bplb\additions.sqf";

//Require This Mission to be used in MP Only.
if (!isMultiplayer) exitWith { call BIS_fnc_shutdown; };

// Breaking Point - Player Client Integration
initialized = true;

setViewDistance 2300;
setObjectViewDistance 1450;
[] execVM "outlw_magRepack\MagRepack_init_sv.sqf";

waitUntil {time > 0};
enableEnvironment [true,true];


