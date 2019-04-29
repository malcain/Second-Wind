class CfgMovesBasic 
{
	class ManActions 
	{
		dsr_AxeSlashGst = "";
		GestureSwingHammer = "";
		dsr_rifle_jump = "";
		dsr_rpg_Jump = "";
		dsr_pistol_Jump = "";
		dsr_noWeap_Jump = "";
		dsr_PickAxeSlashGst = "";
		dsr_BatSlashGst = "";
		dsr_KatanaSlashGst = "";
		dsr_Act_Fishing_Idle = "";
		dsr_Act_eat_food[] = {"dsr_Eat_Food","Gesture"};
		dsr_Act_Drink_Water[] = {"dsr_Drink_Water","Gesture"};

		dsr_Act_Gst_Civ_WeapNon_Punch_HRight_Curve = "";
		dsr_Act_Gst_Civ_WeapNon_Punch_HLeft_Hook = "";
		dsr_Act_Gst_Civ_WeapNon_Idle_Combat_Pose = "";
		dsr_Act_Gst_Civ_WeapNon_HandsUp_Combat_Pose = "";
		dsr_Act_Gst_Civ_WeapNon_HandsDown_Combat_Pose = "";

		dsr_Act_Gut_Corpse = "";

	};
	
	class StandBase;  //extern
	
	class Actions 
	{
		class NoActions : ManActions 
		{
			dsr_AxeSlashGst[] = {"dsr_AxeSlashGst", "Gesture"};
			access = 3;
			dsr_rifle_jump[] = {"dsr_rifle_jump", "Gesture"};
			dsr_rpg_Jump[] = {"dsr_rpg_Jump", "Gesture"};
			dsr_pistol_Jump[] = {"dsr_pistol_Jump", "Gesture"};
			dsr_noWeap_Jump[] = {"dsr_noWeap_Jump", "Gesture"};
			dsr_PickAxeSlashGst[] = {"dsr_PickAxeSlashGst", "Gesture"};
			dsr_BatSlashGst[] = {"dsr_BatSlashGst", "Gesture"};
			dsr_KatanaSlashGst[] = {"dsr_KatanaSlashGst", "Gesture"};
			dsr_Act_Fishing_Idle[] = {"dsr_Fishing_Idle", "Gesture"};
		};


		class RifleStandActions {
			dsr_Act_Gut_Corpse = "";
		};
		class RifleCrouchActions {
			dsr_Act_Gut_Corpse = "";
		};
		class RifleKneelActions {
			dsr_Act_Gut_Corpse = "";
		};
		class RifleLowStandActions {
			dsr_Act_Gut_Corpse = "";
		};
		class RifleAdjustStandBaseActions {
			dsr_Act_Gut_Corpse = "";
		};

		//Pistol
		class PistolStandActions {
			dsr_Act_Gut_Corpse = "";
		};
		class PistolLowStandActions {
			dsr_Act_Gut_Corpse = "";
		};
		class PistolStandActionsNoAdjust{
			dsr_Act_Gut_Corpse = "";
		};
		class PistolLowStandActionsNoAdjust{
			dsr_Act_Gut_Corpse = "";
		};
		class PistolKneelActions {
			dsr_Act_Gut_Corpse = "";
		};
		class PistolLowKneelActions {
			dsr_Act_Gut_Corpse = "";
		};
		class PistolProneActions {
			dsr_Act_Gut_Corpse = "";
		};

		//Launcher
		class LauncherStandActions {
			dsr_Act_Gut_Corpse = "";
		};
		class LauncherKneelActions {
			dsr_Act_Gut_Corpse = "";
		};
		class LauncherProneActions {
			dsr_Act_Gut_Corpse = "";
		};


		//Melee Combat
		class CivilStandActions {
			dsr_Act_Gst_Civ_WeapNon_Punch_HRight_Curve[] = {"dsr_Gst_Civ_WeapNon_Punch_HRight_Curve","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_Punch_HLeft_Hook[] = {"dsr_Gst_Civ_WeapNon_Punch_HLeft_Hook","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_Idle_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_HandsUp_Combat_Pose","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_HandsUp_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_Idle_Combat_Pose","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_HandsDown_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_HandsDown_Combat_Pose","Gesture"};
			dsr_Act_Gut_Corpse = "dsr_Gut_Corpse";
		};
		class CivilKneelActions {
			dsr_Act_Gst_Civ_WeapNon_Punch_HRight_Curve[] = {"dsr_Gst_Civ_WeapNon_Punch_HRight_Curve","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_Punch_HLeft_Hook[] = {"dsr_Gst_Civ_WeapNon_Punch_HLeft_Hook","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_HandsUp_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_HandsUp_Combat_Pose","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_Idle_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_Idle_Combat_Pose","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_HandsDown_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_HandsDown_Combat_Pose","Gesture"};
			dsr_Act_Gut_Corpse = "dsr_Gut_Corpse";
		};
		class CivilProneActions {
			dsr_Act_Gst_Civ_WeapNon_Punch_HRight_Curve = "";
			dsr_Act_Gst_Civ_WeapNon_Punch_HLeft_Hook = "";
			dsr_Act_Gst_Civ_WeapNon_HandsUp_Combat_Pose = "";
			dsr_Act_Gst_Civ_WeapNon_Idle_Combat_Pose = "";
			dsr_Act_Gst_Civ_WeapNon_HandsDown_Combat_Pose = "";
			dsr_Act_Gut_Corpse = "";
		};
		class CivilStandSurrenderActions {
			dsr_Act_Gst_Civ_WeapNon_Punch_HRight_Curve = "";
			dsr_Act_Gst_Civ_WeapNon_Punch_HLeft_Hook = "";
			dsr_Act_Gst_Civ_WeapNon_HandsUp_Combat_Pose = "";
			dsr_Act_Gst_Civ_WeapNon_Idle_Combat_Pose = "";
			dsr_Act_Gst_Civ_WeapNon_HandsDown_Combat_Pose = "";
			dsr_Act_Gut_Corpse = "";
		};
		class CivilSiTactions {
			dsr_Act_Gst_Civ_WeapNon_Punch_HRight_Curve = "";
			dsr_Act_Gst_Civ_WeapNon_Punch_HLeft_Hook = "";
			dsr_Act_Gst_Civ_WeapNon_HandsUp_Combat_Pose = "";
			dsr_Act_Gst_Civ_WeapNon_Idle_Combat_Pose = "";
			dsr_Act_Gst_Civ_WeapNon_HandsDown_Combat_Pose = "";
			dsr_Act_Gut_Corpse = "";
		};
		class CivilStandSaluteActions {
			dsr_Act_Gst_Civ_WeapNon_Punch_HRight_Curve = "";
			dsr_Act_Gst_Civ_WeapNon_Punch_HLeft_Hook = "";
			dsr_Act_Gst_Civ_WeapNon_HandsUp_Combat_Pose = "";
			dsr_Act_Gst_Civ_WeapNon_Idle_Combat_Pose = "";
			dsr_Act_Gst_Civ_WeapNon_HandsDown_Combat_Pose = "";
			dsr_Act_Gut_Corpse = "";
		};
		class CivilEvasiveActions {
			dsr_Act_Gst_Civ_WeapNon_Punch_HRight_Curve[] = {"dsr_Gst_Civ_WeapNon_Punch_HRight_Curve","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_Punch_HLeft_Hook[] = {"dsr_Gst_Civ_WeapNon_Punch_HLeft_Hook","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_HandsUp_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_HandsUp_Combat_Pose","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_Idle_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_Idle_Combat_Pose","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_HandsDown_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_HandsDown_Combat_Pose","Gesture"};
			dsr_Act_Gut_Corpse = "";
		};
		class CivilRunActions {
			dsr_Act_Gst_Civ_WeapNon_Punch_HRight_Curve[] = {"dsr_Gst_Civ_WeapNon_Punch_HRight_Curve","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_Punch_HLeft_Hook[] = {"dsr_Gst_Civ_WeapNon_Punch_HLeft_Hook","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_HandsUp_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_HandsUp_Combat_Pose","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_Idle_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_Idle_Combat_Pose","Gesture"};
			dsr_Act_Gst_Civ_WeapNon_HandsDown_Combat_Pose[] = {"dsr_Gst_Civ_WeapNon_HandsDown_Combat_Pose","Gesture"};
			dsr_Act_Gut_Corpse = "";
		};
		class BinocProneCivilActions {
			dsr_Act_Gst_Civ_WeapNon_Punch_HRight_Curve = "";
			dsr_Act_Gst_Civ_WeapNon_Punch_HLeft_Hook = "";
			dsr_Act_Gst_Civ_WeapNon_HandsUp_Combat_Pose = "";
			dsr_Act_Gst_Civ_WeapNon_Idle_Combat_Pose = "";
			dsr_Act_Gst_Civ_WeapNon_HandsDown_Combat_Pose = "";
			dsr_Act_Gut_Corpse = "";
		
		};

	};
};

class CfgMovesMaleSdr: CfgMovesBasic 
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	
	class States  
	{
		class TransAnimBase; //extern
		class TransAnimBase_noIK;  //extern
		class AidlPknlMstpSrasWlnrDnon_G0S; //extern
		class AidlPpneMstpSrasWrflDnon_G0S;  //extern
		class AidlPercMstpSrasWlnrDnon_G0S; //extern
		class AidlPpneMstpSrasWpstDnon_G0S;  //extern
		class AadjPpneMstpSrasWpstDup;  //extern


		class AmovPercMstpSlowWrflDnon; //stay weap low
		class AmovPercMstpSrasWrflDnon; //stay weap up
		//class AmovPknlMstpSlowWrflDnon; //kneel weap low
		class AmovPknlMstpSrasWrflDnon; //kneel weap up
		class AmovPsitMstpSrasWrflDnon; //sit weap
		class AmovPercMstpSrasWrflDnon_Salute; //salute weap up
		class AmovPercMstpSlowWrflDnon_Salute; //salute weap low
		class AmovPercMstpSlowWpstDnon; //stay pistol low
		class AmovPercMstpSrasWpstDnon; //stay pistol up
		class AmovPknlMstpSlowWpstDnon; //kneel pistol low
		class AmovPknlMstpSrasWpstDnon; //kneel pistol up
		class amovpsitmstpsnonwpstdnon_ground; //sit pistol
		class AmovPercMstpSrasWpstDnon_Salute; //salute pistol up
		class AmovPercMstpSnonWnonDnon; //stay no weapon
		class AmovPknlMstpSnonWnonDnon; //kneel no weapon
		class AmovPpneMstpSnonWnonDnon; //prone no weapon
		class AmovPsitMstpSnonWnonDnon_ground; //sit no weapon
		class amovpercmstpsnonwnondnon_salute; //salute no weapon
		class AmovPercMstpSsurWnonDnon; //Surrender no weapon
		class AmovPercMstpSrasWlnrDnon; //stay launcher up
		class AmovPercMstpSlowWlnrDnon; //stay launcher low
		class AmovPknlMstpSrasWlnrDnon; //kneel launcher
		//class AmovPknlMstpSnonWnonDf; 	//kneel no weapon forward
		class AmovPercMstpSlowWrflDnon_gear;
		class AovrPercMstpSnonWnonDf; //vault from object

		class DeadState;

		class dsr_Gut_Corpse : AmovPercMstpSnonWnonDnon {
			file = "\dsr_anims\anim\gut_corpse.rtm";
			looped = 0;
			speed = 0.085; //0.08
			mask = "BodyFullReal";
			headBobStrength = 1.0;
			headBobMode = 4;
			disableWeapons = 1;
            disableWeaponsLong = 1;
			leftHandIKBeg = false;
			leftHandIKCurve[] = {};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {};
			rightHandIKEnd = false;
			showItemInRightHand = 1;
			showHandGun = 0;
			weaponLowered = 0;
			canPullTrigger = 0;
			enableOptics = false;
            showWeaponAim = false;
            weaponIK = 0; //1
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 9.1;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSnonWnonDnon", 9.020000, "AmovPknlMstpSnonWnonDnon", 9.020000};
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.020000};
			InterpolateTo[] = {"DeadState",0.01, "Unconscious",0.01};
			soundOverride = "";
			soundEnabled = 1;
		};

	};	
};

class CfgGesturesMale 
{
	skeletonName = "OFP2_ManSkeleton";
	
	class ManActions {};
	
	class Actions 
	{
		class NoActions 
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	
	class Default; 
	/*{
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5, 1};
		terminal = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 1;
		showWeaponAim = 1;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};*/
	
	class States 
	{
		
		class dsr_AxeSlashGst: Default
		{
			file = "\dsr_anims\anim\axe_slash.rtm";
			looped = 0;
			speed = 0.7894;
			mask = "handsWeapon2";
			headBobStrength = 1;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			weaponIK = 0;
		};
		class dsr_PickAxeSlashGst: Default
		{
			file = "\dsr_anims\anim\pickaxe_slash.rtm";
			looped = 0;
			speed = 0.3896;
			mask = "handsWeapon2";
			headBobStrength = 1;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			weaponIK = 0;
		};
		class dsr_BatSlashGst: Default
		{
			file = "\dsr_anims\anim\bat_slash.rtm";
			looped = 0;
			speed = 0.5555;
			mask = "handsWeapon2";
			headBobStrength = 1;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			weaponIK = 0;
		};
		class dsr_KatanaSlashGst: Default
		{
			file = "\dsr_anims\anim\katana_slash.rtm";
			looped = 0;
			speed = 0.6521;
			mask = "handsWeapon2";
			headBobStrength = 1;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			weaponIK = 0;
		};

		class dsr_Fishing_Idle: Default {
            file = "\dsr_anims\anim\fishing_idle.rtm";
            looped = 0;
            speed = 0.0678733031674208;//442
			duty = 0.0;
            mask = "BodyFullRealRPG";
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
            weaponIK = 0; //1
            enableOptics = false;
            showWeaponAim = true;
            disableWeapons = 0;
            disableWeaponsLong = 0;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
            forceAim = 1;
            limitGunMovement = 0;
            headBobMode = 0;
            headBobStrength = 0;
			canPullTrigger = 0;
			showHandGun = 0;
			showItemInRightHand = 0;
		};

		class dsr_rifle_jump : Default {
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = false;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 1;
			relSpeedMax = 1;
			limitGunMovement = 1.0;
			headBobStrength = 0.53;
			interpolationspeed = 10.0;
			interpolationrestart = true;
			forceAim = 0;
			minPlayTime = 0.9;
			duty = 10.0;
			file = "\dsr_anims\anim\jump_rifle.rtm";
			speed = 1.25849;
			disableWeapons = false;
			mask = "BodyFullReal";
			//actions = "RifleStandActionsRunF";
			adjstance = "m";
			soundOverride = "adjust_stand_side";
			soundEnabled = true;
			soundEdge[] = {0.01};
		};
		class dsr_rpg_Jump : Default {
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = false;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 1;
			relSpeedMax = 1;
			limitGunMovement = 1.0;
			headBobStrength = 0.53;
			interpolationspeed = 10.0;
			interpolationrestart = true;
			forceAim = 0;
			minPlayTime = 0.9;
			duty = 10.0;
			file = "\dsr_anims\anim\jump_rpg.rtm";
			speed = 1.25849;
			disableWeapons = false;
			mask = "BodyFullReal";
			//actions = "RifleStandActionsRunF";
			adjstance = "m";
			soundOverride = "adjust_stand_side";
			soundEnabled = true;
			soundEdge[] = {0.01};
		};
		class dsr_pistol_Jump : Default {
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = false;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 1;
			relSpeedMax = 1;
			limitGunMovement = 1.0;
			headBobStrength = 0.53;
			interpolationspeed = 10.0;
			interpolationrestart = true;
			forceAim = 0;
			minPlayTime = 0.9;
			duty = 10.0;
			file = "\dsr_anims\anim\jump_pistol.rtm";
			speed = 1.25849;
			disableWeapons = false;
			mask = "BodyFullReal";
			//actions = "RifleStandActionsRunF";
			adjstance = "m";
			soundOverride = "adjust_stand_side";
			soundEnabled = true;
			soundEdge[] = {0.01};
		};
		class dsr_noWeap_Jump : Default {
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = false;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 1;
			relSpeedMax = 1;
			limitGunMovement = 1.0;
			headBobStrength = 0.53;
			interpolationspeed = 10.0;
			interpolationrestart = true;
			forceAim = 0;
			minPlayTime = 0.9;
			duty = 10.0;
			file = "\dsr_anims\anim\jump_noWeap.rtm";
			speed = 1.25849;
			disableWeapons = false;
			mask = "BodyFullReal";
			//actions = "RifleStandActionsRunF";
			adjstance = "m";
			soundOverride = "adjust_stand_side";
			soundEnabled = true;
			soundEdge[] = {0.01};
		};
		class dsr_Eat_Food: Default
        {
            file="\dsr_anims\anim\Eat_Food.rtm";
            looped=0;
            speed=0.1115241635687732;
            duty=0;
            aimingBody="aimingUpDefault";
            mask="upperTorsoRPG";
            leftHandIKBeg=0;
            leftHandIKCurve[]={};
            leftHandIKEnd=0;
            rightHandIKBeg=0;
            rightHandIKCurve[]={};
            rightHandIKEnd=0;
            weaponIK=0;
            enableOptics=0;
            showWeaponAim=0;
            disableWeapons=0;
            disableWeaponsLong=0;
            canPullTrigger=0;
            InterpolateTo[]={};
            interpolateFrom[]={};
            soundOverride="";
			soundEnabled = 0;
        };
        class dsr_Drink_Water: Default
        {
            file="\dsr_anims\anim\Drink_Water.rtm";
            looped=0;
            speed=0.1421800947867299;
            duty=0;
            aimingBody="aimingUpDefault";
            mask="upperTorsoRPG";
            leftHandIKBeg=0;
            leftHandIKCurve[]={};
            leftHandIKEnd=0;
            rightHandIKBeg=0;
            rightHandIKCurve[]={};
            rightHandIKEnd=0;
            weaponIK=0;
            enableOptics=0;
            showWeaponAim=0;
            disableWeapons=0;
            disableWeaponsLong=0;
            canPullTrigger=0;
            InterpolateTo[]={};
            interpolateFrom[]={};
            soundOverride="";
			soundEnabled = 0;
        };
		
        class dsr_Gst_Civ_WeapNon_Idle_Combat_Pose : Default {
            file = "\dsr_anims\anim\fighting\dsr_Gst_Civ_WeapNon_Idle_Combat_Pose.rtm";
            looped = 1;
            speed = 0.0;
			duty = 0.0;
			aimingBody = "aimingUpDefault";
			mask = "upperTorsoRPG";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
			weaponIK = 0;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = true;
			disableWeaponsLong = true;
			canPullTrigger = 0;
			interpolationSpeed = 2.0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			InterpolateTo[] = {};
			interpolateFrom[] = {};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};
        class dsr_Gst_Civ_WeapNon_HandsUp_Combat_Pose : Default {
            file = "\dsr_anims\anim\fighting\dsr_Gst_Civ_WeapNon_HandsUp_Combat_Pose.rtm";
            looped = 0;
            speed = 1.25;
			duty = 0.0;
			aimingBody = "aimingUpDefault";
			mask = "upperTorsoRPG";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
			weaponIK = 0;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = true;
			disableWeaponsLong = true;
			canPullTrigger = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};
        class dsr_Gst_Civ_WeapNon_HandsDown_Combat_Pose : Default {
            file = "\dsr_anims\anim\fighting\dsr_Gst_Civ_WeapNon_HandsDown_Combat_Pose.rtm";
            looped = 0;
            speed = 2.142857142857143;
			duty = 0.0;
			aimingBody = "aimingUpDefault";
			mask = "upperTorsoRPG";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
			weaponIK = 0;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = true;
			disableWeaponsLong = true;
			canPullTrigger = 0;
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};

		class dsr_Gst_Civ_WeapNon_Punch_HLeft_Hook : Default {
			file = "\dsr_anims\anim\fighting\dsr_Gst_Civ_WeapNon_Punch_HLeft_Hook.rtm";
			looped = 0;
			speed = 2.307692307692308;
			duty = 0.0;
			aimingBody = "aimingUpDefault";
			mask = "upperTorsoRPG";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
			weaponIK = 0;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = true;
			disableWeaponsLong = true;
			canPullTrigger = 0;
			InterpolateTo[] = {};
			interpolateFrom[] = {};
			soundOverride = "rifle_to_handgun";
		};
		class dsr_Gst_Civ_WeapNon_Punch_HRight_Curve : Default {
			file = "\dsr_anims\anim\fighting\dsr_Gst_Civ_WeapNon_Punch_HRight_Curve.rtm";
			looped = 0;
			speed = 2.142857142857143;
			duty = 0.0;
			aimingBody = "aimingUpDefault";
			mask = "upperTorsoRPG";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
			weaponIK = 0;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = true;
			disableWeaponsLong = true;
			canPullTrigger = 0;
			soundOverride = "rifle_to_handgun";
		};
	};
	
	class BlendAnims 
	{
		handsWeapon1[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
		handsWeapon2[] = {"head",1,"neck1",1,"neck",1,"launcher",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
		wholeBody[] = {"Pelvis",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"Camera",1,"weapon",1,"launcher",1,"neck",1,"neck1",1,"head",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftLeg",1,"LeftLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightLeg",1,"RightLegRoll",1,"RightFoot",1,"RightToeBase",1};
		aimingDefault[] = {"head",0.6,"neck1",0.6,"neck",0.6,"weapon",1,"launcher",1,"LeftShoulder",0.8,"LeftArm",0.8,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",0.8,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.6};
		aimingPistol[] = {"head",0.6,"neck1",0.6,"neck",0.6,"LeftShoulder",1,"launcher",1,"weapon",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.6};
		aimingLauncher[] = {"head",0.6,"neck1",0.6,"neck",0.6,"launcher",1,"weapon",1,"LeftShoulder",0.8,"LeftArm",0.8,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",0.8,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.6};
		aimingCivil[] = {"neck1",0.25,"neck",0.25,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.5};
		aimingCivilKneel[] = {"neck1",0.25,"neck",0.25,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.5,"LeftShoulder",0.5,"LeftArm",0.2,"LeftArmRoll",0.15,"LeftForeArm",0.1,"LeftForeArmRoll",0.05,"RightShoulder",0.5,"RightArm",0.2,"RightArmRoll",0.15,"RightForeArm",0.1,"RightForeArmRoll",0.05};
		aimingLying[] = {"weapon",1,"LeftShoulder",0.8,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine2",0.2,"Spine3",0.6};
		aimingLyingPistol[] = {"LeftShoulder",0.8,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine2",0.2,"Spine3",0.6};
		legsLyingAiming[] = {"weapon",0,"LeftShoulder",0.2,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"RightShoulder",0.2,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"RightHandRing",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHandRing1",0,"RightHandRing2",0,"RightHandRing3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0,"Spine2",0.8,"Spine3",0.4,"spine1",1,"pelvis",1,"leftupleg",1,"leftuplegroll",1,"leftleg",1,"leftlegroll",1,"leftfoot",1,"LeftToeBase",1,"rightupleg",1,"rightuplegroll",1,"rightleg",1,"rightlegroll",1,"rightfoot",1,"RightToeBase",1};
		legsLyingAimingPistol[] = {"LeftShoulder",0.2,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"RightShoulder",0.2,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"RightHandRing",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHandRing1",0,"RightHandRing2",0,"RightHandRing3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0,"Spine2",0.8,"Spine3",0.4,"spine1",1,"pelvis",1,"leftupleg",1,"leftuplegroll",1,"leftleg",1,"leftlegroll",1,"leftfoot",1,"LeftToeBase",1,"rightupleg",1,"rightuplegroll",1,"rightleg",1,"rightlegroll",1,"rightfoot",1,"RightToeBase",1};
		headDefault[] = {"head",1,"neck1",0.5,"neck",0.5};
		leaningDefault[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7,"pelvis",0.4};
		crewShake_half[] = {"weapon",0.5,"Camera",0.5,"launcher",0.5,"Head",0.5,"Neck",0.5,"Neck1",0.5,"LeftShoulder",0.45,"LeftArm",0.35,"LeftArmRoll",0.25,"LeftForeArm",0.15,"RightShoulder",0.45,"RightArm",0.35,"RightArmRoll",0.25,"RightForeArm",0.315,"spine3",0.475,"spine2",0.45,"spine1",0.4,"spine",0.35,"pelvis",0.2,"LeftUpLeg",0.1,"LeftUpLegRoll",0.25,"LeftLeg",0.1,"RightUpLeg",0.1,"RightUpLegRoll",0.25,"RightLeg",0.1};
		crewShake[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",0.9,"LeftArm",0.7,"LeftArmRoll",0.5,"LeftForeArm",0.3,"RightShoulder",0.9,"RightArm",0.7,"RightArmRoll",0.5,"RightForeArm",0.3,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7,"pelvis",0.4,"LeftUpLeg",0.2,"LeftUpLegRoll",0.5,"LeftLeg",0.2,"RightUpLeg",0.2,"RightUpLegRoll",0.5,"RightLeg",0.2};
		aimingUpDefault[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		aimingUpCivilKneel[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7,"LeftShoulder",0.95,"LeftArm",0.45,"LeftArmRoll",0.35,"LeftForeArm",0.25,"LeftForeArmRoll",0.15,"RightShoulder",0.95,"RightArm",0.45,"RightArmRoll",0.35,"RightForeArm",0.25,"RightForeArmRoll",0.15};
		aimingUpLying[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.9,"spine2",0.7,"spine1",0.5};
		aimingUpPistol[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		aimingUpCivil[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		aimingUpLauncher[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		legsDefault[] = {"LeftUpLeg",0.9,"LeftUpLegRoll",0.9,"LeftLeg",0.95,"LeftLegRoll",0.95,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",0.9,"RightUpLegRoll",0.9,"RightLeg",0.95,"RightLegRoll",0.95,"RightFoot",1,"RightToeBase",1};
		idleDefault[] = {"Pelvis",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"Camera",1,"weapon",1,"launcher",1,"neck",1,"neck1",1,"head",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftLeg",1,"LeftLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightLeg",1,"RightLegRoll",1,"RightFoot",1,"RightToeBase",1};
		leftHand[] = {"LeftShoulder",0.3,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1};
		launcher[] = {"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"launcher",1,"Spine3",1,"Spine2",0.75,"Spine1",0.5,"Spine",0.25,"weapon",1};
		rightHand[] = {"RightShoulder",0.3,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1};
		handsWeapon_pst[] = {"head",1,"neck1",1,"neck",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.2,"Spine1",0.3,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
		handsWeapon_pst_context[] = {"head",1,"neck1",1,"neck",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",0.7,"Spine2",0.3,"Spine3",0.2};
		handsWeapon[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
		handsWeapon_context[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",0.9,"Spine3",0.8};
		leftHandInfluence[] = {"head",0.2,"neck1",0.3,"neck",0.3,"weapon",0.3,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"Spine",0.2,"Spine1",0.3,"Spine2",1,"Spine3",1};
		head[] = {"head",1,"neck1",0.8,"neck",0.5};
		upperTorso[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
		Legs[] = {"head",0,"neck1",0,"neck",0,"weapon",0,"LeftShoulder",0,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"Spine1",0,"Spine2",0,"Spine3",0,"Spine",0,"Pelvis",0,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		LegRight[] = {"head",0,"neck1",0,"neck",0,"weapon",0,"LeftShoulder",0,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"Spine1",0.3,"Spine2",0,"Spine3",0,"Spine",0,"Pelvis",0,"LeftLeg",0,"LeftLegRoll",0,"LeftUpLeg",0,"LeftUpLegRoll",0,"LeftFoot",0,"LeftToeBase",0,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		LegLeft[] = {"head",0,"neck1",0,"neck",0,"weapon",0,"LeftShoulder",0,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"Spine1",0,"Spine2",0,"Spine3",0,"Spine",0,"Pelvis",0,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",0,"RightLegRoll",0,"RightUpLeg",0,"RightUpLegRoll",0,"RightFoot",0,"RightToeBase",0};
		BodyFullReal[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine1",1,"Spine2",1,"Spine3",1,"Spine",1,"Pelvis",1,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		BodyFullRealRPG[] = {"head",1,"neck1",1,"neck",1,"launcher",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine1",1,"Spine2",1,"Spine3",1,"Spine",1,"Pelvis",1,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		BodyFull[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"Spine1",1,"Spine2",1,"Spine3",1,"Spine",1,"Pelvis",1,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		BodyHalf[] = {"head",0.01,"neck1",0.01,"neck",0.01,"weapon",0.01,"LeftShoulder",0.01,"LeftArm",0.01,"LeftArmRoll",0.01,"LeftForeArm",0.01,"LeftForeArmRoll",0.01,"LeftHand",0.01,"LeftHandRing",0.01,"LeftHandPinky1",0.01,"LeftHandPinky2",0.01,"LeftHandPinky3",0.01,"LeftHandRing1",0.01,"LeftHandRing2",0.01,"LeftHandRing3",0.01,"LeftHandMiddle1",0.01,"LeftHandMiddle2",0.01,"LeftHandMiddle3",0.01,"LeftHandIndex1",0.01,"LeftHandIndex2",0.01,"LeftHandIndex3",0.01,"LeftHandThumb1",0.01,"LeftHandThumb2",0.01,"LeftHandThumb3",0.01,"Spine1",0.01,"Spine2",0.01,"Spine3",0.01,"Spine",0.01,"Pelvis",0.01,"LeftLeg",0.01,"LeftLegRoll",0.01,"LeftUpLeg",0.01,"LeftUpLegRoll",0.01,"LeftFoot",0.01,"LeftToeBase",0.01,"RightLeg",0.01,"RightLegRoll",0.01,"RightUpLeg",0.01,"RightUpLegRoll",0.01,"RightFoot",0.01,"RightToeBase",0.01};
		ReloadMask[] = {"LeftShoulder",0.3,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"RightShoulder",0.3,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"weapon",1};
		Throwing[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
		Throwing_context[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 1, "Spine1", 0.900000, "Spine2", 0.700000, "Spine3", 0.500000};
		upperTorsoRPG[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"launcher",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
	};  
};
