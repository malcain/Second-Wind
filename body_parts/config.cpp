
class CfgPatches
{
	class Body_Parts_pat
	{
		requiredAddons[] = {};
		requiredVersion = 0.1; 
		units[] =
		{"Leg_Body_Part_Dark","Leg_Body_Part_White","Leg_Body_Part_Old","Right_Arm_Dark","Right_Arm_white","Right_Arm_white_old","African_Head","Asian_Head","persian_Head","Head_Brain","Meat_prop","no_skin_body","Body_No_Head","Torso_bloody","Hand_Dark","Hand_White","Hand_White_old","Hand_Finger3","cuttopHead"
		};
		weapons[] = {};
	};
};

class CfgEditorCategories {

	class Horror_Mod_wl {
		displayName = "HORROR MOD";
	};
	
	
	
};
class CfgVehicleClasses {

	



  
	class body_parts_wl {
		displayName = "Body Parts";

};




};



class CfgVehicles {

	

	class Static;

       //// LEGS
	      
	   

	class Leg_Body_Part_Dark: Static {
		model = "\Body_Parts\Leg_Body_Part_Dark.p3d"; 
		scope = 2;
		scopeCurator = 2;
		side=3;
		displayName = "Leg Dark ";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};
  	class Leg_Body_Part_White: Static {
		model = "\Body_Parts\Leg_Body_Part_White.p3d"; 
		scope = 2;
		scopeCurator = 2;
		side=3;
		displayName = "Leg White";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};
	  	class Leg_Body_Part_Old: Static {
		model = "\Body_Parts\Leg_Body_Part_Old.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Leg White Old";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};
	   /// ARMS
	   
	 	  	class Right_Arm_Dark: Static {
		model = "\Body_Parts\Right_Arm_Dark.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Arm Dark";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};  
	 	  	class Right_Arm_white: Static {
		model = "\Body_Parts\Right_Arm_White.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Arm white";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};	   
	 	  	class Right_Arm_white_old: Static {
		model = "\Body_Parts\Right_Arm_White_old.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Arm Old White";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};		   
	  /// Heads 
	   
		 	class African_Head: Static {
		model = "\Body_Parts\Head_Dark.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Head African";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};	   
	  	  class Asian_Head: Static {
		model = "\Body_Parts\Head_asian.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Head Asian";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};	
    	class persian_Head: Static {
		model = "\Body_Parts\m_persian.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Head persian";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};	
        	class Head_Brain: Static {
		model = "\Body_Parts\Head_Brain.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Head With Brain";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};	






 
	  /// Meat 
	  	  class Meat_prop: Static {
		model = "\Body_Parts\Meat.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Meat";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};		
	  	  class no_skin_body: Static {
		model = "\Body_Parts\no_skin_body.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Skinless Body";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};	
     	 class Body_No_Head: Static {
		model = "\Body_Parts\Body.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Body";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};	
         class Torso_bloody: Static {
		model = "\Body_Parts\Torso.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Torso Bloody";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};
         ///Hands
        class Hand_Dark: Static {
		model = "\Body_Parts\Hand_Dark.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Hand Dark";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};
        class Hand_White: Static {
		model = "\Body_Parts\Hand_white.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Hand White";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
};
        class Hand_White_old: Static {
		model = "\Body_Parts\Hand_old.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Hand White Old";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
}; 
	    class Hand_Finger3: Static {
		model = "\Body_Parts\Hand_Finger3.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Hand White 1 Finger Missing";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
}; 

  
         class cuttopHead: Static {
		model = "\Body_Parts\cuttopHead.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Top Of Head with Brain";
		vehicleClass = "body_parts_wl";
		editorCategory = "Horror_Mod_wl";	
}; 


};	





	



	
		

		
		
		
		
		
		

		
		
		
		
		
		
		
		
		
		



