	/*
	Based on code34 "Real weather for MP GAMES" script
	Author: Malcain
	Copyright (C) 2018-2019 Malcain

	"Dynamic Weather System" for Multiplayer
	*/

	private ["_startingweather"];
	
	// Mission starting weather "CLEAR|CLOUDY|RAIN";
	_startingweather = ["CLEAR", "CLOUDY", "RAIN"] call BIS_fnc_selectRandom;
	
	switch(toUpper(_startingweather)) do {
		case "CLEAR": {
			wcweather = [0, 0, 0.25, 0, date,0.1,false];
		};
		
		case "CLOUDY": {
			wcweather = [0, 0, 0.47, 0, date,0.1,false];
		};
		
		case "RAIN": {
			wcweather = [0, 0, 0.87, 0.1, date,0.1,false];
		};

		default {
			// Cloudy
			wcweather = [0, 0, 0.47, 0, date,0.1,false];
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
				if !(wcweather select 6) then {
				0 setWindForce (wcweather select 5);
				};
			};
		};
	};