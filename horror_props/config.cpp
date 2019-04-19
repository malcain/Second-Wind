
class CfgPatches
{
	class Horror_Props_pat
	{
		requiredAddons[] = {};
		requiredVersion = 0.1; 
		units[] =
		{"BathTub_Bloody","Axe_prop_horror","Human_face_mask_Ground","Peg_Prop","coffin_With_Cross","wege_board","Bloody_chains","Coffin_closed","HELLRAISER_BOX","Horror_Book"  
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

	



  
	class Horror_props_wl {
		displayName = "Props";

};




};



class CfgVehicles {

	

	class Static;

       
	      
	   

	class Coffin_closed: Static {
		model = "\Horror_props\Coffin_closed.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		_generalMacro= "Coffin_closed";
		displayName = "Wooden Coffin ";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
    	class Axe_prop_horror: Static {
		model = "\Horror_props\Axe.p3d"; 
		scope = 2;
		scopeCurator = 2;
		side=3;
		_generalMacro= "Axe_prop_horror";
		displayName = "Axe ";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
    	class Human_face_mask_Ground: Static {
		model = "\Horror_props\Human_face_mask_Ground.p3d"; 
		scope = 2;
		scopeCurator = 2;
		_generalMacro= "Human_face_mask_Ground";
		displayName = "Human face mask ";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
        class Peg_Prop: Static {
		model = "\Horror_props\Peg.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Peg ";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
        class coffin_With_Cross: Static {
		model = "\Horror_props\coffin_With_Cross.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "coffin With Cross";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
        class wege_board: Static {
		model = "\Horror_props\wege_board.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "wege board";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
        class BathTub_Bloody: Static {
		model = "\Horror_props\BathTub.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "BathTub full of Blood";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
      class Bloody_chains: Static {
		model = "\Horror_props\chain.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "chain";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
      class HELLRAISER_BOX: Static {
		model = "\Horror_props\HELLRAISER_BOX.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "HELLRAISER BOX";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
        class Horror_Book: Static {
		model = "\Horror_props\Book.p3d"; 
		scope = 2;
		side=3;
		scopeCurator = 2;
		displayName = "Spell Book";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
      class testwl1: Static {
		model = "\Horror_props\bed.p3d"; 
		scope = 0;
		displayName = "bed";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
        class testwl2: Static {
		model = "\Horror_props\ddd.p3d"; 
		scope = 0;
		displayName = "frame";
		vehicleClass = "Horror_props_wl";
		editorCategory = "Horror_Mod_wl";	
};
};	





	



	
		

		
		
		
		
		
		

		
		
		
		
		
		
		
		
		
		



