//by Malcain

_strongholdState = [];
if (isNil "allStrongholds") then {
	allStrongholds = allMissionObjects "BP_FlagPole";
};

{
	_flagTexture = flagTexture _x;
	_flagPhase = flagAnimationPhase _x;
	_position = _x modelToWorld [0,0,0];
	if (_flagTexture != "" && {_flagPhase > 0.9}) then {
		_flag = [_flagTexture, 28] call BIS_fnc_trimString;
		_strongholdState pushBackUnique [_position,_flag];
	};
} forEach allStrongholds;

diag_log text format ["strongholdState Save %1",_strongholdState];
profileNameSpace setVariable ["strongholdState",_strongholdState];
saveProfileNamespace;