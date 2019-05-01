#define private     0
#define protected   1
#define public      2

#define true 1
#define false 0

class CfgPatches {
    class CBS_ClimbUp {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		//requiredAddons[] = {};
		requiredAddons[] = {"A3_Anims_F"};
        version = 0.01;
    };
};

class CfgMovesBasic {
	access = 1;
	skeletonName = "";

	//class Default;
	class StandBase;
	//class DefaultDie;

	class ManActions {
	};
	class Actions {
/*		class RifleStandActions {
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
		};*/
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

		class ClimbUp_Vault : AovrPercMstpSnonWnonDf {

			//canBlendStep = 0;
			//collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			//minPlayTime = 0.69;
			//relSpeedMin = 1;
			//relSpeedMax = 1;
			//duty = 1.0;
			//interpolationspeed = 3;
			//interpolationrestart = 1;

			file = "\climbup_mov\Moves\ClimbUp_Vault.rtm";
			looped = 0;
            speed = 0.40;
            mask = "BodyFull";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {};
			rightHandIKEnd = false;
            weaponIK = 0;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 9.1;
            headBobMode = 0;
            headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPknlMstpSoptWbinDnon",9.020000, "AmovPknlMstpSnonWnonDnon", 9.020000, "AmovPknlMstpSrasWrflDnon", 9.020000, "AmovPknlMstpSlowWrflDnon", 9.020000, "AmovPknlMstpSlowWpstDnon", 9.020000, "AmovPknlMstpSrasWpstDnon", 9.020000, "AmovPknlMstpSrasWlnrDnon",9.020000, "AmovPercMstpSnonWnonDnon", 9.020000, "AmovPercMstpSrasWrflDnon", 9.020000, "AmovPercMstpSlowWrflDnon", 9.020000, "AmovPercMstpSoptWbinDnon",9.020000, "AmovPercMstpSnonWnonDnon", 9.020000, "AmovPercMstpSrasWpstDnon", 9.020000, "AmovPercMstpSlowWpstDnon", 9.020000, "AmovPercMstpSrasWlnrDnon", 9.020000, "AmovPercMstpSlowWlnrDnon", 9.020000 /*"aadjpercmstpsraswpstddown_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdup_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdright_amovpercmstpsraswpstdnon", 9.020000,"aadjpercmstpsraswpstdleft_amovpercmstpsraswpstdnon", 9.020000*/};
			ConnectTo[] = {"AmovPknlMstpSoptWbinDnon",0.020000, "AmovPknlMstpSnonWnonDnon", 0.020000, "AmovPknlMstpSrasWrflDnon", 0.020000, "AmovPknlMstpSlowWrflDnon", 0.020000, "AmovPknlMstpSlowWpstDnon", 0.020000, "AmovPknlMstpSrasWpstDnon", 0.020000, "AmovPknlMstpSrasWlnrDnon",0.020000, "AmovPercMstpSnonWnonDnon", 0.020000, "AmovPercMstpSrasWrflDnon", 0.020000, "AmovPercMstpSlowWrflDnon", 0.020000, "AmovPercMstpSoptWbinDnon",0.020000, "AmovPercMstpSnonWnonDnon", 0.020000, "AmovPercMstpSrasWpstDnon", 0.020000, "AmovPercMstpSlowWpstDnon", 0.020000, "AmovPercMstpSrasWlnrDnon", 0.020000, "AmovPercMstpSlowWlnrDnon", 0.020000};
			//InterpolateTo[] = {"Unconscious",0.01};
			soundOverride = "laydown";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 1;
		};
		class ClimbUp_Low_Climb_Up : AmovPknlMstpSnonWnonDnon {
            file = "\climbup_mov\Moves\ClimbUp_Low_Climb_Up.rtm";
			looped = 0;
            speed = 0.5;
            mask = "BodyFull";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {};
			rightHandIKEnd = false;
            weaponIK = 0;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 9.1;
            headBobMode = 0;
            headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPknlMstpSoptWbinDnon",9.020000, "AmovPknlMstpSnonWnonDnon", 9.020000, "AmovPknlMstpSrasWrflDnon", 9.020000, "AmovPknlMstpSlowWrflDnon", 9.020000, "AmovPknlMstpSlowWpstDnon", 9.020000, "AmovPknlMstpSrasWpstDnon", 9.020000, "AmovPknlMstpSrasWlnrDnon",9.020000, "AmovPercMstpSnonWnonDnon", 9.020000, "AmovPercMstpSrasWrflDnon", 9.020000, "AmovPercMstpSlowWrflDnon", 9.020000, "AmovPercMstpSoptWbinDnon",9.020000, "AmovPercMstpSnonWnonDnon", 9.020000, "AmovPercMstpSrasWpstDnon", 9.020000, "AmovPercMstpSlowWpstDnon", 9.020000, "AmovPercMstpSrasWlnrDnon", 9.020000, "AmovPercMstpSlowWlnrDnon", 9.020000 /*"aadjpercmstpsraswpstddown_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdup_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdright_amovpercmstpsraswpstdnon", 9.020000,"aadjpercmstpsraswpstdleft_amovpercmstpsraswpstdnon", 9.020000*/};
			ConnectTo[] = {"AmovPknlMstpSoptWbinDnon",0.020000, "AmovPknlMstpSnonWnonDnon", 0.020000, "AmovPknlMstpSrasWrflDnon", 0.020000, "AmovPknlMstpSlowWrflDnon", 0.020000, "AmovPknlMstpSlowWpstDnon", 0.020000, "AmovPknlMstpSrasWpstDnon", 0.020000, "AmovPknlMstpSrasWlnrDnon",0.020000, "AmovPercMstpSnonWnonDnon", 0.020000, "AmovPercMstpSrasWrflDnon", 0.020000, "AmovPercMstpSlowWrflDnon", 0.020000, "AmovPercMstpSoptWbinDnon",0.020000, "AmovPercMstpSnonWnonDnon", 0.020000, "AmovPercMstpSrasWpstDnon", 0.020000, "AmovPercMstpSlowWpstDnon", 0.020000, "AmovPercMstpSrasWlnrDnon", 0.020000, "AmovPercMstpSlowWlnrDnon", 0.020000};
			//InterpolateTo[] = {"Unconscious",0.01};
			soundOverride = "laydown";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 1;
		};
		class ClimbUp_MIddle_Climb_Up : AmovPknlMstpSnonWnonDnon {
            file = "\climbup_mov\Moves\ClimbUp_MIddle_Climb_Up.rtm";
			looped = 0;
            speed = 0.5;
            mask = "BodyFull";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {};
			rightHandIKEnd = false;
            weaponIK = 0;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 9.1;
            headBobMode = 0;
            headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWrflDnon", 9.020000, "AmovPercMstpSlowWrflDnon", 9.020000, "AmovPercMstpSoptWbinDnon",9.020000, "AmovPercMstpSnonWnonDnon", 9.020000, "AmovPercMstpSrasWpstDnon", 9.020000, "AmovPercMstpSlowWpstDnon", 9.020000, "AmovPercMstpSrasWlnrDnon", 9.020000, "AmovPercMstpSlowWlnrDnon", 9.020000 /*"aadjpercmstpsraswpstddown_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdup_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdright_amovpercmstpsraswpstdnon", 9.020000,"aadjpercmstpsraswpstdleft_amovpercmstpsraswpstdnon", 9.020000*/};
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.020000, "AmovPknlMstpSrasWpstDnon", 0.020000, "AmovPknlMstpSlowWpstDnon", 0.020000, "AmovPknlMstpSrasWlnrDnon", 0.020000};
			//InterpolateTo[] = {"Unconscious",0.01};
			soundOverride = "laydown";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 1;
		};
		class ClimbUp_Middle_Climb_Over_Med : AovrPercMstpSnonWnonDf {
			file = "\climbup_mov\Moves\ClimbUp_Middle_Climb_Over_Med.rtm";
			looped = 0;
            speed = 0.35;
            mask = "BodyFull";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {};
			rightHandIKEnd = false;
            weaponIK = 0;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 9.1;
            headBobMode = 2;
            headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWrflDnon", 9.020000, "AmovPercMstpSlowWrflDnon", 9.020000, "AmovPercMstpSoptWbinDnon",9.020000, "AmovPercMstpSnonWnonDnon", 9.020000, "AmovPercMstpSrasWpstDnon", 9.020000, "AmovPercMstpSlowWpstDnon", 9.020000, "AmovPercMstpSrasWlnrDnon", 9.020000, "AmovPercMstpSlowWlnrDnon", 9.020000,"AmovPknlMstpSrasWrflDnon", 9.020000, "AmovPknlMstpSlowWrflDnon", 9.020000, "AmovPknlMstpSoptWbinDnon",9.020000, "AmovPknlMstpSnonWnonDnon", 9.020000, "AmovPknlMstpSrasWpstDnon", 9.020000, "AmovPknlMstpSlowWpstDnon", 9.020000, "AmovPknlMstpSrasWlnrDnon", 9.020000, "AmovPknlMstpSlowWlnrDnon", 9.020000 /*"aadjpercmstpsraswpstddown_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdup_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdright_amovpercmstpsraswpstdnon", 9.020000,"aadjpercmstpsraswpstdleft_amovpercmstpsraswpstdnon", 9.020000*/};
			ConnectTo[] = 	{"AmovPknlMstpSrasWrflDnon", 9.020000, "AmovPknlMstpSlowWrflDnon", 9.020000, "AmovPknlMstpSoptWbinDnon",9.020000, "AmovPknlMstpSnonWnonDnon", 9.020000, "AmovPknlMstpSrasWpstDnon", 9.020000, "AmovPknlMstpSlowWpstDnon", 9.020000, "AmovPknlMstpSrasWlnrDnon", 9.020000, "AmovPknlMstpSlowWlnrDnon", 9.020000};
			//InterpolateTo[] = {"Unconscious",0.01};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};

	};
};

class CfgGesturesMale {
	class ManActions;
	class Actions;
	class Default;

	class States;
	class BlendAnims;
};