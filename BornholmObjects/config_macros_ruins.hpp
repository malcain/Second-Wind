#define RUINEFFECT(x) class DestructionEffects: DestructionEffects \
		{ \
			class Ruin1 \
			{ \
				simulation = ruin; \
				type=\BornholmObjects\##x##_ruins.p3d; \
				position=""; \
				intensity = 1; \
				interval = 1; \
				lifeTime = 1; \
			}; \
		};

	#define RUINS(x) class Land_##x##: Ruins_F {scope=1;vehicleClass=Ruins;model=\BornholmObjects\##x##;};
	
	/*you can see the "simulation = ruin" which means that it will diplay the ruin once the total structure has reached max damage
	  "type = " this is where you add the path to the ruin folder which in our case is the main folder, since the undamaged and ruin p3d are in the same folder. 
	  "posititon=" for normal destruction of a model once it reaches its max damage your leave this blank. the ruin model will appear in the same spot as the undamaged version was
	
	this is a macro for the detruction effects of the models. as you can see "x" is the variable so in the main config if you type in RUINEFFECT(tag_vez) anywhere in this macro where the "x" is tag_vez get filled in. using the macros are to your advantage because they help to shorten the config and hopefully allevite errors. ALWAYS you capitol letters when doing macros because they are case sensitive so by doing all capitols you can avoid mistakes. thats why you see it says RUINEFFECT */