params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];
#include "\a3\ui_f\hpp\definedikcodes.inc"
_keyToPress = missionNameSpace getVariable ["AlkWheel_Key",DIK_F];
		
		if(!animationListActivated && _key isEqualTo _keyToPress && !animationListDisable)then{
		
			
			_compileObjects = missionNameSpace getVariable ["AlkWheel_compileObjects",""];
			
			if ! (_compileObjects isEqualTo "")then{
			
				_objects = call compile _compileObjects;
				if(count _objects > 0)then{
					_size = missionNameSpace getVariable ["AlkWheel_size",0.3];
					_objectSize = missionNameSpace getVariable ["AlkWheel_objectSize",0.15];
				
					_list = [];
					
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

				
				};
				
			};
		
		
			"AlkWheel" cutRsc ["AlkWheel","PLAIN",-1,false];
			animationListActivated = true;


			_cursorImage = missionNameSpace getVariable ["AlkWheel_CursorImage",""];
			_cursorData = missionNameSpace getVariable ["AlkWheel_CursorSize",[]];

			_hud = uiNamespace getVariable "AlkWheel_HUD";
			
			
			_cursor = _hud displayCtrl 9275;
			
			if !(_cursorImage isEqualTo "")then{
				_cursor ctrlSetText _cursorImage;
			};
			if (count _cursorData > 3)then{
				_cursorX = _cursorData select 0;
				_cursorY = _cursorData select 1;
				_cursorW = _cursorData select 2;
				_cursorH = _cursorData select 3;
				_cursor ctrlSetPosition [_cursorX, _cursorY, _cursorW, _cursorH];
				
				_cursor ctrlCommit 0;
				
			};
			

			_list = missionNameSpace getVariable ["AlkWheel_objects", []];


			{
				_data = _x select 0;
				_pos = _x select 2;
				_objectSize = _x select 4;
				_isImage = _x select 5;

				_type = "RscTextCenter";
				
				if(_isImage)then{
					_type = "RscPictureKeepAspect";
				};
				

				_ctrl = _hud ctrlCreate [_type, -1];
				_ctrl ctrlSetPosition [_pos select 0,_pos select 1,_objectSize,_objectSize];
				_ctrl ctrlSetTextColor [1, 1, 1, 0.6];
				_ctrl ctrlSetText _data;
				_ctrl ctrlCommit 0;
				
				
				_x set [6, _ctrl];
				

			}foreach _list;


			_mouseEvent = _displayorcontrol displayAddEventHandler ["MouseMoving", {
				params ["_control", "_xPos", "_yPos", "_mouseOver"];

				if(animationListActivated)then{
					_hud = uiNamespace getVariable "AlkWheel_HUD";

					_cursor = _hud displayCtrl 9275;
					
					_control1Pos = ctrlPosition _cursor;
					_cursorX = _control1Pos select 0;
					_cursorY = _control1Pos select 1;
					
					
					_cursorData = missionNameSpace getVariable ["AlkWheel_CursorSize",[]];

					_cursorW = _cursorData select 2;
					_cursorH = _cursorData select 3;
						
					_cursorCenterX = _cursorX + ( _cursorW * 0.5);
					_cursorCenterY = _cursorY + ( _cursorH * 0.5);
				
					_centerData = missionNameSpace getVariable ["AlkWheel_Center",[]];
					
					_maxSize = missionNameSpace getVariable ["AlkWheel_MaxSize",-1];
					
					_centerX = _centerData select 0;
					_centerY = _centerData select 1;
					
					_dx = (_cursorCenterX - _centerX);
					_dy = (_cursorCenterY - _centerY);
					
					_dx = _dx * _dx;
					_dy = _dy * _dy;
					
					_distance = sqrt (_dx +_dy);
					
					
					
					if(_xPos isEqualTo 0 || _xPos isEqualTo -0 || _yPos isEqualTo 0 || _yPos isEqualTo -0)then{
					
						
					}else{
					
					if(_distance < _maxSize)then{
					
					_cursor ctrlSetPositionX _xPos;
					_cursor ctrlSetPositionY _yPos;
					_cursor ctrlCommit 1;
					


					}else{
						
						_centerX = _centerData select 0;
						_centerY = _centerData select 1;
						
						_fromoriginX = _xPos - _centerX;
						_fromoriginY = _yPos - _centerY;
						
						_fromoriginX = _fromoriginX * (_maxSize/_distance);
						_fromoriginY = _fromoriginY * (_maxSize/_distance);
						
						_cursor ctrlSetPositionX (_centerX + _fromoriginX);
						_cursor ctrlSetPositionY (_centerY + _fromoriginY);
						_cursor ctrlCommit 1;
					
					};
					

					_list = missionNameSpace getVariable ["AlkWheel_objects", []];

					
					_currentDistance = 100;
					_currentCtrl = controlNull;
					
					{
						_data = _x select 0;
						_value = _x select 1;
						_centerPos = _x select 3;
						_ctrl = _x select 6;

						_ctrl ctrlSetTextColor [1, 1, 1, 0.6];
						
						
						_dx = (_cursorCenterX - (_centerPos select 0));
						_dy = (_cursorCenterY - (_centerPos select 1));
						
						_dx = _dx * _dx;
						_dy = _dy * _dy;
						
						_distance = sqrt (_dx +_dy);
						
						
						if(_distance < _currentDistance)then{
							
						
								
							
							_currentDistance = _distance;
							_currentCtrl = _ctrl;

							_currentTime = time;
							missionNameSpace setVariable ["AlkWheel_stopMoveTime", _currentTime, false];
							missionNameSpace setVariable ["AlkWheel_selected", [_data,_value], false];
						
						};

					}foreach _list;
					
					_currentCtrl ctrlSetTextColor [1, 1, 1, 1];
					
					
					if(_xPos < 0.09 && _xPos > -0.09 && _yPos < 0.09 && _yPos > -0.09)then{
						_cursorData = missionNameSpace getVariable ["AlkWheel_CursorSize",[]];
						_cursorX = _cursorData select 0;
						_cursorY = _cursorData select 1;
						
						
						_cursor ctrlSetPositionX _cursorX;
						_cursor ctrlSetPositionY _cursorY;
						_cursor ctrlCommit 1;
						_currentCtrl ctrlSetTextColor [1, 1, 1, 0.6];
						
						
					
					};
				
				
				
				
				
				};
				
				};
			
			
			}];

				missionNamespace setVariable ["AlkWheel_MouseMovingEvent", _mouseEvent, true];


		};
