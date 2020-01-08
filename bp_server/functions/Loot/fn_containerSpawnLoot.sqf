params ["_container"];

if (isNull _container) exitWith {};

//Fetch Info From Container
_lootSpawned = _container getVariable ["lootSpawned",true];
_lootMinItems = _container getVariable ["lootItems",0];
_boxLootType = _container getVariable ["lootType",""];

//Validation Checking
if (_lootSpawned) exitWith {};
if (_lootMinItems < 1) exitWith {};
if (_boxLootType == "") exitWith {};

//FLag as Spawned
_container setVariable ["lootSpawned",nil];
_container setVariable ["lootItems",nil];
_container setVariable ["lootType",nil];

//Spawn In Loot
//Mission config file loot table override.
_config = 	configFile >> "CfgObjectLoot" >> _boxLootType;
/*if (isClass (missionConfigFile >> "CfgObjectLoot" >> _boxLootType)) then
{
	_config = missionConfigFile >> "CfgObjectLoot" >> _boxLootType;
};*/
_itemTypes =	[] + getArray (_config >> "itemType");
_cfgWeapons = configFile >> "CfgWeapons";

for "_i" from 1 to _lootMinItems do
{
	
	_index = BP_COLBase find _boxLootType;
	//diag_log text format ["index of weights array: %1",_index];
	//_indexcheck = count BP_COLChances;
	//if (_index > _indexcheck) exitwith {};
	_weights = BP_COLChances select _index;
	_cntWeights = count _weights;
	_index = floor(random _cntWeights);
	_index = _weights select _index;
	_itemType = _itemTypes select _index;
	
	_itemType params ["_lootClass","_lootType"];
	
	//Spawn Loot Depending on Type
	call
	{
		if (_lootType == "magazine") exitWith { _container addMagazineCargoGlobal [_lootClass,1]; };
		if (_lootType == "ammo") exitWith 
		{
		_amount = 4 + round random parsenumber (_lootClass select [3,2]);
		_container addMagazineAmmoCargo [_lootClass,1,_amount]; 
		};
		if (_lootType == "weaponNA") exitWith { _container addWeaponCargoGlobal [_lootClass,1]; };
		if (_lootType == "vest") exitWith { _container addItemCargoGlobal [_lootClass,1]; };
		if (_lootType == "uniform") exitWith { _container addItemCargoGlobal [_lootClass,1]; };
		if (_lootType == "headgear") exitWith { _container addItemCargoGlobal [_lootClass,1]; };
		if (_lootType == "toolbelt") exitWith { _container addItemCargoGlobal [_lootClass,1]; };
		if (_lootType == "backpack") exitWith { _container addBackpackCargoGlobal [_lootClass,1]; };
		if (_lootType == "weapon") exitWith
		{
			//Add Weapon
			_container addWeaponCargoGlobal [_lootClass,1];
			
			//Add Random Mags ( Random 0-3 )
			_mags = getArray (_cfgWeapons >> _lootClass >> "magazines");
			if !(_mags isEqualTo []) then {
				_magRndCount = round(random 3);
				if (_magRndCount > 0) then {
					_ammoClass = _mags select 0;
					for "_i" from 1 to _magRndCount do {
						_amount = 4 + round random parsenumber (_ammoClass select [3,2]);
						_container addMagazineAmmoCargo [_ammoClass,1,_amount];
					};
				};
			};
		};
		if (_lootType == "weaponA") exitWith
		{
			//Add Weapon
			_container addWeaponCargoGlobal [_lootClass,1];

			//Add Attachments
			_attach = getArray (configFile >> "cfgWeapons" >> _lootClass >> "linkedAttach");
			{ _container addItemCargoGlobal [_x, 1]; } forEach _attach;

			//Add Random Mags ( Random 0-2 )
			_mags = getArray (_cfgWeapons >> _lootClass >> "magazines");
			if !(_mags isEqualTo []) then {
				_magRndCount = round(random 2);
				if (_magRndCount > 0) then {
					_ammoClass = _mags select 0;
					for "_i" from 1 to _magRndCount do {
						_amount = 4 + round random parsenumber (_ammoClass select [3,2]);
						_container addMagazineAmmoCargo [_ammoClass,1,_amount];
					};
				};
			};
			
			//Add Random Attachments
			_chanceAttach = getArray (_cfgWeapons >> _lootClass >> "chanceAttach");
			if !(_chanceAttach isEqualTo []) then
			{
				_items = [];
				_weights = [];
				
				//Generate Data for Weighted Array
				{
					0 = _items pushBack (_x select 0);
					0 = _weights pushBack (_x select 1);
				} count _chanceAttach;
				
				//Build Weighted Array
				_weighted = [_items,_weights] call BP_fnc_buildWeightedArray;
				
				//Use Weighted Array and Spawn Items
				_numWeights = ((count _weighted) - 1);
				_weightIndex = floor (random _numWeights);
				_itemIndex = _weighted select _weightIndex;
				_itemName = _items select _itemIndex;
				
				//Spawn In Attachment
				if (_itemName != "") then 
				{
					_container addItemCargoGlobal [_itemName, 1];
				};
			};
		};
	};
};
