// by ALIAS

//null=[unit_source,life_time,_kill_time] execVM "AL_fire\al_unit_fire.sqf";

_unit_surs	= _this select 0;
_life_time	= _this select 1;
_kill_time	= _this select 2;

if (!isNil {_unit_surs getVariable "killed_by_fire"}) exitWith {};
_unit_surs setVariable ["killed_by_fire",false,true];

removeAllWeapons _unit_surs;
[_unit_surs, "NoVoice"] remoteExec ["setSpeaker",0]; _unit_surs setAnimSpeedCoef 1.1;

[_unit_surs,_kill_time] spawn {
	_unit_surs = _this select 0;
	_kill_time = _this select 1;
	sleep _kill_time;
	_unit_surs setVariable ["killed_by_fire",true,true];
};

[[_unit_surs,_life_time],"AL_fire\al_unit_fire_sfx.sqf"] remoteExec ["execvm"];

waitUntil {_unit_surs getVariable "killed_by_fire"};
[_unit_surs,["05",200]] remoteExec ["say3d"];
sleep 0.6 + random 0.5;
_unit_surs setDamage 1;