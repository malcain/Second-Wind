// by ALIAS
// null=[[_x,_obj_teleporter],"AL_smuggler\teleport_effect.sqf"] remoteExec ["execVM"]

fn_teleport = {
    private ["_unit","_pozitie"];
    _unit        = _this select 0;
    _pozitie    = _this select 1;
    waitUntil {isNil{player getVariable "tele"}};
    player setVariable ["tele",true];
   // [] spawn {execVM "AL_smuggler\video_effect.sqf"};
	remoteExec ["BP_fnc_tp_effect",_unit];
    ["zoomin"] remoteExec ["playsound",_unit];
    _sound_in = ["halu_1","halu_2","halu_3","halu_4","halu_5","halu_6","halu_7","halu_8","halu_9","halu_91","halu_92","halu_93","halu_94","halu_95","halu_96","halu_97","halu_98","halu_99","halu_991","halu_992","halu_993","halu_994","halu_995","halu_996","halu_997","halu_998","halu_999","halu_9999"] call BIS_fnc_selectRandom;
    [_sound_in] remoteExec ["playsound",_unit];
    sleep 0.5;
    [_unit,[_pozitie select 0,_pozitie select 1,2]] remoteExec ["setPos",_unit];
    sleep (5 + random 4);
    player setVariable ["tele",nil]; 
};

/*fn_final_scream = {
waitUntil {isNil{player getVariable "tele"}};
_tipat=["strigat_1","strigat_2","strigat_3","strigat_4","strigat_5","strigat_6","strigat_7","strigat_8","strigat_9","strigat_91","strigat_92"] call BIS_fnc_selectRandom;
[_this,[_tipat,300]] remoteExec ["say3d"];
};*/

_unit_check	= _this select 0;
_obj_tele	= _this select 1;

_dice_tele = random 6;
_floor_dice = floor _dice_tele;
_poz_1 = [];
_poz_2 = [];
_poz_3 = [];
_poz_4 = [];
_poz_5 = [];

switch (_floor_dice) do 
{
	case 0: {_poz_1 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] call BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
	case 1: {_poz_1 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] call BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
	case 2: {_poz_1 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;_poz_2 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] call BP_fnc_anomTeleport;
			[_unit_check,_poz_2] call BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
	case 3: {_poz_1 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;_poz_2 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;_poz_3 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] call BP_fnc_anomTeleport;
			[_unit_check,_poz_2] call BP_fnc_anomTeleport;			
			[_unit_check,_poz_3] call BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
	case 4: {_poz_1 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;_poz_2 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;_poz_3 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;_poz_4 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] call BP_fnc_anomTeleport;
			[_unit_check,_poz_2] call BP_fnc_anomTeleport;			
			[_unit_check,_poz_3] call BP_fnc_anomTeleport;		
			[_unit_check,_poz_4] call BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
	case 5: {_poz_1 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;_poz_2 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;_poz_3 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;_poz_4 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;_poz_5 = [getpos _obj_tele,300,-1,5,0,-1,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] call BP_fnc_anomTeleport;
			[_unit_check,_poz_2] call BP_fnc_anomTeleport;			
			[_unit_check,_poz_3] call BP_fnc_anomTeleport;		
			[_unit_check,_poz_4] call BP_fnc_anomTeleport;			
			[_unit_check,_poz_5] call BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
};