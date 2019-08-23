for "_i" from 1 to 10 do {
	if (sunOrMoon < 0.5) 
	then {
	effect_screen = ppEffectCreate ["FilmGrain", 1500];  
	effect_screen ppEffectEnable true; 
	effect_screen ppEffectAdjust [0.01,0.5,0.5,0.1,0.1,true]; 
	effect_screen ppEffectCommit 0;
	} 
	else {
	effect_screen = ppEffectCreate ["FilmGrain", 1500];  
	effect_screen ppEffectEnable true; 
	effect_screen ppEffectAdjust [0.1,0.5,0.5,0.1,0.1,true]; 
	effect_screen ppEffectCommit 0;
	};
	sleep 25;
};

/*
 effect_screen = ppEffectCreate ["FilmGrain", 800000];  
 effect_screen ppEffectEnable true; 
 effect_screen ppEffectAdjust [0.1,0.1,0.5,0.1,0.1,true]; 
 effect_screen ppEffectCommit 0;*/
