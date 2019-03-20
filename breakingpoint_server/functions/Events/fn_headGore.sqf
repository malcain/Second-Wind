/*
	Breaking Point Arma 3 Public-Alpha Build
	Created By Deathlyrage, Valtiel and Nohrt

	More Detailed Credits Listed Here:
		http://thezombieinfection.com/wiki/index.php?title=Credits

	Copyright © 2013-2015, The Zombie Infection (thezombieinfection.com)
	All rights reserved.
*/

params ["_targetNetID"];

_victim = objectFromNetID _targetNetID;

if (isNull _victim) exitWith {};

/*_objectPos = getPosATL _object;
_fireObj = _object getVariable ["fire",objNull];
if !(isNull _fireObj) exitWith {};

if (_type == "Zombie") exitwith 
{
_fireObj = createVehicle ["BP_SmallFire", _objectPos, [], 0, "CAN_COLLIDE"];
_fireObj attachTo [_object, [-0.1, 0.1, 0.15], "Pelvis"];
_fireObj setVectorDirAndUp [ [0.5, 0.5, 0], [-0.5, 0.5, 0] ];
_object setVariable ["fire",_fireObj,true];
};*/

//Don't Do Particles on Dedicated Servers
//if (isDedicated) exitWith {};
_meat = "#particlesource" createVehicle (getposATL _victim); 
_blood = "#particlesource" createVehicle (getposATL _victim); 
//Don't Do Particles on Dedicated Servers
//if (isDedicated) exitWith {};
	_mArray = [];
	_bArray = [];

	for "_i" from 0 to 2 do
	{

		//_meat = "#particlesource" createVehicle (getposATL _victim); 
		_meat setParticleClass "SAN_HeadMeat"; 
		_meat setParticleParams
		[
			["\A3\data_f\ParticleEffects\Universal\Meat_ca", 1, 0, 1], //shape name
			"", //animation name
			"SpaceObject", //type
			1, 15, //timer period & life time
		   [0, 0, 0], //position
		   [0.2,0.2,2], //moveVelocity
		   2, 22, 1, 0.2, //rotation velocity, weight, volume, rubbing
		   [4], //size
		   [[0.9,0.01,0.01,1]], //color
		   [0.1], //animationPhase (animation speed in config)
		   0.00, //randomdirection period
		   0.0, //random direction intensity
			"", //onTimer
			"", //before destroy
			"", //object
			0, //angle
			false, //on surface
			0.0 //bounce on surface
		];

		_meat setParticleRandom [0, [0.1, 0.1, 0.0], [1.35, 1.35, 1.0], 0, 0.1, [0, 0, 0, 0], 0, 0];
		_meat setDropInterval 6000;
		_meat attachTo [_victim,[0,0,0.15],"head"]; 

		_mArray pushBack _meat;

	};

	//_blood = "#particlesource" createVehicle (getposATL _victim); 
	_blood setParticleClass "SAN_HeadBlood"; 
	_blood setParticleParams
	[
		["\A3\data_f\ParticleEffects\Universal\Universal_02", 8, 4, 1], //shape name
		"", //animation name
		"Billboard", //type
		1, 0.3, //timer period & life time
	   [0, 0, 0], //position
	   [0.00,0.0,2], //moveVelocity
	   1, 0.127, 0.1, 0.4, //rotation velocity, weight, volume, rubbing
	   [0.5,1], //size
	   [[1,0,0,0.9],[1,0,0,0.45]],
	   [0.1], //animationPhase (animation speed in config)
	   0.0, //randomdirection period
	   0.0, //random direction intensity
		"", //onTimer
		"", //before destroy
		"", //object
		0, //angle
		false, //on surface
		0.0 //bounce on surface
	];

	_blood setDropInterval 6000;
	_blood attachTo [_victim,[0,0,0.0],"neck"]; 

	_bArray pushback _blood;

	_bArray spawn 
	{
		_bArray = _this;
		sleep 5; //particle duration
		{ deleteVehicle _x } foreach _bArray;
	};
	
	_mArray spawn 
	{
		_mArray = _this;
		sleep 0.5; //particle duration
		{ deleteVehicle _x } foreach _mArray;
	};