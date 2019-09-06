/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain
*/
private ["_pos"];

_pos = _this;
diag_log format ["alarmclock position %1", _pos];

[player,150,true,_pos] call BP_fnc_zombieAlert;