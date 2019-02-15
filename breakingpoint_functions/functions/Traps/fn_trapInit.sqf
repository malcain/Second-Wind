/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

params ["_trap"];

_trap = _trap select 0;

if (isNull _trap) exitWith {};

/*KK_fnc_setPosAGLS = {
	params ["_obj", "_pos", "_offset"];
	_offset = 0;
	if (isNil "_offset") then {_offset = 0};
	_pos set [2, worldSize]; 
	_obj setPosASL _pos;
	_pos set [2, vectorMagnitude (_pos vectorDiff getPosVisual _obj) + _offset];
	_obj setPosASL _pos;
};*/

if (isServer) then
{
	_trigger = createTrigger ["EmptyDetector", getPos _trap,false];
	//[_trigger, getPos _trap] call KK_fnc_setPosAGLS;
	_trigger setPos getPosATL _trap;
	_trigger setVariable ["trap",_trap,false];
	_trigger setTriggerArea [0.6, 0.4, 0, true];
	_trigger setTriggerActivation ["ANYPLAYER", "PRESENT", true];
	//_trigger setTriggerStatements ["this", "hint 'trigger on'", "hint 'trigger off'"];
	_trigger setTriggerStatements [
		"this",
		"[thisTrigger, thisList] call BP_fnc_trapTrigger;",
		""
	];
	[_trap] call BP_fnc_trapActivate;
};