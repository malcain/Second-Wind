/*
	Author: Alkanet

	Description:
	Removes the wheel system.
	

	Parameters:

	Returns:
	NOTHING

	Examples:
	 call OptionWheel_fnc_removeWheel;
*/
[] spawn 
{ 
	disableSerialization;
	waituntil {!isnull (finddisplay 46)};
	_display = findDisplay 46;
	_MouseMovingEvent = missionNamespace getVariable ["AlkWheel_MouseMovingEvent",-1];
	_MouseDownEvent = missionNamespace getVariable ["AlkWheel_MouseDownEvent",-1];
	_MouseUpEvent = missionNamespace getVariable ["AlkWheel_MouseUpEvent",-1];

	_display displayRemoveEventHandler ["MouseMoving",_MouseMovingEvent];
	
	
	_isMouse = missionNameSpace getVariable ["AlkWheel_isMouse",false];
	
	if(_isMouse)then{	
		_display displayRemoveEventHandler ["MouseButtonDown",_MouseDownEvent];
		_display displayRemoveEventHandler ["MouseButtonUp",_MouseUpEvent];
	}else{
		_display displayRemoveEventHandler ["KeyDown",_MouseDownEvent];
		_display displayRemoveEventHandler ["KeyUp",_MouseUpEvent];
	
	};
	
	

	missionNameSpace setVariable ["AlkWheel_Init", nil];
	missionNameSpace setVariable ["AlkWheel_objects", nil, false];
	
	"AlkWheel" cutText ["","PLAIN",-1,false];
};
