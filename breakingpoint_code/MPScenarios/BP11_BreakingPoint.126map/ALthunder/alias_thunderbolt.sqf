// by ALIAS
// Tutorial: https://www.youtube.com/user/aliascartoons
// nul = [delay_thunder_1,delay_thunder_2,delay_thunder_3,raindrops,storm_debris,local_fog,screen_effect,puddles] execVM "ALthunder\alias_thunderbolt.sqf";


[] call compile preprocessFile "ALthunder\fnct_lightb.sqf";

sleep 3;

if (!isServer) exitWith {};

_type1_detect	= _this select 0;
_type2_detect	= _this select 1;
_type3_detect	= _this select 2;
_rain_drops		= _this select 3;
_wind_debris	= _this select 4;
_local_fog		= _this select 5;
_screen_effect	= _this select 6;
_puddles		= _this select 7;
_clouds			= _this select 8;
_thunder1		= _this select 9;

storm_clouds = _clouds;
publicVariable "storm_clouds";

dayscreeneffect=false; // make this false you don't want the screen flicker during daytime
publicVariable "dayscreeneffect";

thunder_close_alias = ["01_close","02_close","03_close","04_close","05_close","06_close","07_close"];
publicVariable "thunder_close_alias";

thunder_far_alias = ["01_far","02_far","03_far","04_far","05_far","06_far","07_far","08_far","09_far","10_far","11_far","12_far","13_far","14_far","16_far","17_far","18_far","19_far","20_far","21_far","22_far","23_far","24_far","25_far","26_far","27_far","08_close"];
publicVariable "thunder_far_alias";

if (_type1_detect>0) then 
{
[_type1_detect] spawn 
{
	_delay1 = _this select 0;
	alias_thunder_1 = true;
	publicVariable "alias_thunder_1";	

	while {true} do 
	{
	//if (lightnings < 0.1) exitwith {};
	waitUntil {sleep 10; overcast>0.8};
	_delayth1 = linearConversion [0.3,1,overcast,15+(random 15),0.1 + (random _delay1),true];
	if (!alias_thunder_1)then {waitUntil {alias_thunder_1};};
	_rand_pl = [] execVM "ALthunder\alias_hunt.sqf";
	waitUntil {!isNil "hunt_alias"};
	//_jeton_poz = [hunt_alias,700+random 1300, random 360] call BIS_fnc_relPos;
	_jeton_poz = [hunt_alias,50+random 1000, random 360] call BIS_fnc_relPos;
	_zz=(getPosATL hunt_alias select 2)+1000+(random 500);
	poz_obj_fulger1 = [_jeton_poz select 0, _jeton_poz select 1, _zz];
	publicVariable "poz_obj_fulger";
	_sound_sync = thunder_close_alias call BIS_fnc_selectRandom;
	_sound_echo = thunder_far_alias call BIS_fnc_selectRandom;
	_tip_fulger = [fnc_branched_light_1,fnc_branched_light_11,fnc_branched_light_2,fnc_branched_light_21,fnc_branched_light_3,fnc_branched_light_31,fnc_branched_light_4,fnc_branched_light_41,fnc_branched_light_5,fnc_branched_light_51,fnc_branched_light_6,fnc_branched_light_61,fnc_branched_light_7,fnc_branched_light_71,fnc_branched_light_8,fnc_branched_light_81,fnc_branched_light_9_left_simplu,fnc_branched_light_9_left_complicat,fnc_branched_light_10_mijloc_simplu,fnc_branched_light_10_mijloc_centru,fnc_branched_light_10_mijloc_stanga,fnc_branched_light_10_mijloc_complicat,fnc_branched_light_11_right_simplu,fnc_branched_light_11_right_complicat,fnc_branched_light_11_right_sec_1,fnc_spider_tot] call BIS_fnc_selectRandom;
	_flick_screen = ceil (1+(random 3));
	//_break =0.1+random 0.1;
	_break =0.1;
	[[poz_obj_fulger1,_sound_sync,_tip_fulger,_sound_echo,_flick_screen,_break],"ALthunder\alias_thunder_one_effect.sqf"] remoteExec ["execVM"];
	sleep _delayth1;
	};
};
};

if (_type2_detect>0) then {
[_type2_detect] spawn {
	_delay2 = _this select 0;

	alias_thunder_2 = true;
	publicVariable "alias_thunder_2";	

	while {true} do 
	{
	waitUntil {sleep 10; overcast>0.8};
	_delayth2 = linearConversion [0.3,1,overcast,30+(random 120),0.1 + (random _delay2),true];
	if (!alias_thunder_2)then {waitUntil {alias_thunder_2};};	
	_rand_pl = [] execVM "ALthunder\alias_hunt.sqf";
	waitUntil {!isNil "hunt_alias"};
	poz_f_1 = [hunt_alias,700+random 1300, random 360] call BIS_fnc_relPos;
	publicVariable "poz_f_1";
	_tip_tunet = ["lumina","sunet","lumina","sunet_lumina","lumina","lumina"] call BIS_fnc_selectRandom;
	_numar_sclipiri = floor (1+random 3);
	_sound_tunet = thunder_far_alias call BIS_fnc_selectRandom;
	[[poz_f_1,_tip_tunet,_numar_sclipiri,_sound_tunet],"ALthunder\alias_thunder_two_effect.sqf"] remoteExec ["execVM"];
	sleep _delayth2;
	};
};
};

if (_type3_detect>0) then {
[_type3_detect] spawn {
	_delay3 = _this select 0;
	alias_thunder_3 = true;
	publicVariable "alias_thunder_3";	
	while {true} do {
	if (!alias_thunder_3)then {waitUntil {alias_thunder_3};};
	waitUntil {sleep 10; overcast>0.8};
	_delayth3 = linearConversion [0.3,1,overcast,30+(random 120),0.1 + (random _delay3),true];
	_sound_only = thunder_far_alias call BIS_fnc_selectRandom;
	//[_sound_only] remoteExec ["playSound",-2];
	[_sound_only] remoteExec ["playSound"];
	sleep _delayth3;
	};
};
};

if ((_rain_drops)or(_wind_debris)or(_local_fog)) then {
if (_rain_drops) then {alias_rain_drops = true; publicVariable "alias_rain_drops";} else {alias_rain_drops = false; publicVariable "alias_rain_drops";};
if (_wind_debris) then {alias_wind_debris = true; publicVariable "alias_wind_debris";} else {alias_wind_debris = false; publicVariable "alias_wind_debris";};
if (_local_fog) then {alias_local_fog = true; publicVariable "alias_local_fog";} else {alias_local_fog = false; publicVariable "alias_local_fog";};
[[],"ALthunder\alias_weather_effect.sqf"] remoteExec ["execVM",0,true];
};

if (_screen_effect != "none") then {
	[[_screen_effect],"ALthunder\splash.sqf"] remoteExec ["execVM",0,true];
};

if (_puddles) then {
	[[],"ALthunder\pudd_vanilla.sqf"] remoteExec ["execVM",0,true];
};