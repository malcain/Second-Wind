/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

params [["_object",objNull,[objNull]],["_iLootType","",[""]],["_min",0,[0]],["_max",0,[0]]];

if (isNull _object) exitWith {};
if (_iLootType == "") exitWith {};

// Mission config file loot table override.
_config = configFile >> "CfgObjectLoot" >> _iLootType;
/*if (isClass (missionConfigFile >> "CfgObjectLoot" >> _iLootType)) then
{
	_config = missionConfigFile >> "CfgObjectLoot" >> _iLootType;
};*/

_itemTypes =	[] + getArray (_config >> "itemType");
_numItems = floor(random _max);
if (_numItems < _min) then { _numItems = _min; };

while {_numItems > 0} do 
{
	_numItems = _numItems - 1;
	_index = BP_COLBase find _iLootType;
	_weights = BP_COLChances select _index;
	_cntWeights = count _weights;
	_index = floor(random _cntWeights);
	_index = _weights select _index;
	_itemType = _itemTypes select _index;
	
	_itemType params ["_lootClass","_lootType"];
	
	switch (_lootType) do 
	{
		default {};
		case "magazine": {
			_object addMagazineCargoGlobal [_lootClass,1];
		};
		case "ammo": {
		//Item is one magazine with random ammo count
		_amount = 1 + round random parsenumber (_iItem select [3,2]);
		_item = createVehicle ["GroundWeaponHolder_Scripted", _iPos, [], RADIUS, "CAN_COLLIDE"];
		_item setVehiclePosition [_iPos, [], 0, "CAN_COLLIDE"];
		_item enableDynamicSimulation true;
		_item addMagazineAmmoCargo [_iItem,1,_amount];
		};
		case "weapon": {
			//Add Weapon
			_object addWeaponCargoGlobal [_lootClass,1];

			//Add Random Mags ( Random 0 to 2 )
			_mags = [] + getArray (configFile >> "cfgWeapons" >> _lootClass >> "magazines");
			if ((count _mags) > 0) then {
				_ammoClass = _mags select 0;
				_magRndCount = round(random 2);
				for "_i" from 1 to _magRndCount do {
					_amount = 1 + round random parsenumber (_ammoClass select [3,2]);
					_object addMagazineAmmoCargo [_ammoClass,1,_amount];
				};
			};
		};
		case "weaponA": {
			//Add Weapon
			_object addWeaponCargoGlobal [_lootClass,1];

			//Add Attachments
			_attach = getArray (configFile >> "cfgWeapons" >> _lootClass >> "linkedAttach");
			{
				_object addItemCargoGlobal [_x, 1];
			} count _attach;

			//Add Random Mags ( Random 0 or 1 )
			_mags = [] + getArray (configFile >> "cfgWeapons" >> _lootClass >> "magazines");
			if ((count _mags) > 0) then {
				_ammoClass = _mags select 0;
				_magRndCount = round(random 2);
				for "_i" from 1 to _magRndCount do {
					_amount = 1 + round random parsenumber (_ammoClass select [3,2]);
					_object addMagazineAmmoCargo [_ammoClass,1,_amount];
				};
			};
		};
		case "weaponNA": {
			_object addWeaponCargoGlobal [_lootClass,1];
		};
		case "vest": {
			_object addItemCargoGlobal [_lootClass,1];
		};
		case "uniform": {
			_object addItemCargoGlobal [_lootClass,1];
		};
		case "headgear": {
			_object addItemCargoGlobal [_lootClass,1];
		};
		case "toolbelt": {
			_object addItemCargoGlobal [_lootClass,1];
		};
		case "backpack": {
			_object addBackpackCargoGlobal [_lootClass,1];
		};
	};
};
