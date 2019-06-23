// by Alias

private ["_dyn_puddle"];

if (!hasInterface) exitWith {};

while {true} do 
{
	while {rain>0.02} do 
	{
		_poz_init_pl = getPos player;
		_np = 0;
		_lista_pud=[];
		while {_np<500} do 
		{
			_pos_umbla = [player,random 500, random 360] call BIS_fnc_relPos;
			if (((player distance _pos_umbla) > 100) and ((player distance _pos_umbla) < 500)) then 
			{
				_tip = [true,false] call BIS_fnc_selectRandom;
				if (_tip) then 
				{
					_dyn_puddle = "Land_Puddle_01_F" createVehiclelocal _pos_umbla;
					//_dyn_puddle = createSimpleObject ["Land_Puddle_01_F", _pos_umbla];
					_dyn_puddle setdir (random 360);
				} else {				
					_rnd_text = ["ALthunder\1_puddle.paa","ALthunder\2_puddle.paa","ALthunder\3_puddle.paa","ALthunder\4_puddle.paa","ALthunder\5_puddle.paa","ALthunder\7_puddle.paa"] call BIS_fnc_selectRandom;
					_dyn_puddle = "BloodPool_01_Large_New_F" createVehiclelocal _pos_umbla;
					_dyn_puddle setObjectTextureGlobal [0,_rnd_text];
					_dyn_puddle setdir (random 360);
					};
				_np=_np+1;
				_lista_pud pushBack _dyn_puddle; 
			};
			sleep 0.01;
		};
		waitUntil {(player distance _poz_init_pl)>500};
		{deleteVehicle _x; sleep 0.02} forEach _lista_pud;
	};
	sleep 600;
	waitUntil {rain>0.02};
};