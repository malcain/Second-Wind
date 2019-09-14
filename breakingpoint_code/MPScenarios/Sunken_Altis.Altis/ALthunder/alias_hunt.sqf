// by ALIAS
// nul = [] execVM "ALthunder\alias_hunt.sqf";

if (!isServer) exitWith {};

_allunits = [];
	{
		if (alive _x) then
		{
			_allunits pushBack _x;
		};
	}  foreach playableUnits;
	hunt_alias = _allunits call BIS_fnc_selectRandom;
	publicVariable "hunt_alias"; 