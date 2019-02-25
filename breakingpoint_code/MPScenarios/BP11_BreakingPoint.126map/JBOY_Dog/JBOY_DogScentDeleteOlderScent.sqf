// JBOY_DogScentDeleteOlderScent.sqf
// **********************************************
// Get alive near targets (men or animals).  nearEntities command only returns living objects.
// **********************************************
if (!isServer)  exitwith {};
params["_scentMarker"];
if !(isNull _scentMarker) then 
{
    _preyTrackingObj = _scentMarker getvariable "prey";
    _trail = _preyTrackingObj getVariable "trail";
    _dropTime = _scentMarker getvariable "dropTime";
    _tmpTrail = _trail;
    {
        if ((_x getVariable "dropTime") < _dropTime) then
        {
            _trail = _trail - [_x];
            deleteVehicle _x;
        };
    } foreach _tmpTrail;
};