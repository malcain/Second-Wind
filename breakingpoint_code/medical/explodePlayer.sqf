/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/
private ["_unit"];
_unit = (_this select 3) select 0;

//if (isNull _unit) exitWith {};

player removeAction s_player_SVest;
s_player_SVest = -1;
player removeAction s_player_SVest;
s_player_SVest = -1;

_leaveReturn = ["Are you sure you would like to detonate yourself? ","Detonate yourself",nil,true] call BIS_fnc_guiMessage;
if (!_leaveReturn) exitWith {};

//_SVest = vest player;
//if !(_SVest = "V_OutlawVest_BP") exitWith {};

_objPos = getPosATL _unit;

sleep 0.25;
//Explode player
removeVest player;
sleep 0.01;
_explosive = "BP_IED" createVehicle _objPos;
_explosive setPosATL _objPos;
_explosive setDamage 1;

