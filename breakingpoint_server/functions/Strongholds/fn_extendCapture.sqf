params ["_flagArray"];

sleep 150;

{
[_x, (flagAnimationPhase _x) + 0.1, 1800] call BIS_fnc_animateFlag;
} forEach _flagArray;