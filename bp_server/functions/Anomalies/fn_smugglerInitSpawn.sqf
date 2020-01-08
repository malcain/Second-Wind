
//Select Random Position and Delete it out of the array
//_position = selectRandom BP_HeliCrashPos;
//[_position,true,"",["Land_OfficeCabinet_01_F","Land_ArmChair_01_F","OfficeTable_01_old_F"],5,""] call BPServer_fnc_smuggler;

{
//Smuggler
_smugPlaces = selectBestPlaces [_x, 1500, "(houses + meadow) * (1 - waterDepth) * (1 - forest)", 5, 50];
_place = selectRandom _smugPlaces;

if (_place select 1 <= 0) exitwith {};
_pos = _place select 0;

if (random 100 < 35) then {
	_nearRoads = _pos nearRoads 150;
	if (count _nearRoads > 0) then {
		_pos = selectRandom _nearRoads;
	};
};

_position2D = [_pos, 0, 5, 1, 0] call BIS_fnc_findSafePos;
if (_position2D isEqualTo []) exitwith {};
if (random 100 < 15) then {
[_position2D,true,"",["Land_OfficeCabinet_01_F","Land_ArmChair_01_F","OfficeTable_01_old_F"],5,""] spawn BPServer_fnc_smuggler;
};

} forEach BP_HeliCrashPos;