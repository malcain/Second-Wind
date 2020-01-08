/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

//Don't Check Clothing if Undead
if (BP_isUndead) exitWith {};

//Check Clothing
private ["_class","_factionName","_factionLevel","_levelStr","_clothingArray","_clothing","_uniform","_weaponsUniform","_magsUniform","_itemsUniform"];

_class = player getVariable ["class",0];

//Doesn't Apply To Undead Classes
if (_class == 7) exitWith {};

//None Class Can't Wear Faction Clothing
if (_class < 1) exitWith
{
	if ((uniform player) in BP_FactionClothing) then
	{
		removeUniform player;
		cutText ["You can't wear faction specific clothing.", "PLAIN DOWN"];
	};
};

//Get Faction Name / Level
_factionName = _class call BP_fnc_getFactionName;
_factionLevel = player call BP_fnc_getFactionLevel;

//Fetch Correct Clothing that should be worn
_levelStr = format ["Level_%1",_factionLevel];
_clothingArray = getArray (configFile >> "CfgFactions" >> _factionName >> "Levels" >> _levelStr >> "Spawn" >> "uniform");
_clothing = (_clothingArray select 0);
//_uniform = uniform player;

_uniformClass = getText (configFile >> "CfgWeapons" >> _clothing >> "ItemInfo" >> "uniformClass");
_unit = group player createUnit [_uniformClass, position player, [], 0, "FORM"];
//_unit setposAtl getposAtl player;
_unit setDir (getdir player);
_oldunit = player;
selectplayer _unit;
_camView = cameraView;
player switchCamera _camView;
deletevehicle _oldunit;
