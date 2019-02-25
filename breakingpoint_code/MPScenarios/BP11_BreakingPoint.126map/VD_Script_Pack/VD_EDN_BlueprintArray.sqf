VD_EDN_BP_Array =[];
edn_fortification_array = [];

edn_fortification_array1 = [
["Walls: Sandbags (beige)",
["Land_BagFence_Long_F",[["edn_sandbag",3]]],
["Land_BagFence_Short_F",[["edn_sandbag",2]]],
["Land_BagFence_End_F",[["edn_sandbag",1]]],
["Land_BagFence_Round_F",[["edn_sandbag",3]]],
["Land_BagFence_Corner_F",[["edn_sandbag",2]]]
],

["Camping",
["Land_CampingChair_V2_F",[["edn_Metalpipe",2]]],
["Land_CampingTable_F",[["edn_Metalpipe",4],["edn_Steelplate",2]]],
["Land_CampingTable_small_F",[["edn_Metalpipe",4],["edn_Steelplate",1]]]
],


["Storage",
["CargoNet_01_box_F",[["edn_Woodplank",4]]]
],

["Roofs",
["Land_ClothShelter_02_F",[["edn_Woodplank",4]]]
]
];


edn_fortification_array append edn_fortification_array1;


/*bp1*/
VD_EDN_BPobj1 = "Land_File1_F" createVehicle [0,0,0];
VD_EDN_BPobj1 addAction ["Collect Blueprint","call VD_EDN_fnc_Blueprint_1; deleteVehicle VD_EDN_BPobj1"];
VD_EDN_BP_Array = VD_EDN_BP_Array + [VD_EDN_BPobj1];

VD_EDN_fnc_Blueprint_1 = {hint "Blueprint Military Fortifications: HBarrier Wall added."; sleep 2;
edn_fortification_array append
[["Military Fortifications: HBarrier Wall",
["Land_HBarrierWall6_F",[["edn_sandbag",20],["edn_Woodplank",10]]]
]];
VD_EDN_BP_Array = VD_EDN_BP_Array - [VD_EDN_BPobj1];
VDBPcollected = VDBPcollected + 1; hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount]; sleep 2;
};

/*bp2*/
VD_EDN_BPobj2 = "Land_File1_F" createVehicle [0,0,0];
VD_EDN_BPobj2 addAction ["Collect Blueprint","call VD_EDN_fnc_Blueprint_2; deleteVehicle VD_EDN_BPobj2"];
VD_EDN_BP_Array = VD_EDN_BP_Array + [VD_EDN_BPobj2];

VD_EDN_fnc_Blueprint_2 = {hint "Blueprint Military Fortifications: Sandbag Bunker Small (green) added."; sleep 2;
edn_fortification_array append
[["Military Fortifications: Sandbag Bunker Small (green)",
["Land_BagBunker_01_small_green_F",[["edn_sandbag",20],["edn_Woodplank",10]]]
]];
VD_EDN_BP_Array = VD_EDN_BP_Array - [VD_EDN_BPobj2];
VDBPcollected = VDBPcollected + 1; hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount]; sleep 2;
};

/*bp3*/
VD_EDN_BPobj3 = "Land_File1_F" createVehicle [0,0,0];;
VD_EDN_BPobj3 addAction ["Collect Blueprint","call VD_EDN_fnc_Blueprint_3; deleteVehicle VD_EDN_BPobj3"];
VD_EDN_BP_Array = VD_EDN_BP_Array + [VD_EDN_BPobj3];

VD_EDN_fnc_Blueprint_3 = {hint "Blueprint Barricade: Junk Barricades added."; sleep 2;
  removeallactions VD_EDN_BPobj3;
edn_fortification_array append
[["Barricade: Junk Barricade (4m)",
["Land_Barricade_01_4m_F",[["edn_sandbag",10],["edn_Woodplank",5],["edn_Cinderblock",5]]],
["Land_Barricade_01_10m_F",[["edn_Woodplank",20],["edn_Steelplate",1],["edn_Woodplank",7]]]
]];
VD_EDN_BP_Array = VD_EDN_BP_Array - [VD_EDN_BPobj3];
VDBPcollected = VDBPcollected + 1; hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount]; sleep 2;
};

/*bp4*/
VD_EDN_BPobj4 = "Land_File1_F" createVehicle [0,0,0];
VD_EDN_BPobj4 addAction ["Collect Blueprint","call VD_EDN_fnc_Blueprint_4; deleteVehicle VD_EDN_BPobj4"];
VD_EDN_BP_Array = VD_EDN_BP_Array + [VD_EDN_BPobj3];

VD_EDN_fnc_Blueprint_4 = {hint "Blueprint Walls: Sandbags (green) added."; sleep 2;
  removeallactions VD_EDN_BPobj4;
edn_fortification_array append [
["Walls: Sandbags (green)",
["Land_BagFence_01_Long_green_F",[["edn_sandbag",3]]],
["Land_BagFence_01_Short_green_F",[["edn_sandbag",2]]],
["Land_BagFence_01_End_green_F",[["edn_sandbag",1]]],
["Land_BagFence_01_Round_green_F",[["edn_sandbag",3]]],
["Land_BagFence_01_Corner_green_F",[["edn_sandbag",2]]]
]];
VD_EDN_BP_Array = VD_EDN_BP_Array - [VD_EDN_BPobj4];
VDBPcollected = VDBPcollected + 1; hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount]; sleep 2;
};

/*bp5*/
VD_EDN_BPobj5 = "Land_File1_F" createVehicle [0,0,0];
VD_EDN_BPobj5 addAction ["Collect Blueprint 5","call VD_EDN_fnc_Blueprint_5; deleteVehicle VD_EDN_BPobj5"];
VD_EDN_BP_Array = VD_EDN_BP_Array + [VD_EDN_BPobj3];

VD_EDN_fnc_Blueprint_5 = {hint "Blueprint Barricades: Sandbag Walls added."; sleep 2;
  removeallactions VD_EDN_BPobj5;
edn_fortification_array append [
["Barricades: Sandbag Walls",
["Land_SandbagBarricade_01_half_F",[["edn_sandbag",10],["edn_Steelplate",2]]],
["Land_SandbagBarricade_01_hole_F",[["edn_sandbag",20],["edn_Woodplank",4],["edn_Steelplate",1]]],
["Land_SandbagBarricade_01_F",[["edn_sandbag",20],["edn_Woodplank",7],["edn_Steelplate",1]]]
]];
VD_EDN_BP_Array = VD_EDN_BP_Array - [VD_EDN_BPobj5];
VDBPcollected = VDBPcollected + 1; hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount]; sleep 2;
};

/*6*/
VD_EDN_BPobj6 = "Land_File1_F" createVehicle [0,0,0];
VD_EDN_BPobj6 addAction ["Collect Blueprint","call VD_EDN_fnc_Blueprint_6; deleteVehicle VD_EDN_BPobj6"];
VD_EDN_BP_Array = VD_EDN_BP_Array + [VD_EDN_BPobj6];

VD_EDN_fnc_Blueprint_6 = {hint "Blueprint Fortifications: Razorwire added."; sleep 2;
  removeallactions VD_EDN_BPobj6;
edn_fortification_array append [
["Fortifications: Razorwire",
["Land_Razorwire_F",[["edn_Wirecoil",5],["edn_Metalpipe",4]]],
["Land_Mil_WiredFence_F",[["edn_Wirecoil",15],["edn_Metalpipe",13]]],
["Land_Mil_WiredFence_Gate_F",[["edn_Wirecoil",2],["edn_Metalpipe",10]]]
]
];
VD_EDN_BP_Array = VD_EDN_BP_Array - [VD_EDN_BPobj6];
VDBPcollected = VDBPcollected + 1; hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount]; sleep 2;
};


/*7*/
VD_EDN_BPobj7 = "Land_File1_F" createVehicle [0,0,0];
VD_EDN_BPobj7 addAction ["Collect Blueprint","call VD_EDN_fnc_Blueprint_7; deleteVehicle VD_EDN_BPobj7"];
VD_EDN_BP_Array = VD_EDN_BP_Array + [VD_EDN_BPobj7];

VD_EDN_fnc_Blueprint_7 = {hint "Blueprint Planks added.";; sleep 2;
removeallactions VD_EDN_BPobj7;
edn_fortification_array append [
["Planks",
["Land_Plank_01_8m_F",[["edn_Woodplank",8]]],
["Land_Plank_01_4m_F",[["edn_Woodplank",4]]]
]];
VD_EDN_BP_Array = VD_EDN_BP_Array - [VD_EDN_BPobj7];
VDBPcollected = VDBPcollected + 1; hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount]; sleep 2;
};

/*8*/
VD_EDN_BPobj8 = "Land_File1_F" createVehicle [0,0,0];
VD_EDN_BPobj8 addAction ["Collect Blueprint","call VD_EDN_fnc_Blueprint_8; deleteVehicle VD_EDN_BPobj8"];
VD_EDN_BP_Array = VD_EDN_BP_Array + [VD_EDN_BPobj8];

VD_EDN_fnc_Blueprint_8 = {hint "Blueprint Ladders added."; sleep 2;
removeallactions VD_EDN_BPobj8;
edn_fortification_array append [
["Ladders",
["Land_PierLadder_F",[["edn_Metalpipe",5]]]
]];
VD_EDN_BP_Array = VD_EDN_BP_Array - [VD_EDN_BPobj8];
VDBPcollected = VDBPcollected + 1; hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount]; sleep 2;
};

/*CUP Blueprints*/


VD_EDN_BPobjCUP1 = "Land_File1_F" createVehicle [0,0,0];
VD_EDN_BPobjCUP1 addAction ["Collect Blueprint","call VD_EDN_fnc_Blueprint_CUP_1; deleteVehicle VD_EDN_BPobjCUP1"];
VD_EDN_BP_Array = VD_EDN_BP_Array + [VD_EDN_BPobjCUP1];

VD_EDN_fnc_Blueprint_CUP_1 = {hint "Blueprint Walls: Tinwalls added."; sleep 2;
removeallactions VD_EDN_BPobjCUP1;
edn_fortification_array append [
["Walls: Tinwalls",
["Land_Wall_Tin_4",[["edn_Metalpipe",4],["edn_Steelplate",4]]],
["Land_Wall_Tin_4_2",[["edn_Metalpipe",4],["edn_Steelplate",4]]],
["Land_TinWall_01_m_4m_v2_F",[["edn_Woodplank",5],["edn_Steelplate",10]]],
["Land_TinWall_01_m_4m_v1_F",[["edn_Woodplank",5],["edn_Steelplate",10]]],
["Land_TinWall_01_m_gate_v1_F",[["edn_Woodplank",12],["edn_Steelplate",10],["edn_Metalpipe",2]]],
["Land_TinWall_01_m_gate_v2_F",[["edn_Woodplank",12],["edn_Steelplate",10],["edn_Metalpipe",2]]]
]
];
VD_EDN_BP_Array = VD_EDN_BP_Array - [VD_EDN_BPobjCUP1];
VDBPcollected = VDBPcollected + 1; hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount]; sleep 2;
};



/*Blueprint counter*/
VDBPcount = count VD_EDN_BP_Array;
VDBPcollected = 0;

sleep 3;
hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount];
sleep 10;

call VD_EDN_BPMover;









/*
VD_EDN_BPobjö = "Land_File1_F" createVehicle [0,0,0];
VD_EDN_BPobjö addAction ["Collect Blueprint ö","call VD_EDN_fnc_Blueprint_ö; deleteVehicle VD_EDN_BPobjö"];
VD_EDN_BP_Array = VD_EDN_BP_Array + [VD_EDN_BPobjö];

VD_EDN_fnc_Blueprint_ö = {hint "Blueprint added.";
  removeallactions VD_EDN_BPobjö;
edn_fortification_array append [
["Walls",
["Land_BagFence_01_long_green_F",[["edn_sandbag",3]]],
["Land_BagFence_01_short_green_F",[["edn_sandbag",2]]],
["Land_BagFence_01_end_green_F",[["edn_sandbag",1]]],
["Land_BagFence_01_round_green_F",[["edn_sandbag",3]]],
["Land_BagFence_01_corner_green_F",[["edn_sandbag",2]]]
]
];
VD_EDN_BP_Array = VD_EDN_BP_Array - [VD_EDN_BPobjö];
VDBPcollected = VDBPcollected + 1; hint format ["%1 of %2 Blueprints collected",VDBPcollected,VDBPcount]; sleep 2;
};


/*
Blank
["Title",
["classname",[["materialname",quanity]]],
["classname",[["materialname",quanity],["materialname",quanity]]], //here is a comma as one more blueprint follows
["classname",[["materialname",quanity]]]   //mind that there is no comma here
], (no comma if its the last section)
///Mat nams
"edn_Wirecoil"
"edn_Woodplank"
"edn_Steelplate"
"edn_Sandbag"
"edn_Cinderblock"
"edn_camonet"
"edn_Metalpipe"
*/
