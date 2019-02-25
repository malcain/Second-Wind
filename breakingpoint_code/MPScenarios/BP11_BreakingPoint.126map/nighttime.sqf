for "_i" from 1 to 10 do {
	if (sunOrMoon < 0.5) 
	then {
	setApertureNew [1.4, 2.2, 3, 0.1]; 
	effect_screen = ppEffectCreate ["FilmGrain", 1500];  
	effect_screen ppEffectEnable true; 
	effect_screen ppEffectAdjust [0.1,0.5,0.5,0.1,0.1,true]; 
	effect_screen ppEffectCommit 0;
	} 
	else {
	setAperture -1;
	};
	sleep 15;
};

/*57
 effect_screen = ppEffectCreate ["FilmGrain", 800000];  
 effect_screen ppEffectEnable true; 
 effect_screen ppEffectAdjust [0.1,0.1,0.5,0.1,0.1,true]; 
 effect_screen ppEffectCommit 0;*/
