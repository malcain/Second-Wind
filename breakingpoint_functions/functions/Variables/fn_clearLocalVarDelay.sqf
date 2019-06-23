/*
	BreakingPoint: Second Wind

	Released under Arma Public License No Derivatives (APL-ND)
	https://www.bistudio.com/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_variable","_time"];

["_variable","_time"] spawn {
	params ["_variable","_time"];
	
	//Var cleanup delay
	sleep _time;
	player setVariable [_variable,Nil];
};