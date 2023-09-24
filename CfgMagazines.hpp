class CfgMagazines
{
    class Default;
    class VehicleMagazine;
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red;
	class 140Rnd_30mm_MP_shells_Tracer_Red;
    class CA_Magazine;
    class ClaymoreDirectionalMine_Remote_Mag;
    class 150rnd_762x51_Box;
    class 150rnd_762x51_Box_Tracer;
    class HandGrenade;

//  L111
    class 4R_127_500Rnd : VehicleMagazine
    {
        scope=2;
        scopeArsenal=2;
        displayname="500rnd L111A1 Ammo Canister";
        displayNameShort=".50";
        ammo="UK3CB_BAF_B_127x99_Ball";
        count=500;
        mass=150;
        initSpeed=670;
        maxLeadSpeed=200;
        tracersEvery=5;
        deleteIfEmpty=0;
		picture="\FourRBG\data\ammocan_co.paa";
  		ace_arsenal_hide = -1;
    };
//  L30A1 120mm Cannon
    class CR2_HESH_Mag : VehicleMagazine
    {
        scope=2;
        scopeArsenal=2;
        displayname="L31A7 HESH";
        displayNameShort="HESH";
		descriptionShort="High Explosive Squash Head Tank Shot </br> Calibre:120mm </br> Used in: L30A1 Tank Cannon";
        ammo="CR2_MPAT_Rnd";
        count=1;
        initSpeed=670;
        maxLeadSpeed=100;
        nameSound="heat";
        tracersEvery=1;
    };
    class CR2_WP_Mag : CR2_HESH_Mag
    {
        displayName="L34A2 Smoke";
        displayNameShort="WP";
		descriptionShort="Smoke Tank Shot </br> Calibre:120mm </br> Used in: L30A1 Tank Cannon";
        ammo="CR2_WP_Rnd";
        count=1;
        initSpeed=670;
    };
    class CR2_FIN_Mag : CR2_HESH_Mag
    {
        displayName="L28A1 APFDS";
        displayNameShort="FIN";
		descriptionShort="Armour Piercing Fin Stabilised Discarding Sabot Tank Shot </br> Calibre:120mm </br> Used in: L30A1 Tank Cannon";
        ammo="CR2_SABOT_Rnd";
        count=1;
        initSpeed=2000;
        nameSound="sabot";
    };
    class CR2_TRG_Mag : CR2_HESH_Mag
    {
        displayName="L32A6 Training Round";
        displayNameShort="TRG";
		descriptionShort="Squash Head Practise Tank Shot </br> Calibre:120mm </br> Used in: L30A1 Tank Cannon";
        ammo="CR2_TRG_Rnd";
        count=1;
        mass=100;
        initSpeed=1650;
    };

//  FV510 Warrior
	class 4R_30mm_AP : 60Rnd_30mm_APFSDS_shells_Tracer_Red
    {
        displayName="3 Rnd Clip, 30mm APDS";
        displayNameShort="APDS";
   		ammo = "4R_30mm_AP";
		picture="\FourRBG\data\ammocan_co.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
        count=3;
		initSpeed = 1175;
		weight = 235;
		mass = 80;
        ace_arsenal_hide = -1;
    };
	class 4R_30mm_HE : 140Rnd_30mm_MP_shells_Tracer_Red
    {
        displayName="3 Rnd Clip, 30mm HE";
        displayNameShort="HE";
		ammo = "4R_30mm_HE";
		picture="\FourRBG\data\ammocan_co.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
        count=3;
		initSpeed = 1070;
		weight = 357;
		mass = 80;
  		ace_arsenal_hide = -1;
    };
	class 4R_762_800Rnd : 150rnd_762x51_Box {
		scope = 2;
		count = 800;
		displayname = "7.62mm 800rnd Belt";
		descriptionshort = "Calibre: 7.62x51mm STANAG<br/>Rounds: 200<br/>Used in: L94A1 7.62<br/>by www.3commandobrigade.com";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		tracersEvery = 10;
		mass = 200;
		ace_arsenal_hide = -1;
	};
	class 4R_762_800Rnd_T : 150rnd_762x51_Box_Tracer {
		scope = 2;
		count = 800;
		displayname = "7.62mm 800rnd Tracer Belt";
		descriptionshort = "Calibre: 7.62x51mm STANAG Tracer (Red)<br/>Rounds: 200<br/>Used in: L94A1 7.62<br/>by www.3commandobrigade.com";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		tracersEvery = 2;
		mass = 200;
		ace_arsenal_hide = -1;
	};
//  Small Arms
    class UK3CB_BAF_12G_Pellets : CA_Magazine
    {
        deleteIfEmpty=1;
    };
    class UK3CB_BAF_12G_Slugs : UK3CB_BAF_12G_Pellets
    {
        deleteIfEmpty=1;
    };
    class UK3CB_BAF_762_100Rnd : 150Rnd_762x51_Box
    {
        deleteIfEmpty=1;
    };
    class UK3CB_BAF_762_100Rnd_Blank : UK3CB_BAF_762_100Rnd
    {
        deleteIfEmpty=1;
    };
    class UK3CB_BAF_762_100Rnd_T : 150Rnd_762x51_Box_Tracer
    {
        deleteIfEmpty=1;
    };
    class UK3CB_BAF_762_200Rnd : UK3CB_BAF_762_100Rnd
    {
        deleteIfEmpty=-1;
    };
    class UK3CB_BAF_762_200Rnd_Blank : UK3CB_BAF_762_100Rnd_Blank
    {
        deleteIfEmpty=-1;
    };
    class UK3CB_BAF_762_200Rnd_T : UK3CB_BAF_762_100Rnd_T
    {
        deleteIfEmpty=-1;
    };
    class 16rnd_9x21_mag;
    class ace_16rnd_9x19_mag;
    class 4R_GSP_17rnd : ace_16rnd_9x19_mag
    {
        scope=2;
        type=16;
        author="4 Rifles Milsim";
        descriptionshort="Calibre: 9x19mm <br/>Rounds:17<br/>Used in: L113A1 GSP";
        displayname="17rnd 9mm GSP Magazine";
        displaynameshort="9mm";
        ammo="4R_9x19";
   		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Ammo\data\gear_magazine_glock_ca.paa";
		model = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Ammo\uk3cb_L131A1mag.p3d";
		mass = 6;
		count = 17;
		tracersEvery = 0;
		lastRoundsTracer = 0;
        initSpeed=390.1;
    };
    class 4R_GSP_17Rnd_Blank : 4R_GSP_17rnd
    {
        descriptionshort="Calibre: 9x19mm Blanks<br/>Rounds:17<br/>Used in: L113A1 GSP";
        displayname="17rnd 9mm GSP Blank Magazine";
        displaynameshort="9mm Blank";
        ammo="4R_9x19_B";
    };

//  Chemlight > Cyalume rename.
    class SmokeShell;
    class Chemlight_Green : SmokeShell
    {
        displayName="Cyalume, Green";
    };
    class Chemlight_Blue : Chemlight_Green
    {
        displayName="Cyalume, Blue";
    };
    class Chemlight_Red : Chemlight_Green
    {
        displayName="Cyalume, Red";
    };
    class Chemlight_Yellow : Chemlight_Green
    {
        displayName="Cyalume, Yellow";
    };
    class ACE_Chemlight_Orange : Chemlight_Green
    {
        displayName="Cyalume, Orange";
    };
    class ACE_Chemlight_White : Chemlight_Green
    {
        displayName="Cyalume, White";
    };
    class ACE_Chemlight_HiRed : Chemlight_Red
    {
        displayName="Cyalume, Tactical Boundary";
    };
    class ACE_Chemlight_HiYellow : Chemlight_Yellow
    {
        displayName="Cyalume, Logistics Resupply";
    };
    class ACE_Chemlight_HiWhite : ACE_Chemlight_White
    {
        displayName="Cyalume, Harbour Area";
    };
    class ACE_Chemlight_HiBlue : Chemlight_Blue
    {
        displayName="Cyalume, Friendly Position";
    };
    class ACE_Chemlight_HiGreen : Chemlight_Green
    {
        displayName="Cyalume, Building Clear Marker";
    };
    class ACE_Chemlight_UltraHiOrange : ACE_Chemlight_Orange
    {
        displayName="Cyalume, Medical Emergency";
    };

//  Thrown
    class 4R_L109_Mag : HandGrenade
    {
		displayname = "L109A2 HE Grenade";
		displaynameshort = "L109";
   		descriptionshort = "Hand Grenade, Fragmentation, L109A2<br/>Minimum safe distance: 5 metres";
        ammo="4R_109_ammo";
        mass=8.8;
    };
}