/*
	Breaking Point Mod: BP_fnc_medicalPitchWhine;

	Description:
		Damage Handler Pitch / Whine Sound
	Parameter(s): []
		- visual (Int)
		- sound (Int)
	Returns:
		None
	Example: [20,45] call BP_fnc_medicalPitchWhine;
*/
params ["_player","_sleep"];


//_player = _this;

_player setUnconscious true;
uisleep _sleep;
_player setUnconscious false;
uisleep 0.1; 
player switchMove "amovppnemstpsnonwnondnon"; 