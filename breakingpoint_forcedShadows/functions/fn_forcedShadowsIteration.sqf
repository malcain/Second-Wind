/*
  Author(s):
  Vlad333000

  Description:
  Adjust shadow distance to object view distance

  Parameters(s):
  NOTHING

  Return:
  BOOL - true if successfully adjusted, otherwise false

  Note(s):
  NOTHING
*/
#include "header.hpp"

private _viewDistance = getObjectViewDistance;
private _objectDistance = _viewDistance select 0;
private _shadowDistance = _viewDistance select 1;

if (_shadowDistance < HA_MIN_SHADOWS_DISTANCE) then {
  setObjectViewDistance [_objectDistance, HA_MIN_SHADOWS_DISTANCE];
}
else {
  if (_shadowDistance > HA_MAX_SHADOWS_DISTANCE) then {
    setObjectViewDistance [_objectDistance, HA_MAX_SHADOWS_DISTANCE];
  };
};

true;