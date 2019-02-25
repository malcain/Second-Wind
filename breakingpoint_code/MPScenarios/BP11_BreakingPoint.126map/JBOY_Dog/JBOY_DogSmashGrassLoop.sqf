// JBOY_DogSmashGrassLoop.sqf
if (!isServer)  exitwith {};
// dmy = [_dude] call JBOY_DogSmashGrassLoop;
// *****************************************************************************************************
// Smashes grass trail behind walking dude.  Engine only keeps grass down for about 90 seconds.
// Other script JBOY_DogSmashGrassLoop2 is my attempt to keep grass down when player near, but its not working yet.
// *****************************************************************************************************
params["_dude"];
//diag_log "JBOY_DogSmashGrassLoop START";
_masher1 = createAgent ["C_man_p_beggar_F", [0,0,0], [], 0, "CAN_COLLIDE"];
hideObject _masher1;
_masher1 setUnitPos "DOWN";
_masher1 enableCollisionWith _dude;
_masher1 setDir (getDir _dude);
_masher1 setBehaviour "CARELESS";
_masher1 allowDamage false;
while {alive _dude} do
{
    _masher1 setdir getdir _dude;
    if (vehicle _dude == _dude and speed _dude > .5) then 
    {
       _masher1 setpos (_dude modelToWorld [0,-1,0]);
    };
    sleep .2;
    _dude = leader _dude;
};
deleteVehicle _masher1;
//diag_log "JBOY_DogSmashGrassLoop END";
