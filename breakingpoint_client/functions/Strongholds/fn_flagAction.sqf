/*
	BreakingPoint: Second Wind

	Released under Arma Public Share Like Licence (APL-ND)
	https://www.bohemia.net/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_target", "_caller", "_actionId", "_arguments"];

_callerClass = _caller getVariable ["class",0];

_theOrderClass = [1,4,5];
_anarchistClass = [2,6];
_rivalFactions = _theOrderClass + _anarchistClass;
if !(_callerClass in _rivalFactions) exitwith {};

//_caller playAction "PutDown";

//Handle Animation Result
_finished = ["PutDown"] call BP_fnc_medicAnim;

if (_finished) then 
{	
	//Start capture
	[(netID _target),(netID _caller),_actionId,_callerClass] remoteExecCall ["BPServer_fnc_captureStart",2];
} else {
	r_interrupt = false;
	player switchMove "";
	player playActionNow "stop";
};