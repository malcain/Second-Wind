
//Select Random Position and Delete it out of the array
//_position = selectRandom BP_HeliCrashPos;
//[_position,true,"",["Land_OfficeCabinet_01_F","Land_ArmChair_01_F","OfficeTable_01_old_F"],5,""] call BPServer_fnc_smuggler;
/*_count = round (worldsize/400);
for "_i" from 0 to _count do {
_lootPlaces = selectBestPlaces [[random worldsize,random worldsize], 4500, "(houses + meadow) * (1 - waterDepth) * (1 - forest) * (1 - trees)", 5, 50];
_place = selectRandom _lootPlaces;

if (_place select 1 <= 0) exitwith {};
_pos = _place select 0;

_position2D = [_pos, 0, 5, 1, 0] call BIS_fnc_findSafePos;
if (_position2D isEqualTo []) exitwith {};
_iPos = [_position2D select 0, _position2D select 1, 0];

_count = 1;
_type = selectRandom ["Survivor","Stalker","GhostHotelWpn","MilitaryAirfield","CarePackage"];

[_type,_iPos,_count] call BP_fnc_dynamicSpawnLoot;

};