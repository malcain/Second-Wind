// by ALIAS

private ["_strigoi","_legs_ini"];

if (!hasInterface) exitWith {};

_strigoi = _this select 0;

waitUntil {sleep 5; !isnil "r_hit_legs"};
_legs_ini = r_hit_legs;

while {alive _strigoi} do 
{
	if ((player distance _strigoi) < 250) then 
	{
		if (r_hit_legs < 0.001) then {
		_legs_ini = r_hit_legs;
		r_hit_legs = 0.001;
		player enableStamina true;
		}; 
		player setFatigue ((getfatigue player) + 0.1);
	}
	else 
	{
		sleep 5;
		if (_legs_ini < 0.001) then {
			player enableStamina false;
			r_hit_legs = 0;
		};
		waitUntil {sleep 10; (player distance _strigoi) < 250};
	};
	sleep 2;
};

if (_legs_ini < 0.001) then {
	player enableStamina false;
	r_hit_legs = 0;
};