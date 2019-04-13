	/*
	Based on code34 "Real weather for MP GAMES" script
	Author: Malcain
	Copyright (C) 2018-2019 Malcain

	"Dynamic Weather System" for Multiplayer
	*/

	private ["_rain", "_fog", "_mintime", "_maxtime", "_overcast", "_lastovercast", "_startingdate", "_startingweather", "_timeforecast", "_daytimeratio", "_nighttimeratio", "_timesync","_firstrun","_monsoon","_lightnings","_windstr","_winddir"];

	// Min time seconds (real time) before a new weather forecast
	_mintime = 570;

	// Max time seconds (real time) before a new weather forecast
	_maxtime = 800;

	// Ratio 1 real time second for x game time seconds
	_daytimeratio = 5.5;
	_nighttimeratio = 5.5;

	// send sync data across the network each xxx seconds
	// 60 real seconds by default is a good value
	// shortest time do not improve weather sync
	_timesync = 60;
	
	_timeState = profileNameSpace getVariable ["timeState",true];
	if (_timeState) then { _timeState = false; } else { _timeState = true; };
	profileNameSpace setVariable ["timeState",_timeState];
	saveProfileNamespace;
	
	if (!_timeState) then {
	_startingdate = [2035, 10, 10, 08, 00];
	} else {
	_startingdate = [2035, 10, 10, 16, 00];
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
	_windstr = random 0.3;
		case "CLEAR": {
			wcweather = [0, 0, 0.25, 0, date,0.1];
		};
		
		case "CLOUDY": {
			wcweather = [0, 0, 0.47, 0, date,0.1];
		};
		
		case "RAIN": {
			wcweather = [0, 0, 0.87, 0.1, date,0.1];
		};

		default {
			// Cloudy
			wcweather = [0, 0, 0.47, 0, date,0.1];
			diag_log "Real weather: wrong starting weather";
		};
	};

	// add handler
	if (hasInterface) then {
		wcweatherstart = true;
		"wcweather" addPublicVariableEventHandler {
			// first JIP synchronization
			if(wcweatherstart) then {
				wcweatherstart = false;
				skipTime -24;
				86400 setRain (wcweather select 0);
				86400 setfog (wcweather select 1);
				86400 setOvercast (wcweather select 2);
				86400 setLightnings (wcweather select 3);
				skipTime 24;
				simulweatherSync;
				setdate (wcweather select 4);
				0 setWindForce (wcweather select 5);
			}else{
				wcweather = _this select 1;
				180 setRain (wcweather select 0);
				180 setFog (wcweather select 1);
				2 setOvercast (wcweather select 2);
				150 setLightnings (wcweather select 3);
				setdate (wcweather select 4);
				if (!_monsoon) then {
				0 setWindForce (wcweather select 5);
				};
			};
		};
	};
	
	
	// SERVER SIDE SCRIPT
	if (!isServer) exitWith{};

	// apply weather
	skipTime -24;
	86400 setRain (wcweather select 0);
	86400 setfog (wcweather select 1);
	86400 setOvercast (wcweather select 2);
	86400 setLightnings (wcweather select 3);
	skipTime 24;
	simulweatherSync;
	setdate (wcweather select 4);
	0 setWindForce (wcweather select 5);

	// sync server & client weather & time
	[_timesync, _daytimeratio, _nighttimeratio] spawn {
		private["_timesync", "_daytimeratio", "_nighttimeratio"];
		
		_timesync = _this select 0;
		_daytimeratio = _this select 1;
		_nighttimeratio =  _this select 2;

		while { true } do {
			wcweather set [4, date];
			publicvariable "wcweather";
			if(sunOrMoon < 0.5) then {
				setTimeMultiplier _nighttimeratio;
			} else {
				if(sunOrMoon == 1) then {
				setTimeMultiplier _daytimeratio;
				} else {
					setTimeMultiplier 3; //Morning or Evening
				};
			};
			
			sleep _timesync;
		};
	};
	_rain = 0;
	_overcast = 0.50;
	_lastovercast = 0.55;
	_firstrun = true;
	_lightnings = 0;
	_windstr = 0.1;
	_winddir = 115;
	
	while {true} do {
	_sunOrMoon = sunOrMoon;
		if (_sunOrMoon == 1) then { //Daytime!
			_overcast = random 1;
			//Rain forecast:
			if(_overcast >= 0.80) then {
			_rain = 0.75 + (random 0.25);
			} else {
				if(_overcast >= 0.67) then {
				_rain = 0.4 + (random 0.6);
				} else {
					if((_overcast >= 0.54) and (random 100 < 45)) then {
					_rain = 0.1 + (random 0.3);
					} else { 
					_rain = 0;
					};
				};
			};
			//Wind:
			_winddir = random 360;
			if ((_overcast - _lastovercast > 0.38) and (_overcast >= 0.67)) then {
				_windstr = random 1;
			} else {
				if((_overcast >= 0.60) and (_overcast < 0.78)) then {
					_windstr = random 0.5;
				} else {
					if((abs(_lastovercast - _overcast) > 0.38)) then {
						_windstr = random 0.25;
					} else {
						_windstr = random 0.17;
					};
				};
			};
			diag_log text format ["[Winddr]: %1 [Windst]: %2 Day started.",_winddir,_windstr];
			//Fog:
			//"Rain Fog":
			if((_windstr >= 0.3) and (_rain < 0.1)) then {
				_fog = [0,0.01,0];
			} else {
				if (_rain >= 0.1) then {
					if (_overcast >= 0.8) then {
						_fog = [(_rain*0.75), 0.01, 0];
					} else {
						if (_overcast >= 0.67) then {
							_fog = [(_rain*0.5), 0.01, 0];
						} else {
							_fog = [(_rain*0.25) , 0.02, 0];
						};
					};
				} else { //Fog:
					if(_sunOrMoon < 1) then {
					_fog = [0.9, 0.17, random 10]; //Evening valley fog
					} else {
						if ((_lastovercast >= 0.78) and (_overcast >= 0.54)) then {
							_fog = [0.4 + (random 0.5), 0.12, 0];
						} else {
							_fog = [0, 0.01, 0];
						};
					};
				};
			};
			//Lightnings!
			if (_overcast >= 0.67 && {_overcast < 0.94} && {_lastovercast < 0.55}) then {
			_lightnings = random 0.06 + (_overcast - _lastovercast);
			} else {
			_lightnings = 0;
			};
		} else { //The Night is Dark and full of Horrors
			_overcast = random 1;
			//Rain forecast:
			if(_overcast >= 0.87) then {
				_rain = 0.6 + (random 0.4);
			} else {
				if(_overcast >= 0.77) then {
					_rain = 0.3 + (random 0.5);
				} else {
					if((_overcast >= 0.67) and (random 100 < 65)) then {
						_rain = 0.1 + (random 0.2);
					} else {
						_rain = 0;
					};
				};
			};
			//Wind:
			_winddir = random 360;
			if ((_overcast - _lastovercast > 0.38) and (_overcast >= 0.65)) then {
				_windstr = random 1; 
			} else {
				if((_overcast >= 0.6) and (_overcast < 0.78)) then {
					_windstr = random 0.4;
				} else {
					if (abs(_lastovercast - _overcast) > 0.38) then {
						_windstr = random 0.3;
					} else {
						_windstr = random 0.17;
					};
				};
			};
			diag_log text format ["[Winddr]: %1 [Windst]: %2 Night started.",_winddir,_windstr];
			//"Rain Fog":
			if((_windstr >= 0.3) and (_rain < 0.1)) then {
				_fog = [0,0.01,0];
			} else {
				if (_rain >= 0.1) then {
					if (_rain > 0.8) then {
						_fog = [_rain, 0.01, 0];
					} else {
						if (_rain > 0.5) then {
							_fog = [(_rain*0.8), 0.01, 0];
						} else {
							_fog = [(_rain*0.6), 0.01, 0];
						};
					};
				} else { //Fog:
					if(_sunOrMoon > 0) then {
					_fog = [0.9, 0.17, random 10]; //Morning valley fog
					} else {
						if ((_lastovercast < 0.4) and (_overcast < 0.4)) then {
							_fog = [0.3 + (random 0.7), 0.02, 0];
						} else {
							_fog = [0, 0.01, 0];
						};
					};
				};
			};
		};
		_windforce = _windstr;
		
		wcweather = [_rain, _fog, _overcast, _lightnings, date,_windforce];
		2 setOvercast (wcweather select 2);
		30 setWindDir _winddir;
		sleep 1;
		0 setWindStr _windstr;
		sleep 2;
		if ((_rain < 0.1) or (_lastovercast >= 67)) then {
		180 setfog (wcweather select 1); //Fog
		};
		if (_lightnings < 0.01) then {
		150 setLightnings (wcweather select 3);
		};
		
		if (_firstrun) then {
			_firstrun = false;
		} else {
			sleep 750; //Cloud density synchronization delay
		};
		
		_windst = windstr;
		_winddr = winddir;
		diag_log text format ["[Winddr]: %1 [Windstr]: %2 Delay expired.",_winddr,_windst];
		
		//Set Rain+Lightnings+Rainfog
		180 setRain (wcweather select 0);
		if (_lightnings > 0) then {
		150 setLightnings (wcweather select 3);
		};
		if (_rain >= 0.1) then {
		180 setfog (wcweather select 1);
		};
		
		if ((_windstr >= 0.5)  and (_overcast >= 0.7)) then { //Monsoon integration
			//if ((!isServer) && (player != player)) then { waitUntil {player == player}; };
			null = [_winddir,580,true,true,false,false,false,1] execvm "AL_monsoon\al_monsoon.sqf";
			_monsoon = true;
		};

		_lastovercast = _overcast;
		
		_timeforecast = _mintime + (random (_maxtime - _mintime));
		
		sleep _timeforecast;
		
		_windst = windstr;
		_winddr = winddir;
		diag_log text format ["[Winddr]: %1 [Windstr]: %2 Timeforecast expired.",_winddr,_windst];
		_monsoon = false;
	};