// by ALIAS

fnc_unit_fire = {
	private ["_spot","_fire_p","_life_time","_unit_surs"]; 
	_spot = _this select 0; 
	_life_time = _this select 1;
	_unit_surs = _this select 2;
	_fire_p = "#particlesource" createVehicleLocal (getPosATL _spot);
	_fire_p setParticleCircle [0,[0,0,0]];
	_fire_p setParticleRandom [0.1,[0,0,0],[0,0,0],0.1,0.1,[0,0,0,0.1],1,0];
	_fire_p setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",16,15,10,1],"","Billboard",1,0.3,[0,0,0],[0,0,0],15,7,7.9,1,[0.5,0.5,0.1],[[1,1,1,1],[1,1,1,1],[1,1,1,0]],[2],1,0,"","",_spot];
	_fire_p setDropInterval 0.05;
	
	_fum = "#particlesource" createVehicleLocal (getpos _unit_surs);
	_fum setParticleCircle [0,[0,0,0]];
	_fum setParticleRandom [1,[0.2,0.2,0],[0,0,0],10,0.3,[0,0,0,0.1],1,0];
	_fum setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",8,0,40,1],"","Billboard",1,0.5,[0,0,1],[0,0,0],15,8,7.9,0.1,[0.5,2,3],[[0.5,0.2,0.2,0],[0,0,0,0.5],[1,1,1,0]],[1],1,0,"","",_unit_surs];
	_fum setDropInterval 0.1;
	
	waitUntil {_unit_surs getVariable "killed_by_fire"};
	_fire_p setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",16,15,16,0],"","Billboard",1,1,[0,0,0],[0,0,0],15,9,7.9,1,[0.5,0.5,0.1],[[1,1,1,1],[1,1,1,1],[1,1,1,0]],[1],1,0,"","",_spot];
	_fire_p setDropInterval 0.1;
	_fum setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",8,0,40,1],"","Billboard",1,3,[0,0,0],[0,0,0],0,10,7.9,0,[1,2,3],[[0.5,0.2,0.2,0],[0,0,0,0.5],[1,1,1,0]],[0.5],0,0,"","",_unit_surs];
	_fum setDropInterval 0.5;
	sleep _life_time;
	deleteVehicle _fum;
};

if (!hasInterface) exitwith {};

_unit_surs	= _this select 0;
_life_time	= _this select 1;

_tip = ["01","02","03","04","strigat_1","strigat_2","strigat_3","strigat_4","strigat_5","strigat_91","strigat_92"] call BIS_fnc_selectRandom;
[_unit_surs,[_tip,300]] remoteExec ["say3d"];

_pct_unit = ["leftfoot","rightfoot","leftforearmroll","rightshoulder"];
_part_fire = "Land_HelipadEmpty_F" createVehiclelocal [0,0,0];
_part_fire attachTo [_unit_surs, [0,0,0],"pelvis"];
_fire_obj_unit = [_part_fire];
{
	_onf = random 10;
	if (_onf>5) then 
	{
		_part_fire = "Land_HelipadEmpty_F" createVehiclelocal [0,0,0];
		_part_fire attachTo [_unit_surs, [0,0,0],_x];
		_fire_obj_unit pushBack _part_fire;
	};
} forEach _pct_unit;

{[_x,_life_time,_unit_surs] spawn fnc_unit_fire} foreach _fire_obj_unit;

_li_fire = "#lightpoint" createVehicle getPosATL _unit_surs;
_li_fire lightAttachObject [_unit_surs, [0,0,1]];
_li_fire setLightAttenuation [/*start*/ 0,/*constant*/0,/*linear*/0,/*quadratic*/0,/*hardlimitstart*/0.1,10];
_li_fire setLightBrightness 1;
_li_fire setLightDayLight true;	
_li_fire setLightAmbient[1,0.2,0.1];
_li_fire setLightColor[1,0.2,0.1];

[_li_fire] spawn {
	_lit = _this select 0;
	sleep 0.5;
	_lit setLightBrightness 10;
	while {alive _lit} do 
	{
		_lit setLightBrightness 0.1+(random 0.9);
		_lit setLightAttenuation [0,0,100,0,0.1,5+(random 5)];
		sleep 0.05+(random 0.1);
	};
};

[_fire_obj_unit select 0] spawn 
{
	private ["_voce"];
	_voce = _this select 0;
	while {alive _voce} do 
	{
		[_voce,["unit_fire",100]] remoteExec ["say3d"];
		sleep 3.5
	};
};

//sleep _life_time;sleep 2;
waitUntil {_unit_surs getVariable "killed_by_fire"};
{deleteVehicle _x} foreach _fire_obj_unit;
deleteVehicle _li_fire;