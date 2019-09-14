/*
	Author: Alkanet

	Description:
	Will start the option wheel system or  update existing one.
	

	Parameters:
	_this select 0: OPTIONS, An Array that contains the options to exist in the wheel. Each option is represented by an array containing the name and value. ARRAY
	_this select 1: CODE, Code that will run when an an option is selected. Parameters: [NAME,VALUE] , CODE
	_this select 2: SIZE, Size of the wheel. NUMBER
	_this select 3: OBJECT SIZE, The size of each option. NUMBER
	
	Returns:
	NOTHING

	Examples:

	[[["Hello","Is it me you looking for?"],["Bye","Good bye"]],{hint _this;},0.3,0.15] call OptionWheel_fnc_setWheel; 			////Adds "Hello" and "Bye" to the wheel. When selected, hints the name and value.
	
	[[["Sting","SMG_02_F"],["GM6 Lynx","srifle_GM6_ghex_LRPS_F"],["AKM","arifle_AKM_F"],["Katiba","arifle_Katiba_F"], ["MK20","arifle_Mk20_F"], ["MXC","arifle_MXC_ACO_pointer_F"], ["LIM-85 ","LMG_03_F"]],{  
	 _weapon = _this select 1;  
	 _magazines = (getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines"));  
	 _mag = _magazines select 0;  
	 player addMagazine [_mag,5];  
	 player addWeapon _weapon;  
	  
	 },0.3,0.15] call OptionWheel_fnc_setWheel; 																				////Simple weapon wheel.			
	

*/



private _objects = param [0, [],[[],""]];
private _selectFunction = param [1, {true},[{}]];
private _size = param [2, 0.3,[1]];
private _objectSize = param [3, 0.15,[1]];

if (isDedicated) exitWith {};

_list = [];


if(_objects isEqualType "")then{
	missionNameSpace setVariable ["AlkWheel_compileObjects", _objects, false];
	_objects = call compile _objects;
}else{
	missionNameSpace setVariable ["AlkWheel_compileObjects", "", false];
};

missionNameSpace setVariable ["AlkWheel_size", _size, false];
missionNameSpace setVariable ["AlkWheel_objectSize", _objectSize, false];
missionNameSpace setVariable ["AlkWheel_selectFunction", _selectFunction, false];


_incrementer = 360 / count _objects;
_currentAngle = 0;

_animListCenterX = ( safeZoneX + ( safeZoneWAbs * 0.5)) - ( _objectSize * 0.5) ;
_animListyCenterY =  ( safeZoneY + (safeZoneH * 0.5)) - (_objectSize * 0.5);
_maxSize = _size / 4;
missionNameSpace setVariable ["AlkWheel_MaxSize", _maxSize, false];

{
	_data = _x select 0;
	_value = _x select 1;

	_posX = ((cos _currentAngle)*_size) + _animListCenterX;
	_posY = ((sin _currentAngle)*_size) + _animListyCenterY;

	_pos = [_posX,_posY];
	
	
	_control1PosX = _posX + ( _objectSize * 0.5);
	_control1PosY = _posY + ( _objectSize * 0.5);
		
	
	_centerPos = [_control1PosX,_control1PosY];
	
	_type = false;
	_length = count _data;

	if(_length > 3)then{
		_ext =  _data select [_length-3,_length];

		if(_ext isEqualTo "paa")then{
			_type = true;
		};
	};


	_list pushBack [_data, _value, _pos,_centerPos,_objectSize,_type];

	_currentAngle = _currentAngle + _incrementer;

}foreach _objects;


missionNameSpace setVariable ["AlkWheel_objects", _list, false];




if (isNil { missionNameSpace getVariable "AlkWheel_Init" }) then {


	_cursorData = missionNameSpace getVariable ["AlkWheel_CursorSize",[]];

	//Default
	if (count _cursorData isEqualTo 0)then{
		_currsorSize = 0.15;
		_currsorX = ( safeZoneX + ( safeZoneWAbs * 0.5  )) - ( _currsorSize * 0.5  ) ;
		_currsorY = ( safeZoneY + (safeZoneH * 0.5 )) - (_currsorSize * 0.5 );
		
		
		_newData = [_currsorX,_currsorY,_currsorSize,_currsorSize];
		missionNameSpace setVariable ["AlkWheel_CursorSize", _newData, false];
		
		_CenterX = _currsorX + ( _currsorSize * 0.5 );
		_CenterY = _currsorY + ( _currsorSize * 0.5  );
		missionNameSpace setVariable ["AlkWheel_Center", [_CenterX,_CenterY], false];
		
		
	
	};
	
	


	
	
	
	
	
	


[] spawn 
{
	disableSerialization;
	waituntil {!isnull (finddisplay 46)};
	
	
	_display = findDisplay 46;
	animationListActivated = false;
	animationListDisable = false;
	
	_isMouse = missionNameSpace getVariable ["AlkWheel_isMouse",false];
	
	if(_isMouse)then{
		_keyUp = _display displayAddEventHandler ["MouseButtonUp", {
		params ["_displayorcontrol", "_button", "_xPos", "_yPos", "_shift", "_ctrl", "_alt"];
			
			[_displayorcontrol, _button, _shift, _ctrl, _alt] call OptionWheel_fnc_buttonUp;
			
		}];
	
		_keyDown = _display displayAddEventHandler ["MouseButtonDown", {
		params ["_displayorcontrol", "_button", "_xPos", "_yPos", "_shift", "_ctrl", "_alt"];

			[_displayorcontrol, _button, _shift, _ctrl, _alt] call OptionWheel_fnc_buttonDown;
			
		}];
	
		missionNamespace setVariable ["AlkWheel_MouseDownEvent", _keyDown, true];
		missionNamespace setVariable ["AlkWheel_MouseUpEvent", _keyUp, true];
	
	}else{
		_keyUp = _display displayAddEventHandler ["KeyUp", {
		params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];
			
			[_displayorcontrol, _key, _shift, _ctrl, _alt] call OptionWheel_fnc_buttonUp;
		
		

		}];
		
		_keyDown = _display displayAddEventHandler ["KeyDown", {
		params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];
			
			[_displayorcontrol, _key, _shift, _ctrl, _alt] call OptionWheel_fnc_buttonDown;
		
		}];
		
		missionNamespace setVariable ["AlkWheel_MouseDownEvent", _keyDown, true];
		missionNamespace setVariable ["AlkWheel_MouseUpEvent", _keyUp, true];
	};
	
	
	


	
	missionNameSpace setVariable ["AlkWheel_Init", true];
	};
};