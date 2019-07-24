/*
	BreakingPoint: Second Wind

	Released under Arma Public License No Derivatives (APL-ND)
	https://www.bistudio.com/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_object","_isWoodPile"];

_woodType = str _object;
_dryWood = false;
_dryOrRotten = false;
_dryBush = false;
_state = damage _object;

_woodChopped = player getVariable ["chopWood", 0];
if (_woodChopped == 0) then {
	["chopWood",270] spawn BP_fnc_clearLocalVarDelay;
};

if (_woodChopped >= 3) exitwith {
cutText ["You're too tired","PLAIN DOWN",1];
};

if (_isWoodPile) exitwith {
_object setdamage (_state + 0.15) min 1;
	if (_state > 0.7) then {
		_bigPile = [["timber","woodenplanks"],_woodType] call BP_fnc_inStringArray;
		_posWood = getPosATL _object;
		if (!_bigPile) then {
			_object hideobjectglobal true;
			["PartWoodPile", "magazine", "Default", _posWood] call BP_fnc_spawnLoot;
			_woodChopped = _woodChopped + 1;
			player setVariable ["chopWood", _woodChopped];
		} else {
			_nearbyObj = nearestObjects [player, ["groundweaponholder"], 6];
			//Only create woodpile if there is no other nearby already.
			if (_nearbyObj isEqualTo []) then {
				["PartWoodPile", "magazine", "Default", _posWood] call BP_fnc_spawnLoot;
				_woodChopped = _woodChopped + 1;
				player setVariable ["chopWood", _woodChopped];
			};
		};
	};
};

if (worldName == "Enoch") then {
	//trees
	_dryWood = [["t_piceaabies_2d","t_piceaabies_3d","t_piceaabies_1sb","t_piceaabies_2f","t_piceaabies_3f","t_fagussylvatica_2d","t_fagussylvatica_3d","t_pinussylvestris_3d"],_woodType] call BP_fnc_inStringArray;
	_dryOrRotten = [["d_picea","d_fagussylvatica","d_betula_pendula"],_woodType] call BP_fnc_inStringArray;
} else {
	//trees
	_dryWood = [["t_pinus","t_poplar2f","t_ficus_3d","t_oleae"],_woodType] call BP_fnc_inStringArray;
	//bushes
	_dryBush = [["b_neriumo2d","b_ficusc2d"],_woodType] call BP_fnc_inStringArray;
};

if (!_dryWood && {!_dryOrRotten} && {!_dryBush}) exitwith {
cutText ["Living vegetation, hatchet is not effective. Find something drier.","PLAIN DOWN",1];
};
	
if (_dryWood) exitwith {
	if !(alive _object) then {
		if (random 100 < 25) then {
			_object hideobjectglobal true;
		};
	} else {
		_object setdamage (_state + 0.15) min 1;
		if (_state > 0.7) then {
			_posWood = getPosATL _object;
			_object setdamage 1;
			["PartWoodPile", "magazine", "Default", _posWood] call BP_fnc_spawnLoot;
			_woodChopped = _woodChopped + 1;
			player setVariable ["chopWood", _woodChopped];
		};
	};
};

if (_dryOrRotten) exitwith {
	_object setdamage (_state + 0.15) min 1;
	//Check if wood is rotten
	if ((random 100 < 12) && {_state < 0.7}) then {
		cutText ["That wood is rotten","PLAIN DOWN",1];
		_object setdamage 1;
	} else {
		if (_state > 0.7) then {
			_posWood = getPosATL _object;
			_object setdamage 1;
			["PartWoodPile", "magazine", "Default", _posWood] call BP_fnc_spawnLoot;
			_woodChopped = _woodChopped + 1;
			player setVariable ["chopWood", _woodChopped];
		};
	};
};

if (_dryBush) then {
	_object setdamage (_state + 0.3)  min 1;
	if (_state >= 0.6) then {
		_posWood = getPosATL _object;
		_object setdamage 1;
		["PartWoodPile", "magazine", "Default", _posWood] call BP_fnc_spawnLoot;
		_woodChopped = _woodChopped + 1;
		player setVariable ["chopWood", _woodChopped];
	};
};

//_objs = nearestterrainobjects [player,[],2,false];
//isObjectHidden (_objs select 0);