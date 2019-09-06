/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

private["_display","_btnRespawn","_btnAbort","_timeOut","_timeMax","_isDead"];

disableSerialization;

waitUntil {_display = findDisplay 49;!isNull _display;};

_btnRespawn = _display displayCtrl 1010;
_btnAbort = _display displayCtrl 104;
_btnRespawn ctrlEnable false;
_btnAbort ctrlEnable false;
_timeOut = 0;
_timeMax = 15;

if (!isNil "r_player_dead") then {

	if (r_player_dead) exitWith {
		_btnAbort ctrlEnable true;
	};

	if (r_fracture_legs) exitWith {
		_btnRespawn ctrlEnable true;
		_btnAbort ctrlEnable true;
	};
};

if (BP_LastHostageTime > 0) then {
	if ((diag_tickTime - BP_LastHostageTime > 1200)) then {
		_btnRespawn ctrlEnable true;
	};
};

while {!isNull _display} do {
	switch true do {
		case ({isPlayer _x} count (player nearEntities ["AllVehicles", 6]) > 1) : {
			_btnAbort ctrlEnable false;
			titleText  ["Cannot Abort near another player!", "PLAIN DOWN",0.4];
		};
		case (_timeOut < _timeMax && count (player nearEntities ["zZombie_Base", 35]) > 0) : {
			_btnAbort ctrlEnable false;
			titleText  [format ["Can Abort in %1", (_timeMax - _timeOut)], "PLAIN DOWN",0.4];
		};
		case (player getVariable["combattimeout", 0] >= time) : {
			_btnAbort ctrlEnable false;
			titleText  ["Cannot Abort while in combat!", "PLAIN DOWN",0.4];					
		};
		case ([player,objNull] call BP_fnc_isInsideBuilding) : {
			_btnAbort ctrlEnable false;
			titleText  ["Cannot Abort while inside a building.", "PLAIN DOWN",0.4];
		};
		case (!isNull objectParent player) : {
			_btnAbort ctrlEnable false;
			titleText  ["Cannot Abort while inside a vehicle.", "PLAIN DOWN",0.4];
		};
		default {
			_btnAbort ctrlEnable true;
			titleText  ["", "PLAIN DOWN"];	
		};
	};
	cutRsc ["TitleScreen", "PLAIN"];
	sleep 1;
	_timeOut = _timeOut + 1;
};

cutText ["", "PLAIN DOWN"];
//titleText ["", "PLAIN"];

if (r_player_unconscious) then {
	titleRsc ["BP_Unconscious","PLAIN",0];
};