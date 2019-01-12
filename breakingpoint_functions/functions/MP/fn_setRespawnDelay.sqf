/*
	Author: Karel Moricky

	Description:
	Increase the respawn time based on a condition

	Parameter(s):
		0: CODE - Condition, must return BOOL
		1: NUMBER - delay in seconds which is applied when the condition is true
		2: STRING - description displayed when the delay is in effect

	Returns:
	NOTHING
*/
params [["_condition", {false},[{}]], ["_delayMax", 0,[0]], ["_description","",[""]]];
private _delay = 0;

["Function BIS_fnc_setRespawnDelay has been disabled."] call bis_fnc_error;