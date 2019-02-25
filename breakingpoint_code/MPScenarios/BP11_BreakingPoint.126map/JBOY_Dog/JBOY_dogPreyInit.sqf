// JBOY_dogPreyInit.sqf
if (!isServer)  exitwith {};
params ["_objToTrack"];

// Configuration vars
_trackingInterval = 5;  // Interval in seconds for marking prey's position
_markerDistance   = 10;  // Minimum distance prey must travel before we mark a new position.  Keeps our arrays smaller.

// Prey object definition
_prey =  "Land_CanOpener_F" createVehicle [0,0,1];
//_prey enableSimulation false;
if (_objToTrack isKindOf "Man") then
{
    _prey setVariable ["quarry",leader _objToTrack];
    _prey setVariable ["side",side _objToTrack,true];
} else
{
    _prey setVariable ["quarry", _objToTrack];
    _prey setVariable ["side",civilian];
};
_prey setVariable ["trail",[] ];             // Array of scent markers dropped by prey
JBOY_preyArray pushBack _prey;
_prey setVariable ["lastScentPos",[0,0,0]];  // Last scent position created

// Spawn main loop that follows prey and drops scent markers every X seconds.
_dmy = [_prey, _trackingInterval, _markerDistance] spawn JBOY_DogScentDropLoop;
_prey
/* 
Tracking Objects
- Prey - assign animal object or group leader to Prey Object (create a hidden object to own the prey vars
- ScentTrails - Array of ScentTrails for prey (segments end at water or in vehicle)
- ScentTrail - Array of ScentMarkers (within ScentTrails array)
- ScentMarker - [markerObject, timestamp, durationSeconds]

PreyInit
- Create Prey Object
- Prey.PreyObject = animal or leader group unit
- Prey.Side = side preyObject (civ if animal)
- Prey.CurrentTrailIndex = 0
- Prey.Trail = [] // Array of scent markers
- Prey.LastScentPos = [0,0,0]
- [Prey] Spawn ScentTrailLoop

ScentTrailLoop
- if distance from last marker > 20, CreateScentMarker 
- see fnc_victim_addPFH.sqf
- CreateScentMarker every 30 seconds, IF distance > 20 from last marker.
-- ScentMarker is object.  Set variables on object:  Timestamp, Direction,DurationSeconds (default 1)
- If elapsed time > x and still < 5 meters from last marker, 
-- Increment DurationSeconds variable
-- Sometimes PreyLeavesTrace

- PreyLeavesTrace (drop object, cut grass, bush destroyed, door open, gate open, campfire cold or smoking if close)
-- if Prey is man, drop object or cutGrass or destroy small bush
-- objects to drop:  water bottle, can, food, bandage, pencil, balaclava, magazine (look at small objects for good list)
-- maybe cold campfire, or slight smoke if timestamp < X minutes
-- bloodstain if prey is injured
- Trail Segment Ends if in vehicle or surfaceIsWater

Grass Mashing
=============
https://community.bistudio.com/wiki/surfaceType
Detect surface types for grass...get values in Tanoa, Stratis, Altis
If grass, then try masshing it with invisible prone dude.  May have to wait until player within 100 meters?

Tracking Logic
===============

JBOY_DogScentDetectionLoop
- Start this loop if dog.scentTrailDetectionOn
- Independent of command loop
- Senses nearby scent markers
- if current dog command in (heel, moveThere) then set command to "ScentDetected", set "moveToPos" to scentPos, set dog.Prey=
- Suspend loop while command in ("scentDetected","track")

scentDetected  Command
- Move to scent marker
- Circle and bark
- Handler says "What do you smell boy?"  "Explosiives?"  "Man?"  "Animal?", dog answers whimper for no, woof for yes.
- Hint "Issue dog Track command to follow scent trail".
- If AI, issue track command automatically
- If AI, start HandlerFollowDog loop

- Track Command
-- say "Boomer, Track", "Track" in all languages

-- getNextScentMarker within X meters, sort by time descending, and pick higher time
-- moveto scentMarker pos
-- if End then dog circles and sits and whimpers twice; handler says "trail ends here"
-- if ordered to track again, whimpers
-- IF AI, 

HandlerFollowDogLoop
- While alive dog and alive handler and command = track and not dog end of trail and not dog.attack
     move to dog pos
     sleep .3
  End While
  If dog.attack, then combat and move to prey position
  else resume waypoints
  end if

- ScentMarkerMoveTo
-- Loop until close.  Sprint.  
-- If DetectEnenmy, then stop, watch dir, happy dance growl, short growls (new sound for this)
-- Wait if > 50 meters from handler (if has handler)

- DetectEnemy
-- Check for nearobjects men within 75 meters.
-- Do this every 30 seconds.  Elapsed time check.
-- If found, suspend Tracking and, point, happy dance, growl, handler says "what is it boy?"
-- Add DetectEnemy to Heel and MoveThere, Stop, Sit. (not attack, detain, fetch, getin/out)

DeletePreyObjectTrail
-- If units group prey all dead and at last scent marker
      get list of dropped objects
      destroy all markers
      destroy all mashers
      delete prey object
*/