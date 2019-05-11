#define private     0
#define protected   1
#define public      2

#define true 1
#define false 0

class CfgPatches {
    class BP_SW_Anims {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		//requiredAddons[] = {};
		requiredAddons[] = {"A3_Anims_F"};
        version = 0.01;
    };
};

/*
class CfgMovesBasic {
	access = 1;
	skeletonName = "";

	//class Default;
	class StandBase;
	//class DefaultDie;

	class ManActions {
	};
	class Actions {
		class RifleStandActions {
		};
		class RifleCrouchActions {
		};
		class RifleKneelActions {
		};
		class RifleLowStandActions {
		};
		class RifleAdjustStandBaseActions {
		};
		class RifleProneActions {
		};
	};
};
class CfgMovesMaleSdr : CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	//skeletonName = "";
	gestures = "CfgGesturesMale";
	access = 1;

	class States {
		class AmovPercMstpSlowWrflDnon; //stay weap low
		class AmovPercMstpSrasWrflDnon; //stay weap up
		class AmovPknlMstpSlowWrflDnon; //kneel weap low
		class AmovPknlMstpSrasWrflDnon; //kneel weap up
		class AmovPercMstpSlowWpstDnon; //stay pistol low
		class AmovPercMstpSrasWpstDnon; //stay pistol up
		class AmovPknlMstpSlowWpstDnon; //kneel pistol low
		class AmovPknlMstpSrasWpstDnon; //kneel pistol up
		class AmovPercMstpSnonWnonDnon; //stay no weapon
		class AmovPknlMstpSnonWnonDnon; //kneel no weapon
		class AmovPpneMstpSnonWnonDnon; //prone no weapon
		class AmovPercMstpSrasWlnrDnon; //stay launcher up
		class AmovPercMstpSlowWlnrDnon; //stay launcher low
		class AmovPknlMstpSrasWlnrDnon; //kneel launcher
		//class AmovPknlMstpSnonWnonDf; 	//kneel no weapon forward
		class AmovPercMstpSlowWrflDnon_gear;
		class AovrPercMstpSnonWnonDf; //vault from object
		//class AinvPknlMstpSnonWnonDnon_medic;

	};
};

class CfgGesturesMale {
	class ManActions;
	class Actions;
	class Default;

	class States;
	class BlendAnims;
};
*/