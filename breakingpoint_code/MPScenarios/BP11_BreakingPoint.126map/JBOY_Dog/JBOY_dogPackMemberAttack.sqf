// JBOY_dogPackMemberAttack.sqf
// Borrowed some code from AZCoder's AZC_FNC_PACK_ATTACK.  Thanks AZC!
if (!isServer)  exitwith {};
params["_dog","_dogTarget","_nearTargets"];
_lastTarget = objNull;

// ***************************************************************************************
//  Attack assigned target first.  Then loop to find more targets until all targets dead. 
// ***************************************************************************************
_pack = (_dog getVariable "vPack");

_dog setVariable ["vTarget", _dogTarget];
_dog setVariable ["vCommand", "attack"];
_lastTarget = _dogTarget;		
waitUntil {sleep 1; !(alive _dog) || !(alive _dogTarget) || typeName (_dog getVariable "vTarget")=='STRING'};

// ***************************************************************************************
// Loop until dog is dead or all targets are dead.
// ***************************************************************************************
while { alive _dog and ({alive _x} count _nearTargets) > 0 and (_pack getVariable "vMovementType") == "attack" } do
{
    // Get next nearest live prey to attack.
    // DON'T GET NEW TARGET list HERE BECAUSE PACK LOOP IS WAITING UNTIL CURRENT TARGETS ALL DEAD BEFORE GETTING NEW ONES.
    //_nearTargets = [getpos (_nearTargets select 0), ["CAManBase","Hen_random_F","Cock_random_F","Cock_white_F"], 25] call JBOY_getNearTargets;
    _dogTarget = objNull;
    _dogDistance = 5000;
    {
        _target = _x;
        if (alive _target) then
        {
            //_side = side _target;
            _dist = _dog distance _target;
            //if ((_side != sideEnemy) && (_dist < _dogDistance)) then
            if ((_dist < _dogDistance)) then
            {
                _dogTarget = _target;
                //hint " new target found";
                _dogDistance = _dist;
            };
        };
    } forEach _nearTargets;

     if (alive _dogTarget) then 
     {
                _pack setVariable ["vMovementType","roam",true]; // any dog stops attacking, they all stop.  PackLoop will re-assign another attack
                _dog setVariable ["vTarget", _dogTarget,true];
                _dog setVariable ["vCommand", "attack",true];
                _lastTarget = _dogTarget;
     };
    waitUntil {!(alive _dog) || !(alive _dogTarget) || isnull _dogTarget || ({alive _x} count _nearTargets)== 0
                || (_dog getVariable "vCommand") != "attack"
                || (_dog distance _dogTarget)>100 };
};
// ***************************************************************************************
// All targets dead, so resume normal follow the packLeader behaviour
// ***************************************************************************************
//player globalchat "all targets dead or dog dead";
//  Don't need this because dog goes to idle and target objnull in command=attack ??

if ( alive _dog ) then 
{
    if (_dog == ((_dog getVariable "vPack") getVariable "vPackLeader")) then 
    {  // if pack leader, then set to idle
        //_dog setVariable ["vTarget", objNull];
        _dog setVariable ["vCommand", "idle"];
    } else
    {  // if follower, go back to following
        //_dog setVariable ["vTarget", objNull];
        _dog setVariable ["vCommand", "followLeader"];
    };
};
