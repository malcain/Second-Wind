/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

private ["_dis","_qty","_item","_playerPos","_hasFuel","_finished","_fuelstation","_fuelTank"];
_item = 		_this select 0;
_playerPos = 	getPosATL player;
_cursorobject = cursorobject;
_valid = false;
//if (isNull _cursorobject) exitwith {};
if (isNull _cursorobject or {player distance _cursorobject > 4.2}) exitWith { cutText ["You must be near a fuel source to fill fuel cans." , "PLAIN DOWN"]; };
_fuelstation = false;
_hasFuel = false;
_fuelTank = false;

_fuelstation = [["fs_feed","feed","fuelstation"],str (_cursorobject)] call BP_fnc_inStringArray;
if (_fuelstation) then { 
	_hasFuel = true;
	_valid = true;
};
_fuelTank = [["trailercistern","tank_rust"],str (_cursorobject)] call BP_fnc_inStringArray;
if (_fuelTank) then {
	_valid = true;
	if (damage _cursorobject >= 0.75) exitwith {
		cutText ["No fuel left here.", "PLAIN DOWN"];
	};
	if (random 1 < 0.65) then {
		_cursorobject setdamage 0.75;
		cutText ["No fuel left here.", "PLAIN DOWN"];
	} else {
		_hasFuel = true;
	};
};

if (!_valid) exitWith { cutText ["You must be near a fuel source to fill fuel cans." , "PLAIN DOWN"]; };
if (!_hasFuel) exitwith { cutText ["No fuel left here.", "PLAIN DOWN"]; };
//_canUse = count nearestObjects [_playerPos, ["Land_FuelStation_02_pump_F","Land_FuelStation_01_pump_F","Land_Ind_TankSmall","land_fuelstation_w","Land_FuelStation_Feed_F","Land_A_FuelStation_Feed","Land_Tank_rust_F","Land_fs_feed_F","Land_Ind_FuelStation_Feed_EP1","Land_FuelStation_01_pump_malevil_F"], 4] > 0;

_finished = ["medic"] call BP_fnc_medicAnim;

if (_finished) then
{
	{
		_empty = _x;
		_full = BP_FuelFull select _forEachIndex;
		
		_qty = {_x == _empty} count magazines player;
		
		if (_empty in magazines player) then {
			for "_x" from 1 to _qty do {
				player removeMagazine _empty;
				player addMagazine _full;
			};
			_dis = 15;
			[player,"refuel",0,false,_dis] call BP_fnc_objSpeak;  
			_handle = [player,_dis,true,(getPosATL player)] spawn BP_fnc_zombieAlert;
			[_handle] call BP_fnc_addThreadHandle;
		};
	} forEach BP_FuelEmpty;
};




