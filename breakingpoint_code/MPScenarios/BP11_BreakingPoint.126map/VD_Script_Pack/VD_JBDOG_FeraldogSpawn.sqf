if (!isServer) exitwith {};


_VD_JBDOG_FeralDogPackSpawn = {
//sleep 1000;
//sleep (random 2000);

_allplayer = (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F";
_player = selectRandom _allplayer;

_pos = [getPosATL _player, 500, 1000, 2, 0, 100, 0, ["VD_Debug_BlacklistArea_1","VD_Debug_BlacklistArea_2","VD_Debug_BlacklistArea_3","VD_Debug_BlacklistArea_4"]] call BIS_fnc_findSafePos;
_followerDogTypes = ["Fin_blackwhite_F","Fin_ocherwhite_F","Fin_tricolour_F","Alsatian_Black_F","Alsatian_Sandblack_F"];
_pack = [_pos, (random 7), "Alsatian_Sand_F", _followerDogTypes, 300] call JBOY_dogPackCreate;

sleep 2000;


sleep (random 1000);

call _VD_JBDOG_FeralDogPackSpawn;
};


waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};

call _VD_JBDOG_FeralDogPackSpawn;
