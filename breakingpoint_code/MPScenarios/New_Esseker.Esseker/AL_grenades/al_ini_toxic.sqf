// by ALIAS

fnc_overlay = { 0 cutRsc ["equipment_prot_tox","PLAIN", 1, false];	sleep 0.1};
// If you want the mask to be visible when you display the map un-comment line from bellow and comment/delete line above
//fnc_overlay = { 0 cutRsc ["equipment_prot","PLAIN", 1, true];	sleep 0.1};

fnc_ck_prot_tox = {
	if ((headgear player == tox_prot)or(goggles player==tox_prot)or(uniform player==tox_prot)or(vest player==tox_prot)or(Backpack player==tox_prot)) then 
	{player setVariable ["protejat_tox",true]} else {player setVariable ["protejat_tox",nil]};
};

if (!hasInterface) exitWith {};

waitUntil {!isNil "tox_prot"};

while {!isNull player} do 
{
	waitUntil {alive player};
	while {isNil{player getVariable "protejat_tox"}} do {[] call fnc_ck_prot_tox;sleep 0.1};
	playsound "echipare_toxic";	
	sleep 2.5;
	onEachFrame {overlayeffects = 0 spawn fnc_overlay};
	sleep 0.1; 
	0 fadeSound (soundVolume/6);
	[] spawn 
		{
			while {player getVariable "protejat_tox"} do 
			{
				_int_b = linearConversion [0, 1,(getFatigue player), 8, 1.8, true];
				playsound "breath";
				sleep _int_b;
			};
		};
	while {!isNil{player getVariable "protejat_tox"}} do {[] call fnc_ck_prot_tox;sleep 0.1};
	onEachFrame {0 cutText ["","PLAIN"]};
	playsound "dezechipare_toxic";
	terminate overlayeffects;
	0 fadeSound 1;
	sleep 0.1;
};