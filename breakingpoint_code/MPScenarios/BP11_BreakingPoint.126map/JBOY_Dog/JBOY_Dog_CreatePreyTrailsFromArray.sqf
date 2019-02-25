//////////////////////////////////////////////////////////
// JBOY_Dog_CreatePreyTrailsFromArray.sqf 
// By: johnnyboy
// dmy = [dude1] execvm JBOY_Dog\JBOY_Dog_CreatePreyTrailsFromArray.sqf;
//
// Creates map markers showing scent trails.
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
params ["_objToTrack"];

// populate this array recorded in arma.rpt log file by script JBOY_Dog_CreatePreyTrailArrayInLog
_trailArray = [
[[2064.23,7432.9,0.00267029],102.187,2.128,false,false,6],
[[2074.77,7429.94,0.00209045],114.027,12.152,false,false,6],
[[2082.66,7418.35,0.00346375],179.959,22.194,false,false,6],
[[2082.02,7403.5,0.00878906],212.679,32.217,false,false,1],
[[2071.29,7392.54,0.0223465],224.998,37.224,false,false,1],
[[2061.32,7382.57,0.0258331],225.005,42.226,false,false,1],
[[2053.6,7374.85,0.124893],224.998,47.268,false,false,6],
[[2041.26,7362.51,0.0733719],225.012,57.286,false,false,1],
[[2030.68,7350.9,0.00643158],190.077,62.316,false,false,1],
[[2030.69,7340.64,0.0485992],189.993,67.384,false,false,6],
[[2027.85,7324.93,0.00777054],190.186,77.417,false,false,1],
[[2025.91,7314.12,0.0223885],190.181,82.455,false,false,6],
[[2022.62,7295.78,0.0112152],190.185,92.496,false,false,1],
[[2019.84,7280.32,0.0519257],190.177,97.499,false,false,1],
[[2017.01,7264.56,0.0875206],190.186,102.599,false,false,1],
[[2014.56,7250.92,0.110226],190.196,107.608,false,false,6],
[[2014.1,7235.28,-0.0451622],176.619,117.67,false,false,6],
[[2015.11,7211.7,0.0550194],176.606,127.769,false,false,1],
[[2015.79,7200.22,0.0290718],176.61,132.918,false,false,1],
[[2016.69,7185,0.0135288],176.617,137.931,false,false,1],
[[2009.52,7172.11,0.0174389],211.12,142.955,false,false,1],
[[1999.74,7155.92,0.0194092],211.125,148.012,false,false,1],
[[1992.6,7147.79,0.0284147],247.949,153.023,false,false,1],
[[1980.25,7142.92,0.00184345],248.507,158.04,false,false,1],
[[1962.4,7135.91,0.00263119],248.507,163.092,false,false,1],
[[1949.16,7126.98,0.00514603],225.025,168.118,false,false,1],
[[1938.41,7116.22,0.0677395],224.997,173.12,false,false,1],
[[1925.82,7103.63,0.00231075],224.992,178.137,false,false,1],
[[1912.76,7090.57,-0.0349503],225.002,183.185,false,false,1],
[[1900.89,7077.13,0.0496292],183.995,188.27,false,false,1],
[[1898.78,7063.46,0.165985],224.728,193.337,false,false,1],
[[1888.24,7052.93,0.0560722],224.994,198.499,false,false,1],
[[1874.94,7039.63,0.0375061],225.009,203.561,false,false,1],
[[1862.99,7026.23,0.0573883],212.347,208.562,false,false,1],
[[1853.85,7016.66,0.0251751],225.01,213.612,false,false,1],
[[1845.49,7005.38,0.0388947],180.693,218.613,false,false,1],
[[1843.62,6993.68,0.0309696],223.022,223.62,false,false,1],
[[1833.93,6989.43,0.0160179],274.223,228.734,false,false,1],
[[1817.3,6989.53,0.0745201],270.023,233.852,false,false,1],
[[1805.44,6989.53,0.00350952],269.988,238.968,false,false,1],
[[1788.83,6989.53,0.0280819],269.986,243.975,false,false,1],
[[1772.09,6989.53,0.00834656],269.998,248.981,false,false,1],
[[1757.5,6998.75,0.0391521],315.041,254.023,false,false,1],
[[1742.03,7004.53,0.0180454],270.023,259.057,false,false,1],
[[1722.85,7004.53,0.0274839],269.986,264.096,false,false,1],
[[1704.06,7004.57,0.0087986],282.298,269.096,false,false,1],
[[1690.14,7012.68,0.00177193], 266.148, 274.106, false, false,16]
];

_quarry = _objToTrack;
_prey =  "Land_CanOpener_F" createVehicle [0,0,1];
//_prey enableSimulation false;
if (_objToTrack isKindOf "Man") then
{
    _prey setVariable ["quarry",leader _objToTrack];
    _quarry = leader _objToTrack;
    _prey setVariable ["side",side _objToTrack,true];
} else
{
    _prey setVariable ["quarry", _objToTrack];
    _prey setVariable ["side",civilian];
};
_prey setVariable ["trail",[] ];             // Array of scent markers dropped by prey
JBOY_preyArray pushBack _prey;
_prey setVariable ["lastScentPos",[0,0,0]];  // Last scent position created
// predefine and shuffle types of objects tracked prey will drop.
_droppedObjTypes =  ["Land_BottlePlastic_V1_F","Land_Can_Dented_F","Land_Can_V1_F","Land_Can_V3_F","Land_PencilBlue_F","Land_CanOpener_F",
                     "Land_PencilRed_F","Land_Canteen_F","Land_BottlePlastic_V2_F","Land_Bandage_F","Land_Matches_F","Land_Compass_F",
                     "FxCartridge_slug","Land_Gloves_F","Land_DuctTape_F","Land_Screwdriver_V1_F","Land_PenBlack_F","Land_PowderedMilk_F"] call BIS_fnc_arrayShuffle;

_p = 1;
_lastDropPos = [0,0,0];
_lastScentPos = [0,100,0];
_droppedObjIndex = 0;
_firstPos = true;
{
    _scentMarker = "Sign_Arrow_Large_Cyan_F" createVehicle [0,0,0];
    if (!JBOY_DEBUG) then {hideObjectGlobal _scentMarker;};  // if in debug mode, scentMarker is visible
    _scentMarker setVariable ["prey",_prey,true];
    _scentMarker enableSimulation false;
    _scentMarker setPos (_x select 0);
    _lastScentPos = (_x select 0);
    _scentMarker setDir (_x select 1);
    _scentMarker setVariable ["dropTime",       (_x select 2),true];
    _scentMarker setVariable ["trailEndWater",  (_x select 3),true];
    _scentMarker setVariable ["trailEndVehicle",(_x select 4),true];
    _durationAtPos = (_x select 5);
    _scentMarker setVariable ["durationAtPos",  (_x select 5),true];
    // Add scent marker to current trail
    _trail = _prey getVariable "trail";
    _trail pushBack _scentMarker;
    _prey setVariable ["trail",_trail,true];
    // ****************************************************************
    // Occasionally unit drops something
    // ****************************************************************
    if (_quarry isKindOf "Man" and _durationAtPos > 10 or (random 100) > 70 or _firstPos) then
    {

        if ((_lastDropPos distance _lastScentPos)>5 or _firstPos) then 
        {
            _firstPos = false;
            // Todo: Also drop hats, glasses, shemags, bandanas, face scarf, mags
            _droppedObjType = _droppedObjTypes select _droppedObjIndex;
            _droppedObj = _droppedObjType createVehicle _lastScentPos;
            if (_droppedObjIndex == (count _droppedObjTypes) - 1) then
            {
                _droppedObjIndex = 0;
            } else
            {
                _droppedObjIndex = _droppedObjIndex + 1;
            };
            _z = .2;
            if (_droppedObjType in ["FxCartridge_slug","FxCartridge_762","FxCartridge_556"]) then 
            {
                _droppedObj enableSimulation false;
                _z = .01;
            };
            _scentMarker setVariable ["droppedObject",_droppedObj,true];
//systemChat format ["dropped %1",(_scentMarker getVariable "droppedObject")];
            _droppedObj setpos [(_lastScentPos select 0)+.3, (_lastScentPos select 1)-.4, _z];
            _droppedObj setDir (random 360);
            if (!(_droppedObj in ["Land_DuctTape_F","Land_Can_Dented_F","Land_WaterPurificationTablets_F","Land_Bandage_F","Land_PowderedMilk_F"])) 
            then {_droppedObj setVectorUp [0,.7,0];};
            
            //_dmy = [_droppedObj] spawn {params["_droppedObj"];sleep 2; _droppedObj enablesimulation false;}; // disable sim so engine doesn't waste resources on it
            
            _lastDropPos = _lastScentPos;
            // cut the grass
            //_grassCutter = "Land_ClutterCutter_medium_F" createVehicle [(_currPos select 0)+1, (_currPos select 1)+1, 0];
       };
    };

} forEach _trailArray;
