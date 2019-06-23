// by ALIAS
//null=[bath] execvm "AL_Leaks\dry_drop.sqf";

fnc_timer = {
private ["_shower"];
_shower = _this select 0;
	_shower setVariable ["loop",false,true];
	sleep 3.8;
	_shower setVariable ["loop",true,true];
};

private ["_sound_shower","_shower"];

_shower = _this select 0;

while {!isNull _shower} do {
	waitUntil {sleep 0.1; (player distance _shower < 1.5)};
	if (rain < 0.15) exitWith {};
	[_shower] spawn fnc_timer;
	effect_screen_shower = ppEffectCreate ["WetDistortion", 300];			
	effect_screen_shower ppEffectEnable true;
	effect_screen_shower ppEffectAdjust [0.5,0.5,0.6,4,3,2,1,0.05,0.01,0.1,0.01,0.015,0.01,0.05,0.1];
	effect_screen_shower ppEffectCommit 0;
	playsound "01_dry_drop";
	_sound_shower = ASLToAGL [0,0,0] nearestObject "#soundonvehicle";
	waitUntil {sleep 0.1;(player distance _shower > 1.5)or(_shower getVariable "loop")};
	deleteVehicle _sound_shower;
	effect_screen_shower ppEffectEnable false; 
	ppEffectDestroy effect_screen_shower;
};