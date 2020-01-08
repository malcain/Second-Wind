params ["_object","_radius"];

private["_theOrderClass","_anarchistClass","_theOrderList","_anarchistList","_outsidersClass","_outsiders"];

_theOrderClass = [1,4,5];
_anarchistClass = [2,6];
_outsidersClass = [3];

_theOrderList = [];
_anarchistList = [];
_outsiders = [];

{
	if(isPlayer _x && alive _x)then{
		_playerClass = _x getVariable ["class",0];
		if (_playerClass in _theOrderClass) then {
			_nil = _theOrderList pushBack _x;
		} else {
			if (_playerClass in _anarchistClass) then {
				_nil = _anarchistList pushBack _x; 
			} else {
				if (_playerClass in _outsidersClass) then {
					_nil = _outsiders pushBack _x;
				};
			};
		};
	};
} count (_object nearEntities["CAManBase",_radius]);


_factionArray = [count _theOrderList,count _anarchistList,count _outsiders];

_factionArray