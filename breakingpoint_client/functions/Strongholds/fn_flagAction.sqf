/*
	BreakingPoint: Second Wind

	Released under Arma Public Share Like Licence (APL-ND)
	https://www.bohemia.net/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_target", "_caller", "_actionId", "_arguments"];

_callerClass = _caller getVariable ["class",0];

_rivalFactions = [1,2,4,5,6];
if !(_callerClass in _rivalFactions) exitwith {};


//Handle Animation Result
//_finished = ["PutDown"] call BP_fnc_medicAnim;
_caller playAction "PutDown";
[(netID _target),(netID _caller),_actionId,_callerClass] remoteExecCall ["BPServer_fnc_captureStart",2]

//diag_log text format ["target %1, caller %2, actionID %3, callerClass %4",_target,_caller,_actionId,_callerClass];

/*if (_finished) then 
{	
	//Start capture
	[(netID _target),(netID _caller),_actionId,_callerClass] remoteExecCall ["BPServer_fnc_captureStart",2];
} else {
	r_interrupt = false;
	player switchMove "";
	player playActionNow "stop";
};*/