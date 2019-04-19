"BP_Sign_scavenger" createVehicle position player;

_flag = "FlagPole_F" createVehicle position player;
_flag call BP_fnc_addFlagAction;

BP_fnc_addFlagAction = 
{
	_this addAction 
	[
		"Capture the Stronghold", 
		{
			player playAction "PutDown";
			sleep 0.5;
			_flagArray = nearestObjects [player, ["FlagPole_F"], 350];
			{
			_x setFlagTexture selectRandom _factionFlagArray;
			[_x, (flagAnimationPhase _x) + 0.1, 1800] call BIS_fnc_animateFlag;
			} forEach _flagArray;
			
			_flagArray select 0 setFlagTexture _factionFlagArray select 0;
			_this select 0 removeAction (_this select 2);
		}, 
		"", 
		10, 
		true, 
		true, 
		"", 
		"_this distance2D _target < 2"
	];
};

_mainFlag = _flagArray select 0;
[
	_mainFlag, 
	"FlagAnimationDone", 
	{
		if (_this select 1 > 0.99) exitWith 
		{
			[_this select 0, "FlagAnimationDone"] call BIS_fnc_removeAllScriptedEventHandlers;
			_controlPoint call BP_fnc_addFlagAction;
		};
		[_flagArray] spawn BP_fnc_extendCapture;
	}
]
call BIS_fnc_addScriptedEventHandler;



//Captured persistent
_flagArray = nearestObjects [player, ["FlagPole_F"], 350];
{
_x setFlagTexture selectRandom _factionFlagArray;
[_x, 1, true] call BIS_fnc_animateFlag;
} forEach _flagArray;
_flagArray select 0 setFlagTexture _factionFlagArray select 0;
_controlPoint call BP_fnc_addFlagAction;


//Determine Faction Specific Flag
_class = player getVariable ["class",0];
_factionFlag = "breakingpoint_ui\flags\flag";

switch (_class) do {
	//Ranger
	case 1: { _factionFlagArray = [_factionFlag + "_Ranger.paa",_factionFlag + "_Nomad.paa",_factionFlag + "_Survivalist.paa"]};
	//Outlaw
	case 2: { _factionFlagArray = [_factionFlag + "_Outlaw.paa",_factionFlag + "_Scavenger.paa"]};
	//Hunter
	case 3: { _factionFlagArray = [_factionFlag + "_Hunter.paa"]};
	//Nomad
	case 4: { _factionFlagArray = [_factionFlag + "_Nomad.paa",_factionFlag + "_Ranger.paa",_factionFlag + "_Survivalist.paa"]};
	//Survivalist
	case 5: { _factionFlagArray = [_factionFlag + "_Survivalist.paa",_factionFlag + "_Nomad.paa",_factionFlag + "_Ranger.paa"]};
	//Scavenger
	case 6: { _factionFlagArray = [_factionFlag + "_Scavenger.paa",_factionFlag + "_Outlaw.paa"]};
};