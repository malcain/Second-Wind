/*
  Author(s):
  Vlad333000

  Description:
  Init "forcedShadows" sub-system

  Parameters(s):
  NOTHING

  Return:
  BOOL - true if successfully initialized, otherwise false

  Note(s):
  NOTHING
*/
#include "header.hpp"

if (missionNamespace getVariable ["HA_forcedShadowsInit", false]) exitWith {
  ["%1forcedShadows%1 sub-system already initialized", toString [34]] call BIS_fnc_error;
  false;
};

private _draw3DHandler = addMissionEventHandler [
  "Draw3D",
  HA_fnc_forcedShadowsIteration
];

missionNamespace setVariable ["HA_forcedShadowsDraw3DHandler", _draw3DHandler];
missionNamespace setVariable ["HA_forcedShadowsInit", true];

["%1forcedShadows%1 sub-system initialized, version: %2, shadows distance: [%3, %4]", toString [34], HA_VERSION, HA_MIN_SHADOWS_DISTANCE, HA_MAX_SHADOWS_DISTANCE] call BIS_fnc_log;
true;