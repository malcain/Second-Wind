private ["_u","_t","_s","_pp"];

_u = _this select 0;
_t = _this select 1;
_s = _this select 2;

switch(_t)do
{
	case 0:
	{
		//playsound ["flashbang2",true];
		//sleep 0.01;
		0.1 fadeSound 0.01;
		[] spawn { 
			cutText ["", "WHITE OUT", 1];  
			sleep 0.3; 
			enableCamShake true;  
			addCamShake [3+random 7,3,13+random 33];  
			if (r_hit_legs < 0.001) then {
				r_hit_legs = 0.001; 
				player enableStamina true; 
				player setFatigue 0.9; 
			};
			playsound "deafness";
			"dynamicBlur" ppEffectEnable true; 
			"dynamicBlur" ppEffectAdjust [40];     
			"dynamicBlur" ppEffectCommit 0;       
			"dynamicBlur" ppEffectCommit 3;  
			titleCut ["", "WHITE IN",50]; 
			sleep 5; 
			"dynamicBlur" ppEffectAdjust [0];     
			"dynamicBlur" ppEffectCommit 30; 
			sleep 2; 
			90 fadeSound 1; 
			_handle = ppEffectCreate ["ChromAberration", 440];  
			_handle ppEffectEnable true;
			_handle ppEffectAdjust [0.5 + random 0.5, 1, true];  
			_handle ppEffectCommit 0; 
			Sleep 0.2;
			_handle ppEffectAdjust [0, 0, true];  
			_handle ppEffectCommit 38; 
			if (r_hit_legs == 0.001) then { 
				r_hit_legs = 0; 
			}; 
			Sleep 40;
			"dynamicBlur" ppEffectEnable false;
			_handle ppEffectEnable false;
			ppEffectDestroy _handle; 
		};
	};
	case 1:
	{

		_pp = ppEffectCreate ["DynamicBlur", 500];
		_pp ppEffectForceInNVG true;
		_pp ppEffectEnable true;
		_pp ppEffectAdjust [1];
		_pp ppEffectCommit 0.1;

		//player setFatigue (1*_s);
		0.1 fadeSound 0.1;
		//playsound "deafness";

		sleep (9*_s);

		_pp ppEffectAdjust [0];
		_pp ppEffectCommit 10;

		sleep (9*_s);

		25 fadeSound 1;

		sleep (9*_s);

		_pp ppEffectEnable false;
		ppEffectDestroy _pp;

	};
	/*case 0:
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
	};*/
	default {};
};