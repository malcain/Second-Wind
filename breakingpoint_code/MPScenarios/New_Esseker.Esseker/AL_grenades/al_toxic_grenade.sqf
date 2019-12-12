// by ALIAS

private ["_al_shooter","_blow_obj","_shooter"];

if (!hasInterface) exitWith {};
_blow_obj	= _this select 0;

_smoke = ["toxic_grenade_1","toxic_grenade_2","toxic_grenade_3"] call BIS_fnc_selectRandom;
_voice_smoke = ["toxic_1","toxic_2","toxic_3"] call BIS_fnc_selectRandom;
_al_pressure_1 = 10;

_flow_1 = (getposasl _blow_obj vectorFromTo (_blow_obj getRelPos [10,0])) vectorMultiply _al_pressure_1;
_flow_2 = _flow_1 vectorMultiply (-1);

//waitUntil {vectorMagnitude velocity _blow_obj < 0.25};
enableCamShake true;

_1_fum = "#particlesource" createVehicleLocal (getPosATL _blow_obj);
_1_fum setParticleCircle [0, [0, 0, 0]];
_1_fum setParticleRandom [0.5,[0.1,0.1,0.1],[0,0,0],5,0.01,[0,0,0,0.1],0.01,0,10];
_1_fum setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",8,0,40,1], "", "Billboard", 1,2,[0,0,0],[_flow_1 select 0,_flow_1 select 1,0.2],15,10,7.9,0,[0.1,0.5,2],[[0.01,0.1,0.005,0.5],[0.01,0.1,0.005,0.5],[0.01,0.1,0.005,0]],[1],0,0,"","",_blow_obj];
_1_fum setDropInterval 0.05;

_2_fum = "#particlesource" createVehicleLocal (getPosATL _blow_obj);
_2_fum setParticleCircle [0, [0, 0, 0]];
_2_fum setParticleRandom [0.5,[0.1,0.1,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
_2_fum setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",8,0,40,1], "", "Billboard", 1,2,[0,0,0],[_flow_2 select 0,_flow_2 select 1,0.2],5,10,7.9,0,[0.1,0.5,2],[[0.01,0.1,0.005,0.5],[0.01,0.1,0.005,0.5],[0.01,0.1,0.005,0]],[1],0,0,"","",_blow_obj];
_2_fum setDropInterval 0.05;

_blow_obj say3D [_smoke,500];
sleep 0.5;
_blow_obj say3D [_voice_smoke,500];

_fum_cloud = "#particlesource" createVehicleLocal getPosATL _blow_obj;
_fum_cloud setParticleCircle [0,[3,3,1]];
_fum_cloud setParticleRandom [0.1,[1,1,0.5],[-3,-3,0.1],0,0.2,[0,0,0,0.1],1,0];
_fum_cloud setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",8,0,40,1],"","Billboard",1,5,[0,0,1],[0,0,1],0,9.8,7.5,0,[3,5,8],[[0.15,1,0.1,0],[0,0.5,0,0.5],[0,0.3,0,0]],[1],1,0,"","",_blow_obj];
_fum_cloud setDropInterval 0.05;

while {!isNull _blow_obj} do 
{
	if (player distance _blow_obj < 15) then 
	{
		if (!isnil{player getVariable "protejat_tox"}) then 
		{
			sleep 1;
		} else 
			{
				cutText ["", "BLACK OUT", 1];
				_tuse=["NoSound","NoSound","tuse_1","NoSound","NoSound","tuse_2","NoSound","NoSound","tuse_3","NoSound","NoSound","tuse_4","NoSound","NoSound","tuse_5","NoSound","NoSound","tuse_6","NoSound","NoSound","tuse_7","NoSound","NoSound","tuse_8","NoSound","NoSound","tuse_9","NoSound","NoSound","tuse_91","NoSound","NoSound","tuse_92","NoSound","NoSound","tuse_93","NoSound","NoSound"] call BIS_fnc_selectRandom;
				[player,[_tuse,100]] remoteExec ["say3d"];
				player setDamage (tox_damage + (getDammage player));
				addCamShake [1,8,5];
				sleep 1;
				titleCut ["", "BLACK IN",1];
			};
	} else {sleep 1};
};
deleteVehicle _blow_obj;
deleteVehicle _1_fum;
deleteVehicle _2_fum;
deleteVehicle _fum_cloud;