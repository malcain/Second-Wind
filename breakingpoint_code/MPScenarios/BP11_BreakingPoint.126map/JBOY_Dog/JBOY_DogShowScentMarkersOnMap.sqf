//////////////////////////////////////////////////////////
// JBOY_DogShowScentMarkersOnMap.sqf 
// By: johnnyboy
// dmy = [] execvm "JBOY_Dog\JBOY_DogShowScentMarkersOnMap.sqf";
//
// Creates map markers showing scent trails.
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
_colors = ["ColorRed","ColorGreen","ColorBlue","ColorPink","ColorBrown","ColorOrange","ColorKhaki","ColorWhite","ColorGrey"];
_c = 0;
//hint format ["array=%1",JBOY_preyArray];
{
    _trail = _x getVariable "trail";
    //systemChat format ["trail=%1",_trail];
         _y = 0;
        {
            _marker = _x;
            _markerstr = createMarker [("scentMrk_"+str _c+ str _y),getpos _marker];
            _markerstr setMarkerShape "ICON";
            if (_y == 0) then
            {
                _markerstr setMarkerType "mil_start";
            } else
            {
                _markerstr setMarkerType "mil_dot";
            };
            _markerstr setMarkerColor (_colors select _c);
            _y = _y + 1;
        } foreach _trail;
    _c = _c + 1;
} forEach JBOY_preyArray;
