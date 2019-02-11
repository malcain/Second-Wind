/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

/*
	Breaking Point Mod: BP_fnc_isUnderCover
	
	Known Authors:
	-Killzone Kid

	Description:
	Function to calculate a array of all the medical details.
	
	Parameter(s):
	_this select 0: unit
	
	Example:
	_isInside = call BP_fnc_isUnderCover;
	
	Returns:
	Boolean
	
*/

params ["_unit",player,[objNull]];

//Exit If Null Unit
if (isNull _unit) exitWith {false};

private ["_inside","_relPos","_boundingBox"];
_under_cover = false;
lineIntersectsSurfaces [getPosWorld _unit, getPosWorld _unit vectorAdd [0, 0, 50], _unit, objNull, true, 1, "GEOM", "NONE"] select 0 params ["","","","_cover"];
	if (!isNil "_cover") then 
	{
	_under_cover = true;
	}
	else {
	_under_cover = false
	};

_under_cover