//for "_i" from 1 to 10 do {
while {true} do {
	if (sunOrMoon < 0.5) then {
		if (rain > 0.4) then {
			effect_screen = ppEffectCreate ["FilmGrain", 1500];   
			effect_screen ppEffectEnable true;  
			effect_screen ppEffectAdjust [0.01,0.7,3.5,1,1,1];  
			effect_screen ppEffectCommit 0;
		} else {
			effect_screen = ppEffectCreate ["FilmGrain", 1500];  
			effect_screen ppEffectEnable true; 
			effect_screen ppEffectAdjust [0.01,0.5,0.5,0.1,0.1,true]; 
			effect_screen ppEffectCommit 0;
		};
	} else {
		if (rain > 0.2) then {
			_rain_factor=linearConversion [0.2,1,_rain,0.7,0.2,true];
			effect_screen = ppEffectCreate ["FilmGrain", 1500];
			effect_screen ppEffectEnable true;  
			effect_screen ppEffectAdjust [0.01,_rain_factor,3,1,1,1];  
			effect_screen ppEffectCommit 0;
		} else {
			effect_screen = ppEffectCreate ["FilmGrain", 1500];  
			effect_screen ppEffectEnable true; 
			effect_screen ppEffectAdjust [0.1,0.5,0.5,0.1,0.1,true]; 
			effect_screen ppEffectCommit 0;
		};
	};
	sleep 25;
};

/*
 effect_screen = ppEffectCreate ["FilmGrain", 800000];  
 effect_screen ppEffectEnable true; 
 effect_screen ppEffectAdjust [0.1,0.1,0.5,0.1,0.1,true]; 
 effect_screen ppEffectCommit 0;*/
