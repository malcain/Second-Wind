// by ALIAS

if (!hasInterface) exitWith {};

_leak_obj = _this select 0;

while {!isNull _leak_obj} do 
{
	waitUntil {
	sleep 61;
	rain >= 0.15 };
	
	
	_puddle_leak =  "Land_Puddle_01_F" createVehiclelocal (getposasl _leak_obj);
	_inaltime_leak = getPosATL _leak_obj select 2;
	_puddle_leak setDir (random 360);
	_puddle_leak attachTo [_leak_obj,[0,0,-_inaltime_leak]];	
	waitUntil {sleep 2; (player distance _puddle_leak < 300) and (rain >= 0.15)};

	_bubble_leak = "#particlesource" createVehicleLocal (getPos _leak_obj);
	_bubble_leak setParticleCircle [0, [0, 0, 0]];
	_bubble_leak setParticleRandom [0, [0.002,0.003,0.15], [0, 0, 0], 0,2, [0, 0, 0, 0.5], 0, 0];
	_bubble_leak setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d", 1, 0, 1], "", "Billboard", 1, 5, [0, 0, 0], [0,0,0], 0, 15, 7.9, 0.001, [0.015,0.015], [[0,0,0,1],[0,0,0,1]], [0.08], 1, 0, "", "", _leak_obj];
	_bubble_leak setDropInterval 0.005;

	//water leak
	_wet_leak = "#particlesource" createVehicleLocal (getPos _leak_obj);
	_wet_leak setParticleCircle [0, [0, 0, 0]];
	_wet_leak setParticleRandom [0, [0.002, 0.01,-0.2], [0, 0, 0], 0, 0.1, [0, 0, 0, 0.5], 0, 0];
	_wet_leak setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal.p3d",16,12,14,0], "", "Billboard", 1, 5, [0,0,-0.4],[0,0,0],0, 17, 7.9, 0.001,[0.3,0.3,0.3],[[0.8,0.8,1,0.1],[0.8,0.8,1,0.1],[0.8,0.8,1,0.1]],[1000], 1, 0, "", "", _leak_obj];
	_wet_leak setDropInterval 0.01;

	//stropi jos
	_stropi = "#particlesource" createVehicleLocal (getPos _puddle_leak);
	_stropi setParticleCircle [0.05, [0, 0, 0]];
	_stropi setParticleRandom [1,[0.1,0.1,0],[1,1,0.5],0,0.01,[0,0,0,1],1,0];
	_stropi setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal.p3d",16,12,16,0], "", "Billboard", 1, 0.5, [0,0,0],[0,0,0.7],0,15,7.9,0.0001,[0.02,0.02],[[0.5,0.5,0.6,0.5],[0.5,0.5,0.6,0.5]],[1000],1,0, "", "", _puddle_leak];
	_stropi setDropInterval 0.05;

	//splash jos
	_splash_wave = "#particlesource" createVehicleLocal (getPos _puddle_leak);
	_splash_wave setParticleCircle [0,[0,0,0]];
	_splash_wave setParticleRandom [0.1,[0.3,0.3,0],[0,0,0],0,0.5,[0,0,0,0.1],0.5,0];
	_splash_wave setParticleParams [["\A3\data_f\ParticleEffects\Universal\UniversalOnSurface.p3d",16,15,15,1],"", "Billboard",1,1,[0,0,0],[0,0,0],0,10,7.9,0,[0.01,0.8],[[.05,.05,0.07,0.3],[.05,.05,0.07,0]],[1],1,0,"","",_puddle_leak];
	_splash_wave setDropInterval 0.1;

	_impact = "#particlesource" createVehicleLocal (getPos _puddle_leak);
	_impact setParticleCircle [0, [0, 0, 0]];
	_impact setParticleRandom [0,[0.02,0.02,0],[0,0,0],0,0.1,[0,0,0,0.5],0,0];
	_impact setParticleParams [["\A3\data_f\ParticleEffects\Universal\UniversalOnSurface.p3d",16,13,7,0], "", "Billboard", 1, 0.5, [0,0,0],[0,0,0],0,10,7.9,0,[0.1,0.6],[[.05,.05,0.07,1],[.05,.05,0.07,0]],[1000],1,0,"","",_puddle_leak];
	_impact setDropInterval 0.1;

	_drop_up = "#particlesource" createVehicleLocal (getPos _puddle_leak);
	_drop_up setParticleCircle [0, [0, 0, 0]];
	_drop_up setParticleRandom [0, [0.01,0.01,-0.1],[0,0,0],0,0.5,[0,0,0,0.5],0,0];
	_drop_up setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal.p3d",16,12,14,0], "", "Billboard", 1, 0.5, [0,0,-0.2],[0,0,0],0,15,7.9,0,[0.1,1],[[0.8,0.8,1,0.5],[0.8,0.8,1,0]],[1000], 1, 0, "", "",_puddle_leak];
	_drop_up setDropInterval 0.1;

	//splash jos
	_splash_r = "#particlesource" createVehicleLocal (getPos _puddle_leak);
	_splash_r setParticleCircle [0,[0, 0, 0]];
	_splash_r setParticleRandom [0,[0.01,0.01,-0.1],[0,0,0],0,0.3,[0,0,0,0.5],0,0];
	_splash_r setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d", 1, 0, 1], "", "Billboard", 1, 0.3, [0,0,-0.2],[0,0,1], 3, 13, 7.9, 0.0001, [0.2,0.5],[[1,1,1,0.5],[1,1,1,0.5]], [0.08], 1, 0, "", "", _puddle_leak];
	_splash_r setDropInterval 0.1;

	while {player distance _splash_r < 300} do {
	if (rain < 0.15) exitWith {};
	_splash_r say3D ["leak_ext", 20];
	sleep 7+(random 1.4);
	};
	waitUntil {
	sleep 61;
	(player distance _puddle_leak > 300) or (rain < 0.15)
	};
	deletevehicle _bubble_leak;
	deletevehicle _wet_leak;
	deletevehicle _stropi;
	deletevehicle _splash_wave;
	deletevehicle _impact;
	deletevehicle _drop_up;
	deletevehicle _splash_r;
	sleep 240;
	deletevehicle _puddle_leak;
	};