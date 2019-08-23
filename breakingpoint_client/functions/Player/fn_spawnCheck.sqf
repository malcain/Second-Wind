/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

private ["_isAir","_inVehicle","_spawnZombies"];
_isAir = objectparent player iskindof "air";
_inMovingVehicle = speed player > 85;

_nearbyBuildings = (getPos player) nearObjects ["building",340];
_spawnZombies = true;
_spawnLoot = true;

//Limit Zombie Spawning to 18 Local Zombies Per Player / Limit Zombie Spawning to 24 per 300m Bubble
if (BP_LocalZeds > 18 || {BP_NearbyZombies >= 22}) then { _spawnZombies = false; };
if (BP_NearbyLootNum > 60) then { _spawnLoot = false; };

{
	_type = typeOf _x;
	_config = configFile >> "CfgBuildingLoot" >> _type;
	/*if (isClass (missionConfigFile >> "CfgBuildingLoot" >> _type)) then
	{
		_config = missionConfigFile >> "CfgBuildingLoot" >> _type;
	};*/
	_canLoot = isClass (_config);
	_dis = _x distance player;

	if (_x isKindOf "Land_House_Logic") then
	{
		if (_dis > 30) then
		{
			[_x] call BP_fnc_logicSpawnLoot;
		};
	} else {
		if (_canLoot && {damage _x < 0.8}) then
		{
			
			//Zombies
			_spawnZombies = BP_NearbyZombies <= 18;
			if ((_spawnZombies) && {_dis > 60} && {_dis < 325}) then {
				[_x] call BP_fnc_buildingSpawnZombies;
				BP_NearbyZombies = BP_NearbyZombies + 1;
				//_handle = [_x] spawn BP_fnc_buildingSpawnZombies;
				//[_handle] call BP_fnc_addThreadHandle;
				//waitUntil {scriptDone _handle};
			};
			
			
			//Loot
			if (BP_LootGlobal < BP_LootMax) then // && {!BP_HC_Connected}) then
			{
				if (_dis < 300 && {_dis > 30} && {!_isAir} && {_spawnLoot}) then {
					[_x] call BP_fnc_buildingSpawnLoot;
					//_handle = [_x] spawn BP_fnc_buildingSpawnLoot;
					//[_handle] call BP_fnc_addThreadHandle;
					//waitUntil {scriptDone _handle};
				};
			};
		};
	};
	true
} count _nearbyBuildings;
