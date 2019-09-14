params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];
#include "\a3\ui_f\hpp\definedikcodes.inc"
_keyToPress = missionNameSpace getVariable ["AlkWheel_Key",DIK_F];
		


		if(_key isEqualTo _keyToPress && animationListActivated && !animationListDisable)then{
		
			"AlkWheel" cutText ["","PLAIN",-1,false];
			animationListActivated = false;

			_mouseEvent = missionNamespace getVariable ["AlkWheel_MouseMovingEvent",-1];
			_displayorcontrol displayRemoveEventHandler ["MouseMoving",_mouseEvent];

			_stopMoveTime = missionNamespace getVariable ["AlkWheel_stopMoveTime",-1];
			_future = _stopMoveTime + 0.4;
			if(time > _future)then{
			
				missionNameSpace setVariable ["AlkWheel_selected", [], false];
			};
			
			
							
							
			_selected = missionNameSpace getVariable ["AlkWheel_selected", []];
			if (count _selected > 1)then{
			
				_selectFunction = missionNameSpace getVariable ["AlkWheel_selectFunction", {true}];
				
				_data = _selected select 0;
				_value = _selected select 1;
				
				[_data,_value] call _selectFunction;
				missionNameSpace setVariable ["AlkWheel_selected", [], false];
			};

		};