/*
	Second Wind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain
*/

params ["_player"];

_time = diag_tickTime;
SW_FreshLog = true;

waituntil {sleep 0.1; (speed player > 0 or ((diag_tickTime - _time) > 7))};

player allowDamage true;

sleep 45;
SW_FreshLog = false;