params ["_pos", "_climbOn", "_climbOnpos", "_climber"];

_stance = stance _climber;
_outOfStance = ["PRONE"];

_moveVar = _climber getvariable "moveVar";

//stance checks
if ((_moveVar select 0) or _stance in _outOfStance or !isNull objectParent _climber) exitwith {};

if (_climber == player) then
{
	_moveVar set [0, false];
	_moveVar set [1, false];
};


if (str _pos == "[0,0,0]") exitwith {};

_anim = "";
_hgt = ((_climber worldToModel asltoagl _pos) select 2) max 0;
_over = false;

//On obstacle
if (_climbOn) then {
	switch (true) do
	{
		case (_hgt > 2.35 && _hgt <= 3):
		{
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anim = "climbOnHigh_hlr";
				};
				case (primaryWeapon _climber):
				{
					_anim = "climbOnHigh_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anim = "climbOnHigh_pst";
				};
			};
		};
		case (_hgt > 1.8 && _hgt < 2.35):
		{
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anim = "climbOnMedium_hlr";
				};
				case (primaryWeapon _climber):
				{
					_anim = "climbOnMedium_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anim = "climbOnMedium_pst";
				};
			};
		};
		case (_hgt > 1.1 && _hgt <= 1.8):
		{
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anim = "climbOnLow_hlr";
				};
				case (primaryWeapon _climber):
				{
					_anim = "climbOnLow_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anim = "climbOnLow_pst";
				};
			};
		};
		case (_hgt > 0.25 && _hgt <= 1):
		{
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anim = "stepOn_hlr";
					//_anim = "ClimbUp_Low_Climb_Up";
				};
				case (primaryWeapon _climber):
				{
					_anim = "stepOn_rfl";
					//_anim = "ClimbUp_Low_Climb_Up_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anim = "stepOn_pst";
					//_anim = "ClimbUp_Low_Climb_Up_pst";
				};
			};
		};
	};
//over obstacle
} else {
	switch (true) do
	{
		case (_hgt > 2.25 && _hgt <= 3):
		{
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anim = "climbOverHigh_hlr";
				};
				case (primaryWeapon _climber):
				{
					_anim = "climbOverHigh_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anim = "climbOverHigh_pst";
				};
			};
		};
		case (_hgt > 1.6 && _hgt <= 2.25):
		{
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anim = "climbOverMedium_hlr";
				};
				case (primaryWeapon _climber):
				{
					_anim = "climbOverMedium_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anim = "climbOverMedium_pst";
				};
			};
		};
		case (_hgt > 0.85 && _hgt < 1.6):
		{
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anim = "climbOverLow_hlr";
				};
				case (primaryWeapon _climber):
				{
					_anim = "climbOverLow_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anim = "climbOverLow_pst";
				};
			};
		};
		case (_hgt > 0.25 && _hgt <= 0.85):
		{
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anim = "vaultOver_hlr";
				};
				case (primaryWeapon _climber):
				{
					_anim = "vaultOver_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anim = "vaultOver_pst";
				};
			};
		};
	};
_over = true;	
};

if (_anim == "") exitwith {};

_moveVar = _climber getvariable "moveVar";
_moveVar set [0, true];
_climber setVariable ["moveVar", _moveVar];

[((name _climber) + "EH_em"), {animationState (_condpars select 0) == (_condpars select 1)}, [_climber, _anim], "babe_em_fnc_pkour_setpos", [_pos, _over, _climber], true, "babe_em_fnc_finish_em", [_climbOnpos, _over, _climber], 0] call babe_core_fnc_addEH;

_climber playMove _anim;
