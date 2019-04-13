/*
	BP: Second Wind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain
*/

params ["_unit","_role","_vehicle"];

if (missionDifficulty > 2) exitwith {};

if ((_vehicle iskindof "C_Quadbike_01_F") or {_vehicle iskindof "Bicycle_F"}) exitwith {};

[] spawn
{
	waitUntil {
		sleep 0.2; 
		if (cameraView isEqualTo "EXTERNAL") then
		{
		player switchCamera "INTERNAL";
		};
		
		isNull objectParent player;
	};
};