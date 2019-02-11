private ["_u","_t","_s","_pp"];

_u = _this select 0;
_t = _this select 1;
_s = _this select 2;

player sidechat str _this;

switch(_t)do
{
	case 0:
	{
		//playsound ["flashbang2",true];
		//sleep 0.01;

		_pp = ppEffectCreate ["ColorCorrections", 3000];
		_pp ppEffectAdjust [1, 1, -0.01, [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]];
		_pp ppEffectCommit 0.1;
		_pp ppEffectForceInNVG true;
		_pp ppEffectEnable true;

		setAperture 0.02;

		//player setFatigue (1*_s);
		0.1 fadeSound 0.01;

		sleep (9*_s);

		_pp ppEffectAdjust[ 1, 1, 0, [0, 0, 0, -0.2],[0.03, -0.25, 0.3, 0.7],[0.2, -0.23, 0.11, 0]];
		_pp ppEffectCommit (10+_s);
		setAperture 0.32;

		sleep (9*_s);

		25 fadeSound 1;
		setAperture -1;

		sleep (9*_s);
		_pp ppEffectEnable false;
		ppEffectDestroy _pp;
	};
	case 1:
	{
		//playsound ["flashbang2",true];
		//sleep 0.01;

		_pp = ppEffectCreate ["DynamicBlur", 500];
		_pp ppEffectForceInNVG true;
		_pp ppEffectEnable true;
		_pp ppEffectAdjust [1];
		_pp ppEffectCommit 0.1;

		//player setFatigue (1*_s);
		0.1 fadeSound 0.1;

		sleep (9*_s);

		_pp ppEffectAdjust [0];
		_pp ppEffectCommit 10;

		sleep (9*_s);

		25 fadeSound 1;

		sleep (9*_s);

		_pp ppEffectEnable false;
		ppEffectDestroy _pp;
	};
	default {};
};