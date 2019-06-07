// by ALIAS

private ["_al_shooter","_al_grenade","_type_grenade","_shooter"];

if (!hasInterface) exitWith {};

_al_grenade = _this select 0;
_culoare_elem = [0.8,0.8,1];

if (!isNil {_al_grenade getVariable "is_on"}) exitWith {};
_al_grenade setVariable ["is_on",true,true];
enableCamShake true;
//waitUntil {vectorMagnitude velocity _al_grenade < 0.25};

if (player distance _al_grenade < 100) then {playsound "geiger"};

if (player distance _al_grenade < 13) then 
{
	player setDamage ((getDammage player) + emp_damage);
	addCamShake [10,4,25];
	_gun = currentWeapon player;
	if (!isNil "_gun") then {_wh = "GroundWeaponHolder_Scripted" createVehicle position player; player action ["DropWeapon", _wh, currentWeapon player]};
	[] spawn 
	{
		"dynamicBlur" ppEffectEnable true;
		"dynamicBlur" ppEffectAdjust [5];
		"dynamicBlur" ppEffectCommit 0.2;
		sleep 1;
		"dynamicBlur" ppEffectAdjust [0];
		"dynamicBlur" ppEffectCommit 1;
	};
};

_poz = getPos _al_grenade;
_al_grenade say3D ["prim",500];

_wave = "#particlesource" createVehicleLocal _poz;
_wave setParticleCircle [5,[0,0,0]];
_wave setParticleRandom [0.2,[0.25,0.25,0],[50,50,0],0,0.25,[0,0,0,0.1],0,0];
_wave setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard", 1, 0.5, [0, 0, 0], [0, 0, 0], 3, 10, 7.9, 0.1, [1.2,2,6],[[0.5,0.5,0.5,0.03],[0.5,0.5,0.5,0.03],[0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _poz];
_wave setDropInterval 0.001;
[_wave] spawn {_de_sters = _this select 0;sleep 0.05;deleteVehicle _de_sters};

_ripple = "#particlesource" createVehicleLocal _poz;
_ripple setParticleCircle [0, [0, 0, 0]];
_ripple setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_ripple setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d", 1, 0, 1], "", "Billboard", 1, 0.5, [0, 0, 0], [0, 0, 0],0,10,7.9,0, [1, 40, 30], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 0]], [0.08], 1, 0, "", "", _poz];
_ripple setDropInterval 0.1;
[_ripple] spawn {_de_sters = _this select 0;sleep 1.2;deleteVehicle _de_sters};

_e_static = "#particlesource" createVehicleLocal _poz;
_e_static setParticleFire [0.5,10,10];
_e_static setParticleCircle [2, [0, 0, 0]];
_e_static setParticleRandom [0.2, [5,5,0], [0.175, 0.175, 0], 0, 0.2, [0, 0, 0, 1], 1, 0];
_e_static setParticleParams [["\A3\data_f\blesk1", 1, 0, 1], "", "SpaceObject", 1, 0.3, [0, 0, 0], [0, 0, 0], 0, 10, 7.9,0, [0.003, 0.003], [[1, 1, 0.1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", _poz];
_e_static setDropInterval 0.0025;
[_e_static] spawn {_de_sters = _this select 0;sleep 1;deleteVehicle _de_sters};
 
_light_grenade = "#lightpoint" createVehiclelocal [0,0,0]; 
_light_grenade lightAttachObject [_al_grenade, [0,0,0.3]];
_light_grenade setLightAmbient _culoare_elem;  
_light_grenade setLightColor _culoare_elem;
_light_grenade setLightBrightness 0.5;
_light_grenade setLightFlareMaxDistance 2000;
_light_grenade setLightDayLight true;
_light_grenade setLightAttenuation [20,10,50,0,20,100];
_range_lit=0;
while {_range_lit < 10} do 
{
	_light_grenade setLightAttenuation [_range_lit,10,5,0,1,100];
	_range_lit = _range_lit+0.5;
	sleep 0.01;
};
sleep 0.4;
playsound "eko";
sleep 0.4;
deleteVehicle _light_grenade;
sleep 1;
deleteVehicle _al_grenade;
_al_grenade setVariable ["is_on",nil,true];