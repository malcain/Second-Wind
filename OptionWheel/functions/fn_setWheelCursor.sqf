/*
	Author: Alkanet

	Description:
	Set the cursor image and size.
	

	Parameters:
	_this select 0: IMAGE, The image path. STRING
	_this select 1: WIDTH, Width of the cursor NUMBER
	_this select 2: HEIGHT, Height of the cursor. NUMBER

	Returns:
	NOTHING

	Examples:

	["cursor1.paa",0.15,0.15] call OptionWheel_fnc_setWheelCursor;	//Updates the cursor to cursor1.paa located in your mission folder.
	

*/

private _image = param [0, "OptionWheel\data\optionWheelCursor.paa",[""]];
private _w = param [1, 10,[0]];
private _h = param [2, 10,[0]];

missionNameSpace setVariable ["AlkWheel_CursorImage", _image, false];

_posX = ( safeZoneX + ( safeZoneWAbs * 0.5)) - ( _w * 0.5) ;
_posY = ( safeZoneY + (safeZoneH * 0.5)) - (_h * 0.5);

_newData = [_posX,_posY,_w,_h];
missionNameSpace setVariable ["AlkWheel_CursorSize", _newData, false];

_CenterX = _posX + ( _w * 0.5);
_CenterY = _posY + ( _h * 0.5);
		
missionNameSpace setVariable ["AlkWheel_Center", [_CenterX,_CenterY], false];


