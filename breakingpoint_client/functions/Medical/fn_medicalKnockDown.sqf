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
private ["_player"];

//_player = _this;

[]spawn {
	player setUnconscious true;
	uisleep 1;
	player setUnconscious false;
	uisleep 0.1; 
	player switchMove "amovppnemstpsnonwnondnon"; 
	};