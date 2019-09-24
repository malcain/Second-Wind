//_lightObj = createVehicle ["Item_acc_flashlight_pistol", position player, [],0,"CAN_COLLIDE"];
//_lightObj attachTo [player, [0.07,0.2,0.6], "LeftShoulder"];
//_lightObj setVectorDirAndUp [[-1.025,-0.05,0.03],[2.1,0.5,1.5]];
if (!isNull objectParent player) exitWith {
	/*if (!isNil "_lightOn") then {
		player action ["lightOn",  vehicle player];
		player setVariable ["lightOn",Nil];
	} else {
		player action ["lightOff", vehicle player];
		player setVariable ["lightOn","veh"];
	};*/
};

_lightOn = player getVariable ["lightOn", nil];

if (!isNil "_lightOn") exitwith {
	deleteVehicle _lightOn;
	player setVariable ["lightOn",Nil];
};

_lightClass = "SW_Flashlight";
_class = player getVariable ["class",0];
_factionLevel = player call BP_fnc_getFactionLevel;
_traitorFlag = player getVariable ["traitorFlag",false];
_isTraitor = (_traitorFlag or _factionLevel < 1);
if (_isTraitor) exitWith {
	_light = createVehicle [_lightClass, position player, [],0,"CAN_COLLIDE"];
	_light attachTo [player, [0.12,0.1,0.02], "LeftShoulder"];
	player setVariable ["lightOn",_light];
};

switch (_class) do {
	//Ranger
	case 1: {
		_lightClass = "SW_FlashlightBlue";
	};
	//Outlaw
	case 2: {
		_lightClass = "SW_FlashlightOrange";
	};
	//Hunter
	case 3: { 
		_lightClass = "SW_FlashlightRed";
	};
	//Nomad
	case 4: { 
		_lightClass = "SW_FlashlightBlue";
	};
	//Survivalist
	case 5: { 
		_lightClass = "SW_FlashlightGreen";
	};
	//Scavenger
	case 6: { 
		_lightClass = "SW_FlashlightOrange";
	};
};

_light = createVehicle [_lightClass, position player, [],0,"CAN_COLLIDE"];
_light attachTo [player, [0.12,0.1,0.02], "LeftShoulder"];
player setVariable ["lightOn",_light];