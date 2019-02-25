// JBOY_dogPack.sqf
/*
- _dog setVariable ["vPackNo", 0, true];  // zero means not in pack, Else its an integer that identifies a pack.  Dogs with same vPackNo are in same pack.
- Create a game logic dumb object for each Pack?
- Add "vPackLeader" variable to Pack object?
- Movement
-- Random Roaming - Within radius, isSurfaceWater out of bounds, avoid buildings?
-- Pathed Roaming thru array of positions/markers
-- Follow Pack Leader (generate moveTo positions randomly near Pack Leader)
-- Assign new leader when Pack Leader killed.

- Feral/Non-Feral
-- Feral:  
---  Attack any animal or man within X meters?
---  Pause Roaming during attack.  Resume Roaming after attack.
---  Attack multiple AI, if MORE DOGS THAN AI.
---  Runaway if 1/2 pack killed -- PHASE 2
---  Attack goats and sheep -- PHASE 2, NEED TO ADD GOATS AND SHEEP TO ANIMAL SCATTER
---  PHASE 3:  After Track command logic built, have pack pick up a trail and follow it.
-- Non-Feral -- PHASE 3, DO ONLY FERAL PACKS FIRST.
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
