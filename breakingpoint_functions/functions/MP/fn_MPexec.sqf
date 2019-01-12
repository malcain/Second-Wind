/*
	Author: Karel Moricky

	Description:
	Execute received remote execution

	Parameter(s):
	_this select 0: STRING - Packet variable name (always "BIS_fnc_MP_packet")
	_this select 1: ARRAY - Packet value (sent by BIS_fnc_MP function; see it's description for more details)
	
	Returns:
	BOOL - true if function was executed successfuly
*/
private _varName = _this select 0;
private _varValue = _this select 1;

_varValue select 0 params ["_mode", [0]];
_varValue select 1 params ["_params", []];
_varValue select 2 params ["_functionName", "",[""]];
_varValue select 3 params ["_target", true,[objnull,true,0,[],sideUnknown,grpnull,""]];
_varValue select 4 params ["_isPersistent", []];
_varValue select 5 params ["_isCall", true, [true]];

["Function BIS_fnc_MPexec has been disabled."] call bis_fnc_error;