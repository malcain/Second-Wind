params ["_mainFlag"];

if (isNil {_mainFlag getVariable "passedVars"}) exitwith {};
_passedVarsArr = _mainFlag getVariable "passedVars";
_controlPoint = _passedVarsArr select 0;
_caller = _passedVarsArr select 1;
_callerClass = _passedVarsArr select 2;
_flagArray = _passedVarsArr select 3;
_mFlagTexture = _passedVarsArr select 4;
_markerName = _passedVarsArr select 5;
//_markerRadius = _passedVarsArr select 6;
//_markerRadColor = markerColor _markerRadius; 

_captureRadius = 225;

_curFlagTexture = flagTexture _mainFlag;
if (_curFlagTexture != _mFlagTexture) exitwith {};

_playersInArea = false;
waitUntil {
	_playersInArea = [_controlPoint,_captureRadius] call BP_fnc_nearbyPlayers;
	if (_playersInArea) exitwith {true};
	sleep 15;
	false;
};

_curFlagTexture = flagTexture _mainFlag;
if !(_curFlagTexture == _mFlagTexture) exitwith {};

_theOrderClass = [1,4,5];
_anarchistClass = [2,6];

_factionArray = [_controlPoint,_captureRadius] call BPServer_fnc_nearbyFactions;

if (_callerClass in _anarchistClass && ((_factionArray select 1 == 0) or (_factionArray select 0 > 0) or (_factionArray select 2 > 0))) then {
	//_markerRadius setMarkerColor "ColorBrown";
	//_markerRadius setMarkerBrush "SolidBorder";
	waitUntil {
		_factionArray = [_controlPoint,_captureRadius] call BPServer_fnc_nearbyFactions;
		if ((_factionArray select 1) > 0 && (_factionArray select 0 == 0) && (_factionArray select 2 == 0)) exitwith {true};
		
		_curFlagTexture = flagTexture _mainFlag;
		if !(_curFlagTexture == _mFlagTexture) exitwith {true};
		
		sleep 15;
		false;
	};
} else {
	if (_callerClass in _theOrderClass && ((_factionArray select 0 == 0) or (_factionArray select 1 > 0) or (_factionArray select 2 > 0))) then {
		//_markerRadius setMarkerColor "ColorBrown";
		//_markerRadius setMarkerBrush "SolidBorder";
		waitUntil {
			_factionArray = [_controlPoint,_captureRadius] call BPServer_fnc_nearbyFactions;
			if ((_factionArray select 0) > 0 && (_factionArray select 1 == 0) && (_factionArray select 2 == 0)) exitwith {true};
			
			_curFlagTexture = flagTexture _mainFlag;
			if !(_curFlagTexture == _mFlagTexture) exitwith {true};
			
			sleep 15;
			false;
		};
	};
};

_curFlagTexture = flagTexture _mainFlag;
if !(_curFlagTexture == _mFlagTexture) exitwith {};

_flagPhase = flagAnimationPhase _mainFlag;
if (_flagPhase > 0.58 && {_flagPhase < 0.62} && {BP_CargoHeli > 0}) then {
	["serverMgr: Calling CargoHeli Spawn"] call BP_fnc_debugConsoleFormat;
	BP_CargoHeli = BP_CargoHeli - 1;
	_handle = [_mainFlag,_markerName] spawn BPServer_fnc_spawnHeliCargo;
	[_handle] call BP_fnc_addThreadHandle;
};

_markerName setMarkerAlpha ((markerAlpha _markerName) + 0.07 min 0.7);
/*if (_markerRadColor != markerColor _markerRadius) then {
	_markerRadius setMarkerColor _markerRadColor;
	_markerRadius setMarkerBrush "Border";
};*/

{
[_x, (flagAnimationPhase _x) + 0.1, 60] call BP_fnc_animateFlag;
} forEach _flagArray;