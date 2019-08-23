/*
	BP: Second Wind

	Released under Arma Public License No Derivatives (APL-ND)
	https://www.bohemia.net/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_target", "_caller", "_actionId", "_arguments"];

_callerClass = _caller getVariable ["class",0];

_nonFaction = [3,7];
if (_callerClass in _nonFaction) exitwith {};

//Handle Animation Result
//_finished = false;
//_finished = ["acts_carfixingwheel"] call BP_fnc_constructAnim;
_caller playAction "PutDown";
[(netID _target),(netID _caller),_actionId,_callerClass,_arguments] remoteExecCall ["BPServer_fnc_captureStart",2];

//diag_log text format ["target %1, caller %2, actionID %3, callerClass %4, arguments %5",_target,_caller,_actionId,_callerClass,_arguments];


/*if (_finished) then 
{	
	//Start capture
	[(netID _target),(netID _caller),_actionId,_callerClass,_arguments] remoteExecCall ["BPServer_fnc_captureStart",2];
} else {
	r_interrupt = false;
	player switchMove "";
	player playActionNow "stop";
};*/