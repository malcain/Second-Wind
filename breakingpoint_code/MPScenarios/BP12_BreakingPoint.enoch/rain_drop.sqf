// by Malcain
// Credits: ALIAS

//if (!hasInterface) exitWith {};

[] spawn 
{
waituntil {sleep 0.2; speed player > 0;};

while {true} do 
{
private ["_alias_rain_drop_factor","_rain"];
_rain = rain;
if (_rain>=0.1) then 
{
	//waitUntil {sleep 10; rain >= 0.1};
	_drop_factor=linearConversion [0.1,1,_rain,0.006,0.002,true];
	_anim_factor=linearConversion [0.1,1,_rain,0.1,0.4,true]; 
	// if (!isNull objectParent player) then {_alias_drop_sec attachto [vehicle player,[0,0,0]]} else {_alias_drop_sec attachto [player]}; 
	_rain_drops_eff = "#particlesource" createVehicleLocal position player;  
	_rain_drops_eff setParticleCircle [20, [0, 0, 0]];   
	_rain_drops_eff setParticleRandom [0.2,[20,20,0],[0,0,1],13,0.5,[0,0,0,0],1,0];   
	_rain_drops_eff setParticleParams [["\A3\Data_F_Mark\ParticleEffects\Universal\waterBallonExplode_01",4,0,16,0],"", "Billboard", 1,0.4,[0,0,30],[0,0,0.5],0,18,7.9,0,[0.05,(_anim_factor+0.2)],[[0.5,0.5,0.5,1],[0.5,0.5,0.5,1]],[2],1,0,"","",vehicle player,0,true];    
	_rain_drops_eff setDropInterval _drop_factor;

	waitUntil {sleep 10; rain < 0.1};
	deleteVehicle _rain_drops_eff;
	} else {
	sleep 10
	};
};
};