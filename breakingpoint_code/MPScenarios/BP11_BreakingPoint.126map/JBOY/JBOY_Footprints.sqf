// JBOY_Footprints.sqf 
// By: johnnyboy
// _dmy = [someDude] execvm "JBOY\JBOY_Footprints.sqf";
// Purpose:  Makes footprints permanent for unit.  Detects surface types, and only creates footprints on surface types that make sense.
// UNKNOWN:  I don't know at this time if preserving thousands of footprints will impact performance.  Hopefully it won't
//           since we are doing "enableSimulation False"
if (!isServer)  exitwith {};
params["_man"];
_man setVariable ["vFootprintsOn", true , true]; // This variable allows you to stop footprints script elsewhere if need be (to save resources).
while {alive _man and (_man getVariable "vFootprintsOn")} do
{
    {
        //hint format ["surfaceType=%1",surfaceType getpos _man];
        _surfaceType = surfaceType getpos _man;
        if (!(surfaceIsWater getPos _man) and (vehicle _man == _man)
             and !(_surfaceType in ["GdtAsphalt","#GdtStratisForestPine","#GdtStratisConcrete","#GdtStratisRocky","#GdtRock"])) then
        {
            if (typeOf _x == "#mark") then 
            {
               _x enableSimulation false;
               hint format ["_print=%1",getmodelinfo _x];
               diag_log format ["_print=%1",getmodelinfo _x];
            };
        };
    } foreach (nearestObjects [_man, [], 3]);
    sleep 1;
};
