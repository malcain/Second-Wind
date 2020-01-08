//by Malcain

//Vars
allControlPoints = [ElectroStation,CommunicationCentre,Airfield,Castle,Central];
allStrongholds = allMissionObjects "BP_FlagPole";
if (count allStrongholds == 0) exitwith {};
cntStrongholds = [0,0];
_strongholdState = profileNameSpace getVariable ["strongholdState",[]];
diag_log text format ["strongholdState Load %1",_strongholdState];
if (_strongholdState isEqualTo []) exitwith {};

_factionFlag = "breakingpoint_ui\flags\flag_";
_factionFlagArray = [];
_factionSign = "breakingpoint_ui\signs\sign_";
_factionSignArray = [];
_markerType = "Uncontrolled";

//Check each stronghold (via flagpoles)
{
_position = _x select 0;
_flag = _x select 1;
_mainFlag = (nearestObjects [_position, ["BP_FlagPole"], 475]) select 0;

//Find controlPoint.
_controlPoint = objNull;
{
	if ((_position distance _x) < 500) exitwith {_controlPoint = _x; };
} forEach allControlPoints;

if (isNull _controlPoint) exitwith { diag_log text format ["stronghold FAILED, controlPoint %1",_controlPoint]; };

//Assign stronghold to Faction.
_theOrder = [["ranger","nomad","survivalist"],_flag] call BP_fnc_inStringArray;
_anarchists = [["outlaw","scavenger"],_flag] call BP_fnc_inStringArray;

switch (_flag) do {
	//Ranger
	case "ranger.paa": {
		_factionFlagArray = [_factionFlag + "ranger.paa",_factionFlag + "nomad.paa",_factionFlag + "survivalist.paa"];
		_markerType = "Ranger";
		_markerColor = "ColorBlue";
		_factionSignArray = [_factionSign + "ranger.paa",_factionSign + "nomad.paa",_factionSign + "survivalist.paa"];
	};
	//Outlaw
	case "outlaw.paa": {
		_factionFlagArray = [_factionFlag + "outlaw.paa",_factionFlag + "scavenger.paa"];
		_markerType = "Outlaw";
		_markerColor = "ColorRed";
		_factionSignArray = [_factionSign + "outlaw.paa",_factionSign + "scavenger.paa"];
	};
	//Nomad
	case "nomad.paa": { 
		_factionFlagArray = [_factionFlag + "nomad.paa",_factionFlag + "ranger.paa",_factionFlag + "survivalist.paa"];
		_markerType = "Nomad";
		_markerColor = "ColorYellow";
		_factionSignArray = [_factionSign + "nomad.paa",_factionSign + "ranger.paa",_factionSign + "survivalist.paa"];
	};
	//Survivalist
	case "survivalist.paa": { 
		_factionFlagArray = [_factionFlag + "survivalist.paa",_factionFlag + "nomad.paa",_factionFlag + "ranger.paa"];
		_markerType = "Survivalist";
		_markerColor = "ColorGreen";
		_factionSignArray = [_factionSign + "survivalist.paa",_factionSign + "nomad.paa",_factionSign + "ranger.paa"];
	};
	//Scavenger
	case "scavenger.paa": { 
		_factionFlagArray = [_factionFlag + "scavenger.paa",_factionFlag + "outlaw.paa"];
		_markerType = "Scavenger";
		_markerColor = "ColorOrange";
		_factionSignArray = [_factionSign + "scavenger.paa",_factionSign + "outlaw.paa"];
	};
};

//Change marker.
_markerName = str _controlPoint;
_marker = createMarker [_markerName, _controlPoint];
_markerName setMarkerType _markerType;
_markerName setMarkerAlpha 0.7;
_markerRadius = _markerName + "_radius";
_markerRad = createMarker [_markerRadius, _controlPoint];
_markerRadius setMarkerShape "ellipse";
_markerRadius setMarkerAlpha 0;
_markerRadius setMarkerColor _markerColor;
_markerRadius setMarkerBrush "Border";
_markerRadius setMarkerSize [225, 225];

//set flags
_flagArray = nearestObjects [_mainFlag, ["FlagPole_F"], 475];
{
	[_x, 1, true] call BIS_fnc_animateFlag;
	_x setFlagTexture selectRandom _factionFlagArray;
} forEach _flagArray;

//set banners
_signArray = nearestObjects [_mainFlag, ["Land_Billboard_F","Land_Billboard_04_blank_F","SignAd_Sponsor_F","Banner_01_F","Land_Noticeboard_F"], 475];
{
	_signEmblem1 = selectRandom _factionSignArray;
	_x setObjectTextureGlobal [0,_signEmblem1];
	_signEmblem2 = selectRandom _factionSignArray;
	_x setObjectTextureGlobal [1,_signEmblem2];
} forEach _signArray;

//Main flag faction = capturer faction.
_mFlagTexture = _factionFlagArray select 0;
_mainFlag setFlagTexture _mFlagTexture;
_controlPoint setObjectTextureGlobal [1,_mFlagTexture];

//update reward
if (_theOrder) then {
	cntStrongholds = [(cntStrongholds select 0) + 1,cntStrongholds select 1];
	
} else {
	if (_anarchists) then {
		cntStrongholds = [cntStrongholds select 0,(cntStrongholds select 1) + 1];
		
	};
};

} count _strongholdState;

//Broadcast reward variable
publicVariable "cntStrongholds";
