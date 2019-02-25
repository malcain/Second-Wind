//by ALIAS

[_marker,_class_name,_anomalyVSarea,_radius,_damage_value,_farty_trail,_random_puddles] execVM "AL_farty\area_toxic_ini.sqf";

/*
_marker				- string, the name of the marker placed where you want Farty to be
_class_name			- string, the name of the item you want as protective gear
_anomalyVSarea		- boolean, if is true a toxic field is generated along with the anomaly, if false only the toxic field is created
_radius				- number, the radius of the toxic field
_damage_value		- number, the amount of damage the units inside toxic area will take
_farty_trail		- boolean, if is true Farty will leave a trail of toxic puddles while moving
_random_puddles		- number, must be integer and must be bigger than 0, if is negative will be ignored, is the number of random puddles will be generated inside toxic field
*/

Example:

["myfarty","H_PilotHelmetFighter_B",true,30,0.01,true,7] execVM "AL_farty\area_toxic_ini.sqf";


/* -------------------------------------------------------------
[_object_name,_puddle_SFX] execVM "AL_farty\simple_toxic_puddle.sqf";

_object_name - string, the name of the object you want to the location from
_puddle_SFX	 - boolean, if is true bubbles and smoke will be generated in that puddle

If you want to place toxic puddles by hand follow these steps:
1. in EDEN place an object on the ground in desired position, doesn't matter what object because is going to be deleted anyways,
	--the puddle will have the same direction as the object you placed
2. give the object a name and use it as parameter in the line below 
3. chose a value for puddle_SFX and place it in parameters
4. copy-paste the line in your init.sqf
*/

Examples:
[my_puddle_1,true] execVM "AL_farty\simple_toxic_puddle.sqf";
[my_puddle_2,false] execVM "AL_farty\simple_toxic_puddle.sqf";
