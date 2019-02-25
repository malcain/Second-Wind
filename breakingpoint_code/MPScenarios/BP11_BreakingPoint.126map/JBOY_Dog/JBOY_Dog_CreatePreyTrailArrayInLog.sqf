//////////////////////////////////////////////////////////
// JBOY_Dog_CreatePreyTrailArrayInLog.sqf 
// By: johnnyboy
// dmy = [] execvm "JBOY_Dog\JBOY_Dog_CreatePreyTrailArrayInLog.sqf";
//
// Creates array of scent marker info in arma .rpt log.  You can then copy
// that array into JBOY_Dog_CreatePreyTrailsFromArray.sqf script (or make another copy
// of that script with this array in it).  Then call JBOY_Dog_CreatePreyTrailsFromArray
// froom your init.sqf so you have a scent trail pre-defined at mission start.
//////////////////////////////////////////////////////////
//if (!isServer)  exitwith {};
//hint format ["=%1",JBOY_preyArray];

_p = 1;
{
    diag_log ['Prey and Scent array for Quarry ', _x getVariable "quarry"];
    _p = _p + 1;
    _scentPos = [];
    _scentDir = 0;
    _dropTime = 0;
    _trailEndWater = false;
    _trailEndVehicle = false;
    _durationAtPos = 0;
    _bigArray = [];
    _c = 0;
    _existingTrail = _x getVariable "trail";
         _y = 0;
        {
            _marker = _x;
            _scentPos = (getpos _marker);
            _scentDir = (getdir _marker);
            _dropTime = (_marker getVariable "dropTime");
            _trailEndWater = (_marker getVariable "trailEndWater");
            _trailEndVehicle = (_marker getVariable "trailEndVehicle");
            _durationAtPos = (_marker getVariable "durationAtPos");  
            diag_log format ["[%1,%2,%3,%4,%5,%6],",_scentPos,_scentDir,_dropTime,_trailEndWater,_trailEndVehicle,_durationAtPos];
            _y = _y + 1;
        } foreach _existingTrail;
        diag_log "Array End";
    _c = _c + 1;
} forEach JBOY_preyArray;
