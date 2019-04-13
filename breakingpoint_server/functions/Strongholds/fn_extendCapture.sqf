params ["_flagArray"];

sleep 150;

{
_x setFlagTexture "breakingpoint_ui\flags\flag_scavenger.paa";
[_x, (flagAnimationPhase _x) + 0.1, 1800] call BIS_fnc_animateFlag;
} forEach _flagArray;