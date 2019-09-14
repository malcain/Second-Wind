// by ALIAS

private ["_al_shooter","_blow_obj","_shooter"];

if (!hasInterface) exitWith {};
_blow_obj = _this select 0;

enableCamShake true;
_sparks_ini = "#particlesource" createVehicleLocal (getPos _blow_obj);
_sparks_ini setParticleCircle [0,[-3,-3,-3]];
_sparks_ini setParticleRandom [0.1,[0,0,0],[3,3,3],0,0.1,[0,0,0,0.1],1,0];
_sparks_ini setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,0.2,[0,0,0],[0,0,0],0,10,1,0,[0.03,0.03,0.03],[[1,1,1,1],[1,1,1,1],[1,1,1,1]],[1],1,0,"","",_blow_obj];
_sparks_ini setDropInterval 0.01;

_fum_ini = "#particlesource" createVehicleLocal getPosATL _blow_obj;
_fum_ini setParticleCircle [0,[0,0,0]];
_fum_ini setParticleRandom [0.1,[0.1,0.1,0],[0,0,0],3,0.5,[0, 0, 0, 0.1],1,0];
_fum_ini setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard",1,0.5,[0,0,0],[0,0,0],5,10,7,0.1,[0.1,0.5,1],[[1,1,1,0.1],[1,1,1,0.3],[1,1,1,0]],[1], 1, 0, "", "",_blow_obj];
_fum_ini setDropInterval 0.02;

_star = ["sfarait_1","sfarait_2"] call BIS_fnc_selectRandom;
_blow_obj say3D [_star,500];

waitUntil {vectorMagnitude velocity _blow_obj < 0.25};
deleteVehicle _sparks_ini;
deleteVehicle _fum_ini;

_blows = ["explozie_1","explozie_2","explozie_3"] call BIS_fnc_selectRandom;
_blow_obj say3D [_blows,500];
_valva = ["foc_initial_1","foc_initial_2"] call BIS_fnc_selectRandom;
_flacari = ["foc_1","foc_2","foc_3"] call BIS_fnc_selectRandom;
if (player distance _blow_obj < 30) then {addCamShake [5,2,15]};

_ini_flame = "#particlesource" createVehicleLocal getPosATL _blow_obj;
_ini_flame setParticleCircle [0,[0,0,0]];
_ini_flame setParticleRandom [0,[0,0,0],[0,0,0],0,0,[0,0,0,0],0,0];
_ini_flame setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16,0,32,0],"","Billboard",1,1,[0,0,3],[0,0,0],0,10,8,0,[15],[[1,1,1,1]],[2],0,0,"","",_blow_obj];
_ini_flame setDropInterval 100;
[_ini_flame] spawn {_de_sters = _this select 0;sleep 1;deleteVehicle _de_sters};

_ini_blast = "#particlesource" createVehicleLocal (getpos _blow_obj);
_ini_blast setParticleCircle [0,[0,0,0]];
_ini_blast setParticleRandom [0,[0,0,0],[0,0,0],0,0,[0,0,0,0],0,0];
_ini_blast setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal",16,0,16,0],"","Billboard",1,0.3,[0,0,0],[0,0,0],3,10,7.9,0.5,[5,5,5],[[1,1,1,1],[1,1,1,1],[1,1,1,1]],[1],0,0,"","",_blow_obj];
_ini_blast setDropInterval 1;
[_ini_blast] spawn {_de_sters = _this select 0;sleep 0.2;deleteVehicle _de_sters};

_li_exp = "#lightpoint" createVehicle getPosATL _blow_obj;
_li_exp lightAttachObject [_blow_obj, [0,0,1]];
_li_exp setLightAttenuation [0,0,0,0,1,200];
_li_exp setLightBrightness 20;
_li_exp setLightDayLight true;	
_li_exp setLightAmbient[1,0.2,0.1];
_li_exp setLightColor[1,0.2,0.1];
[_li_exp] spawn {_de_sters = _this select 0;sleep 0.3;deleteVehicle _de_sters};

_val_fum = "#particlesource" createVehicleLocal getPosATL _blow_obj;
_val_fum setParticleCircle [1,[5,5,0]];
_val_fum setParticleRandom [0.1,[0.1,0.1,0],[-5,-5,0],3,0.5,[0, 0, 0, 0.1],1,0];
_val_fum setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard",1,2,[0,0,0],[0,0,0],5,10,7,0.1,[1,5,10],[[1,1,1,0.5],[1,1,1,0.5],[1,1,1,0]],[1], 1, 0, "", "",_blow_obj];
_val_fum setDropInterval 0.002;
[_val_fum] spawn {_de_sters = _this select 0;sleep 0.1;deleteVehicle _de_sters};

_sparks = "#particlesource" createVehicleLocal (getPos _blow_obj);
_sparks setParticleCircle [1,[8,8,10]];
_sparks setParticleRandom [0.1,[0.2,0.2,0.2],[-8,-8,15],0,0.1,[0,0,0,0.1],1,0];
_sparks setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,3,[0,0,0],[0,0,0],0,10,1,0,[0.05,0.05,0.05],[[1,1,1,1],[1,1,1,1],[1,1,1,1]],[1],1,0,"","",_blow_obj];
_sparks setDropInterval 0.0001;
[_sparks] spawn {_de_sters = _this select 0;sleep 0.1;deleteVehicle _de_sters};

_fum_foc = "#particlesource" createVehicleLocal (getPosATL _blow_obj);
_fum_foc setParticleCircle [0,[0,0,0]];
_fum_foc setParticleRandom [0.1,[4,4,1],[0,0,0],11,0.1,[0,0,0,0],0,0];
_fum_foc setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",8,0,40,1], "", "Billboard",1,5,[0,0,0],[0,0,0],7,10,7.9,0,[6,3,9],[[1,0.3,0.01,0],[0.5,0,0,1],[0.5,0.1,0,0]],[1], 1, 0, "", "", _blow_obj];
_fum_foc setDropInterval 0.1;

_flama = "#particlesource" createVehicleLocal (getPosATL _blow_obj);
_flama setParticleCircle [5,[0,0,0]];
_flama setParticleRandom [1,[1,1,0],[0,0,0],0.1,0.1,[0,0,0,0.1],1,0];
_flama setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,10,32,1],"","Billboard",1,5,[0,0,0],[0,0,0],0,10.07,7.9,0,[3,3,3],[[1,1,1,0],[1,1,1,1],[1,1,1,0]],[0.8],0, 0, "", "", _blow_obj,0,true];
_flama setDropInterval 0.1;

_luminafoc = "#lightpoint" createVehicleLocal (getposATL _blow_obj); 
_luminafoc lightAttachObject [_blow_obj,[0,0,1]];
_luminafoc setLightAttenuation [/*start*/0.2,/*constant*/0,/*linear*/50, /*quadratic*/0, /*hardlimitstart*/1,/* hardlimitend*/30]; 
_luminafoc setLightBrightness 10;
_luminafoc setLightAmbient [1,0.1,0];
_luminafoc setLightColor [1,0.3,0];
_luminafoc setLightDayLight true;

_foc_heat = "#particlesource" createVehicleLocal (getposATL _blow_obj);
_foc_heat setParticleCircle [4,[0,0,0]];
_foc_heat setParticleRandom [0.1,[2,2,-1],[0,0,0],8,0.1,[0,0,0,0.1],1,0];
_foc_heat setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d", 1, 0, 1], "", "Billboard", 1,2,[0,0,0],[0,0,0.5],15,10.05,7.9,0.1,[4,2,4],[[1,1,1,0],[1,1,1,1],[1,1,1,0]],[0.08],1,0,"","",_blow_obj];
_foc_heat setDropInterval 0.1;

_flames = "#particlesource" createVehicleLocal (getPosASL _blow_obj);
_flames setParticleCircle [2,[0,0,0]];
_flames setParticleRandom [0.1,[2,2,-1],[0,0,0],8,0.1,[0,0,0,0.1],1,0];
_flames setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard",1,2,[0,0,-2],[0,0,0.5],27,10.05,7.9,0.1,[5,3,0.5],[[1,1,1,0.5],[1,1,1,1],[1,1,1,0]],[1],0,0,"","",_blow_obj,0,true];
_flames setDropInterval 0.02;
[_flames] spawn {_de_sters = _this select 0;sleep 1;deleteVehicle _de_sters};

_fly_spark = "#particlesource" createVehicleLocal (getPosASL _blow_obj);
_fly_spark setParticleCircle [5,[-1,-1,1]];
_fly_spark setParticleRandom [0.1,[1,1,1],[0,0,0],8,0.1,[0,0,0,0.1],1,0.5];
_fly_spark setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal",16,2,16,1], "", "Billboard",1,3,[0,0,0],[0,0,0],17,10.05,7.9,0.1,[0.05,0.05,0.05],[[1,0.8,0.4,1],[1,0.8,0.4,1],[1,0.8,0.4,1]],[0.5],1,0.5,"","",_blow_obj];
_fly_spark setDropInterval 0.1;

_fum_mare = "#particlesource" createVehicleLocal (getPosATL _blow_obj);
_fum_mare setParticleCircle [0,[0,0,0]];
_fum_mare setParticleRandom [7,[2,2,0],[-2,-2,0],5,0.5,[0,0,0,0.1],1,0];
_fum_mare setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",8,0,40,1],"","Billboard",1,30,[0,0,0],[1,1,4],13,10,7.9,0.1,[8,10,30,40,50],[[0,0,0,0.3],[0,0,0,0.5],[0.2,0.2,0.2,0.2],[0.5,0.5,0.5,0.1],[0.5,0.5,0.5,0]],[0.5],1, 0, "", "", _blow_obj];
_fum_mare setDropInterval 0.1;

sleep 0.5;
_blow_obj say3D [_valva,500];
sleep 1;
_blow_obj say3D [_flacari,500];
_timer = 2.1;

_burned_land = "Crater" createVehiclelocal [0,0,0];
_burned_land setdir (random 360);
_burned_land setpos (getpos _blow_obj); //_burned_land enableSimulation false;

while {_timer < 30} do 
{	
	_luminafoc setLightBrightness 8+(random 2);
	_luminafoc setLightAttenuation [0.2,0,50,0,1,140+random 10];
	if (player distance _blow_obj < 7) then {player setVariable ["set_on_fire",true]};
	sleep 0.3;
	_timer = _timer + 0.3;
};
deleteVehicle _foc_heat;
deleteVehicle _fum_foc;
deleteVehicle _flames;
deleteVehicle _luminafoc;
deleteVehicle _flama;
sleep 1.2;
deleteVehicle _fly_spark;
sleep 3;
deleteVehicle _fum_mare;