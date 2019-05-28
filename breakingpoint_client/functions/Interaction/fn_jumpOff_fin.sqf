params ["_climber"];

[((name _climber) + "EH_jumpoff")] call BP_fnc_removeEH;

[((name _climber) + "EH_prkr_loop")] call BP_fnc_removeEH;

surface_obj setpos [0,0,0];

_moveVar = _climber getvariable "moveVar";
_moveVar set [0, false];
_moveVar set [1, false];
_climber setVariable ["moveVar", _moveVar];

