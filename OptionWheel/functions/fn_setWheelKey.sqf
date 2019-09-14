/*
	Author: Alkanet

	Description:
	Set the key to activate the wheel.
	https://community.bistudio.com/wiki/DIK_KeyCodes
	Default: 0x21 , F
	

	Parameters:
	_this select 0: KEY, The key. Default: 0x21 , F, NUMBER

	Returns:
	NOTHING

	Examples:

	[0x10] call OptionWheel_fnc_setWheelKey;	//Updates the key to Q.
	

*/
private _key = param [0, 0x21,[0]];
private _isMouse = param [1, false,[false]];

if(_isMouse)then{
	missionNameSpace setVariable ["AlkWheel_isMouse", true, false];
}else{
	missionNameSpace setVariable ["AlkWheel_isMouse", false, false];
};

missionNameSpace setVariable ["AlkWheel_Key", _key, false];