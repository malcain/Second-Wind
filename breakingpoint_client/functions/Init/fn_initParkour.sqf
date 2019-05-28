if (IsDedicated) exitWith {};

[] spawn {
	waituntil {!isNull player};
	
	player setVariable ["moveVar", [false, false, true]];
};

surface_obj = "platform_wlk" createVehicleLocal [0,0,0];

if (!isMultiplayer) then {
	debug_sign = "Sign_Arrow_Green_F" createVehicleLocal [0,0,0];
};

["EH_walkableObjs", {true}, [], BP_fnc_walkableObjs, [], false, {}, [], -1] call BP_fnc_addEH;