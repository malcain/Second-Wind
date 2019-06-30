/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

//Don't Check Clothing if Undead
//if (BP_isUndead) exitWith {};

params ["_class","_oldBody","_factionName","_factionLevel","_clothingArray","_clothing","_uniformClass"];


//Doesn't Apply To Undead Classes
//if (_class == 7) exitWith {};

//Get Faction Name / Level
_factionName = _class call BP_fnc_getFactionName;
//_factionLevel = player call BP_fnc_getFactionLevel;

//Fetch Correct Clothing that should be worn
//diag_log text format ["inventory %1",_inventory];
_clothingArray = getArray (configFile >> "CfgFactions" >> _factionName >> "Levels" >> "Level_1" >> "Spawn" >> "uniform");
_clothing = (_clothingArray select 0);

_uniformClass = getText (configFile >> "CfgWeapons" >> _clothing >> "ItemInfo" >> "uniformClass");
_group = createGroup civilian;
_body = _group createUnit [_uniformClass,  position _oldBody, [], 0, "CAN_COLLIDE"];
_body setposAtl getposAtl _oldBody;
_body setDir (getdir _oldBody);

//Reset Player Character
_body setVariable ["traitorFlag",false,true];
_body call BP_fnc_resetPlayerNamespace;

//Transfer vars
_ranger = _oldBody getVariable ["ranger",_ranger];
_outlaw = _oldBody getVariable ["outlaw",_outlaw];
_hunter = _oldBody getVariable ["hunter",_hunter];
_nomad = _oldBody getVariable ["nomad",_nomad];
_survivalist = _oldBody getVariable ["survivalist",_survivalist];
_scavenger = _oldBody getVariable ["scavenger",_scavenger];
_undead = _oldBody getVariable ["undead",_undead];

_body setVariable ["class",_class,true];
//Load Factions
_body setVariable ["ranger",_ranger];
_body setVariable ["outlaw",_outlaw];
_body setVariable ["hunter",_hunter];
_body setVariable ["nomad",_nomad];
_body setVariable ["survivalist",_survivalist];
_body setVariable ["scavenger",_scavenger];
_body setVariable ["undead",_undead];

//Dog Var Inits
_body setVariable ["dog",objNull];
_body setVariable ["dogID", 0];

_body