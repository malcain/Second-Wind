/*
	BreakingPoint: Second Wind

	Released under Arma Public License No Derivatives (APL-ND)
	https://www.bistudio.com/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_object"];
//trees
_pineTree = ["t_pinus",str(_object),false] call BP_fnc_inString;
_deadTree1 = ["t_poplar2f",str(_object),false] call BP_fnc_inString;
_deadTree2 = ["t_ficus_3d",str(_object),false] call BP_fnc_inString;
_dryTree = ["t_oleae",str(_object),false] call BP_fnc_inString;
//bushes
_dryBush = ["b_neriumo2d",str(_object),false] call BP_fnc_inString;
_deadBush = ["b_ficusc2d",str(_object),false] call BP_fnc_inString;

if (_dryBush || _deadBush) then {
	_state = damage _object;
	_object setdamage (_state + 0.3)  min 1;
	if (_state >= 0.6) then {
		_posWood = getPosATL _object;
		_object setdamage 1;
		["PartWoodPile", "magazine", "Default", _posWood] call BP_fnc_spawnLoot;
	};
} else {
	if (_pineTree || _deadTree1 || _deadTree2 || _dryTree) then {
		if !(alive _object) then {
			if (random 100 < 25) then {
			_object hideobjectglobal true;
			};
		} else {
			_state = damage _object;
			_object setdamage (_state + 0.15) min 1;
			if (_state > 0.7) then {
				_posWood = getPosATL _object;
				_object setdamage 1;
				["PartWoodPile", "magazine", "Default", _posWood] call BP_fnc_spawnLoot;
			};
		};
	};
};