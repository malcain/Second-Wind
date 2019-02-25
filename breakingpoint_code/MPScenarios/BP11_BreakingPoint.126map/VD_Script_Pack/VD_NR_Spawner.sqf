

_Spawner =
{

  _HuntFnc =
  {
    if (_Unit1 distance player > 200)

    then {{deleteVehicle _x}forEach units _Group1;}

    else {
     _PlayerPos2 = getpos player;
        _wp2 = _Group1 addWaypoint [_PlayerPos2, 1];
            _wp2 setWaypointType "MOVE";
            _wp2 setWaypointSpeed "FULL";
            _wp2 setWaypointBehaviour "CARELESS";
    //        _wp2 setWaypointFormation "COLUMN";

            waituntil {
              _Unit1 distance _Playerpos2 < 10 || {!alive _x}foreach units _Group1 || _Unit1 distance player > 1500};

            deleteWaypoint [_Group1, 0];

            if ({!alive _x}foreach units _Group1 || _Unit1 distance player > 1500)
            then {

                  if (_Unit1 distance player > 300)
                  then {{deleteVehicle _x}forEach units _Group1;};}
                  else  {call _HuntFnc;};


        };
      };

_SpawnPos = [getPosATL player, 150, 250, 0.9, 0, 0.9, 0, ["VD_Debug_BlacklistArea_1","VD_Debug_BlacklistArea_2","VD_Debug_BlacklistArea_3","VD_Debug_BlacklistArea_4"]] call BIS_fnc_findSafePos;

_Group1 = createGroup east;
_Unit1 = _Group1 createUnit ["O_G_Survivor_F", _SpawnPos, [], 1, "NONE"];


/* uncomment this to spawn a larger group, however, in groups, AI seems to be muuuch slower.
if (100 >= (random 100)) then {_Unit2 = _Group1 createUnit ["O_G_Survivor_F", _SpawnPos, [], 1, "NONE"];};
if (100 >= (random 100)) then {_Unit3 = _Group1 createUnit ["O_G_Survivor_F", _SpawnPos, [], 1, "NONE"];};
if (90 >= (random 100)) then {_Unit4 = _Group1 createUnit ["O_G_Survivor_F", _SpawnPos, [], 1, "NONE"];};
if (50 >= (random 100)) then {_Unit5 = _Group1 createUnit ["O_G_Survivor_F", _SpawnPos, [], 1, "NONE"];};
if (10 >= (random 100)) then {_Unit6 = _Group1 createUnit ["O_G_Survivor_F", _SpawnPos, [], 1, "NONE"];};
*/
{[_x] call VD_equipper;} foreach units _Group1;

  _PlayerPos1 = getpos player;
_wp1 = _Group1 addWaypoint [_PlayerPos1, 0];
    _wp1 setWaypointType "MOVE";
    _wp1 setWaypointSpeed "FULL";
    _wp1 setWaypointBehaviour "SAFE";
    _wp1 setWaypointFormation "COLUMN";

    waituntil {_Unit1 distance _Playerpos1 < 10 || {!alive _x}foreach units _Group1 || _Unit1 distance player > 1500};

    deleteWaypoint [_Group1, 0];

    if ({!alive _x}foreach units _Group1 || _Unit1 distance player > 1500)
    then {

          if (_Unit1 distance player > 300)
          then {{deleteVehicle _x}forEach units _Group1;};}
          else  {call _HuntFnc;};
};

_PosCheck =
{

  _PlayerPos1 = getpos player;

  sleep 300;
  sleep (random 100);
  if (player distance _PlayerPos1 < 70) then {call _Spawner};

};
call _PosCheck;
