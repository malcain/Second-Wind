if (!isServer)  exitwith {};
  params ["_huntedUnit"];
// **************************************************************************
// Create trail of bread crumbs (scent markers) for a dog to follow.  This allows
// dog to realistically follow path of unit, rather going to straight to position of unit.
// Breadcrumbs are an array of positions.  Array ends when:
// - unit position is on surface water
// - unit boards vehicle and moves at least 40 meters before disembarking
// Additional breadcrumb array is created if unit leaves water, or leaves vehicle
// **************************************************************************
_huntedUnit setVariable ["breadcrumbArray", [], true];  // array of arrays
_prevPos = getpos _huntedUnit;
_surface = "g";
_prevSurface = ""; // g for ground, v for in vehicle, w for water
_pos = getpos _huntedUnit;
_segment = 0;
_array = [[_segment,_pos]];
_huntedUnit setVariable ["breadcrumbArray", _array, true];
while {(alive _huntedUnit)} do
{
    sleep 1;
    if !(vehicle _huntedUnit == _huntedUnit) then
    {
        _surface = "v";
    } else 
    { 
        if (surfaceIsWater position _huntedUnit) then 
        {
            _surface = "w";
        } else 
        {
            _surface = "g"
        };
    };
    if !(_surface == _prevSurface) then
    {
        _segment = _segment +1;
        _prevSurface = _surface;
    };
    if ((_pos distance _huntedUnit) > 10 and _surface = "g" ) then
    {
        _array pushback [_segment,_pos];
    } else {;
};