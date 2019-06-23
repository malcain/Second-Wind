/*
	BP: SecondWind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain

	Using: _inStr = [["needle","invalid"],"needle in haystack"] call BP_fnc_inStringArray;
*/
params ["_arrayToCheck","_string"];

_result = false;

{
if ((_string find _x) >= 0) exitwith {_result = true};
} count _arrayToCheck;

_result