// JBOY_dogPack.sqf
/*
- Movement
-- Random Roaming - posistion within radius, isSurfaceWater out of bounds.  TODO:  Avoid buildings
-- TODO: Pathed Roaming thru array of positions/markers
-- Follow Pack Leader (generate moveTo positions randomly near Pack Leader)
-- Assign new leader when Pack Leader killed.

- Feral/Non-Feral
-- Feral:  
---  Attack any animal or man within 75 meters?
---  Pause Roaming during attack.  Resume Roaming after attack.
---  Attack multiple AI, if MORE DOGS THAN AI.
---  Runaway if 1/2 pack killed -- PHASE 2
---  Attack goats and sheep -- PHASE 2, NEED TO ADD GOATS AND SHEEP TO ANIMAL SCATTER
---  PHASE 3:  After Track command logic built, have pack pick up a trail and follow it.
-- TODO: Non-Feral -- PHASE 3, DO ONLY FERAL PACKS FIRST.
---  Stay close to home.
---  Aligned with home side.
---  Defend home


Random Position calculation:
===============================
_xOffset = _xOffset - 500 + random 1000
_yOffset = _yOffset - 500 + random 1000
_randomPos = [(_pos select 0 )+ _xOffset, (_pos select 1 )+ _yOffset,0];
Use these for finding suitable spots:
isFlatEmpty, selectBestPlaces, findEmptyPosition, isSurfaceWater
*/

// pack1 = [getMarkerPos "Pack1", 7, "Alsatian_Sand_F", ["Fin_blackwhite_F","Fin_ocherwhite_F","Fin_tricolour_F","Alsatian_Sand_F","Alsatian_Black_F","Alsatian_Sandblack_F"],100) call JBOY_dogPackCreate;
if (!isServer)  exitwith {};
params ["_packPOS","_dogCount","_dogLeaderType","_dogFollowerTypes","_attackPreyRadius"];

// **************************************************************************************
// Create an object for that pack that we can attach variables to
// **************************************************************************************
_pack =  "Land_CanOpener_F" createVehicle [0,0,1];
_pack enableSimulation false;

// **************************************************************************************
// Create the pack leader dog
// **************************************************************************************
_leader = [objNull, _dogLeaderType, _packPos, false] call JBOY_dog_create; // 1st parameter null because the dog has no handler
_leader setVariable ["vPack", _pack, true];
nul=[_leader, objNull, 0] execVM "JBOY_Dog\JBOY_dogCommand.sqf";
_leader setVariable ["vTarget", objNull];
_leader setVariable ["vCommand", "idle"];
if JBOY_DEBUG then // visually track dog leader by sphere above the dog
{
    dog100 = _leader;
    pack100 = _pack;
    _sphere = createVehicle ['Sign_Sphere25cm_F', [0,0,0], [], 0, "CAN_COLLIDE"];
    _sphere attachTo [_leader,[0,0,1.5]];
};

// **************************************************************************************
// Set Pack properties
// **************************************************************************************
_pack setVariable ["vPackLeader", _leader, true];
_pack setVariable ["vMovementType", "roam", true];   // may be "roam", "movepoints", or "attack".  Roam mode will generate new move to positions randomly
_pack setVariable ["vMovePoints", [], true];         // Array of positions dog will move through. Should be empty if MovementType is "Roam"
_pack setVariable ["vPackMembers", [_leader], true];         // Array of member dogs
_pack setVariable ["vAttackPreyRadius", _attackPreyRadius, true]; // detects prey to attack within this distance

// **************************************************************************************
// Create the pack follower dogs
// **************************************************************************************
_cnt = 1;
_offset = 0;
_pos = _packPos;
_members = [];
while {_cnt <= _dogCount} do
{
    _offset = _offset +1;
    if ((_cnt mod 2) == 1) then 
    {  
        _pos = [(_pos select 0)+_offset, (_pos select 1)-_offset, 0 ];
     } else
    {  
        _pos = [(_pos select 0)-_offset, (_pos select 1)-_offset, 0 ];
    };

    _cnt = _cnt + 1;
    sleep .1;
    _dog = [objNull, selectRandom _dogFollowerTypes, _pos, false] call JBOY_dog_create;  // 1st parameter null because the dog has no handler
    //_dog setVariable ["vCommand", 'followLeader', true];
    _dog setVariable ["vPack", _pack, true];
    nul = [_dog, objNull,0] execVM "JBOY_Dog\JBOY_dogCommand.sqf";
    _members = _pack getVariable "vPackMembers";
    _members pushback _dog; // add dog to members
    _pack setVariable ["vPackMembers",_members, true];
    // Following spawn with 2 second delay is necessary.  If dogs put into a moveTo loop too soon after creation they never obey the moveTo command.
    // Must be some AI initialization timing issue.
    _n=[_dog] spawn {sleep 3; params["_dog"]; _dog setVariable ["vCommand", "followLeader", true]}; // Start pack member following pack leader
};
// **************************************************************************************
// Call main loop that keeps dog pack leader moving.  Dog members follow leader
// via "followLeader" command in JBOY_dogCommand script issued in loop above.
// **************************************************************************************
sleep 3;
_n= [_pack] spawn {params["_pack"]; _n = [_pack] call JBOY_dogPackLoop;};
// Return the pack object
_pack
