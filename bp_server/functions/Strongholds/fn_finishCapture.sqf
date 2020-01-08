params ["_mainFlag"];

if (isNil {_mainFlag getVariable "passedVars"}) exitwith {};
_passedVarsArr = _mainFlag getVariable "passedVars";

_controlPoint = _passedVarsArr select 0;
_caller = _passedVarsArr select 1;
_callerClass = _passedVarsArr select 2;
_markerRadius = _passedVarsArr select 6;
_markerRadius setmarkerAlpha 0;

//Assign rewards
_theOrderClass = [1,4,5];
_anarchistClass = [2,6];
_capturersList = [];

_reward = 100;
_playersOnline = count allPlayers;
if (_playersOnline < 28) then {
	if (_playersOnline > 12) then {
	_reward = _reward*0.75;
	} else {
	_reward = _reward*0.5;
	};
};

//Update PVP reward multiplier
if (_callerClass in _theOrderClass) then {
	cntStrongholds = [(cntStrongholds select 0) + 1,cntStrongholds select 1];
	//Give reward to capturers
	{
		if(isPlayer _x && alive _x) then {
			_playerClass = _x getVariable ["class",0];
			if (_playerClass in _theOrderClass) then {
				[_x,_reward] call BPServer_fnc_addFactionPoints;
				//Sync Stats
				_x call BPServer_fnc_statsSync;
				
				_nil = _capturersList pushBack _x;
			};
		};
	} count (_controlPoint nearEntities["CAManBase",325]);
} else {
	cntStrongholds = [cntStrongholds select 0,(cntStrongholds select 1) + 1];
	//Give reward to capturers
	{
		if(isPlayer _x && alive _x) then {
			_playerClass = _x getVariable ["class",0];
			if (_playerClass in _anarchistClass) then {
				[_x,_reward] call BPServer_fnc_addFactionPoints;
				//Sync Stats
				_x call BPServer_fnc_statsSync;
				
				_nil = _capturersList pushBack _x;
			};
		};
	} count (_controlPoint nearEntities["CAManBase",325]);
};

//broadcast variable
publicVariable "cntStrongholds";
//Set faction emblems on Signs
_factionSign = "breakingpoint_ui\signs\sign";
_signArray = nearestObjects [_controlPoint, ["Land_Billboard_F","Land_Billboard_04_blank_F","SignAd_Sponsor_F","Banner_01_F","Land_Noticeboard_F"], 475];
_factionSignArray = [];

switch (_callerClass) do {
	//Ranger
	case 1: {
		//_factionFlagArray = [_factionFlag + "_ranger.paa",_factionFlag + "_nomad.paa",_factionFlag + "_survivalist.paa"];
		_factionSignArray = [_factionSign + "_ranger.paa",_factionSign + "_nomad.paa",_factionSign + "_survivalist.paa"];
	};
	//Outlaw
	case 2: {
		//_factionFlagArray = [_factionFlag + "_outlaw.paa",_factionFlag + "_scavenger.paa"];
		_factionSignArray = [_factionSign + "_outlaw.paa",_factionSign + "_scavenger.paa"];
	};
	//Hunter
	case 3: { 
		//_factionFlagArray = [_factionFlag + "_hunter.paa"];
		_factionSignArray = [_factionSign + "_hunter.paa"];
	};
	//Nomad
	case 4: { 
		//_factionFlagArray = [_factionFlag + "_nomad.paa",_factionFlag + "_ranger.paa",_factionFlag + "_survivalist.paa"];
		_factionSignArray = [_factionSign + "_nomad.paa",_factionSign + "_ranger.paa",_factionSign + "_survivalist.paa"];
	};
	//Survivalist
	case 5: { 
		//_factionFlagArray = [_factionFlag + "_survivalist.paa",_factionFlag + "_nomad.paa",_factionFlag + "_ranger.paa"];
		_factionSignArray = [_factionSign + "_survivalist.paa",_factionSign + "_nomad.paa",_factionSign + "_ranger.paa"];
	};
	//Scavenger
	case 6: { 
		//_factionFlagArray = [_factionFlag + "_scavenger.paa",_factionFlag + "_outlaw.paa"];
		_factionSignArray = [_factionSign + "_scavenger.paa",_factionSign + "_outlaw.paa"];
	};
};

{
	_signEmblem1 = selectRandom _factionSignArray;
	_x setObjectTextureGlobal [0,_signEmblem1];
	_signEmblem2 = selectRandom _factionSignArray;
	_x setObjectTextureGlobal [1,_signEmblem2];
} forEach _signArray;

//Animations
_animationList = animationNames _controlPoint;
if (count _animationList > 0) then {
	{
		_controlPoint animate [_x, -1];
	} forEach _animationList
};

diag_log text format ["[Stronghold capture]: %1 finished.",_controlPoint];