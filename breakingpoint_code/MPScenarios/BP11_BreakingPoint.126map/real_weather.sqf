	/*
	Author: Malcain, code34
	Copyright (C) 2013-2018 Malcain, Nicolas BOITEUX

	Real weather for MP GAMES v 1.5
	*/

	private ["_rain", "_fog", "_mintime", "_maxtime", "_overcast", "_lastovercast", "_realtime", "_startingdate", "_startingweather", "_timeforecast", "_daytimeratio", "_nighttimeratio", "_timesync", "_wind", "_wind2","_firstrun","_monsoon"];
	
	// Real time vs fast time
	// true: Real time is more realistic weather conditions change slowly (ideal for persistent game)
	// false: fast time give more different weather conditions (ideal for non persistent game) 
	_realtime = false;

	// Min time seconds (real time) before a new weather forecast
	_mintime = 600;

	// Max time seconds (real time) before a new weather forecast
	_maxtime = 1200;

	// If Fastime is on
	// Ratio 1 real time second for x game time seconds
	// Default: 1 real second = 6 second in game
	_daytimeratio = 5.1;
	_nighttimeratio = 5.1;

	// send sync data across the network each xxx seconds
	// 60 real seconds by default is a good value
	// shortest time do not improve weather sync
	_timesync = 60;
	
	_timeState = profileNameSpace getVariable ["timeState",true];
	if (_timeState) then { _timeState = false; } else { _timeState = true; };
	profileNameSpace setVariable ["timeState",_timeState];
	saveProfileNamespace;
	
	if (!_timeState) then {
	_startingdate = [2035, 12, 10, 07, 40];
	} else {
	_startingdate = [2035, 12, 10, 17, 00];
	}; 
	
	// Mission starting weather "CLEAR|CLOUDY|RAIN";
	_startingweather = ["CLEAR", "CLOUDY", "RAIN"] call BIS_fnc_selectRandom;

	/////////////////////////////////////////////////////////////////
	// Do not edit below
	/////////////////////////////////////////////////////////////////
	
	if(_mintime > _maxtime) exitwith {hint format["Real weather: Max time: %1 can no be higher than Min time: %2", _maxtime, _mintime];};
	_timeforecast = _mintime;

	setdate _startingdate;
	switch(toUpper(_startingweather)) do {
	_wind = random 3;
	_wind2 = random 3;
		case "CLEAR": {
			syncweather = [0, 0, 0.55, [_wind, _wind2, true], date];
		};
		
		case "CLOUDY": {
			syncweather = [0, 0, 0.55, [_wind, _wind2, true], date];
		};
		
		case "RAIN": {
			syncweather = [0, 0, 0.7, [_wind, _wind2, true], date];
		};

		default {
			// clear
			syncweather = [0, 0, 0.55, [_wind, _wind2, true], date];
			diag_log "Real weather: wrong starting weather";
		};
	};

	// add handler
	if (hasInterface) then {
		syncweatherstart = true;
		"syncweather" addPublicVariableEventHandler {
			// first JIP synchronization
			if(syncweatherstart) then {
				syncweatherstart = false;
				skipTime -24;
				86400 setRain (syncweather select 0);
				86400 setfog (syncweather select 1);
				86400 setOvercast (syncweather select 2);
				skipTime 24;
				simulweatherSync;
				setwind (syncweather select 3);
				setdate (syncweather select 4);
			}else{
				syncweather = _this select 1;
				60 setRain (syncweather select 0);
				60 setfog (syncweather select 1);
				60 setOvercast (syncweather select 2);
				if (!_monsoon) then {
				setwind (syncweather select 3);
				};
				setdate (syncweather select 4);
			};
		};
	};
	
	
	// SERVER SIDE SCRIPT
	if (!isServer) exitWith{};

	// apply weather
	skipTime -24;
	86400 setRain (syncweather select 0);
	86400 setfog (syncweather select 1);
	86400 setOvercast (syncweather select 2);
	skipTime 24;
	simulweatherSync;
	setwind (syncweather select 3);
	setdate (syncweather select 4);

	// sync server & client weather & time
	[_realtime, _timesync, _daytimeratio, _nighttimeratio] spawn {
		private["_realtime", "_timesync", "_daytimeratio", "_nighttimeratio"];
		
		//_realtime = _this select 0;
		_timesync = _this select 1;
		_daytimeratio = _this select 2;
		_nighttimeratio =  _this select 3;

		while { true } do {
			syncweather set [4, date];
			publicvariable "syncweather";
			//if(!_realtime) then { 
				if(sunOrMoon < 0.5) then {
					setTimeMultiplier _nighttimeratio;
				} else {
					setTimeMultiplier _daytimeratio;
				};
			//};
			sleep _timesync;
		};
	};

	_rain = 0;
	_overcast = 0.50;
	_lastovercast = 0.55;
	_wind = 4;
	_firstrun = true;
	

	while {true} do {
		//if (_firstrun) then {
		//znul = [-1,-1,-1,false,true,false,"none",false,false] execVM "ALthunder\alias_thunderbolt.sqf";
		//};
		if (sunOrMoon > 0.5) then { //Daytime!
			_overcast = random 1;
			if(_overcast > 0.80) then {
			_rain = 0.4 + (random 0.6);
			} else {
				if(_overcast >= 0.67) then {
				_rain = 0.25 + (random 0.35);
				} else {
					if((_overcast >= 0.54) and (random 100 < 45)) then {
					_rain = 0.1 + (random 0.25);
					} else { 
					_rain = 0;
					};
				};
			};
			if ((_lastovercast < 0.50) and (_overcast >= 0.67)) then {
				_wind = (random 16) - 8; 
				_wind2 = (random 16) - 8;
			} else {
				if((_overcast >= 0.60) and (_overcast < 0.78)) then {
					_wind = (random 10) - 5;
					_wind2 = (random 10) - 5;
				} else {
					if((_overcast > 0.50) or (_lastovercast - _overcast > 0.38)) then {
						_wind = (random 6) - 3;
						_wind2 = (random 6) - 3 ;
					} else {
						_wind = (random 4) - 2;
						_wind2 = (random 4) - 2;
					};
				};
			};
			if(((date select 3 >= 17) and (date select 3 <= 20)) or ((date select 3 >= 4) and (date select 3 <= 6)))  then {
				if((abs _wind >= 2) or (abs _wind2 >= 2)) then {
					_fog = 0;
				} else {
					_fog = [0.9, 0.17, random 10];
				};
			} else {
				_fog = 0;
			};
		} else { //The Night is Dark and full of Horrors
			_overcast = random 1;
			//Rain forecast:
			if(_overcast >= 0.9) then {
				_rain = 0.4 + (random 0.6);
			} else {
				if(_overcast >= 0.78) then {
					_rain = 0.15 + (random 0.35);
				} else {
					if((_overcast >= 0.67) and (random 100 < 65)) then {
						_rain = 0.1 + (random 0.2);
					} else {
						_rain = 0;
					};
				};
			};
			//Wind:
			if ((_lastovercast < 0.50) and (_overcast >= 0.65)) then {
				_wind = (random 16) - 8; 
				_wind2 = (random 16) - 8;
			} else {
				if((_overcast >= 0.6) and (_overcast < 0.78)) then {
					_wind = (random 8) - 4;
					_wind2 = (random 8) - 4;
				} else {
					if(_lastovercast - _overcast > 0.38) then {
						_wind = (random 5) - 2.5;
						_wind2 = (random 5) - 2.5;
					} else {
						_wind = (random 4) - 2;
						_wind2 = (random 4) - 2;
					};
				};
			};
			//Fog:
			if((abs _wind >= 2) or (abs _wind2 >= 2)) then {
				_fog = [0,0.01,0];
			} else {
				if (rain > 0.65) then {
					_fog = [0.7 + (random 0.3), 0.01, 0];
				} else {
					if ((_lastovercast < 0.4) and (_overcast < 0.4)) then {
						_fog = [0.1 + (random 0.3), 0.01, 0];
					} else {
						_fog = [0, 0.01, 0];
					};
				};
			};
		};
		syncweather = [_rain, _fog, _overcast, [_wind, _wind2, true], date];
		180 setfog (syncweather select 1);
		2 setOvercast (syncweather select 2);
		setwind (syncweather select 3);
		if (_firstrun) then {
			_firstrun = false;
		} else {
			sleep 750;
		};
		180 setRain (syncweather select 0);
		if (((abs _wind >= 4) or (abs _wind2 >= 4))  and (_overcast >= 0.70)) then {
		if ((!isServer) && (player != player)) then {waitUntil {player == player};};
		null = [random (360),580,true,true,false,false,false,1] execvm "AL_monsoon\al_monsoon.sqf";
		_monsoon = true;
		};

		_lastovercast = _overcast;
		
		//_timeforecast = _mintime + (random (_maxtime - _mintime));
		
		sleep _timeforecast;
		_monsoon = false;
	};