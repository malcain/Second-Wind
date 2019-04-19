/*
	BreakingPoint: Second Wind

	Released under Arma Public License No Derivatives (APL-ND)
	https://www.bistudio.com/community/licenses/arma-public-license-nd

	by Malcain
*/

private ["_object","_valid","_list","_isRock","_xStr","_location"];
_object = _this;
_objectPos = (getPosATL _object);
_objectType = (typeOf _object);
_valid = true;

//Check for Invalid Object Ref
if (isNull _object) exitWith {false};

_houseObject = (_objectType isKindOf "BP_HouseObject");
_houseStorage = (_objectType isKindOf "BP_HouseStorage");
_rockStash = (_objectType isKindOf "BP_RockStash");
_onRoad = isOnRoad _objectPos;

_isInsideObject = [_object] call BP_fnc_isInsideBuilding;
_isInsidePlayer = [player] call BP_fnc_isInsideBuilding;

_location = player modelToWorld [0,0.7,0];
//if ((_location select 2) < 0) then { _location set [2,0]; };

/*_badStrings =
[
	"stone",
	"rock",
	"cargo",
	"spp_transformer",
	"garbage",
	"rampart",
	"wreck",
	"cargobox",
	"tyres",
	"statue01",
	"misc_concrete_high"
];

if (!_houseObject && {!_houseStorage}) then 
{
	_list = nearestObjects [_location, [],8];
	_index = _list find _object;
	if (_index >= 0) then { _list deleteAt _index; };
	{
		_xStr = format ["%1",_x];
		{
			_contains = [_x,_xStr,false] call BP_fnc_inString;
			if (_contains) then { _valid = false; };
		} forEach _badStrings;
	} forEach _list;
};*/

_objView = [_object, "VIEW"] checkVisibility [eyePos player, getPosASL _object];

if (_objView == 0) then {
_valid = false;
};

//Make sure the object surface isn't in water
if (surfaceiswater _objectPos) exitWith {false};

//Can't Place Rock Stashes On Roads
if (_rockStash) then {
	if (_onRoad) then {
		_valid = false;
	};
};

//HouseStorage / House Object can only be placed in houses. Non House Objects cannot be placed in houses.
if (_houseObject || {_houseStorage}) then {
	if (!_isInsideObject or !_isInsidePlayer) then { _valid = false; };
} else {
	if (_isInsideObject or _isInsidePlayer) then { _valid = false; };
};

//Make sure the object isn't glitched into something
//_location = getPosATL _object;
//if ((_location select 2) < 0) exitWith {false};

_valid