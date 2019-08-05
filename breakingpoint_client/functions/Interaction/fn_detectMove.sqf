params ["_climber"];

if (isNil "_climber") exitwith {};

_moveVar = _climber getvariable "moveVar";
if !(_moveVar select 2) exitwith {};

_v1 = (asltoagl(atltoasl(_climber modeltoworld (_climber selectionPosition "Head"))) vectorfromto (positioncameratoworld [0,0,5]));

_v2 = (_climber modeltoworld [0,0,0]) vectorfromto (_climber modeltoworld [0,0,-5]);

_cos = _v1 vectorCos _v2;

_dpos = [0,0,0];

if (_cos > 0.8) exitwith
{

	for "_i" from 0 to 20 do   
	{ 
		_intcount = 0;
	
		_posa = _climber modeltoWorld [0, (_i*0.05), 0.5];   

		_posb = _climber modeltoWorld [0, (_i*0.05), -1.7];  

		_int = lineintersectsSurfaces [agltoasl _posa, agltoasl _posb, _climber, objNull, true, 1, "GEOM", "FIRE"]; 
		
		_intcount = (count _int)+_intcount;
		
		
		
		_posa = _climber modeltoWorld [0, 0, (_i*0.05)];   

		_posb = _climber modeltoWorld [0, 1.5, (_i*0.05)];  		
		
		_int2 = lineintersectsSurfaces [agltoasl _posa, agltoasl _posb, _climber, objNull, true, 1, "GEOM", "FIRE"]; 
		
		_intcount = (count _int2)+_intcount;		

		
		
		if (_intcount == 0) then
		{
			_anm = "";

			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anm = "jumpDown_hlr";
				};
				case (primaryWeapon _climber):
				{
					_anm = "jumpDown_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anm = "jumpDown_pst";
				};
			};

			if (_anm != "" && str _dpos != "[0,0,0]") then
			{
			
				_moveVar = _climber getvariable "moveVar";
				_moveVar set [0, true];
				_climber setVariable ["moveVar", _moveVar];

				[((name _climber) + "EH_jumpoff"), {animationState (_condpars select 0) == (_condpars select 1)}, [_climber, _anm], "BP_fnc_jumpOff", [_dpos, _climber], true, "BP_fnc_jumpOff_fin", [_climber], 0] call BP_fnc_addEH;

				_climber playMove _anm;
			};
		} else
		{
			_dpos = (_int select 0) select 0;

		};
	};
};


_pos = [0,0,0];

_posa = [0,0,0];

_posb = [0,0,0];

_toppos = [0,0,0];

_goodZ = [];

_blocked = false;

_top = false;

_poses = [];

_int = [];

_obj = _climber;

debug_Parkour = false;

for "_i" from 0 to 60 do   
{ 
	_posa = _climber modeltoWorld [0, 0, (_i*0.05)];   

	_posb = _climber modeltoWorld [0, 1.5, (_i*0.05)+ 0.1];   

	_int = lineintersectsSurfaces [agltoasl _posa, agltoasl _posb, _climber, objNull, true, 1, "GEOM", "FIRE"]; 


	_respos = (_int select 0) select 0;

	_succ = count _int > 0;


	if (_succ) then
	{
		_obj = (_int select 0) select 3;

		if (debug_Parkour) then
		{
			drawLine3D [_posa, _posb, [1,0,0,1]];
		};

		_testpos = (_int select 0) select 0;

		_posWT = _climber worldToModel (asltoagl _testpos);

		if (_posWT select 2 > 0.5) then
		{
			_pos = _testpos;
			_goodZ pushback (_posWT select 1);
		};
	} else
	{
		if (str _pos != "[0,0,0]") then
		{
			_ppWT = (_climber worldtomodel (asltoagl _pos)) select 2;
			_tpWT = (_i*0.05)+ 0.1;

			_dst = (_ppWT max _tpWT) - (_ppWT min _tpWT);

			if (debug_Parkour) then
			{	
				drawLine3D [_posa, _posb, [0,1,1,1]];
			};

			_posWT = _climber worldToModel (asltoagl _pos);

			if (!(_pos in _poses) && _posWT select 2 > 0.5 && _dst > 0.5) then
			{
				_poses pushback _pos;
			};
		};
	};
};

_wound_objs = 
[
	"Land_Mil_WiredFence_F",
	"Land_Mil_WiredFenceD_F",
	"Land_New_WiredFence_5m_F",
	"Land_New_WiredFence_10m_F",
	"Land_New_WiredFence_10m_Dam_F",
	"Land_WiredFence_01_4m_F",
	"Land_WiredFence_01_8m_F",
	"Land_WiredFence_01_16m_F",
	"Land_Razorwire_F",
	"Land_NetFence_03_m_9m_F",
	"Land_NetFence_03_m_3m_F"
];

//camoconcretewall_01_l_4m_v2_f
//camoconcretewall_01_l_4m_d_v1_f
//camoconcretewall_01_l_4m_v1_f

if (typeOf _obj in _wound_objs) then {
	r_player_bleedingLevel = 2;
	r_player_injured = true;
	r_player_inpain = true;
};

_invalid = [["t_","b_","camoconcretewall"],str(_obj)] call BP_fnc_inStringArray;
if (_invalid && {typeof _obj == ""}) exitwith {};

if (count _poses > 0) then
{
	_pos = _poses select 0;
};


_posWT = _climber worldToModel (asltoagl _pos);

_posa = _climber modeltoWorld [_posWT select 0, (_posWT select 1) + 0.75, (_posWT select 2) + 0.5];

_posb = _climber modeltoWorld [_posWT select 0, (_posWT select 1) + 0.75, (_posWT select 2) - 5];

_toptest = lineintersectsSurfaces [agltoasl _posa, agltoasl _posb, _climber, objNull, true, 1, "GEOM", "FIRE"];
_toppos = (_toptest select 0)select 0;

_postopos = ((_toptest select 0)select 3);

_top = !isNil "_postopos";

if (!_top) then 
{
	_toppos = agltoasl(_climber modeltoworld [0,2,0]);
}else
{		
	_a = abs (_pos select 2);
	_b = abs (_toppos select 2);

	_max = _a max _b;

	if (_max == _a) then 
	{
		if (_a - _b > 0.6) then
		{
			_top = false;
			if (_a-_b > 1.8) then
			{
				_toppos = agltoasl(_climber modeltoworld [0,2,0]);
			};
		} else
		{
			_top = true
		};
	}else
	{
		_top = true;
	};
};

if (str _pos != "[0,0,0]" && _top) then
{
	_avZ = 0;
	_min = 999;
	_max = 0;
	for "_i" from 0 to (count _goodZ)-1 do   
	{ 
		_z = _goodZ select _i;

		if (_i > 0) then
		{
			_min = _min min _z;	
			_max = _max max _z;
		};

		_avZ = _avZ + _z;
	};

	if (_max - _min > 0.5) then
	{
		_avZ = _avZ/(count _goodZ);

		_pos = agltoasl (_climber modeltoworld [_posWT select 0, _avZ, _posWT select 2]);
	};
};


_posWT = _climber worldToModel (asltoagl _pos);


_bone = _climber selectionPosition "Spine3";

_posa = _climber modeltoWorld _bone;

_posb = _climber modeltoWorld [_bone select 0, _bone select 1, (_posWT select 2)+0.5];

_int2 = lineintersectsSurfaces [agltoasl _posa, agltoasl _posb, _climber, objNull, true, 1, "GEOM", "FIRE"];



_posa = _climber modeltoworld [0,0, (_posWT select 2) + 0.2];

_posb = _climber modeltoworld [_posWT select 0, (_posWT select 1)+ 0.2, (_posWT select 2) + 0.2];

_int3 = lineintersectsSurfaces [agltoasl _posa, agltoasl _posb, _climber, objNull, true, 1, "GEOM", "FIRE"];

_int2o = _int2 select 0 select 2;
_int3o = _int3 select 0 select 2;

_blocked = ((count _int2) + (count _int3) > 0) && 
(
	(
		!isNil "_int2o" or
		!isNil "_int3o"		
	) or
	{
		!isNull _int2o
		or
		!isNull _int3o	
	}
);

//hint str [_blocked, (_int2 select 0 select 2), (_int3 select 0 select 2)];


if (_blocked) then
{
	_pos = [0,0,0];
};

if (!_top && _obj != _climber && _obj isKindOf "CaManBase") then 
{
	_pos = [0,0,0];
};

_wide = true;

if (!_top) then
{
	_posWT = _climber worldToModel asltoagl _pos;

	_a = agltoasl (_climber modeltoworld [(_posWT select 0) + 0.3, _posWT select 1, (_posWT select 2)+0.2]);

	_b = agltoasl (_climber modeltoworld [(_posWT select 0) - 0.3, _posWT select 1, (_posWT select 2)+0.2]);

	_c = agltoasl (_climber modeltoworld [(_posWT select 0) + 0.3, (_posWT select 1) + 0.1, (_posWT select 2)+0.2]);

	_d = agltoasl (_climber modeltoworld [(_posWT select 0) - 0.3, (_posWT select 1) - 0.1, (_posWT select 2)+0.2]);

	_e = agltoasl (_climber modeltoworld [(_posWT select 0) + 0.3, (_posWT select 1) - 0.1, (_posWT select 2)+0.2]);

	_f = agltoasl (_climber modeltoworld [(_posWT select 0) - 0.3, (_posWT select 1) + 0.1, (_posWT select 2)+0.2]);

	_int1 = lineintersectsSurfaces [_a, _b, _climber, objNull, true, 1, "GEOM", "FIRE"]; 

	_int2 = lineintersectsSurfaces [_c, _d, _climber, objNull, true, 1, "GEOM", "FIRE"]; 

	_int3 = lineintersectsSurfaces [_e, _f, _climber, objNull, true, 1, "GEOM", "FIRE"]; 

	_wide = (count _int1) + (count _int2) + (count _int3) == 0;

};

if (debug_Parkour) then
{
	systemchat str [(count _int2), (count _int3), _wide, _top, _pos];
	debug_sign setposasl (_poses select 0);
};

if !_wide then 
{
	_pos = [0,0,0];
};

_blocked = false;

if (str _pos != "[0,0,0]" && count _poses > 0) then
{
	if (_top) then
	{
		_posa = _poses select 0;
		
		_posa set [2, (_posa select 2)+0.2];

		_posb = [_posa select 0, _posa select 1, (_posa select 2) + 1.25];

		_int4 = lineintersectsSurfaces [_posa, _posb, _climber, objNull, true, 1, "GEOM", "FIRE"];
		
		if (debug_Parkour) then
		{
			_a = createVehicle ["Sign_Arrow_F", _posa, [], 0, "can_collide"];
			_a setposasl _posa;
			_b = createVehicle ["Sign_Arrow_F", _posb, [], 0, "can_collide"];
			_b setposasl _posb;
		};
		
		_blocked = count _int4 != 0;
	} else
	{
		_rpos = _poses select 0;
		_mtw = agltoasl (_climber modeltoWorld [0,2,0]);
		_posa = [_rpos select 0, _rpos select 1, (_rpos select 2) + 0.5];

		_posb = [_mtw select 0, _mtw select 1, _posa select 2];

		_int5 = lineintersectsSurfaces [_posa, _posb, _climber, objNull, true, 1, "GEOM", "FIRE"];
		
		if (debug_Parkour) then
		{
			_a = createVehicle ["Sign_Arrow_F", _posa, [], 0, "can_collide"];
			_a setposasl _posa;
			_b = createVehicle ["Sign_Arrow_F", _posb, [], 0, "can_collide"];
			_b setposasl _posb;
		};
		
		_blocked = count _int5 != 0;
	};
};

if (!_blocked) then
{
	[_pos, _top, _toppos, _climber] call BP_fnc_parkour;
};