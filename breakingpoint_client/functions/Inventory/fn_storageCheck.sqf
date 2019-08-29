/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

scriptName "BP_fnc_storageCheck";

params ["_cont","_item","_isOpened"];
//_cont = _this select 0;
//_item = _this select 1;

if (_cont isKindOf "BP_HouseStorage") then {

	//_isThrowable = _item call BIS_fnc_isThrowable;
	_acessories = ["Bullet", "AccessoryMuzzle", "AccessoryPointer", "AccessorySights", "AccessoryBipod"];
	_itemType = _item call BIS_fnc_itemType;
	_category = _itemType select 0;
	_type = _itemType select 1;
		
	if (_cont isKindOf "BP_GunCabinet") then {
		if (_category != "Weapon" && !(_type in _acessories)) then {
			//Close Inventory UI
			closeDialog 0;
			cutText ["Only weapons, ammo and attachments can be stored here","PLAIN DOWN"];
			//drop items
			if (_type == "Backpack") then {
				[_cont, _item, 1, true] call BP_fnc_dropBackpackCargo;
			} else {
				if (_type == "Item" or _type == "Equipment") then {
					[_cont, _item, 1, true] call BP_fnc_dropItemCargo;
				} else {
					[_cont, _item, 1] call BP_fnc_dropMagazineCargo;
				};
			};
		};
	};
	
	if (_cont isKindOf "BP_Chest") then {
		if (_category == "Weapon" or (_item in AllFood)) then {
			//Close Inventory UI
			closeDialog 0;
			cutText ["Weapons and Food can't be stored here","PLAIN DOWN"];
			//drop items
			if (_category == "Weapon") then {
				[_cont, _item, 1] call BP_fnc_dropWeaponCargo;
			} else {
				[_cont, _item, 1] call BP_fnc_dropMagazineCargo;
			};
		};
	};
	
	if (_cont isKindOf "BP_Refrigerator") then {
		if (_category == "Weapon") then {
			//Close Inventory UI
			closeDialog 0;
			cutText ["Weapons can't be stored here","PLAIN DOWN"];
			//drop items
			[_cont, _item, 1] call BP_fnc_dropWeaponCargo;
		};
	};
};