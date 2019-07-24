/*
	BP: Second Wind

	Released under Arma Public License No Derivatives (APL-ND)
	https://www.bohemia.net/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_unit","_pos"];

waitUntil {isNil{player getVariable "tele"}};

player setVariable ["tele",true];
_height = 2;
if (random 100 < 20) then {_height = 7 + random 550};
//remoteExec ["BP_fnc_tp_effect",_unit];
call BP_fnc_teleportEffect;

playsound "zoomin";
//["zoomin"] remoteExec ["playsound",_unit];

_sound_in = ["halu_1","halu_2","halu_3","halu_4","halu_5","halu_6","halu_7","halu_8","halu_9","halu_91","halu_92","halu_93","halu_94","halu_95","halu_96","halu_97","halu_98","halu_99","halu_991","halu_992","halu_993","halu_994","halu_995","halu_996","halu_997","halu_998","halu_999","halu_9999"] call BIS_fnc_selectRandom;
playsound _sound_in;
//[_sound_in] remoteExec ["playsound",_unit];
sleep 0.5;
_unit setPos [_pos select 0,_pos select 1,_height];
//[_unit,[_pos select 0,_pos select 1,2]] remoteExec ["setPos",_unit];
sleep (4 + random 3);
player setVariable ["tele",nil];