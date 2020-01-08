

private ["_bleedingMan","_sharky","_bleedingManPos","_particleEffect"];
_bleedingMan = _this select 0;
_sharky = _this select 1;

if (_bleedingMan isKindOf "CAManBase") then
{

	if (isNil{_bleedingMan getVariable "manIsBleeding"}) then
	{

		_bleedingManPos = getPosATL _bleedingMan;

		_particleEffect = "#particlesource" createVehicleLocal _bleedingManPos;
		_particleEffect setParticleClass "underwaterBleeding";
		_particleEffect attachto [_bleedingMan,[0,0,0],"LeftShoulder"];

		_bleedingMan setVariable ["manIsBleeding",1,false];

		sleep 25;

		deleteVehicle _particleEffect;

		_bleedingMan setVariable ["manIsBleeding",nil,false];
	};
} else
{
		_bleedingManPos = getPosATL _sharky;

		_particleEffect = "#particlesource" createVehicleLocal _bleedingManPos;
		_particleEffect setParticleClass "underwaterBleeding";
		_particleEffect attachto [_sharky,[-0.14,-1.55,-0.4]];

		sleep 0.9;

		deleteVehicle _particleEffect;

};



/*bubbleEffect = "#particlesource" createVehicleLocal position player;
bubbleEffect setParticleClass "BubblesShot1";
bubbleEffect attachTo [player,[0,1,1]];

bubbleEffect2 = "#particlesource" createVehicleLocal position player;
bubbleEffect2 setParticleClass "BubblesShotBig1";
bubbleEffect2 attachTo [player,[0,1,1]];*/