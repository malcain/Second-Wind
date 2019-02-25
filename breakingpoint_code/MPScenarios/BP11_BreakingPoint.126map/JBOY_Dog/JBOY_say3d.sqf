//function:  JBOY_say3d.sqf
//in init:   JBOY_say3d = compile preprocessFileLineNumbers "Scripts\JBOY_say3d.sqf";
//to call:   nul = [_killer,"goodbye"] call JBOY_say3d;  
//Credit:    copied from Twirly's awesomely helpful post on forums.  Thank you Twirly!  I take no credit for this.
//Post:      http://forums.bistudio.com/showthread.php?136476-vehicle-player-say3d-quot-sound-quot-not-global

private ["_obj","_snd"];

_obj = _this select 0;    //object
_snd = _this select 1;    //sound
// _pv  = _this select 2;    //public variable, so mulitple talkers not bottleneceked to one pv
// _pvname  = _this select 3;    //public variable name, so mulitple talkers not bottleneceked to one pv

// broadcast Public Variable
PVEH_netSay3D = [_obj,_snd];
 publicVariable "PVEH_netSay3D";
//_pvname = [_obj,_snd];
//publicVariable _pv;

// run on current machine also if not dedi server
if (not isDedicated) then {_obj say3D _snd};

true  