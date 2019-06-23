// by ALIAS
// Tutorial: https://www.youtube.com/user/aliascartoons

fnc_screen_effect_day = {
	params ["_name", "_priority", "_effect", "_handle","_break"];
	_name		= _this select 0;
	_priority	= _this select 1;
	_effect 	= _this select 2;
	_break		= _this select 3;
	while {
		_handle = ppEffectCreate [_name, _priority];
		_handle < 0
	} do {
	_priority = _priority + 1;
	};
	_handle ppEffectEnable true;
	_handle ppEffectAdjust _effect;
	_handle ppEffectCommit 0;
	waitUntil {ppEffectCommitted _handle};
	uiSleep _break; 
	_handle ppEffectEnable false;
	ppEffectDestroy _handle;
};

private ["_voice_fulger","_sound_close","_alias_flicker","_alias_bolt_1","_lum_fulg_w","_sound_echo","_flick_screen","_break_screen"];
if (!hasInterface) exitWith {};

_alias_bolt_1	= _this select 0;
_sound_close 	= _this select 1;
_tip_lightn		= _this select 2;
_sound_echo		= _this select 3;
_flick_screen	= _this select 4;
_break_screen	= _this select 5;

_poz_obj_fulger = "Land_HelipadEmpty_F" createVehicleLocal [_alias_bolt_1 select 0,_alias_bolt_1 select 1,(getPosATL player select 2)+1000+(random 500)];
_f_dim	= 3;
_dist_pl_thund	= player distance _poz_obj_fulger;
//_pitch_sound	= linearConversion [0,3000,_dist_pl_thund,5,0.1,true];
//_delay_sound	= linearConversion [0,3000,_dist_pl_thund,0,1.5,true];
	
if (sunOrMoon==1) then 
	{ 
		if (dayscreeneffect) then 
		{
			[_flick_screen,_break_screen] spawn 
			{
				private ["_flick_screen","_break_screen"];
				_flick_screen = _this select 0;
				_break_screen = _this select 1;
				while {_flick_screen>0} do 
				{
				_brit_effect = 0.1+(random 0.5);
				_ctr_effect = 1.1+ (random 0.5);
				["ColorCorrections", 1500, [_brit_effect, _ctr_effect, 0, [0, 0, 0, 0], [1, 1, 1, 0], [1, 1, 1, 0]],_break_screen] call fnc_screen_effect_day;
				_flick_screen = _flick_screen-1;
				sleep _break_screen;
				};
			};
		};
	_poss = [getPosAsL _poz_obj_fulger select 0,getPosAsL _poz_obj_fulger select 1,1000+(random 600)];
	[_poss] spawn _tip_lightn;
	_poz_obj_fulger say3d [_sound_close,1500];
	//[_dist_pl_thund] spawn {private ["_dist_pl_thund"]; _dist_pl_thund=_this select 0; if (_dist_pl_thund<1000) then {sleep 0.5; playsound "tiuit"}};
	sleep (_dist_pl_thund/340);
	playsound _sound_echo;
	} else 
	{
		if (storm_clouds) then 
		{
		_cloud = "#particlesource" createVehicleLocal getPosATL _poz_obj_fulger;
		_cloud setParticleCircle [0,[0,0,0]];
		_cloud setParticleRandom [0, [1500, 1500, 100], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
		_cloud setParticleParams[["\A3\data_f\cl_basic", 1, 0, 1],"","Billboard",1,3,[0,0,800],[0,0,50],3,10,7.9,0.2,[400,450,500],[[0.1,0.1,0.5,0],[1,1,1,0.005],[0,0,0.5,0]],[0,0],0,0,"","",_poz_obj_fulger];
		_cloud setDropInterval 0.002;
		sleep 1;
		deleteVehicle _cloud;
		};
	_poz_obj_fulger say3d [_sound_close,1500];
	_poss = [getPosAsL _poz_obj_fulger select 0,getPosAsL _poz_obj_fulger select 1,1000+(random 600)];
	[_poss] spawn _tip_lightn;
	sleep (_dist_pl_thund/340);
	playsound _sound_echo;
	};