//Don't Do Particles on Dedicated Servers
if (isDedicated) exitWith {};

_victim = _this;

	_pArray = [];

	for "_i" from 0 to 2 do
	{

		_meat = "#particlesource" createVehicleLocal (getposATL _victim); 
		_meat setParticleClass "SAN_HeadMeat"; 
		_meat setParticleParams
		[
			["\A3\data_f\ParticleEffects\Universal\Meat_ca", 1, 0, 1], //shape name
			"", //animation name
			"SpaceObject", //type
			1, 5, //timer period & life time
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

		_pArray pushBack _meat;

	};

	_blood = "#particlesource" createVehicleLocal (getposATL _victim); 
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
	_blood attachTo [_victim,[0,0,0.0],"head"]; 

	_pArray pushback _blood;

	_pArray spawn 
	{
		_pArray = _this;
		sleep 5; //particle duration
		{ deleteVehicle _x } foreach _pArray;
	};