/*
	BP: Second Wind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain
*/
params ["_isOpened","_isForced"];

_itemArray = assignedItems player;
_haveGPS = "ItemGPS" in _itemArray;

if (!_haveGPS && _isOpened) then {
	[] spawn {
		while {visibleMap} do {
			mapanimclear;
		};
	};
};