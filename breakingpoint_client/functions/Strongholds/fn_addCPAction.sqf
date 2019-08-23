/*
	BP: Second Wind

	Released under Arma Public License No Derivatives (APL-ND)
	https://www.bohemia.net/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_controlPoint","_marker"];

_controlPoint addAction 
[
	"Capture the Stronghold",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		[_target, _caller, _actionId, _arguments] spawn BP_fnc_flagAction;
	}, 
	_marker,
	10,
	true,
	true,
	"",
	"_this distance2D _target < 2"
];