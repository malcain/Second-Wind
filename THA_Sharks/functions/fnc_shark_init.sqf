/*
	Author: Malcain

	Description:
	Shark Init.

*/

waitUntil {time > 0};

//if (isServer) then {

	private ["_sharky","_ornate01","_ornate02","_catShark","_sharkyKilledEH","_pen","_thisEventHandler"];
	_sharky = _this select 0;

	//disable BI animal behaviour
	_sharky setVariable ["BIS_fnc_animalBehaviour_disable", true];

	// shark behaviour
	//[_sharky] spawn SHARK_fnc_huntingBehavior;
	[_sharky] spawn BPServer_fnc_huntingBehavior;

	//attach to pen to make shark sink
	_sharkyKilledEH = _sharky addEventHandler ["Killed", {
		if (isServer) then {
			private ["_pen"];
			{
			  detach _x;
			} forEach attachedObjects (_this select 0);
			(_this select 0) setVariable ["killed",1,false];
			_pen = "Land_PenBlack_F" createVehicleLocal (getPosATL (_this select 0));
			_pen setPos ((_this select 0) modelToWorld [0,0,-0.3]);
			_pen setDir (getDir (_this select 0));
			(_this select 0) attachTo [_pen,[0,0,0.3]];
			(_this select 0) removeEventHandler ["Killed",_thisEventHandler];
			//[(_this select 0),(_this select 0)] spawn SHARK_fnc_underwaterBleeding;
			[(_this select 0),(_this select 0)] spawn BPServer_fnc_underwaterBleeding;
		};
	}];

	//hit EH
	_sharky addEventHandler ["Hit", {
		//[(_this select 0),(_this select 0)] spawn SHARK_fnc_underwaterBleeding;
		[(_this select 0),(_this select 0)] spawn BPServer_fnc_underwaterBleeding;

		_nearPlayers = _shark nearEntities ["BP_Player", 50];
		if (count _nearPlayers > 0) then {
			[(_this select 0),"short_heavy_splash"] remoteExec ['say3D',_nearPlayers,false]
		};
		//(_this select 0) switchMove "GreatWhite_S3";
	}];
//};