/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

//BP_PickupBike = _this select 0;
_bicycle = _this select 0;
_player = _this select 1;
//publicVariableServer "BP_PickupBike";

if (!local _bicycle) then {
_playerID = clientOwner;
[_bicycle, _playerID] remoteExecCall ["BPServer_fnc_changeOwner", 2];
};

_bicycle disableCollisionWith _player;
sleep 0.1;
_vecloc = getPosATL _bicycle;
_location = [_vecloc select 0,_vecloc select 1,(_vecloc select 2) + 1];
_bicycle setPosATL _location;
_bicycle setVectorUp [0,0,1];
_bicycle setVelocity [0,0,0];
_bicycle enableSimulation false;
_bicycle setPosATL [_vecloc select 0,_vecloc select 1,_vecloc select 2];
_bicycle setVelocity [0,0,0];
_bicycle enableSimulation true;
sleep 3;
_bicycle enableCollisionWith _player;