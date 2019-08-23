/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

//Don't Check Clothing if Undead
if (BP_isUndead) exitWith {};

//Check Clothing
private ["_class","_factionName","_factionLevel","_levelStr","_clothingArray","_clothing","_oldUniform","_weaponsUniform","_magsUniform","_itemsUniform","_headgear","_nvg","_facewear","_oldheadgear","_oldfacewear","_oldnvg"];

_class = player getVariable ["class",0];
_inVehicle = !isNull objectParent player;

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

//Factions Can't Wear Headgear
//if (headgear player != "") then { removeHeadgear player; };

//Get Faction Name / Level
_factionName = _class call BP_fnc_getFactionName;
_factionLevel = player call BP_fnc_getFactionLevel;

//Traitor Flag Check  and Not Already A Traitor
_traitorFlag = player getVariable ["traitorFlag",false];
if (_traitorFlag) then
{
	if ((_factionLevel == 0) || {_factionName == "Hunter"}) then
	{
		player setVariable ["traitorFlag",false,true];
	} else {
		//Traitor Faction Clothing
		_factionLevel = 0; 
		
		//First Becoming A Traitor
		if (!r_traitorFlag) then
		{
			//Update Traitor Vars
			r_traitorFlag = true;
			r_traitorTime = diag_tickTime;

			//Point Loss
			[(netID player)] remoteExecCall ["BPServer_fnc_traitorFlag",2];

			//Message - You have become a traitor
			_traitorHandle = [] spawn
			{
				//Delay
				sleep 5;
				
				//Message
				cutText ["You have been temporarily flagged as a traitor due to your actions.", "PLAIN DOWN"];
			};
			[_traitorHandle] call BP_fnc_addThreadHandle;
		} else { 
			//Already A Traitor - Handle Timer
			if ((diag_tickTime - r_traitorTime) > 600 && !_inVehicle) then
			{
				player setVariable ["traitorFlag",false,true];
				r_traitorFlag = false;
				r_traitorTime = diag_tickTime;
				cutText ["You are no longer flagged as a traitor.", "PLAIN DOWN"];
				_factionLevel = player call BP_fnc_getFactionLevel;
			};
		};
	};
};

//Fetch Correct Clothing that should be worn
_levelStr = format ["Level_%1",_factionLevel];
//_clothingArray = getArray (configFile >> "CfgFactions" >> _factionName >> "Levels" >> _levelStr >> "Spawn" >> "clothing");
_clothingArray = getArray (configFile >> "CfgFactions" >> _factionName >> "Levels" >> _levelStr >> "Spawn" >> "uniform");
_clothing = (_clothingArray select 0);
//_clothingZ = format ["%1_Z",_clothing];
_oldUniform = (uniform player);
_headgearArray = getArray (configFile >> "CfgFactions" >> _factionName >> "Levels" >> _levelStr >> "Spawn" >> "headgear");
_nvgArray = getArray (configFile >> "CfgFactions" >> _factionName >> "Levels" >> _levelStr >> "Spawn" >> "nvg");
_facewearArray = getArray (configFile >> "CfgFactions" >> _factionName >> "Levels" >> _levelStr >> "Spawn" >> "facewear");
_headgear = (_headgearArray select 0);
_nvg = (_nvgArray select 0);
_facewear = (_facewearArray select 0);
_oldheadgear = (headgear player);
_oldfacewear = (goggles player);
_oldnvg = (hmd player);

if !(_oldUniform in _clothingArray) then 
{
	//Backup Uniform Gear
	_weaponsUniform = (getMagazineCargo uniformContainer player) call BP_fnc_cargoToPairs;
	_magsUniform = (getMagazineCargo uniformContainer player) call BP_fnc_cargoToPairs;
	_itemsUniform = (getItemCargo uniformContainer player) call BP_fnc_cargoToPairs;

	//Add New Uniform
	removeUniform player;
	player addUniform _clothing;

	//Add Uniform Weapons
	{
		_x params ["_mag","_count"];
		_isOK = isClass(configFile >> "CfgWeapons" >> _mag);
		if (_isOK) then {  (uniformContainer player) addWeaponCargoGlobal [_mag,_count]; };
	} count _weaponsUniform;

	//Add Uniform Magazines
	{
		_x params ["_mag","_count"];
		_isOK = isClass(configFile >> "CfgMagazines" >> _mag);
		if (_isOK) then { (uniformContainer player) addMagazineCargoGlobal [_mag,_count]; };
	} count _magsUniform;

	//Add Uniform Items
	{
		_x params ["_mag","_count"];
		_isOK = isClass(configFile >> "CfgWeapons" >> _mag);
		if (_isOK) then { (uniformContainer player) addItemCargoGlobal [_mag,_count]; };
	} count _itemsUniform;
	
	//Force Save Character
	BP_forceSave = true;
};

if !(_oldheadgear in _headgearArray) then
	{
		removeheadgear player;
		player addheadgear _headgear;
		//Force Save Character
		BP_forceSave = true;
	};
	
if !(_oldnvg in _nvgArray) then
	{
		player unlinkItem _oldnvg;
		player linkItem _nvg;
		//Force Save Character
		BP_forceSave = true;
	};
	
if !(_oldfacewear in _facewearArray) then
	{
		removegoggles player;
		player addgoggles _facewear;
		//Force Save Character
		BP_forceSave = true;
	};