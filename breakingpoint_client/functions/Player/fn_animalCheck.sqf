/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

#define ANIMALS ["BP_Dog","BP_Dog","BP_Chicken_1","BP_Chicken_2","BP_Sheep","BP_Sheep","Goat_random_F","Goat_random_F","BP_Rabbit","BP_Rabbit","Snake_random_F","Snake_vipera_random_F"]
#define DOGS ["BP_Dog_1","BP_Dog_2","BP_Dog_3","BP_Dog_5","BP_Dog_6","BP_Dog_7"] //removed bp_dog_4
#define SHEEPS ["BP_Sheep_1","BP_Sheep_2","BP_Sheep_3","BP_Sheep_4"]

_playerPos = getPosATL player;
_animalDistance = 1200;
_nearbyAnimals = [_playerPos,_animalDistance] call BP_fnc_nearbyAnimals;

if (_nearbyAnimals < BP_MaxAnimals) then
{
	//Variable Init
	_PosList = [];
	_PosSelect = [];
	_mushroom = false;
	_randomDistance = 800 + random 700;

	//Find where animal likes
	_type = selectRandom ANIMALS;
	if (_type == "BP_Dog") then { _type = selectRandom DOGS; };
	if (_type == "BP_Sheep") then { _type = selectRandom SHEEPS; };
	//_root = configFile >> "CfgVehicles" >> _type;
	
	//_favouritezones = getText ( _root >> "favouritezones");
	//http://forums.bistudio.com/showthread.php?93897-selectBestPlaces-%28do-it-yourself-documentation%29
	//http://community.bistudio.com/wiki/selectBestPlaces
	//http://resources.bisimulations.com/wiki/selectBestPlaces
	
	_favouritezones = "(forest + meadow + trees) * (1 - houses) * (1 - waterDepth)";
	_mushroomZones = "forest * (1 - meadow) * (1 - waterDepth) * (1 - houses)";
	
	if (random 100 < 65) then {
		_mushroom = true;
	};
	if (_mushroom) then {
		_mushPosList = selectBestPlaces [_playerPos,_randomDistance,_mushroomZones,10,7];
		if (_mushPosList isEqualTo []) exitWith {};
		_mushPosSelect = selectRandom _mushPosList;
		_mushPos = _mushPosSelect select 0 findEmptyPosition [0,10];
		if (_mushPos isEqualTo []) exitWith {};
		["FoodMushroom", "magazine", "Default", _mushPos] call BP_fnc_spawnLoot;
	};
	
	_PosList = selectBestPlaces [_playerPos,_randomDistance,_favouritezones,10,7];
	if (_PosList isEqualTo []) exitWith {};
	
	_PosSelect = selectRandom _PosList;
	_Pos = _PosSelect select 0 findEmptyPosition [0,10];
	if (_Pos isEqualTo []) exitWith {};
	
	_nearbyAnimals = [_Pos,150] call BP_fnc_nearbyAnimals;
	if (player distance _Pos > 200 && {_nearbyAnimals < 1} and (NOT surfaceIsWater _Pos)) then {
		_spawnType = "FORM";
		if (_type in DOGS) then { _spawnType = "NONE"; };
		_agent = createAgent [_type, _Pos, [], 0, _spawnType];
		_agent setPos _Pos;
		//_fsmid = [_pos,_agent] execFSM "\breakingpoint_code\system\animal_agent.fsm";
		//_fsmid setFSMVariable ["_handle", _fsmid];
		//_agent setVariable ["fsm_handle", _fsmid];
	};
};
