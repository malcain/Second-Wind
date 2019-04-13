// by ALIAS
// Tutorial: https://www.youtube.com/user/aliascartoons

if (!hasInterface) exitWith {};

if (alias_rain_drops)then {
//hint "RAAAAIIIIN DROP";
[] spawn {
while {true} do {
	private ["_alias_rain_drop_factor"];
	if (!alias_rain_drops)then {waitUntil {alias_rain_drops};};
	_rain_temp_drop = rain;
	_alias_rain_drop_factor=linearConversion [0.1,1,rain,0.05,0.005,true]; //hint str _alias_rain_drop_factor;
	//_alias_rain_drop_factor=linearConversion [0.1,1,rain,0.04,0.0035,true];
	
	while {(abs(rain - _rain_temp_drop)<0.1) and (rain>0.1)} do 
	{
		if (rain > 0.02) then {
		_pos_rd = [getPosASLVisual (vehicle player) select 0,getPosASLVisual (vehicle player) select 1,0.01];
		_alias_drop_r = "#particlesource" createVehiclelocal _pos_rd;
		if (!isNull objectParent player) then {_alias_drop_r attachto [vehicle player,[0,0,0]]} else {_alias_drop_r attachto [player]};
		_alias_drop_r setParticleCircle [10, [0, 0, 0]];
		_alias_drop_r setParticleRandom [0.1, [20, 20, 0], [0.175, 0.175, 0], 13, 0.15, [0, 0, 0, 0.1], 0, 0];
		_alias_drop_r setParticleParams [["\A3\data_f\kouleSvetlo", 1, 0, 1], "", "Billboard", 1, 0.2, [0, 0, 0], [0, 0, 0.15], 11, 12, 7.9, 0.075, [0.3, 0.5, 1], [[0.2, 0.2, 0.2, 0.3], [2, 2, 2, 0.1], [0.25, 0.25, 0.25, 0]], [0.08], 1, 0, "", "", vehicle player,0,true];
		_alias_drop_r setDropInterval _alias_rain_drop_factor;
		
		
		
		_alias_drop_sec = "#particlesource" createVehiclelocal _pos_rd;
		if (!isNull objectParent player) then {_alias_drop_sec attachto [vehicle player,[0,0,0]]} else {_alias_drop_sec attachto [player]};
		_alias_drop_sec setParticleCircle [10, [0, 0, 0]];
		_alias_drop_sec setParticleRandom [0.1, [20, 20, 0], [0.175, 0.175, 0], 3, 0.15, [0, 0, 0, 0.1], 0, 0];
		_alias_drop_sec setParticleParams [["\A3\data_f\RainDrop",1, 0, 1], "", "SpaceObject", 1, 0.2, [0, 0, 0], [0, 0, 1], 0, 15, 7.9, 0.075, [0.5,0.5,0.1], [[0.2, 0.2, 0.2, 0.3], [2, 2, 2, 0.1], [0.25, 0.25, 0.25, 0]], [0.08], 1, 0, "", "", vehicle player,0,true];
		_alias_drop_sec setDropInterval _alias_rain_drop_factor;	
		sleep 5;
		deleteVehicle _alias_drop_r;
		deleteVehicle _alias_drop_sec;
		};
	};
	//if (rain == 0) then {deleteVehicle _alias_drop_r;deleteVehicle _alias_drop_sec};
	//waitUntil {(abs(rain - _rain_temp_drop)>0.1)};
	//deleteVehicle _alias_drop_r;	deleteVehicle _alias_drop_sec;
};
};
};

if (alias_wind_debris) then 
{
	[] spawn 
	{
		while {true} do 
		{
		if (!alias_wind_debris) then {waitUntil {alias_wind_debris}};
		waitUntil {!(missionNamespace getVariable "under_cover_rain")};
		_alias_debris_interval = 60 + random 60;
		_alias_wind = wind;
		_xx_speed	=(_alias_wind select 0) + 0.01;
		_yy_speed	=(_alias_wind select 1) + 0.01;

		_alias_drop_factor = [_xx_speed,_yy_speed] call BIS_fnc_greatestNum;
		
		_Leaves_Green_interval	= 2/(_alias_drop_factor*20) + 0.1;
		_Leaves_leaf_interval	= 2/(_alias_drop_factor*20) + 0.1;
		_WoodParts_interval		= 2/(_alias_drop_factor*20) + 0.1;
		_leaves_p_interval		= 2/(_alias_drop_factor*20) + 2+ random 1;

		_Leaves_Green = "#particlesource" createVehicleLocal (getpos player);
		_Leaves_Green attachto [player];
		_Leaves_Green setParticleParams [["\A3\data_f\ParticleEffects\Hit_Leaves\Leaves_Green.p3d", 1, 0, 1],"","SpaceObject",1,7,[0,-3,5],[_xx_speed,_yy_speed,0],1,0.000001,0,1.4,[1+random 0.5],[[0.68,0.68,0.68,1]],[0,1],0.2,1.2,"","",vehicle player];
		_Leaves_Green setParticleRandom [0, [10, 10, 7], [4, 4, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
		_Leaves_Green setParticleCircle [0.0, [0, 0, 0]];

		
		_Leaves_leaf = "#particlesource" createVehicleLocal (getpos player);
		_Leaves_leaf attachto [player];
		_Leaves_leaf setParticleParams [["\A3\data_f\cl_leaf", 1, 0, 1],"","SpaceObject",1,7,[0,-3,5],[_xx_speed,_yy_speed,0],1,0.000001,0,1.4,[1+random 0.5],[[0.68,0.68,0.68,1]],[0,1],0.2,1.2,"","",vehicle player];
		_Leaves_leaf setParticleRandom [0, [10, 10, 7], [4, 4, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
		_Leaves_leaf setParticleCircle [0.0, [0, 0, 0]];

		_WoodParts = "#particlesource" createVehicleLocal (getpos player);
		_WoodParts attachto [player];
		_WoodParts setParticleParams [["\A3\data_f\ParticleEffects\Universal\WoodParts_01.p3d", 1, 0, 1],"","SpaceObject",1,7,[0,-3,5],[_xx_speed,_yy_speed,0],1,0.000001,0,1.4,[1+random 0.5],[[0.68,0.68,0.68,1]],[0,1],0.2,1.2,"","",vehicle player];
		_WoodParts setParticleRandom [0, [10, 10, 7], [4, 4, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
		_WoodParts setParticleCircle [0.0, [0, 0, 0]];

		_Leaves_Green setDropInterval _Leaves_Green_interval;
		_Leaves_leaf setDropInterval _Leaves_leaf_interval;
		_WoodParts setDropInterval _WoodParts_interval;

		sleep _alias_debris_interval/3;
		deleteVehicle _Leaves_Green;
		deleteVehicle _Leaves_leaf;
		deleteVehicle _WoodParts;
		sleep _alias_debris_interval;
		};
	};
};

if (alias_local_fog)then {
// hint "FOOOOOGGGG";

[] spawn {
while {true} do {
	_rain_temp_drop = rain;
	if (!alias_local_fog)then {waitUntil {alias_local_fog};};
	_alias_fog_interval = 10 + random 10;
	_alias_wind = wind;
	_xx_fog_speed	=_alias_wind select 0;
	_yy_fog_speed	=_alias_wind select 1;
	_alias_drop_fog_factor = 0.03+random 0.1;
	//_alias_drop_fog_factor=linearConversion [0,1,rain,10,0.02,true];
	_alias_local_fog = "#particlesource" createVehicleLocal (getpos player); 
	if (!isNull objectParent player) then {_alias_local_fog attachto [vehicle player,[0,0,0]]} else {_alias_local_fog attachto [player]};
	_alias_local_fog attachto [player];
	_alias_local_fog setParticleCircle [10, [3, 3, 0]];
	_alias_local_fog setParticleRandom [10, [0.25, 0.25, 0], [1, 1, 0], 1, 1, [0, 0, 0, 0.1], 0, 0];
	_alias_local_fog setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard", 1, 12, [0, 0, 0], [-1, -1, 0], 3, 10.15, 7.9, 0.01, [10, 10, 20], [[0.5, 0.5, 0.5, 0], [0.5, 0.5, 0.5, 0.1], [1, 1, 1, 0]], [0.08], 1, 0, "", "", vehicle player];
	_alias_local_fog setDropInterval _alias_drop_fog_factor;

//	sleep _alias_fog_interval;
	waitUntil {(abs(rain - _rain_temp_drop)>0.1)};
	deleteVehicle _alias_local_fog;
};
};
};