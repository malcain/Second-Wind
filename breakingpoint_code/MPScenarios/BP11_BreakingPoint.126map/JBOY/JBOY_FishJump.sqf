//////////////////////////////////////////////////////////
// JBOY_FishJump.sqf 
// By: johnnyboy
// dmy = ["Random", thistrigger, distance] execvm "Scripts\JBOY_FishJump.sqf";
// dmy = ["Ornate_random_F", thistrigger, distance] execvm "Scripts\JBOY_FishJump.sqf";
//////////////////////////////////////////////////////////
if (isServer) then
{
	_fishType = _this select 0;  // Specific Type of Fish, or "Random" will select randomly from a list of fish
    _observer = _this select 1;  // Point where fish originates
    _distance = _this select 2;  // Distance from origination point to spawn fish, or -1 for Random
    
    _pos = getpos _observer;
    _pos = [_pos select 0, _pos select 1, -2];
    
    //_distance = -1;
    _fishTypes = ["Salema_F","Ornate_random_F","Mackerel_F","Tuna_F","Mullet_F","CatShark_F"];
    if (_distance == -1) then
    {
        _distance = 1 + random 10;
    };
    if (_fishType == "Random") then
    {
        _fishType = (_fishTypes call BIS_fnc_arrayShuffle) select 0;
    };
    _fish = createAgent [_fishType, _pos, [], 0, "NONE"];
    _fish playmove "";	
    _fish setpos (_fish modeltoworld [0,_distance,-.2]);
    _fish enableSimulation true;
    _vel = velocity _fish;
	_dir = random (360);
    _fish setdir _dir;
    //_speed = 4 + (random 3);
	_speed = 4.5 ;
    //_zVel  = 5 +random 3;
    _zVel  = 6;
    _heading = [getPosASL _fish,_fish modelToWorld [0,10,0]] call BIS_fnc_vectorFromXToY; 
    _velocity = [_heading, _speed] call BIS_fnc_vectorMultiply; 
    _velocity = [_velocity select 0, _velocity select 1, _zVel];
    _fish setVectorDir _heading; 
 
    // create an object to attach fish to and setVelocity on
    _bullet = "Land_CanOpener_F" createVehicle [10,10000,0];
    _bullet disableCollisionWith _fish;
    _bullet setMass 10;
    _bullet setVelocity [0,0,0];
	_bullet setdir direction _fish;
	_bullet setVectorDir _heading;

    _bullet setpos getpos _fish;
	sleep .1;
	// attach fish to moving object
	_fish attachTo [_bullet, [0,0,0]];
    _bullet setVelocity _velocity; 
    //  wait until fish is above water, then falls back below water
    waituntil {sleep .01; getpos _bullet select 2 > 0};
    waituntil {sleep .01; getpos _bullet select 2 <= 0};
    // create bullet at final position to guarantee a splash effect
    _bullet2 = "B_556x45_dual" createVehicle [10,10000,0];
    _bullet2 setpos (_bullet modelToWorld [.1,0,-.2]);
    _bullet2 setvelocity [0,0,-2];
    sleep 1;
    deletevehicle _bullet2;
    waituntil {sleep 1; getpos _bullet select 2 <= 0};
    detach _fish;	
	deleteVehicle _bullet;
    sleep 1;
    // fish created via createAgent aren't being deleted by deleteVehicle for some reason, so setposing them away
     _fish setpos [110,110,0];
    _fish enableSimulation false;
   deletevehicle _fish;
};