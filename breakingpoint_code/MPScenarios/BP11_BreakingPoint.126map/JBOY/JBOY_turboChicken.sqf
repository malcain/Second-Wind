//////////////////////////////////////////////////////////
// JBOY_turboChicken.sqf 
// Created by: johnnyboy
//
// Makes chickens and rabbits run faster, and chickens fly.
//
// nul = [objName,boostMultiplier, iterations,chaserUnit] execVM "JBOY\JBOY_turboChicken.sqf";
// R2 playmove "Rabbit_Hop"; 
// nul = [R2,1.4, 200, _dog] execVM "JBOY\JBOY_turboChicken.sqf";
//R2 setdir 1; R2 playmove "Rabbit_Hop"; nul = [R2,1.5, 2000,objNull] execVM "JBOY\JBOY_turboChicken.sqf";
//////////////////////////////////////////////////////////
if (isServer) then
{
    params["_prey","_boost","_iterations","_chaser"];
    if (isnull (attachedTo _prey)) then  // if boost not already running on this critter
    {
        _vel = velocity _prey;
        _dir = direction _prey;
        _vehType = typeOf _prey;
       // sleep 1;
        // ************************************************************
        // If vehicle is a chicken, then set up a seagull to give it wings later
        // ************************************************************
        //if ((_vehType in ["Hen_random_F","Cock_random_F","Cock_white_F"])) then
        //{
            _gull = "seagull" createVehicle [5,5,5];
            _prey disableCollisionWith _gull;
            _gull setDir getDir _prey;
        //};
        //_gull attachTo [_prey, [0,0,.2]];
        // ************************************************************
        // Create physics object can opener.  SetVelocity does not work on
        // animal objects directly, so we create a physics object that setvelocity
        // does work on.  And then attach the animal to the physics object.
        // ************************************************************
        _speed = (speed _prey)*_boost*1.1;
        _physicsObj =  "Land_CanOpener_F" createVehicle [0,0,1];
        _physicsObj allowdamage false;
        _physicsObj setdir _dir;
        _physicsObj disableCollisionWith _prey;
        _physicsObj setMass .001;
        _pos = getPos _prey;
        _physicsObj setpos [_pos select 0, _pos select 1, .3];
        _prey attachto [_physicsObj,[0,0,0]];
    //hintc format ["vehicle attachedto=%1, veh=%2, ph=%3, rspeed=%4",attachedTo _prey, _prey, _physicsObj,_speed];
        _prevPos = getPos _physicsObj;
        _x = 0;
        _zVel = .02;
        _xLastDirChange = 0;
        _surfaceNormal = surfaceNormal getposatl _physicsObj;
        _firstTime = true;
        _ramdomFlyIteration = floor((random 200)+5);
       if (_vehType == 'Rabbit_F') then
       {
           _prey say3d "rabbit_scream_once";
       };
       _iterations = _iterations;
        while {_x < _iterations and (alive _prey) and (alive (driver _prey)) } do
       {
            _x = _x + 1;
            _dir = direction _prey;
            // ************************************************************
            // Change animal direction if stuck (because it runs straight into a wall, rock, water, etc.
            // Don't change dir again until at least 5 iterations of loop have passed since last dir change
            // ************************************************************
            if (((_prevPos distance _physicsObj)< .15 and _x > 15 and _x > (_xLastDirChange+20))
                 or (surfaceIsWater ([_physicsObj, 4, _dir] call BIS_fnc_relPos) )) then
            {       
                _xLastDirChange = _x;
                _newdir = ([ _dir+90, _dir-90, _dir+100, _dir-100] call BIS_fnc_arrayShuffle);
                //_physicsObj setDir (_newdir select 0);
                _dir = _newdir select 0;
                _physicsObj setdir _dir;
            };
            _zVel = .02+random 3;
            // ************************************************************
            // Chickens fly when chaser gets close, or randomly occasionally
            // ************************************************************
            if ((_vehType in ["Hen_random_F","Cock_random_F","Cock_white_F"])) then
            {
                if !(isnull _chaser) then
                {
                    if (( (_prey distance _chaser) < 12) and _firstTime) then
                    {
                        _zVel = 6 + random(8);
                        if (random(100) >= 50) then  // Increase chance of bird flying directly away from cojon which increases his chance of hitting it
                        {
                            _dir = [_threat, _prey] call BIS_fnc_dirTo;
                        };
                        while {_dir < 50 or _dir >200} do // don't let birds fly uphill because cojon can't raise his gun
                        {
                            _dir = _dir + (random(40) -20);
                        };
                        _physicsObj setdir _dir;
                        if !(_x == _ramdomFlyIteration) then { _firstTime = false;};
                        _sfx = (["wings1","wings2"] call BIS_fnc_arrayShuffle) select 0;
                        //playSound3D [_sfx, _prey];
                        dummy= [_prey, 0, _sfx,""] execVM "JBOY\delaySay.sqf"; 
                        _firstTime = false;
                        _gull attachTo [_physicsObj, [0,0,.2]];
                        _physicsObj setVelocity [(_speed+7) * sin(_dir), (_speed+7) * cos(_dir), _zVel]; 
                        sleep .1;
                    };
                };
                /*
                if ( _x == _ramdomFlyIteration ) then
                {
                    _zVel = 7 + random(6);
                    _dir = _dir + (random(40) -20);
                    _physicsObj setdir _dir;
                    if !(_x == _ramdomFlyIteration) then { _firstTime = false;};
                    _gull attachTo [_physicsObj, [0,0,.2]];
                    // NEED WINGS FLUTTER SOUND HERE!!!!!!!!!!!!!!!!!!!!!!!!!
                    _physicsObj setVelocity [(_speed+7) * sin(_dir), (_speed+7) * cos(_dir), _zVel]; 
                    sleep .1;
                };
                */
            };
            if ((getpos _physicsObj select 2) < .05) then 
            {
                _surfaceNormal = surfaceNormal getposatl _physicsObj;            
                _physicsObj setVectorUp _surfaceNormal;            
                _physicsObj setVelocity [_speed * sin(_dir), _speed * cos(_dir), _zVel];  
                if !(isNull attachedTo _gull) then 
                {
                    detach _gull;
                    _gull setpos [5,5,5];
                    //hideObject?
                };
            };
            _prevPos = getpos _physicsObj;
            Sleep(.2);
        };
        detach _gull;
        deleteVehicle _gull;
        detach _prey;
        deleteVehicle _physicsObj;
    };
};

// ************************************************************
// Awesome function from Arjay and Kylania that points one object at another in 3d space
// Note this version of the sproc target is a position, not an object.
// ************************************************************
/*
    fnc_arjay_pointAt = 
    {
        private ["_source", "_target", "_relDirHor", "_relDirVer"];
        
        _source = _this select 0;
        _target = _this select 1;
        
        _relDirHor = [_source, _target] call BIS_fnc_DirTo;
        _source setDir _relDirHor;

        _relDirVer = asin ((((getPosASL _source) select 2) - ( _target select 2)) / (_target distance _source));
    //	_relDirVer = asin ((((getPosASL _source) select 2) - (( (getPosASL _target) select 2)) / (_target distance _source));
        _relDirVer = (_relDirVer * -1);
        [_source, _relDirVer, 0] call BIS_fnc_setPitchBank;
    };
*/
