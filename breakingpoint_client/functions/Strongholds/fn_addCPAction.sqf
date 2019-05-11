/*
	BreakingPoint: Second Wind

	Released under Arma Public Share Like Licence (APL-ND)
	https://www.bohemia.net/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_controlPoint"];

_controlPoint addAction 
[
	"Capture the Stronghold", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		[_target, _caller, _actionId, _arguments] call BP_fnc_flagAction;
	}, 
	"", 
	10, 
	true, 
	true, 
	"", 
	"_this distance2D _target < 2"
];