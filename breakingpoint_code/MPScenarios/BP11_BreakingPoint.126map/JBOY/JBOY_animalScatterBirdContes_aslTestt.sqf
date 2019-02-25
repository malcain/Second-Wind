//////////////////////////////////////////////////////////
// JBOY_animalScatter.sqf 
// Created by: johnnyboy
//
// Give object a boost when sticks in shallow water
//
// nul = [critter, true] execVM "JBOY_Dog\JBOY_animalScatter.sqf";
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
params["_critter","_animalBanterOn"];
_dogs = [];
_men = [];
_startleDistance = 7 + random 4;
_heightDiff = 0;
// **************************************************************
// spawn loop to play occasional animal noises.
// **************************************************************
if (_animalBanterOn and ((typeOf _critter) in ["Hen_random_F","Cock_random_F","Cock_white_F"])) then
{
    _nul= [_critter] spawn
    {
        params["_critter"];
        _sounds = [];
        _sleepTime = 0;
        switch (typeOf _critter) do 
        { 	case "Hen_random_F": { _sleepTime=20;  _sounds = ["cluck1","cluck2","cluck3","cluck4","cluck5","cluck6"];}; 
            case "Cock_random_F":{ _sleepTime=40;  _sounds = ["crow1","crow2","crow3","crow4","crow5"];}; 
            case "Cock_white_F": { _sleepTime=40;  _sounds = ["crow1","crow2","crow3","crow4","crow5"];}; 
        }; 
        sleep (random 30); // initial sleep to stagger their loops better.
        while {alive _critter} do
        {
            //if (attachedTo _critter == objNull) then // if not flying
            if (getpos _critter select 2 < .5) then // if not flying
            {
                _sfx = selectRandom _sounds;
                dummy= [_critter, 0, _sfx,""] execVM "JBOY\delaySay.sqf"; 
            };
            sleep (_sleepTime + floor(random 5));
        };
    };
};
// **************************************************************
// when man or dog near critter, critter will scatter
// **************************************************************
while {alive _critter} do
{
    sleep 1;
    if (isnull (attachedTo _critter)) then  // if boost not already running on this critter
    {
        _men = nearestObjects [ getpos _critter,["CAManBase"],_startleDistance]; 
        if (count _men == 0) then
        {
            _dogs = nearestObjects [ getpos _critter,["Dog_Base_F"],_startleDistance]; 
        }; 
        if (count _dogs > 0 or count _men > 0) then
        {
    //hint format ["Scatter, type of %1",typeOf _critter];
            _threat = (_men + _dogs) select 0;
            switch (typeOf _critter) do 
            { 	case "Rabbit_F":{       _critter playmove "Rabbit_Hop";}; // Run Rabbit Run!
                case "Hen_random_F":{   _critter playmove "Hen_Walk";}; // Only a walk animation for hen.
                case "Cock_random_F":{  _critter playmove "Cock_Run";}; // Run cock Run!
                case "Cock_white_F":{   _critter playmove "Cock_Run";}; // Run cock Run!
             };
            
            // alter critter path away from threat if facing its general direction
            //_angleDiff = abs(getdir _critter - ([_critter, _threat] call BIS_fnc_dirTo));
            _angleDiff = abs(getdir _critter - ([_critter, cojon] call BIS_fnc_dirTo)); // hardcode to fly away from cojon to increase his chances of a hit
            _dir = getdir _critter;
            //if (_angleDiff <=35  ) then
            if (_angleDiff <=90  ) then
            {
                _dir = _dir + (35 -_angleDiff) + random 50;
                _critter setDir _dir;
            };
            // special code for specific mission where cojon and valdez are competing to shoot hens
            _critter moveTo ([_critter, 30, _dir] call BIS_fnc_relPos);
            if (isnull (attachedTo _critter)) then // if boost not already running on this critter
            {
                nul = [_critter, _threat] spawn
                {
                    params["_critter","_threat"];
                    nul =  [_critter, 1.65, 10, _threat] call JBOY_turboChicken;  // chicken will fly

                };
            };
            if (!(isNil "CojonShotCount") and (cojon distance _critter) <100 and !CojonSpinning and !BirdContestCompleted) then
            {
                _timeLimit = time + 4;
                dostop cojon;
                cojon lookAt _critter;
                cojon setBehaviour "COMBAT";
                //cojon doTarget  _critter;
                //cojon dowatch _critter;
                _prevHeight = getposasl _critter select 2;
                //sleep .1;
                cojon disableAI "ANIM";  // prevents AI from fighting spin and getting all jerky and shit.
                _iterations = 0;
                _relPos = cojon worldToModel position _critter;
                _targeted = false;
                _falling = false;
/*                while {not _targeted} do
                (    (
                        ((abs(getdir cojon - ([cojon, _critter modelToWorld [0,3,0]] call BIS_fnc_dirTo))) > 4 
                           and (getposasl _critter select 2 > (getposasl cojon select 2) + 2))
                        //or getposatl _critter select 2 > 1.2
                       and time > _timeLimit
                     )
                       //or time < _timeLimit
                        )
                        //and time > _timeLimit  // allow time for bird to higher
                (((abs(getdir cojon - ([cojon, _critter modelToWorld [0,3,0]] call BIS_fnc_dirTo))) > 4 
                        and getposasl _critter select 2 > (getposasl cojon select 2) + 2)
                        or getposatl _critter select 2 > 1.2
                       //or time < _timeLimit
                        )
                        //and time > _timeLimit  // allow time for bird to higher
                        and time < _timeLimit +7  // prevent from waiting forever when bird stuck in tree
                      } do */
                 _height = 0;
                 _timeStart = time;
                 doStop cojon;
                 cojon switchmove "amovpercmstpsraswrfldnon";
                 _lastHeight = 0;
                 _falling = false;
                while {not _targeted and time < _timeLimit } do
                {
                    //hint format ["Spin loop cojon dir=%1, %2",getdir cojon, getdir _critter];
                    CojonSpinning = true;
                    // if (getposasl _critter select 2 < _prevHeight) then 
                    // {
                        // _falling = true;
                    // };
                    // _prevHeight = getposasl _critter select 2;
                    _height = getposasl _critter select 2;
                    if (_height >= _lastHeight) then {_falling = false;} else {_falling = true;};
                    _heightDiff =  ((eyePos cojon select 2) - (getposasl _critter select 2)) ;
                    _dist = cojon distance _critter;
                    _tolerance = 0.2;
                    if (_dist > 10) then {_tolerance = .9;};
                    if (_dist > 20) then {_tolerance = 1.3;};
                    if (_dist > 30) then {_tolerance = 1.7;};
                    if (_dist > 40) then {_tolerance = 2.1;};
                    if (_dist > 50) then {_tolerance = 2.6;};
                    if (_dist > 60) then {_tolerance = 3.3;};
                    if (_dist > 70) then {_tolerance = 4.1;};
                    _tolerance = _tolerance +2;
                    //if falling shoot while eyepos lower than bird.  if climbing shoot when eyepos >= bird
                    //heightDiff is negative when bird higher than shooter
                    //if  ((cojon weaponDirection (currentWeapon cojon) vectorCos ((position _critter) vectorDiff (eyepos cojon))) > 0.999 min (0.975 + (0.00024 *(cojon distance _critter)))
                    if  ((abs(getdir cojon - ([cojon, _critter modelToWorld [0,3,0]] call BIS_fnc_dirTo))) < 4
                       //and _height > .8 and _height < 2.8 //2.6
                       //and (eyePos cojon select 2)+.8 >(getposasl _critter select 2)
                       and ((_falling and _heightDiff < 0 and abs(_heightDiff) < (_tolerance)) 
                            or (!_falling and _heightDiff >= 0 and abs(_heightDiff) < .3) // was .05
                            )
                       and time > _timeStart + (.1 + ((random 3)/10))
                       and _height > 0.01
                        //and getposasl _critter select 2 > (getposasl cojon select 2) + 1
                         //and _falling
                         ) then
                    {
                        cojon forceWeaponFire [ weaponState cojon select 1, weaponState cojon select 2];
systemchat format ["_heightDiff=%1, dist=%2, eye=%3, bird=%4, falling=%5, tol=%6",_heightDiff, (cojon distance2d _critter),  eyepos cojon select 2,  getposasl _critter select 2,  _falling, _tolerance];
diag_log   format ["_heightDiff=%1, dist=%2, eye=%3, bird=%4, falling=%5, tol=%6",_heightDiff, (cojon distance2d _critter),  eyepos cojon select 2,  getposasl _critter select 2,  _falling, _tolerance];
                        sleep .4;
                        cojon forceWeaponFire [ weaponState cojon select 1, weaponState cojon select 2];
                    };
                    if  ((abs(getdir cojon - ([cojon, _critter modelToWorld [0,3,0]] call BIS_fnc_dirTo))) < 1.5
                       and _height < 2.6
                       and time > _timeStart + .5
                       
                        //and getposasl _critter select 2 > (getposasl cojon select 2) + 1
                         //and _falling
                         ) then
                    {
                        _targeted = true;                        
                    };
                   //systemchat format ["cone=%1,_height=%2",(cojon weaponDirection (currentWeapon cojon) vectorCos ((position _critter) vectorDiff (eyepos cojon))),_height];
                     _iterations = _iterations + 1;
                    
                //hint format ["_relpos=%1",_relPos];
                    //if ((abs(getdir cojon - ([cojon, _critter modelToWorld [0,30,0]] call BIS_fnc_dirTo))) > 1.1)
                    if ((abs(getdir cojon - ([cojon, _critter modelToWorld [0,30,0]] call BIS_fnc_dirTo))) > 1.4)
                    then
                    {
                        if (_relPos select 0 > 0) then
                        {
                            _dir = (getdir cojon) + .35;
                        } else
                        {
                            _dir = (getdir cojon) - .35;
                        };
                        //_dir = (getdir cojon) + 5;
                        cojon setdir _dir;
                        //sleep .001;
                    };
                    _lastHeight = _height;
                };
                //waitUntil { getposasl _critter select 2 <(getposasl cojon select 2) +2.1};
                //waitUntil {(getposatl _critter select 2 < 2.6 and cojon distance _critter > 28) or (getposatl _critter select 2 < 2.3 and cojon distance _critter <= 28)};  // 3 count
                // waitUntil { // this config got 5!
                        // (   getposasl _critter select 2 < (eyepos cojon select 2) +.4 and cojon distance _critter > 20)
                        // or (getposasl _critter select 2 < (eyepos cojon select 2) -.2 and cojon distance _critter <= 20)
                        // or time > _timeStart + 4 
                        // or !(alive _critter)};
                waitUntil {
                        (   getposasl _critter select 2 < (eyepos cojon select 2) -.5 and cojon distance _critter > 20) //-.3 got 4 hits
                        or (getposasl _critter select 2 < (eyepos cojon select 2) -0  and cojon distance _critter <= 20)
                        or time > _timeStart + 4 
                        or !(alive _critter)};
                
                //waituntil {time > _timeLimit and getpos _critter select 2 < 2}; // delay cojon shooting to increase liklihood of hitting target
                //waituntil { getpos _critter select 2 < 2.5 or (_critter distance cojon)>30}; // delay cojon shooting to increase liklihood of hitting target
                //sleep .15;
                if (_targeted and alive _critter and getposatl _critter select 2 > .02) then {
                    cojon forceWeaponFire [ weaponState cojon select 1, weaponState cojon select 2];
                    //cojon sidechat format ["distance=%1,_height=%2, bird asl=%3, gunposasl=%4",cojon distance _critter,getposatl _critter select 2, getposasl _critter select 2, eyepos cojon select 2];
                    if (random 100 >10) then {sleep .1; cojon forceWeaponFire [ weaponState cojon select 1, weaponState cojon select 2];};
                };
                //cojon enableSimulation true;
                sleep .1;
                cojon switchmove "";
                cojon enableAI "ANIM";
                //cojon doTarget objNull;
                cojon doMove waypointPosition [group cojon,currentWaypoint group cojon];
                cojon dowatch (cojon modelToWorld [0,20,20]);
                CojonSpinning = false;
            };
        };
    };
};
//deleteVehicle _target;
