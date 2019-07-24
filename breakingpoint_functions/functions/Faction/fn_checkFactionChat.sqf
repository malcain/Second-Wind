/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

/* 
	Faction System  

	_level = _playerObj call BP_fnc_getFactionLevel;

*/

private ["_class","_factionLevel"];

_class = _this;
_factionLevel = player call BP_fnc_getFactionLevel;
if (_factionLevel < 1) exitwith {};

if (!isNil "BP_RadioChannels") then {
		switch (_class) do
	{
		case 1: { //Ranger
			(BP_RadioChannels select 0) enableChannel [true, false];
			(BP_RadioChannels select 2) enableChannel [false, false];
			(BP_RadioChannels select 3) enableChannel [false, false];
		};
		case 2: { //Outlaw
			(BP_RadioChannels select 1) enableChannel [true, false];
			(BP_RadioChannels select 4) enableChannel [false, false];
		};
		case 4: { //Nomad
			(BP_RadioChannels select 0) enableChannel [false, false];
			(BP_RadioChannels select 2) enableChannel [true, false];
			(BP_RadioChannels select 3) enableChannel [false, false];
		};
		case 5: { //Survivalist
			(BP_RadioChannels select 0) enableChannel [false, false];
			(BP_RadioChannels select 2) enableChannel [false, false];
			(BP_RadioChannels select 3) enableChannel [true, false];
		};
		case 8: { //Scavenger
			(BP_RadioChannels select 1) enableChannel [false, false];
			(BP_RadioChannels select 4) enableChannel [true, false];
		};
	};
};