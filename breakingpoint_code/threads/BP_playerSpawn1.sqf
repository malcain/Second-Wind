/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

scriptName "BP_playerSpawn1"; 

_lastPos = [0,0,0];
_lastSpawnCheck = diag_tickTime;

waitUntil 
{
	_camPos = positionCameraToWorld [0,0,0];
	
	if (((_lastPos distance _camPos) > 135) || {(diag_tickTime - _lastSpawnCheck) > 35}) then
	{
		_lastSpawnCheck = diag_tickTime;
		_lastPos = _camPos;
		
		//Update Zombie/Loot Counts
		call BP_fnc_updateVars;
		
		sleep 1;
		
		//Loot / Zombies
		call BP_fnc_spawnCheck;
		
		//Animals
		call BP_fnc_animalCheck;
		
		//Update hunter's speed
		_class = player getVariable ["class",0];
		_factionLevel = player call BP_fnc_getFactionLevel;
		if (_class == 3) then {
			_speedcoef = getAnimSpeedCoef player;
			if (_factionLevel > 2 && {_speedcoef <= 1}) then {
				if (_factionLevel > 3) then {
					player setAnimSpeedCoef 1.065;
				} else {
					player setAnimSpeedCoef 1.045; 
				};
			};
		};

		if (!isNil "BP_RadioChannels" && {_factionLevel > 0}) then {
				switch (_class) do
			{
				case 1: { //Ranger
					((BP_RadioChannels select 0)+5) enableChannel [true, false];
					((BP_RadioChannels select 2)+5) enableChannel [false, false];
					((BP_RadioChannels select 3)+5) enableChannel [false, false];
				};
				case 2: { //Outlaw
					((BP_RadioChannels select 1)+5) enableChannel [true, false];
					((BP_RadioChannels select 4)+5) enableChannel [false, false];
				};
				case 4: { //Nomad
					((BP_RadioChannels select 0)+5) enableChannel [false, false];
					((BP_RadioChannels select 2)+5) enableChannel [true, false];
					((BP_RadioChannels select 3)+5) enableChannel [false, false];
				};
				case 5: { //Survivalist
					((BP_RadioChannels select 0)+5) enableChannel [false, false];
					((BP_RadioChannels select 2)+5) enableChannel [false, false];
					((BP_RadioChannels select 3)+5) enableChannel [true, false];
				};
				case 6: { //Scavenger
					((BP_RadioChannels select 1)+5) enableChannel [false, false];
					((BP_RadioChannels select 4)+5) enableChannel [true, false];
				};
			};
		};
	};
	
	_position = getPosATL player;
	BP_NearbyLootBox = _position nearEntities ["BP_LootBox",300];
	BP_NearbyLootBox = BP_NearbyLootBox + (_position nearObjects ["GroundWeaponHolder_Scripted",300]);
	
	BP_NearbyLootNum = {
		_distanceTo = player distance _x;
		if (isObjectHidden _x) then {
			if (_distanceTo < 100) then {
				_x hideobject false;
			};
		} else {
			if (_distanceTo >= 100 && {[_x] call BP_fnc_isInsideBuilding}) then {
				_x hideobject true;
			};
		};
		true;
	} count BP_NearbyLootBox;

	//Update Group Members
	BP_Group = call BP_fnc_groupGetMembers;
	
	
	//Update Havens
	call BP_fnc_buildingUpdate;
	
	//Reset Anti Key-Spam
	BP_lastCheckBit = 0;
	
	//Reveal Nearby Units / Cars / Helicopters
	{ player reveal _x } forEach allUnits;
	{ player reveal _x } forEach entities "Car";
	{ player reveal _x } forEach entities "Helicopter";
	
	//Inside Buildings
	//_building = nearestObject [player, "HouseBase"];
	//_buildingLogic = nearestObject [player,"BP_Haven"];
	//_buildingLogicResult = _buildingLogic getVariable ["building",objNull];
	//_validBuildingLogic = (_building == _buildingLogicResult); 
	//_buildingLocked = (_building getVariable ['bis_disabled_Door',0] == 1);
	//_inside = [player,_building] call BP_fnc_isInsideBuilding;
	//if (_inside) then
	//{
	//	if (_buildingLocked) then
	//	{
	//		//Option to Enter Passcode
	//		if (_validBuildingLogic) then
	//		{
	//			[nil,nil,nil,[_building,_buildingLogic]] spawn BP_fnc_houseUnlock;
	//		};
	//		
	//		//Teleport Out
	//		cutText ["You are not allowed to be inside locked havens","PLAIN DOWN"];
	//		BP_HavenGlitch = [(netID player),(netID _building),_lastSafePosition];
	//		publicVariableServer "BP_HavenGlitch";
	//	};
	//} else {
	//	_lastSafePosition = (getPosATL player);
	//};

	//Thread Delay
	sleep 12;
	
	r_player_dead
};
