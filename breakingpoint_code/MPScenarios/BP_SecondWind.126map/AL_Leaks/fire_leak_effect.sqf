// by ALIAS

private ["_leak_obj","_damag","_unghi","_gas_pressure","_press_implicit_x","_press_implicit_y","_gas_pressure","_eco_obj"];

if (!hasInterface) exitWith {};

_leak_obj	= _this select 0;
_unghi		= _this select 1;
_damag		= _this select 2;
// teak the array below to change the color of the smoke [R,G,B]
_color = [0,0,0];
_fire_pressure = 4;

_unghi_x_waterfall = getdir _leak_obj;

if (_unghi_x_waterfall<=90) then {_press_implicit_x = linearConversion [0, 90,_unghi_x_waterfall, 0, 1, true];_press_implicit_y = 1-_press_implicit_x};
if ((_unghi_x_waterfall>90)and(_unghi_x_waterfall<180)) then {_unghi_x_waterfall = _unghi_x_waterfall-90;_press_implicit_x = linearConversion [0, 90,_unghi_x_waterfall, 1, 0, true];_press_implicit_y = _press_implicit_x-1};
if ((_unghi_x_waterfall>180)and(_unghi_x_waterfall<270)) then {_unghi_x_waterfall = _unghi_x_waterfall-180;_press_implicit_x = linearConversion [0, 90,_unghi_x_waterfall, 0, -1, true];_press_implicit_y = (-1*_press_implicit_x)-1};
if ((_unghi_x_waterfall>270)and(_unghi_x_waterfall<360)) then {_unghi_x_waterfall = _unghi_x_waterfall-270;_press_implicit_x = linearConversion [0, 90,_unghi_x_waterfall, -1, 0, true];_press_implicit_y = 1+_press_implicit_x};

while {!isNull _leak_obj} do 
{		
	waitUntil {sleep 2; (player distance _leak_obj < 1400)};
	_eco_obj  =  "Land_HelipadEmpty_F" createVehiclelocal (getpos _leak_obj);
	// lumina
	_luminafoc = "#lightpoint" createVehicleLocal (getposATL _leak_obj); 
	_luminafoc lightAttachObject [_leak_obj,[0,0,0.05]];
	_luminafoc setLightBrightness 10;
	_luminafoc setLightAmbient [1,0.1,0];
	_luminafoc setLightColor [1,0.3,0];
	//_luminafoc setLightUseFlare true;		
	_luminafoc setLightDayLight true;	
	[_luminafoc] spawn {
		_luminafoc = _this select 0;
		while {!isNull _luminafoc} do 
		{
		_luminafoc setLightBrightness 3+ random 2;
		_luminafoc setLightAttenuation [/*start*/0, /*constant*/1, /*linear*/100, /*quadratic*/0, /*hardlimitstart*/1+random 3,/* hardlimitend*/30]; 
		sleep 0.1;
		};
		deletevehicle _luminafoc;
	};	
	
	_fire_leak = "#particlesource" createVehicleLocal (getPos _leak_obj);
	_fire_leak setParticleCircle [0, [0, 0, 0]];
	_fire_leak setParticleRandom [0.1, [0.01, 0.01, 0.01], [0, 0, 0], 0, 0, [0, 0, 0, 0.1], 0, 0];
	_fire_leak setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 0.5, [0, 0, 0],[_press_implicit_x*_fire_pressure,_press_implicit_y*_fire_pressure,_unghi],3,10,7.9,0,[0.2,0.7,0.1],[[1,1,1,0],[1,1,1,1],[1,1,1,0.5]],[1000],1,0,"","",_leak_obj];
	//_fire_leak setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 0.5, [0, 0, 0],[_press_implicit_x*_fire_pressure,_press_implicit_y*_fire_pressure,_unghi], 3, 10, 7.9, 0, [0.2,1.5,0.1], [[1, 1, 1, 0], [1, 1, 1, 1], [1, 1, 1, 0.5]], [1000], 0, 0, "", "", _leak_obj];
	//_fire_leak setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal",16,2,80,0],"","Billboard",1,0.5,[0,0,0],[_press_implicit_x*_fire_pressure,_press_implicit_y*_fire_pressure,_unghi],3,10,7.9,0,[0.2,0.5,0.1],[[1,1,1,0],[1,1,1,1],[1,1,1,0.5]],[1],0,0,"","",_leak_obj];
	_fire_leak setDropInterval 0.05;

// heat
	_caldura = "#particlesource" createVehicleLocal (getPosATL _leak_obj);
	_caldura setParticleCircle [0,[0,0,0]];
	_caldura setParticleRandom [0.1,[0.2,0.2,0.2],[0,0,0],0,0.25,[0,0,0,0.1],0.5,0];
	_caldura setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1],"","Billboard",1,0.7,[0,0,0],[_press_implicit_x*_fire_pressure,_press_implicit_y*_fire_pressure,_unghi],3,9.8,7.9,0.2,[0.1,1,1.5],[[1,1,1,0.5],[1,1,1,1],[1,1,1,0]],[0.08],1,0,"","",_leak_obj];
	_caldura setDropInterval 0.1;
	
	_smoke_fire = "#particlesource" createVehicleLocal (getPos _leak_obj);
	_smoke_fire setParticleCircle [0, [0, 0, 0]];
	_smoke_fire setParticleRandom [1,[0.5,0.5,0.5],[0,0,0],0,0.5,[0,0,0,0.1],1,0];
	_smoke_fire setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard", 1,10, [0, 0, 0],[_press_implicit_x*2,_press_implicit_y*2,_unghi/2],3,10,7.9,1,[1,3,5], [[_color select 0,_color select 1,_color select 2, 0], [_color select 0,_color select 1,_color select 2,0.3], [_color select 0,_color select 1,_color select 2,0]], [0.08], 0, 0, "", "", _leak_obj];
	_smoke_fire setDropInterval 0.2;
	
		_fire_leak setParticleFire [_damag,2.7,0.1];
		if (player distance _leak_obj <= 4) then 
		{
			call BP_fnc_medicalSync;
			call BP_fnc_medSave;
		};

	_fire_sound = ["foc_0","foc_2","foc_6","foc_4","foc_3","foc_5","foc_9","foc_91"] call BIS_fnc_selectRandom;
	_fundal_sound = ["fundal_foc_1","fundal_foc_2","fundal_foc_3"] call BIS_fnc_selectRandom;
	while {player distance _leak_obj < 1400} do 
	{
		_leak_obj say3D [_fire_sound, 100];
		_eco_obj say3D ["fundal_foc_3",50];
		sleep 5.5;
	};
	deleteVehicle _fire_leak;
	deleteVehicle _caldura;
	deleteVehicle _smoke_firek;
	deleteVehicle _eco_obj;
};	