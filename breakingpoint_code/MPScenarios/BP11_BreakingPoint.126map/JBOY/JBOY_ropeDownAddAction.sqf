// JBOY_ropeDownAddAction.sqf
/*
 _d = [unit] execvm "JBOY\JBOY_ropeDownAddAction.sqf";
 */
if (!isServer)  exitwith {};
params["_dude"];
_treeProxy = _dude getVariable "jboyTreeProxy";

getUnitPositionId = {
	 private["_vvn", "_str"];
	_vvn = vehicleVarName _this;
	_this setVehicleVarName "";
	_str = str _this;
	_this setVehicleVarName _vvn;
	parseNumber (_str select [(_str find ":") + 1])
};
_actionTitle = 'Fast Rope Down';

if (!isPlayer _dude) then 
{
    _actionTitle = (name _dude)+'('+ str(_dude call getUnitPositionId) + '): Fast Rope Down';
};

_ropeDownActionID = _dude addAction 
[_actionTitle, {
		_dude = _this select 0;
        _id = _this select 2;
        _dude removeAction _id;
        _dude removeAction (_dude getVariable"ClimbDownActionID");
        _treeProxy = _dude getVariable "jboyTreeProxy";
        _tree = _treeProxy getVariable "tree";
		if (!isNull _tree) then {
            _pallet = _treeProxy getVariable "pallet";
            if (alive _dude) then 
            {
                _d = [_dude,_pallet, _tree] execvm "JBOY\JBOY_fastRopeDown.sqf"; 
            };
		}
	}, nil, 10, true, true, '', '',
	5, false
];
_dude setVariable["RopeDownActionID",_ropeDownActionID,true];