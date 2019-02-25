// JBOY_packLeaderPackLoop.sqf
if (!isServer)  exitwith {};
if (!isDedicated)  exitwith {};
params ["_pack"];
// **********************************************
// Function to calculate next random moveTo position.  Avoids Water positions.
// May enhance later to avoid buildings.
// **********************************************
_fnc_getRandomPos = {
    params["_obj"];
    _posFound = false;
    _randomPos = [];
    while {!_posFound} do
    {
        _distance = 100 + random 100;
        _dir = random 360;
        //_randomPos = [_obj, _distance, _dir] call BIS_fnc_relPos;
		_randomPos = _obj getpos [_distance, _dir];
        if (!surfaceIsWater _randomPos) then 
        {
            _posFound = true;
        };
    };
    _randomPos 
};

// **********************************************
// Loop until all pack members dead.
// Calculate random positions for pack leader to move to.
// **********************************************
_packLeader = _pack getVariable "vPackLeader";
_packLeader enableAI "PATH"; 
_packMembers = _pack getVariable "vPackMembers";
_moveToPos = [_packLeader] call _fnc_getRandomPos;
_last_anim = "";
_nearTargets = [];
//player globalchat format ["in JBOY_packLeaderPackLoop pack %1, %2",_pack, ({alive _x} count _packMembers)];
if !(_last_anim == "Dog_Stop") then {_packLeader playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
_i = 0;
while {{alive _x} count _packMembers > 0 or alive (_pack getVariable "vPackLeader")} do
{
    _i = _i +1;
    // **********************************************
    // If leader dead, assign a new one from pack members
    // **********************************************
    if (!alive (_pack getVariable "vPackLeader")) then 
    {
        _y = 0;
        _newLeaderFound = false;
        while {_y < count _packMembers and !_newLeaderFound} do
        {
            if (alive (_packMembers select _y)) then {
                _newLeaderFound = true;
                _packLeader = _packMembers select _y;
                _pack setVariable ["vPackLeader", _packLeader, true];
                if JBOY_DEBUG then 
                {
                _sphere = createVehicle ['Sign_Sphere25cm_F', [0,0,0], [], 0, "CAN_COLLIDE"];
                _sphere attachTo [(_pack getVariable "vPackLeader"),[0,0,1.5]];
                };
            };
            _y = _y + 1;
        };
    } ;
    //else
    //{    
        if ((_pack getVariable "vMovementType") == "roam") then
        {
            (_pack getVariable "vPackLeader") setVariable ["vCommand","idle",true];
            //(_pack getVariable "vPackLeader") setVariable ["vTarget",objNull,true];
            _nearTargets = [];
            _nearTargets = [getpos (_pack getVariable "vPackLeader"), ["BP_Player_Base"], (_pack getVariable "vAttackPreyRadius")] call JBOY_getNearTargets;
            if (count _nearTargets > 0) then
            {
                // switch to attack mode, which suspends random movement until attack completed
                _pack setVariable ["vMovementType", "attack", true];  
                // expand radius around first detected guy to pick up units near him
                _nearTargets = [getpos (_nearTargets select 0), ["BP_Player_Base"], 25] call JBOY_getNearTargets;
            } else
            {
                (_pack getVariable "vPackLeader") enableAI "PATH";
                //  Walk sometimes, so don't get too far ahead of pack.
                if (((_i mod 20) == 0)) then
                {
                    _sfx = (["dog_howl","bark2","bark1"] call BIS_fnc_arrayShuffle) select 0;
                    dummy= [_packLeader, 0, _sfx,"Woof!  Grrrrrrr!"] execVM "JBOY_Dog\delaySay.sqf";
                };
                if (((_i mod 30) == 0)) then
                {
                    if !(_last_anim == "Dog_Walk") then {(_pack getVariable "vPackLeader") playMove "Dog_Walk"; _last_anim = "Dog_Walk";};     
                } else {
                    if !(_last_anim == "Dog_Run") then {(_pack getVariable "vPackLeader") playMove "Dog_Run"; _last_anim = "Dog_Run";};
                };

                (_pack getVariable "vPackLeader") doWatch _moveToPos;
                _surfaceNormal = surfaceNormal getposatl (_pack getVariable "vPackLeader");            
                (_pack getVariable "vPackLeader") setVectorUp _surfaceNormal;  
                sleep .4;
                // Calculate new random moveTo position when close to current one.
                (_pack getVariable "vPackLeader") moveTo _moveToPos;
                if (((_pack getVariable "vPackLeader") distance _moveToPos) < 15) then
                {
                    _moveToPos = [(_pack getVariable "vPackLeader")] call _fnc_getRandomPos;
                };
            };
        } else 
        // movement type is "attack"
        {
            //systemchat format ["packloop",(_pack getVariable "vPackLeader"), (_nearTargets select 0), _nearTargets];
            _handle2 =[(_pack getVariable "vPackLeader"), (_nearTargets select 0), _nearTargets] spawn JBOY_dogPackMemberAttack;  // leader attacks also.
            // Assign different targets to the pack members.  They may double up on some targets.
            _size = count _nearTargets;
            {
                    _idx = floor(random(_size));
                    _dogTarget = _nearTargets select _idx;
                    if (_x !=(_pack getVariable "vPackLeader")) then // if not pack leader, attack
                    {
                        [_x, _dogTarget, _nearTargets] spawn JBOY_dogPackMemberAttack;
                    };
            } forEach _packMembers;
            // wait until dogs dead, or (targets dead AND all dogs no longer in attack mode)
            _dogTgt = _nearTargets select 0;
            waituntil {sleep .5; ({alive _x} count _packMembers == 0 )|| ({alive _x} count _nearTargets) == 0 ||(_pack getVariable "vMovementType") == "roam"  || _packLeader distance _dogTgt > 150 }; 
           // if (({alive _x} count _nearTargets) == 0) then
           //  {
                {
                    if (_x !=(_pack getVariable "vPackLeader")) then // if not pack leader, then set back in followLeader mode
                    {
                        _x setVariable ["vCommand", "followLeader", true];
                        //_x setVariable ["vTarget", objNull, true]; 
                    } else {
                        _x setVariable ["vCommand", "idle", true];
                        
                    };
                } forEach _packMembers;
           // };
            _pack setVariable ["vMovementType", "roam", true];  // switch back to roaming mode

            // Get leader roaming again since all targets dead
            _moveToPos = [(_pack getVariable "vPackLeader")] call _fnc_getRandomPos;
            (_pack getVariable "vPackLeader") playMove "Dog_Sprint";
            _last_anim = "Dog_Sprint";
            (_pack getVariable "vPackLeader") moveTo _moveToPos;
        };
    //};
    sleep 1;
}; // end while
deleteVehicle _pack;
/*  Maybe want to calc intermediate pos to stop dogs following roads.   DO THIS LATER!!!
    if ((_packLeader distance _moveToPos) >75 and (_packLeader distance _intermediatePos) >15 and) then
    {
    - calc farPos
    - If distance farpos > 75 then 
             calc intermediate pos
             if distance intermediate pos > 15
                goto intermediate pos
             else 
                calc interematePos
              end if
      else go to farpos
    
*/
