private ["_spawn_obj_class","_object_anom_core","_gigi","_spawn_obj","_spawn_obj_classname"];

_spawn_obj_class = _this select 0;
_object_anom_core = _this select 1;

//_object_anom_core setVariable ["activeaza",false,true];

while {!isNull _object_anom_core} do {
	/*while { !(_object_anom_core getVariable "activeaza") } do {
	{
	if (_x distance getPos _object_anom_core < 1100) then {
		_object_anom_core setVariable ["activeaza",true,true]
	} 
	} foreach allPlayers; 
	sleep 10
	};*/
	//_object_anom_core setVariable ["activeaza",false,true];
	_spawn_obj_classname = selectRandom _spawn_obj_class;
	if (_spawn_obj_classname isKindOf "MAN") then 
	{
		_grp = createGroup CIVILIAN;
		_bounce_obj_temp = createVehicle ["Land_CanOpener_F",getposATL _object_anom_core,[],0,"CAN_COLLIDE"];
		//[_bounce_obj_temp] remoteExec ["hideObject",-2];
		_telep_in = selectRandom ["telep_02","telep_03","telep_04","telep_05"];
		[_object_anom_core ,[_telep_in,100]] remoteExec ["say3d"];
		_gigi = _grp createUnit [_spawn_obj_classname,getposATL _object_anom_core, [], 0,"CAN_COLLIDE"];
		_gigi setVariable ["teleported_in", 1, true];
		_bounce_obj_temp setdir (random 360);
		_gigi attachTo [_bounce_obj_temp,[0,0,1]];
		_bounce_obj_temp setVelocity [selectRandom [-4,4],selectRandom [-4,4],2];
		sleep 0.8;
		detach _gigi;
		deleteVehicle _bounce_obj_temp;
		sleep 0.5;
		_gigi setPosATL [getposATL _gigi select 0,getposATL _gigi select 1,0.0001];
		sleep 3;
		[_gigi] spawn 
		{
			_unit_fresh = _this select 0;
			sleep 120;
			_unit_fresh setVariable ["teleported_in", nil,true];
		};
		sleep 30 + random 15;
	} else {
		_bounce_obj_temp = createVehicle ["Land_CanOpener_F",getposATL _object_anom_core,[],0,"CAN_COLLIDE"];
		//[_bounce_obj_temp] remoteExec ["hideObject",-2];
		_telep_in = selectRandom ["telep_01","telep_02","telep_03","telep_04","telep_05"];
		[_object_anom_core ,[_telep_in,100]] remoteExec ["say3d",0];	
		_spawn_obj = createVehicle [_spawn_obj_classname, [getposATL _object_anom_core select 0,getposATL _object_anom_core select 1,1], [], 0, "NONE"];
		_spawn_obj attachTo [_bounce_obj_temp,[0,0,0]];
		_bounce_obj_temp setVelocity [selectRandom [-1,1],selectRandom [-1,1], 10];
		_impact = selectRandom ["bodyfall_wood_3","bodyfall_wood_1","bodyfall_wood_2","bodyfall_metal_3"];
		[_bounce_obj_temp,["tremor",100]] remoteExec ["say3d"];
		waitUntil {(getPosATL _spawn_obj select 2) < 0.3};
		detach _spawn_obj;
		[_spawn_obj,[_impact,100]] remoteExec ["say3d",0];
		_spawn_obj setPosATL [getposATL _spawn_obj select 0,getposATL _spawn_obj select 1,0.0001];
		sleep 0.1;
		deleteVehicle _bounce_obj_temp;
		sleep 30 + random 15; // delay between spawns
		if ((_spawn_obj distance _object_anom_core < 10) and (local _spawn_obj)) then {deleteVehicle _spawn_obj};
	};
};