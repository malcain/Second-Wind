/*
	Breaking Point: SecondWind
	Created By Malcain, Deathlyrage, Valtiel and Nohrt

	Copyright © 2013-2019
	All rights reserved.
*/

scriptName "BP_fnc_updateAll";

BP_Cleanup_lastSync = diag_tickTime;

//Time Sync
//call BPServer_fnc_updateTime;
call BPServer_fnc_updateTraps;