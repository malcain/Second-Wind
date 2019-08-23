/*
	Breaking Point Second Wind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/


//#define DIK_ESCAPE          0x01
//#define DIK_SPACE			   0x39
//#define DIK_W               0x11
//#define DIK_S               0x1F
//#define DIK_A               0x1E
//#define DIK_D               0x20

private ["_dikCode", "_handled"];
_dikCode = 	_this select 1;
_handled = false;

_vehicle = objectParent player;
_inVehicle = (!isNull _vehicle);

if (_inVehicle) then {
	if ((_vehicle iskindof "C_Quadbike_01_F") or {_vehicle iskindof "Bicycle_F"}) exitwith {_handled};
	
	if ((inputAction "personView" > 0) or (inputAction "optics" > 0)) then {
		player switchCamera "INTERNAL";
		_handled = true;
	};
};

_handled