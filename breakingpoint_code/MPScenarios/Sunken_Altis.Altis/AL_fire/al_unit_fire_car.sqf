// by ALIAS
// deletevehicle wildfire; car_4 setdamage 0.9
//null=[unit_source,life_time,_kill_time] execVM "AL_fire\al_unit_fire.sqf";

private ["_unit_surs","_life_time","_avoid_fire","_rnd","_tip"];

_unit_surs	= _this select 0;
_life_time	= _this select 1;
_kill_time	= _this select 2;

if (!isNil {_unit_surs getVariable "killed_by_fire"}) exitWith {}; 
_unit_surs setVariable ["killed_by_fire",false,true];

removeAllWeapons _unit_surs;
[_unit_surs, "NoVoice"] remoteExec ["setSpeaker",0];
_unit_surs setBehaviour "AWARE"; _unit_surs enableFatigue false; _unit_surs setUnitPos "UP"; _unit_surs setSkill ["commanding", 1];[_unit_surs] joinSilent grpNull;
_rnd = 3+random 10;
if (_rnd>5) then 
{
	_unit_surs enableAI "FSM";
	unassignVehicle _unit_surs;
	_unit_surs setAnimSpeedCoef 1.1;
	[_unit_surs] allowGetIn false;
	[[_unit_surs,_life_time],"AL_fire\al_unit_fire_sfx.sqf"] remoteExec ["execvm"];
	sleep _kill_time;
	_unit_surs setVariable ["killed_by_fire",true,true];
	_unit_surs setDamage 1;
};
_avoid_fire = [getpos _unit_surs,round (200+random 200),round (random 360)] call BIS_fnc_relPos;_unit_surs doMove _avoid_fire;