//////////////////////////////////////////////////////////
// JBOY_DogShowScentMarkers.sqf 
// By: johnnyboy
// dmy = [true] execvm "JBOY_Dog\JBOY_DogShowScentMarkers.sqf";
// dmy = [false] execvm "JBOY_Dog\JBOY_DogShowScentMarkers.sqf";
//
// Creates V formation of flying objects
////////////////////////////////////////////////////////// 

if (!isServer)  exitwith {};
params["_showScentMarkers"];
_c = 0;
//hint format ["array=%1",JBOY_preyArray];
{
    _trail = _x getVariable "trail";
    //systemChat format ["trail=%1",_trail];
    if (_showScentMarkers) then 
    {
        _y = 0;
        {
            _marker = _x;
            _marker hideObjectGlobal false;
             _y = _y + 1;
        } foreach _trail;
    } else
    {
        {
            _x hideObjectGlobal true;
        } foreach _trail;
    };
    _c = _c + 1;
} forEach JBOY_preyArray;
