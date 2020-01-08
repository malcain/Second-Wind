//by Malcain

params ["_targetNetID","_callerNetID","_actionId","_callerClass","_markerName"];

_controlPoint = objectFromNetID _targetNetID;
_caller = objectFromNetID _callerNetID;

[_controlPoint,_caller,_actionId,_callerClass,_markerName] spawn {

_controlPoint = _this select 0;
_caller = _this select 1;
//_actionId = _this select 2;
_callerClass = _this select 3;
_markerName = _this select 4;
_markerRadius = _markerName + "_radius";

//diag_log text format ["target %1, caller %2, callerClass %3",_controlPoint,_caller,_callerClass];
//Determine Faction Specific Emblems for flags & signs.
_factionFlag = "breakingpoint_ui\flags\flag";
_factionFlagArray = [];
_markerType = "Uncontrolled";
_markerColor = "ColorWhite";

switch (_callerClass) do {
	//Ranger
	case 1: {
		_factionFlagArray = [_factionFlag + "_ranger.paa",_factionFlag + "_nomad.paa",_factionFlag + "_survivalist.paa"];
		_markerType = "Ranger";
		_markerColor = "ColorBlue";
		//_factionSignArray = [_factionSign + "_ranger.paa",_factionSign + "_nomad.paa",_factionSign + "_survivalist.paa"];
	};
	//Outlaw
	case 2: {
		_factionFlagArray = [_factionFlag + "_outlaw.paa",_factionFlag + "_scavenger.paa"];
		_markerType = "Outlaw";
		_markerColor = "ColorRed";
		//_factionSignArray = [_factionSign + "_outlaw.paa",_factionSign + "_scavenger.paa"];
	};
	//Hunter
	case 3: { 
		_factionFlagArray = [_factionFlag + "_hunter.paa"];
		_markerType = "Hunter";
		_markerColor = "ColorBrown";
		//_factionSignArray = [_factionSign + "_hunter.paa"];
	};
	//Nomad
	case 4: { 
		_factionFlagArray = [_factionFlag + "_nomad.paa",_factionFlag + "_ranger.paa",_factionFlag + "_survivalist.paa"];
		_markerType = "Nomad";
		_markerColor = "ColorYellow";
		//_factionSignArray = [_factionSign + "_nomad.paa",_factionSign + "_ranger.paa",_factionSign + "_survivalist.paa"];
	};
	//Survivalist
	case 5: { 
		_factionFlagArray = [_factionFlag + "_survivalist.paa",_factionFlag + "_nomad.paa",_factionFlag + "_ranger.paa"];
		_markerType = "Survivalist";
		_markerColor = "ColorGreen";
		//_factionSignArray = [_factionSign + "_survivalist.paa",_factionSign + "_nomad.paa",_factionSign + "_ranger.paa"];
	};
	//Scavenger
	case 6: { 
		_factionFlagArray = [_factionFlag + "_scavenger.paa",_factionFlag + "_outlaw.paa"];
		_markerType = "Scavenger";
		_markerColor = "ColorOrange";
		//_factionSignArray = [_factionSign + "_scavenger.paa",_factionSign + "_outlaw.paa"];
	};
};

//Faction flags and banners.
_flagArray = nearestObjects [_controlPoint, ["FlagPole_F"], 475];
_mainFlag = (nearestObjects [_controlPoint, ["BP_FlagPole"], 475]) select 0;

sleep 0.5;

_currentTexture = flagTexture _mainFlag;
_flagPhase = flagAnimationPhase _mainFlag;

//Cancel if already captured by your faction.
if (_currentTexture in _factionFlagArray) exitwith {
	if (_flagPhase < 1) then {
		BP_GameError = 15;
	} else {
		BP_GameError = 14;
	};
	(owner _caller) publicVariableClient "BP_GameError";
};

if (_currentTexture != "") then {
	_markerName setMarkerType _markerType;
	_markerName setMarkerAlpha 0.1;
	_markerRadius setMarkerColor _markerColor;
	_markerRadius setMarkerAlpha 1;
} else {
	_marker = createMarker [_markerName, _controlPoint];
	_markerName setMarkerType _markerType;
	_markerName setMarkerAlpha 0.1;
	_markerRad = createMarker [_markerRadius, _controlPoint];
	_markerRadius setMarkerShape "ellipse";
	_markerRadius setMarkerAlpha 1;
	_markerRadius setMarkerColor _markerColor;
	_markerRadius setMarkerBrush "Border";
	_markerRadius setMarkerSize [225, 225];
};

//Animations
_animationList = animationNames _controlPoint;
if (count _animationList > 0) then {
	{
		_controlPoint animate [_x, 1];
	} forEach _animationList
};

//Change marker, write hint.
//_markerName = str _controlPoint;

BP_GameError = 16;
(owner _caller) publicVariableClient "BP_GameError";

//Update PVP reward multiplier

if (_flagPhase == 1 && !(_currentTexture == "")) then {
	_theOrderClass = [1,4,5];
	_anarchistClass = [2,6];
	if (_callerClass in _theOrderClass) then {
		cntStrongholds = [cntStrongholds select 0,(cntStrongholds select 1) - 1];
		publicVariable "cntStrongholds";
	} else {
		cntStrongholds = [(cntStrongholds select 0) - 1,cntStrongholds select 1];
		publicVariable "cntStrongholds";
	};
};

sleep 0.5;

{
	[_x, 0, true] call BIS_fnc_animateFlag;
	sleep 0.5;
	_x setFlagTexture selectRandom _factionFlagArray;
	[_x, (flagAnimationPhase _x) + 0.1, 60] call BP_fnc_animateFlag;
} forEach _flagArray;

_mFlagTexture = _factionFlagArray select 0;
_mainFlag setFlagTexture _mFlagTexture; //Main flag faction = caller faction.
_controlPoint setObjectTextureGlobal [1,_mFlagTexture];

//_controlPoint removeAction _actionId;

//remove current EHs from flag, then assign new.
[_mainFlag, "FlagAnimationDone"] call BIS_fnc_removeAllScriptedEventHandlers;
//save vars in mainflag to pass into eventHandler
_varArray = [_controlPoint,_caller,_callerClass,_flagArray,_mFlagTexture,_markerName,_markerRadius];
_mainFlag setVariable ["passedVars",_varArray];

sleep 1;
[
	_mainFlag, 
	"FlagAnimationDone", 
	{
		if (_this select 1 > 0.99) exitWith 
		{
			[_this select 0, "FlagAnimationDone"] call BIS_fnc_removeAllScriptedEventHandlers;
			_this select 0 call BPServer_fnc_finishCapture;
		};
		[_this select 0] spawn BPServer_fnc_extendCapture;
	}
] call BIS_fnc_addScriptedEventHandler;

};