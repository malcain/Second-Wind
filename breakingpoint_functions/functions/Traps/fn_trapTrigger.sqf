/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

params ["_trigger","_units"];

if (!isServer) exitWith {};

_unit = _units select 0;
_trap = _trigger getVariable ["trap",objNull];
if (isNull _trap) exitWith {};

_armed = _trap getVariable ["armed",false];
if (!_armed) exitWith {};

_trapobj = getPosATL _trap;
//_players = nearestObjects [_trapobj, ["CAManBase"], 5];
//_height = abs ((getPosATL _unit select 2) - (_trapobj select 2));
//if (_height < 1) exitwith {};

//Deactivate Trap
[_trap,objNull] call BP_fnc_trapDeactivate;

if (isnil "_unit") exitwith {};

//Bear Trap Triggered If Ran Over By Animal
if (_unit isKindOf "Animal" || {_unit isKindOf "zZombie_Base"}) exitWith { _unit setDamage 1; };

//Do Medical Damage
BP_MedicalEvent = ["medBearTrap",(netID _unit),(netID _unit)];
(owner _unit) publicVariableClient "BP_MedicalEvent";
