/*
	BP: Second Wind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain
*/

if (!hasInterface) exitwith {};

if (missionDifficulty > 2) exitwith {};

[] spawn
{

//waitUntil {!isNull (findDisplay 46); sleep 1;};

	while {true} do
	{

		waitUntil {sleep 0.5; !(isNull objectParent player);};//Wait for player to get into vehicle

		waitUntil {
			sleep 0.1; 
			if (cameraView isEqualTo "EXTERNAL") then
			{
			player switchCamera "INTERNAL";
			};
			isNull objectParent player;
		};
	};
};