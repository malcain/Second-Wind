/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

params ["_playerNetID"];
_player = objectFromNetID _playerNetID;

[_player, "AsianHead_A3_02"] remoteExec ["setFace", 0, _player];

//[_player, "AsianHead_A3_02"] remoteExecCall ["setFace"];