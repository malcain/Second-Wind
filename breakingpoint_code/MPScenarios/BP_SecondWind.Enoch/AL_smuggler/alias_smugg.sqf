// by ALIAS

if (!isServer) exitwith {};

_marker_sursa_smugg = _this select 0;
_mobile_anomaly 	= _this select 1;
_device_detector	= _this select 2;
_spawn_classname	= _this select 3;
//_delay_between_spawn= _this select 4;
_teleport_protect	= _this select 5;

_sursa_smugg = createVehicle ["Land_HelipadEmpty_F", [getmarkerpos _marker_sursa_smugg select 0,getmarkerpos _marker_sursa_smugg select 1,2], [], 0, "CAN_COLLIDE"];
_sursa_smugg_core = createVehicle ["Land_HelipadEmpty_F", [getmarkerpos _marker_sursa_smugg select 0,getmarkerpos _marker_sursa_smugg select 1,2], [], 0, "CAN_COLLIDE"];
_sursa_smugg_core attachTo [_sursa_smugg,[0,0,0]];

//protection_smug = _teleport_protect; publicVariable "protection_smug";
detect_smug = _device_detector; publicVariable "detect_smug";

//if (_device_detector !="") then {null= [_sursa_smugg] execvm "AL_smuggler\ai_avoid_smugg.sqf"}else{null= [_sursa_smugg] execvm "AL_smuggler\ai_avoid_smugg_visible.sqf"};
[[_sursa_smugg,_sursa_smugg_core],"AL_smuggler\alias_smugg_sfx.sqf"] remoteExec ["execVM",0,true];
[[_sursa_smugg,_sursa_smugg_core],"AL_smuggler\teleport_smugg.sqf"] remoteExec ["execVM",0,true];
if (count _spawn_classname >0) then { null=[_spawn_classname,_sursa_smugg_core] execvm "AL_smuggler\smuggler_spawn.sqf"};

if (_mobile_anomaly) then 
{
	while {!isNull _sursa_smugg} do 
	{
		_poz_ini_smug = getposatl _sursa_smugg;
		_new_poz = [_poz_ini_smug,0.01,0.3,1,0,-1,0] call BIS_fnc_findSafePos;
		_sursa_smugg setPos [_new_poz select 0,_new_poz select 1, _poz_ini_smug select 2];
		sleep 3+random 30;
	};
};