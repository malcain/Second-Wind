/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

_entity = _this select 3 select 0;
_type = _this select 3 select 1;

player removeAction s_player_igniteEntity;
s_player_igniteEntity = -1;

if (isNull _entity) exitWith {};

if (player distance _entity > 10) exitWith {};

//Mutex Lock On Igniting
_fire = _entity getVariable ["fire",objNull];
if !(isNull _fire) exitWith {};

//Are you sure warning, because people are stupid..
//if (_isPlayer and _alive) then { _leaveReturn = ["Are you sure you want to ignite this entity? ","Ignite Entity",nil,true] call BIS_fnc_guiMessage; };
//if (!_leaveReturn) exitWith {};

if (_type == "Vehicle") exitwith {
_isCar = (_entity isKindOf "Car");
_isHeli = (_entity isKindOf "Helicopter" or {_entity isKindOf "Plane"});
_isShip = (_entity isKindOf "Ship");
	if (_isCar or _isHeli or _isShip) then
	{
		_type = "Explode";
		[(netID player),(netID _entity),_type] remoteExecCall ["BPServer_fnc_igniteEntity",2];
		[_entity] spawn
		{
			sleep 11;
			[BP_characterID,(netID (_this select 0)),"Explode",(netID player)] remoteExecCall ["BPServer_fnc_deleteObj",2];
		};
	} else {
		[(netID player),(netID _entity),_type] remoteExecCall ["BPServer_fnc_igniteEntity",2];
	};
};

//Tell the server to ignite it
[(netID player),(netID _entity),_type] remoteExecCall ["BPServer_fnc_igniteEntity",2];

if (_type == "Animal") then
{
_entity setdamage 1;
};