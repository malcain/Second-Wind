params ["_pos", "_over", "_climber"];

[((name _climber) + "EH_prkr_loop"), {((_condpars select 0) getVariable "moveVar") select 0}, [_climber], {(_pars select 0) setVelocity [0,0,0]}, [_climber], false, {}, [], 0] call BP_fnc_addEH;

_help = surface_obj;

if (!isPlayer _climber) then
{
	_help = "platform_wlk" createVehicleLocal [0,0,0];
	_help spawn {sleep 4; deleteVehicle _this};
};

_help setposASL _pos;

_help setdir getdir _climber;

_poswt = _climber worldtomodel (asltoagl _pos);

if (_over) then
{ 
	_climber setposASL (agltoasl (_climber modeltoworld [_posWT select 0, _posWT select 1, (_posWT select 2) + 0.1]));
} else
{
	_climber setposASL (agltoasl (_climber modeltoworld [_posWT select 0, (_posWT select 1)+0.1, (_posWT select 2) + 0.1]));
};