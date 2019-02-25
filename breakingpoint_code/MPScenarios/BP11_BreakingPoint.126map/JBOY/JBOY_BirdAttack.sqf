//////////////////////////////////////////////////////////
// JBOY_BirdAttack.sqf 
// By: johnnyboy
// dmy = ["Salema_F",thisTrigger] execvm "JBOY\JBOY_BirdAttack.sqf";
// dmy = ["Random",thisTrigger] execvm "JBOY\JBOY_BirdAttack.sqf";
// dmy = ["Snake_random_F",thisTrigger] execvm "JBOY\JBOY_BirdAttack.sqf";
//
// Currently bird flight really jerky in Dedicated, so script disabeled if dedicated.
//////////////////////////////////////////////////////////
//systemChat "in JBOY_BirdAttack";
if (isServer or true) then
{
    _preyType = _this select 0;  // Specific animal agent name, or "Random"
    _preySpot = _this select 1;  // thistrigger which is trigger object
    _dedicatedServer = false;
    if (isDedicated) then {
       _dedicatedServer = true;
    } else {
       _dedicatedServer = false;
    };
    _dedicatedServer = true;  // For now, always forcing this to true to use pre-recorded flight paths
    
    _preyTypes = [];
    _preyIsFish = true;
    if (surfaceIsWater position _preySpot) then {
        //_preyTypes = ["Salema_F","Ornate_random_F","Mackerel_F","Tuna_F","Mullet_F","CatShark_F"];
        _preyTypes = ["Mullet_F","Tuna_F","CatShark_F","CatShark_F","CatShark_F"];
        _preyIsFish = true;
    } else {
        _preyTypes = ["Rabbit_F","Hen_random_F","Snake_random_F"];
        _preyIsFish = false;
    };
    if (_preyType == "Random") then
    {
        _preyType = (_preyTypes call BIS_fnc_arrayShuffle) select 0;
    };
//systemchat  _preyType;
    // taller prey gets a lower offset under the bird
    _zOffset = -.21;
    if (_preyType in ["Tuna_F","Rabbit_F","Hen_random_F","Cock_random_F"]) then {_zOffset = -.43;};
        
    // ****************************************************************
    // Use large diameter triggers for land prey so player doesn't see prey 
    // spawn in front of them.  Then wait until player closer to trigger
    // bird attack on prey.
    // ****************************************************************
    _prey = createAgent [_preyType, [0,0,0], [], 0, "NONE"];
	
	// This if statement hardcoded for Last Tango in Tanoa Razing Cane mission
	if (_preyType == "Hen_random_F" and !BirdContestCompleted) then
	{
		[_prey,true] execVM "JBOY\addBirdDamageEH.sqf";
		_prey enableSimulation true;
	};
//snake = _prey;

    // fish disappear in the swamp if simulation enabled, so let's start them out lower and disabled.

    if (_preyIsFish) then {
        //_prey setpos (_preySpot modelToWorld [0,0,-.4]);
        _prey setpos [getpos _preySpot select 0,getpos _preyspot select 1,-.4];
        _prey enablesimulation false;
    } else {
        _prey setpos [getpos _preySpot select 0,getpos _preyspot select 1,0];
        _prey enablesimulation true;
    };
	// This if statement hardcoded for Last Tango in Tanoa Razing Cane mission
	if (_preyType == "Hen_random_F" and !BirdContestCompleted) then
	{
		[_prey,true] execVM "JBOY\addBirdDamageEH.sqf";
		_prey enableSimulation true;
	};
     if !(_preyIsFish) then {
        //waituntil {sleep 2; ({_x distance2d _preySpot < 30} count ([player] + playableUnits + switchableUnits) > 0)};
        waituntil {sleep 2; ({_x distance2d _prey < 30} count ([player] + playableUnits + switchableUnits) > 0)};
     };
    _bird = "seagull" createVehicle (_preySpot modelToWorld [0,200,200]);
   
    sleep .5;
    
    // ****************************************************************
    // Find a nearby seagull that is flying since createVehicled birds don't fly
    // ****************************************************************
    _liveAgent = objNull;
    
    //sleep 2;  // Give created bird vehicle time to get smart????????????????
    if (!_dedicatedServer ) then
    {
        _objs = []; 
        while {count _objs == 0} do
        {
            {
                if (  (str _x find "eagull" > -1 or str typeOf _x find "eagull" > -1)
                     and !(_x == _bird)) then 
                {
                    _objs pushBack _x;
                };
            } forEach nearestObjects [player, [], 300];
            sleep 1;
        };
        _liveAgent = _objs select 0;
        diag_log [_liveAgent, _objs];
    } else {
    diag_log " isdedicated";
    };
    // ****************************************************************
    //  Create a small object that we can use gravity and on.
    //  Bird will be attached to object so we can move the bird via setvelocity.
    // ****************************************************************
   _canObj = "Land_CanOpener_F" createVehicle [10,10000,0];
   
    _canObj disableCollisionWith _bird;
    _up = VectorUP _canObj;
    // mass affects bounce of object on ground.  More mass is higher bounce.
    // Want high bounce when bird hits water, to make bird rise faster from water.
    if (_preyIsFish) then {
        _canObj setMass 1000; //500;
    } else {
        _canObj setMass 10;    
    };
    
    //_canObj setVelocity [0,0,0];
	//_canObj setdir direction _bird;
    //_canObj setVelocity velocity _prey;
	_canObj setdir direction _prey;
	_bird setdir direction _prey;

    // ****************************************************************
    //  Put bird can object above prey so it drops straight down on the prey.
    // ****************************************************************
    _canObj setpos [getpos _prey select 0, getpos _prey select 1, 50];
	_bird attachTo [_canObj, [0,0,0]];
    _canObj setdir getdir _prey;
    _canObj setVelocity velocity _prey;

    // ****************************************************************
    //  drop to hover point above prey and hang for a bit. By attaching
    //  to prey, bird follows prey.
    // ****************************************************************
    nul = [(_bird),1,"hawk","","","say3d"] call compile preprocessFileLineNumbers "JBOY\JBOY_say3d.sqf"; 
    /*
 //  Hover over prey not working due to fish simulation affected b attached can object
 //     Makes the fish disappear, and the bird never fly away after hitting the water
 //  Future:  Write a hover/tracking script for bird to hollow prey without attaching bird to prey
    waituntil {sleep .01; getpos _canObj select 2 <= 15};
    _prey enablesimulation true;
    _canObj attachTo [_prey,[.1,0,15]];
    sleep (5+random 10);
     sleep .1;
   _prey enablesimulation false;
   sleep .1;
   detach _canObj;
*/ 
    // ****************************************************************
    //  wait until can/bird hits the ground or water
    // ****************************************************************
    waituntil {sleep .01; getpos _canObj select 2 <= .2};
    _canObj setVelocity [0,0,0];
     

    // ****************************************************************
    // create bullet at final position to guarantee a splash/dust effect
    // ****************************************************************
    _splashBullet = "B_408_Ball" createVehicle [10,10000,0];
    _splashBullet enableCollisionWith _prey;
    _splashBullet enableCollisionWith _canObj;
    _splashBullet setmass 50;
    _splashBullet setpos (_prey modelToWorld [0,.1,.5]);
    _splashBullet setvelocity [0,0,-1000];
    // more dust for land attack
    if !(_preyIsFish) then {
        _splashBullet3 = "B_408_Ball" createVehicle [10,10000,0];
        _splashBullet3 enableCollisionWith _prey;
        _splashBullet3 enableCollisionWith _canObj;
        _splashBullet3 setmass 50;
        _splashBullet3 setpos (_prey modelToWorld [.1,0,.2]);
    //    _splashBullet3 setpos (_canObj modelToWorld [.1,0,.2]);
        _splashBullet3 setvelocity [0,0,-1000];
   };
    nul=[_splashBullet] spawn {_splashBullet = _this select 0; sleep .3; deletevehicle _splashBullet;};
    _canObj setVelocity [0,0,-1];
     // ****************************************************************
    // Move physics object (and attached bird and prey) in same way as live agent bird moves
    // ****************************************************************
    _canObj setpos (_prey modelToWorld [0,0,.4]);
    if (!_dedicatedServer ) then {_prey setdir ((getdir _liveAgent) -35);};
    //_prey setvectorDirAndUp [[0,0,0],[0,.5,0]];
    _prey setdir random 360;
    _preyMass = getmass _prey;
    
    _prey attachTo [_bird,[0,0,_zOffset]];
   
     //_canObj setMass 5;
    _canObj setVelocity [0,0,40];
    if !(_preyIsFish) then {sleep .05;};
   //sleep .05;
   
    _canObj setMass 10; 
    //sleep .05;
    _pathScripts = ["JBOY\flightPath5.sqf","JBOY\flightPath4.sqf","JBOY\flightPath3.sqf","JBOY\flightPath2.sqf","JBOY\flightPath1.sqf"];
    _pathScript = (_pathScripts call BIS_fnc_arrayShuffle) select 0;
    //and _preySpot distance _canObj < 40
   if (!_dedicatedServer ) then
   {
        _liveAgent setpos [getpos _preySpot select 0, (getpos _preySpot select 1)+150, .3];
        _vel = velocity _liveAgent;
        _speed = speed _liveAgent / 2;
        //_dir = getDir _liveAgent;
        _dir = random 360;
        _canObj setVelocity [(_vel select 0)-(sin _dir*_speed),(_vel select 1)-(cos _dir*_speed),(_vel select 2)*.8];
     //   while {getpos _canObj select 2 < 40 and _preySpot distance _canObj < 50 } do
        while {getpos _canObj select 2 < 40 and _preySpot distance _canObj < 50 } do
        {
            _vel = velocity _liveAgent;
            _speed = speed _liveAgent / 2;
            //_dir = getDir _liveAgent;
            _canObj setVectorDirAndUP [VectorDir _liveAgent, vectorUp _liveAgent];
            //_canObj setVelocity [(_vel select 0)-(sin _dir*_speed),(_vel select 1)-(cos _dir*_speed),(_vel select 2)*.8];
            _canObj setVelocity [(_vel select 0)-(sin _dir*_speed),(_vel select 1)-(cos _dir*_speed),(_vel select 2)*1.3];
            /*
            diag_log format ["_canObj setVectorDirAndUP [%1, %2];",VectorDir _liveAgent,vectorUp _liveAgent];
            diag_log format ["_canObj setVelocity [%1,%2,%3];",
                   (_vel select 0)-(sin _dir*_speed), (_vel select 1)-(cos _dir*_speed), (_vel select 2)*.8];
            diag_log "sleep .1;";
            */
            sleep .1;
        };
    } else {
        dummy = [_canObj,1] execVM _pathScript;  
        waituntil {sleep 1; !(getpos _canObj select 2 < 40 and _preySpot distance _canObj < 50) } ; 
     };
     //_bird enableSimulation false;
    //_prey enableSimulation false;
    //detach _prey;
    detach _bird;	
    // send bird further away...
    _pathScript = (_pathScripts call BIS_fnc_arrayShuffle) select 1;
    //if (_dedicatedServer ) then {dummy = [_bird,5] execVM _pathScript; };
    dummy = [_bird,5] execVM _pathScript;
    //[_prey,0, 90] call BIS_fnc_setPitchBank;
    // ****************************************************************
    // Bird drops Prey to ground.
    // ****************************************************************
    _prey enableSimulation false;
    detach _prey;
     _prey attachTo [_canObj, [0,0,0]];
    _canObj setvelocity [0,0,0];
    _pos = getposasl _bird;
    //camDestroy _bird;
    //if (!_dedicatedServer) then {_liveAgent setposasl _pos;};
     
    waituntil {sleep .2; getpos _canObj select 2 <= .7};
    // ****************************************************************
    // create bullet at final position to guarantee a splash or dust impact effect  "B_408_Ball"
    // ****************************************************************
    //_splashBullet2 = "B_556x45_dual" createVehicle [10,10000,0];
    _splashBullet2 = "B_408_Ball" createVehicle [10,10000,0];
    _splashBullet2 setpos (_canObj modelToWorld [0,0,.2]);
    _splashBullet2 setvelocity [0,0,-1000];
     nul=[_splashBullet2] spawn {_splashBullet = _this select 0; sleep .3; deletevehicle _splashBullet;};
    sleep 2;
    // ****************************************************************
    // stupid fish end up pointing upwards, so replace them with a flat horizontal fish
    // ****************************************************************
    waituntil {sleep .3; getpos _canObj select 2 < 1};
    waituntil {sleep .1; speed _canObj < .2};
    sleep .2;
    waituntil {sleep .1; speed _canObj < .2};
    _prey2 = createAgent [_preyType, [0,0,-2], [], 0, "CAN_COLLIDE"]; 
    //_prey2 enablesimulation false;
    _prey2 setdir getdir _canObj;
    //if !(_preyType == "Snake_random_F") then { [_prey2,0, 90] call BIS_fnc_setPitchBank;};
    _prey2 setdamage 1;
    //_prey2 setpos (_preySpot modelToWorld [0,0,-.5]);
    _prey2 setpos [getpos _canObj select 0, getpos _canObj select 1, 0];
    deleteVehicle _prey;
    deleteVehicle _canObj;
      sleep 40;
    deleteVehicle _prey2;
    deleteVehicle _bird;
};