// by ALIAS

private ["_player_check_prot","_rad_dam_obj","_amplificat_effect","_afect","_shake_b","_obj_prot","_int_b","_cent_temp","_radi_temp","_obj_rad","_rad_radius","_rad_dam","_center_rad","_noise_rad","_d_pre","_legs_ini"];

if (!hasInterface) exitWith {};

_obj_rad 		= _this select 0;
_rad_radius 	= _this select 1;
_rad_dam_obj	= _this select 2;

_d_pre = 0;

while {(!isNull player)and(!isNull _obj_rad)} do 
{
	waitUntil {alive player};

	if ((player distance _obj_rad) < _rad_radius) then 
	{
		[] spawn {playsound "geiger"};
			if (r_hit_legs < 0.001) then {
			_legs_ini = r_hit_legs;
			r_hit_legs = 0.001;
			player enableStamina true;
			player setFatigue 0.1;
			};
		if (glowindark) then 
		{
			if (!(player getVariable "glowing_player")) then 
			{
				[_obj_rad,_rad_radius] spawn 
				{
				_obj_rad_c = _this select 0;
				_rad_radius_c = _this select 1;
				sleep 30;
				if ((player distance _obj_rad_c) < _rad_radius_c) then 
					{
					player setVariable ["glowing_player",true,true];
					//hint str (player getVariable "glowing_player");
					};
				};
			};
		} else {player setVariable ["glowing_player",true,true]};
			
			//if (player getVariable "protejat_rad") then {sleep (1.2 + random 1)}
			//else {
			//_d_pre = getdammage player;
			//_d_pre =_d_pre+_rad_dam_obj;
			//player setdammage _d_pre;
			if (_d_pre < 100) then {
			_d_pre = _d_pre + 1 };
			r_player_blood = r_player_blood - _rad_dam_obj;
			_amplificat_effect = linearConversion [0, 100, _d_pre, 2, 1.8, true];
			if ((random 100 < 35) and (_d_pre > 25)) then 
			{
				if ((random 100 < 35) and (_d_pre > 85)) then {
				0 = ["DynamicBlur", 400, [1]] spawn {
					params ["_name", "_priority", "_effect", "_handle"];
					while {
						_handle = ppEffectCreate [_name, _priority];
						_handle < 0
					} do {
						_priority = _priority + 1;
						sleep 0.01;
					};
					_handle ppEffectEnable true;
					_handle ppEffectAdjust _effect;
					_handle ppEffectCommit 1;
					waitUntil {ppEffectCommitted _handle};
					uiSleep 1; 
					_handle ppEffectAdjust [0];
					_handle ppEffectCommit 1;
					uiSleep 2; 
					_handle ppEffectEnable false;
					ppEffectDestroy _handle;
				}; 
				};
				_noise_rad = ppEffectCreate ["FilmGrain", 2000];
				_noise_rad ppEffectEnable true;
				_noise_rad ppEffectAdjust[0.1,0.1,0.3+random 0.3,0.1+ random 0.3,0.1+ random 0.3,false];
				_noise_rad ppEffectCommit 0;				
				enableCamShake true;
				_shake_b = linearConversion [0, 100,(_d_pre), 0, 1, true];
				addCamShake [_shake_b, 3, 17];
				_afect = ["NoSound","NoSound","NoSound","cough","NoSound","NoSound","NoSound","NoSound","tuse_5","NoSound","NoSound","NoSound","NoSound","tuse_4","NoSound","NoSound","NoSound","NoSound"] call BIS_fnc_selectRandom;
				playsound _afect;
				playsound "puls_1";
				[_noise_rad,_amplificat_effect] spawn {_noise_efc=_this select 0;_delay_sleep=_this select 1;sleep _delay_sleep;_noise_efc ppEffectEnable false};
			};
			call BP_fnc_medicalSync;
			call BP_fnc_medSave;
			sleep _amplificat_effect;
			//};
	} else {player setVariable ["glowing_player",false,true];
			if (_legs_ini < 0.001) then {
			player enableStamina false;
			r_hit_legs = 0};	
			/*hint str (player getVariable "glowing_player");*/
			waitUntil {(player distance _obj_rad) < _rad_radius};};
	sleep 0.1;
};