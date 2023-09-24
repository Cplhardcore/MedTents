//	IMS Bayonet Compat
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot
{
	class compatibleItems
	{};
};
class UK3CB_MuzzleSlot_556_L85: asdg_MuzzleSlot_556
{
	class compatibleItems
	{
		UK3CB_BAF_Bayonet_L3A1 = 1;
		4R_Bayonet = 1;
	};
};

// General Service Respirator
class CfgGlasses
{
	class None;
	class MK50;
	class 4R_MK50: MK50
	{
		displayname = "General Service Respirator";
		_generalMacro = "MK50";
		model = "\MK50\MK502.p3d";
		author = "OST [75th Ranger] & chazbotic Edited by S. McMullins";
		dlc = "CSW MOD";
		picture = "\MK50\UI\CPE_MK50.paa";
		ACE_Overlay = "\MK50\data\MCU_HUD.paa";
		ACE_OverlayCracked = "\MK50\data\MCU_HUD_Cracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ace_gasmask = 1;
		mass = 9.9;
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
};

class UK3CB_MuzzleSlot_900_L131;
class UK3CB_FrontSideRail_L131;
class CfgWeapons
{
//	References
	class Pistol;
	class Pistol_Base_F;
	class Weap_melee_knife;
	class Knife_m3;
	class GrenadeLauncher;
	class hgun_P07_F;
//	L3 Bayonet
	class 4R_Bayonet_Melee:Knife_m3
	{
		picture="\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L3A1\UI\L3A1_ca";
		displayname="L3A1 Bayonet (Melee)";
		descriptionShort="L3A1 Bayonet, ready to stab people.";
		IMS_Melee_Param_Damage=0.25;
		class WeaponSlotsInfo
		{
			mass=5;
		};
	};
//	General Service Pistol
	class 4R_GSP : hgun_P07_F
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		author="www.3commandobrigade.com";
		displayName="General Service Pistol";
		descriptionShort="The L131A1 General Service Pistol <br>Calibre:9x19mm";
		model="UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L131A1\uk3cb_L131A1.p3d";
		picture="\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L131A1\data\ui\gear_l131a1_ca.paa";
		magazines[]=
		{
			"4R_GSP_17rnd",
			"4R_GSP_17Rnd_Blank"
		};
		initSpeed=375;
		reloadTime=0.055;
		inertia=0.1;
		dexerity=5.5999999;
		ace_ironSightBaseAngle=0;
		class WeaponSlotsInfo
		{
			holsterScale=0.85000002;
			mass=14;
			class MuzzleSlot: UK3CB_MuzzleSlot_900_L131
			{
			};
			class PointerSlot: UK3CB_FrontSideRail_L131
			{
			};
		};
	};
//	Weapon Attachments
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H;
	class 4R_Bayonet : muzzle_snds_H
	{
		scope=2;
		displayName="L3A1 Bayonet (Muzzle)";
		descriptionShort="L3A1 Bayonet, mount to rifle to stab people.";
		author="4 Rifles Milsim";
		IMS_Bayonet_Item="true";
		picture="\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L3A1\UI\L3A1_ca";
		model="\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L3A1\UK3CB_BAF_L3A1_Bayonet.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=1;
				audibleFire=1;
				visibleFireTime=1;
				audibleFireTime=1;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			class MuzzleCoef
			{
				dispersionCoef="1.0f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=0;
			inertia=0.2;
		};
	};
//	Vehicle Weapons
	class cannon_125mm;
	class CR2_L30A1 : cannon_125mm
	{
		scope=1;
		displayname="L30A1";
		magazines[]=
		{
			"CR2_FIN_Mag",
			"CR2_HESH_Mag",
			"CR2_WP_Mag",
			"CR2_TRG_Mag"
		};
		reloadTime=0.5;
		magazineReloadTime=0.5;
		autoReload=1;
		backgroundReload=1;
		ballisticsComputer=16;
	};
	class MGun;
	class LMG_RCWS : MGun
	{
		class manual;
	};
	class LMG_coax;
	class UK3CB_BAF_L94A1_veh : LMG_coax
	{
		displayName="L94A1 Ex Chaingun";
		magazines[]=
		{
			"4R_762_800Rnd_T",
			"4R_762_800Rnd",
			"UK3CB_BAF_762_200Rnd_T",
			"UK3CB_BAF_762_200Rnd",
			"4R_762_800Rnd_Blank",
			"UK3CB_BAF_762_200Rnd_Blank"
		};
		magazineReloadTime=5;
		ballisticsComputer=16;
		autoReload=1;
	};
	class HMG_01;
	class HMG_02 : HMG_01
	{
		class GunParticles;
		class manual;
	};
	class UK3CB_BAF_L111A1_vehicle : HMG_02
	{};
	class 4R_L111A1 : UK3CB_BAF_L111A1_vehicle
	{
		displayName="L111A1 RWS";
		magazines[]=
		{
			"4R_127_500Rnd"
		};
		reloadTime=2;
		magazineReloadTime=10;
		autoReload=1;
		ballisticsComputer=16;
	};
	class Autocannon_Base_F;
	class Autocannon_30mm_CTWS : Autocannon_Base_F
	{
		class HE : Autocannon_Base_F
		{
			class player;
		};
		class AP : Autocannon_Base_F
		{
			class player;
		};
	};
	class autocannon_30mm : autocannon_30mm_CTWS
	{};
	class UK3CB_BAF_L21A1_Rarden : autocannon_30mm
	{};
	class 4R_RARDEN : UK3CB_BAF_L21A1_Rarden
    {
        displayname="L21A1 RARDEN";
        muzzles[]={"HE","AP"};
        class HE : HE
        {
            displayName="L21A1 RARDEN";
            magazines[]={"4R_30mm_HE"};
            magazineReloadTime=1;
            ballisticsComputer=16;
            FCSZeroingDelay=3;
            class player : player
            {
                autoFire=0;
            };
        };
        class AP : AP
        {
            displayName="L21A1 RARDEN";
            magazines[]={"4R_30mm_AP"};
            magazineReloadTime=1;
            ballisticsComputer=16;
            FCSZeroingDelay=3;
            class player : player
            {
                autoFire=0;
            };
        };
    };
//	Headgear - Berets
	class ItemCore;
	class HelmetBase:ItemCore
	{
		class ItemInfo;
	};
	class HeadgearItem;
	class UK3CB_BAF_H_Beret_Base;
	class UK3CB_BAF_H_Boonie_Base;
	class UK3CB_BAF_H_Beret_Rifles;
	class UK3CB_BAF_H_Beret_Rifles_PRR;
	class UK3CB_BAF_H_Beret_RTR;
	class UK3CB_BAF_H_Boonie_MTP_PRR;

	class 4R_Beret_Parade: UK3CB_BAF_H_Beret_Rifles
	{
		scope=2;
		author="4 Rifles Milsim";
		displayName="Parade Beret";
		picture="\uk3cb_baf_equipment\berets\ui\gear_beret_green_ca.paa";
		model="\uk3cb_baf_equipment\berets\Beret.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\uk3cb_baf_equipment\berets\data\Beret_Rifle_co"
		};
		UK3CB_Secondary_headgear = 0;
		class ItemInfo : HeadGearItem
		{
			uniformModel="\uk3cb_baf_equipment\berets\Beret.p3d";
			mass=2;
			allowedSlots[]={701,801,901,605};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class 4R_Beret_QRH: UK3CB_BAF_H_Beret_Base
	{
		scope=2;
		author="4 Rifles Milsim";
		displayName = "QRH Beret";
		picture="\uk3cb_baf_equipment\berets\ui\gear_beret_green_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[]=
        {
            "\FourRBG\Berets\Retexture\Beret_QRH_co"
        };
		UK3CB_Secondary_headgear=0;
		class ItemInfo : HeadGearItem
		{
			uniformModel="\uk3cb_baf_equipment\berets\Beret.p3d";
			mass=2;
			allowedSlots[]={701,801,901,605};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class 4R_Beret_REME: UK3CB_BAF_H_Beret_Base
    {
        scope=2;
        author="4 Rifles Milsim";
        displayName="REME Beret";
        picture="\FourRBG\Berets\Icons\REME_Icon.paa";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[]=
        {
            "\FourRBG\Berets\Retexture\REME"
        };
		UK3CB_Secondary_headgear=0;
		class ItemInfo : HeadGearItem
		{
			uniformModel="\uk3cb_baf_equipment\berets\Beret.p3d";
			mass=2;
			allowedSlots[]={701,801,901,605};
			hiddenSelections[]=
			{
				"camo"
			};
		};
    };
	class 4R_Beret_ICorp : UK3CB_BAF_H_Beret_Base
	{
		scope = 2;
		author="4 Rifles Milsim";
		displayName="MI Beret";
		mass=2;
		picture="\FourRBG\Berets\Icons\REME_Icon.paa";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[]=
        {
            "\FourRBG\Berets\Retexture\ICorp"
        };
		UK3CB_Secondary_headgear=0;
		class ItemInfo : HeadGearItem
		{
			uniformModel="\uk3cb_baf_equipment\berets\Beret.p3d";
			mass=2;
			allowedSlots[]={701,801,901,605};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class 4R_Beret_RAMC: UK3CB_BAF_H_Beret_Base
	{
		scope=2;
		author="4 Rifles Milsim";
		displayName="RAMC Beret";
		mass=2;
		picture="\uk3cb_baf_equipment\berets\ui\gear_beret_blue_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\uk3cb_baf_equipment\berets\data\Beret_RAMCOff_co"
		};
		UK3CB_Secondary_headgear=0;
		class ItemInfo : HeadGearItem
		{
			uniformModel="\uk3cb_baf_equipment\berets\Beret.p3d";
			mass=2;
			allowedSlots[]={701,801,901,605};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class 4R_Beret_RTR: UK3CB_BAF_H_Beret_RTR
	{
		scope=2;
		author="4 Rifles Milsim";
		displayName="RTR Beret";
		mass=2;
		picture="\uk3cb_baf_equipment\berets\ui\gear_beret_blue_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\uk3cb_baf_equipment\berets\data\Beret_RTR_co"
		};
		UK3CB_Secondary_headgear=0;
		class ItemInfo : HeadGearItem
		{
			uniformModel="\uk3cb_baf_equipment\berets\Beret.p3d";
			mass=2;
			allowedSlots[]={701,801,901,605};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class 4R_Beret_Patrol: UK3CB_BAF_H_Beret_Rifles_PRR
	{
		scope=2;
		author="4 Rifles Milsim";
		displayName="Patrol Beret, Rifles";
		mass=5;
		hiddenSelectionsTextures[]=
		{
			"\FourRBG\Berets\Retexture\Beret_Rifle_blk_co.paa";
		};
	};
	class 4R_Beret_Patrol_REME: UK3CB_BAF_H_Beret_Rifles_PRR
	{
		scope=2;
		author="4 Rifles Milsim";
		displayName="Patrol Beret, REME";
		mass=5;
        picture="\FourRBG\Berets\Icons\REME_Icon.paa";
		hiddenSelectionsTextures[]=
		{
            "\FourRBG\Berets\Retexture\REME"
		};
	};
	class 4R_Beret_Patrol_RAMC: UK3CB_BAF_H_Beret_Rifles_PRR
	{
		scope=2;
		author="4 Rifles Milsim";
		displayName="Patrol Beret, RAMC";
		mass=5;
        picture="\uk3cb_baf_equipment\berets\ui\gear_beret_blue_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\uk3cb_baf_equipment\berets\data\Beret_RAMCOff_co"
		};
	};
	class 4R_Boonie_Patrol: UK3CB_BAF_H_Boonie_MTP_PRR
	{
		scope=2;
		author="4 Rifles Milsim";
		displayName="Patrol Hat";
		mass=2.5;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\UK3CB_BAF_Equipment\Boonie\data\boonie_mtp_co"
		};
	};
//	Headgear - Helmets
	class H_HelmetB;
	class UK3CB_BAF_H_Helmet_Base;
	class UK3CB_BAF_H_Mk7_Camo_A;
	class 4R_Mk7_A:UK3CB_BAF_H_Mk7_Camo_A
	{
		displayName="Warrior Crew Helmet";
		ace_hearing_protection=1.00;
		ace_hearing_lowerVolume=0.40;
	};
	class UK3CB_BAF_H_Mk7_Camo_ESS_A;
	class 4R_Mk7_A_ESS:UK3CB_BAF_H_Mk7_Camo_ESS_A
	{
		displayName="Warrior Crew Helmet (Goggles)";
		ace_hearing_protection=1.00;
		ace_hearing_lowerVolume=0.40;
	};
	class UK3CB_BAF_H_Mk7_Camo_CESS_A;
	class 4R_Mk7_A_CESS:UK3CB_BAF_H_Mk7_Camo_CESS_A
	{
		displayName="Warrior Crew Helmet (Covered Goggles)";
		ace_hearing_protection=1.00;
		ace_hearing_lowerVolume=0.40;
	};
	class UK3CB_BAF_H_Mk7_Net_A;
	class 4R_Mk7_A_Net:UK3CB_BAF_H_Mk7_Net_A
	{
		displayName="Warrior Crew Helmet (Net)";
		ace_hearing_protection=1.00;
		ace_hearing_lowerVolume=0.40;
	};
	class UK3CB_BAF_H_Mk7_Net_ESS_A;
	class 4R_Mk7_A_Net_ESS:UK3CB_BAF_H_Mk7_Net_ESS_A
	{
		displayName="Warrior Crew Helmet (Net & Goggles)";
		ace_hearing_protection=1.00;
		ace_hearing_lowerVolume=0.40;
	};
	class UK3CB_BAF_H_Mk7_Scrim_A;
	class 4R_Mk7_A_Scrim:UK3CB_BAF_H_Mk7_Scrim_A
	{
		displayName="Warrior Crew Helmet (Scrim)";
		ace_hearing_protection=1.00;
		ace_hearing_lowerVolume=0.40;
	};
	class UK3CB_BAF_H_Mk7_Scrim_ESS_C;
	class 4R_Mk7_A_Scrim_ESS:UK3CB_BAF_H_Mk7_Scrim_ESS_C
	{
		displayName="Warrior Crew Helmet (Scrim & Goggles)";
		ace_hearing_protection=1.00;
		ace_hearing_lowerVolume=0.40;
	};
//	Vest Items
	class VestItem;
	class Vest_Camo_base:ItemCore
	{
		class ItemInfo;
	};
	class 4R_SectComdVest : ItemCore
	{
		scope = 2;
		author="Blaze";
		weaponPoolAvailable=1;
		allowedSlots[]={};
		displayName = "Commanders Vest";
		picture="MOD_V\MOD_Icon.paa";
		model="MOD_V\Models\Virtus_A.p3d";
		hiddenSelections[]=
		{
			"Patch_Vest"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="MOD_V\Models\Virtus_A.p3d";
			containerClass="Supply200";
			mass=80;
			hiddenSelections[]=
			{
				"Patch_Vest"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=28;
					PassThrough=0.05;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=28;
					PassThrough=0.05;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=28;
					PassThrough=0.05;

				};
				class Body
				{
					hitpointName="HitBody";
					armor=28;
					PassThrough=0.05;
				};
			};
		};
	};
//	Medical Items
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class 4R_IFAK: ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\Medic_Pouch.paa";
		displayName="Emergency Aid Kit";
		descriptionShort="This is for use on others! Open it using the ACE interaction menu, and stabilise your friends, you may also be required to open this to treat yourself.";
		descriptionUse="";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=20.5;
		};
	};
	class 4R_IFAK2: ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\basicTrauma.paa";
		displayName="Individual Trauma Kit";
		descriptionShort="For ease of resupply, this will give you enough to treat a wound.";
		descriptionUse="";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=1.0;
		};
	};
	class 4R_BANDAGES: ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\EAK.paa";
		displayName="Bandage Resupply Kit";
		descriptionShort="This is a resupply kit for Team Medics or CMTs. /nContains: 30 Quikclot, 15 Elastic and 12 Packing Bandges.";
		descriptionUse="";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=1.0;
		};
	};
	class 4R_CONSUMABLES: ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\EAK.paa";
		displayName="Medical Items Resupply Kit";
		descriptionShort="This is a resupply kit for Team Medics or CMTs. /nContains: 3 x 16g IV, 2 x Plasma 1000ml IV, 2 x King LT, 2 x Blood 500ml IV, 2 x SAM Splint.";
		descriptionUse="";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=1.0;
		};
	};
	class 4R_DRUGS: ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\EAK.paa";
		displayName="Drug Resupply Kit";
		descriptionShort="This is a resupply kit for Team Medics or CMTs. /nContains: 4 x EACA, 2 x TXA, 2 x Phenylephrine, 2 x Epi & 2 x Adenosine Auto-Injector /n 1 x Atropine & 1 x Painkillers.";
		descriptionUse="";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=1.0;
		};
	};
	class 4R_MASCAS: ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\rifles_capbadge.paa";
		displayName="Mass Casualty Kit";
		descriptionShort="For those situations where you need a lot of medical supplies, and quickly!";
		descriptionUse="";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=400;
		};
	};
//	Food Items
	class 4R_DDecker:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\double_decker.paa";
		displayName="Double Decker";
		descriptionShort="Yummy chocolate bar, eat it or trade it.";
		acex_field_rations_hungerSatiated=5;
		acex_field_rations_consumeTime=1;
		acex_field_rations_consumeText="Aren't these supposed to be red? And Buses?";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=2.0;
		};
	};
	class 4R_mars:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\mars_co.paa";
		displayName="Mars Bar";
		descriptionShort="Yummy mars bar, eat it or trade it.";
		acex_field_rations_hungerSatiated=5;
		acex_field_rations_consumeTime=1;
		acex_field_rations_consumeText="Scranning a Mars";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=2.0;
		};
	};
	class 4R_marsdf:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\deepfriedmars_co.paa";
		displayName="Deep Fried Mars Bar";
		descriptionShort="Deep fried (just don't ask where) Mars";
		acex_field_rations_hungerSatiated=15;
		acex_field_rations_consumeTime=5;
		acex_field_rations_consumeText="Tastes like engine oil...";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=2.0;
		};
	};
	class 4R_haribo:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\haribo_icon.paa";
		displayName="Bag of Haribo";
		descriptionShort="Kids and grown ups love them so/nthe happy world of Haribo/nMoralebo for the Copper.";
		acex_field_rations_hungerSatiated=15;
		acex_field_rations_consumeTime=10;
		acex_field_rations_consumeText="Feel the Morale flow into you.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=2.0;
		};
	};
	class 4R_irnbru:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\irnbru_co.paa";
		displayName="Can of IrnBru";
		descriptionShort="Irn-Bru. Gets you through. Scotland's 2nd most popular drink.";
		acex_field_rations_thirstQuenched=15;
		acex_field_rations_consumeTime=5;
		acex_field_rations_consumeText="Getting you through!";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=4.0;
		};
	};
	class 4R_kron:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\kron_co.paa";
		displayName="Can of Kronenbourg";
		descriptionShort="Why not, you've earnt it!";
		acex_field_rations_thirstQuenched=100;
		acex_field_rations_consumeTime=20;
		acex_field_rations_consumeText="Nothing like nutty numbers!";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=4.0;
		};
	};
	class 4R_camelbak_full:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\camelbak_icon.paa";
		displayName="Camelbak";
		descriptionShort="Camelbak filled with water.";
		acex_field_rations_thirstQuenched=20;
		acex_field_rations_consumeTime=5;
		acex_field_rations_consumeText="Ah, refreshing totally not stagnant water!";
		acex_field_rations_replacementItem="4R_camelbak_110";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=0;
			allowedSlots[]={901};
		};
	};
	class 4R_camelbak_110:ACE_ItemCore
	{
		scope=1;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\camelbak_icon.paa";
		displayName="Camelbak";
		descriptionShort="Camelbak partially filled with water.";
		acex_field_rations_thirstQuenched=20;
		acex_field_rations_consumeTime=5;
		acex_field_rations_consumeText="Ah, refreshing totally not stagnant water!";
		acex_field_rations_refillAmount=0.3;
		acex_field_rations_refillTime=10;
		acex_field_rations_replacementItem="4R_camelbak_210";
		acex_field_rations_refillItem="4R_camelbak_full";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=0;
			allowedSlots[]={901};
		};
	};
	class 4R_camelbak_210 : 4R_camelbak_110
	{
		acex_field_rations_refillAmount=0.6;
		acex_field_rations_refillTime=20;
		acex_field_rations_replacementItem="4R_camelbak_310";
	};
	class 4R_camelbak_310 : 4R_camelbak_110
	{
		acex_field_rations_refillAmount=0.9;
		acex_field_rations_refillTime=30;
		acex_field_rations_replacementItem="4R_camelbak_410";
	};
	class 4R_camelbak_410 : 4R_camelbak_110
	{
		acex_field_rations_refillAmount=1.2;
		acex_field_rations_refillTime=40;
		acex_field_rations_replacementItem="4R_camelbak_510";
	};
	class 4R_camelbak_510 : 4R_camelbak_110
	{
		acex_field_rations_refillAmount=1.5;
		acex_field_rations_refillTime=50;
		acex_field_rations_replacementItem="4R_camelbak_610";
	};
	class 4R_camelbak_610 : 4R_camelbak_110
	{
		acex_field_rations_refillAmount=1.8;
		acex_field_rations_refillTime=60;
		acex_field_rations_replacementItem="4R_camelbak_710";
	};
	class 4R_camelbak_710 : 4R_camelbak_110
	{
		acex_field_rations_refillAmount=2.1;
		acex_field_rations_refillTime=70;
		acex_field_rations_replacementItem="4R_camelbak_810";
	};
	class 4R_camelbak_810 : 4R_camelbak_110
	{
		acex_field_rations_refillAmount=2.4;
		acex_field_rations_refillTime=80;
		acex_field_rations_replacementItem="4R_camelbak_910";
	};
	class 4R_camelbak_910 : 4R_camelbak_110
	{
		acex_field_rations_refillAmount=2.7;
		acex_field_rations_refillTime=90;
		acex_field_rations_replacementItem="4R_camelbak_empty";
	};
	class 4R_camelbak_empty : ACE_ItemCore
	{
		scope=1;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\camelbak_empty_icon.paa";
		displayName="Camelbak (Empty)";
		descriptionShort="Camelbak not filled with water. Refill this as soon as possible.";
		acex_field_rations_refillAmount=3;
		acex_field_rations_refillTime=100;
		acex_field_rations_refillItem="4R_camelbak_full";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=0;
			allowedSlots[]={901};
		};
	};
	class 4R_jerry_can:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\water_can.paa";
		displayName="Jerry Can (Water)";
		descriptionShort="'Jerry can' with 20 litres of water. British Army's finest.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=400;
		};
	};
//	Bandoliers
	class 4R_bandolier_556:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\5.56_bandolier.paa";
		displayName="5.56mm Bandolier";
		descriptionShort="Contains 150 5.56mm rounds in boxes";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=50.0;
		};
	};
	class 4R_bandolier_762:4R_bandolier_556
	{
		displayName="7.62mm Bandolier";
		picture="\FourRBG\data\7.62_bandolier.paa";
		descriptionShort="Contains 120 7.62mm rounds in boxes";
	};
	class 4R_bandolier_40mm:4R_bandolier_556
	{
		displayName="40mm Bandolier";
		descriptionShort="Contains 7 40mm HE and 4 40mm HEDP rounds";
	};
	class 4R_bandolier_40mmsmk:4R_bandolier_556
	{
		displayName="40mm Smoke Bandolier";
		descriptionShort="Contains 4 40mm White Smoke and 1 40mm Red Smoke";
	};
	class 4R_bandolier_40mmflare:4R_bandolier_556
	{
		displayName="40mm Flare Bandolier";
		descriptionShort="Contains 40mm Flares";
	};
	class 4R_bandolier_tracer:4R_bandolier_556
	{
		displayName="Tracer Bandolier";
		descriptionShort="Contains 120 5.56mm tracers and 30 7.62 tracers.";
	};
//	Radios
	class ACRE_BaseRadio;
	class ACRE_PRC343 : ACRE_BaseRadio
	{
		displayName = "H4855 PRR";
		descriptionShort = "The Marconi H4855 Personal role radio is primarily used by infantry fireteam (Section level and below) for intra section communications and small unit tactics.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 33;
		};
	};
	class ACRE_PRC152 : ACRE_BaseRadio
	{
		displayName = "UK/PRC354";
		descriptionShort = "The UK/PRC354 is a UK Type 1 (Pritchel) encrypted section to platoon-level 5W VHF Portable Transceiver (VPT)";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 74.5;
		};
	};
//	Damaged Items
	class 4R_343_DAMAGED:ACE_ItemCore
	{
		scope=1;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\prc343_broken_icon.paa";
		displayName="H4855 PRR (Broken)";
		descriptionShort="This was a short range radio, it's now totally fucked.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=33;
		};
	};
	class 4R_152_DAMAGED:ACE_ItemCore
	{
		scope=1;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\prc152_broken_icon.paa";
		displayName="UK/PRC354 (Broken)";
		descriptionShort="This was a medium range radio, it's now totally fucked.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=88;
		};
	};
	class 4R_177_DAMAGED:ACE_ItemCore
	{
		scope=1;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\prc117F_broken_icon.paa";
		displayName="AN/PRC-117F (Broken)";
		descriptionShort="This was a long range radio, it's now totally fucked.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=120;
			allowedSlots[]={901};
		};
	};
//	Written Material
	class 4R_EPW_TAG:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\tag.paa";
		displayName="Capture Card";
		descriptionShort="This is a capture card, use it to record place of capture of EPW.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
	class 4R_MIST_TAG:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\tag.paa";
		displayName="MIST Tag";
		descriptionShort="Apply this to Casualties to inform the treatment chain of what treatment has been done and what is needed.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
	class 4R_COMD_AD:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\aidememoire_icon.paa";
		displayName="Commander's Aide Memoire";
		descriptionShort="This Aide Memoire is for Commanders from the 2iC to Section level/nContaining several pages of reference material to assist with commanding./nUse ACE Self Interactions and Hotkeys to access.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=0;
			allowedSlots[]={801};
		};
	};
	class 4R_BCD_AD:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\aidememoire_icon.paa";
		displayName="Battlefield Casualty Drills Aide Memoire";
		descriptionShort="This Aide Memoire is for e-soldiers to quickly reference for Battlefield Casualty Drills /nContaining several pages of reference material to provide medical prompts./nUse ACE Self Interactions to access.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=0;
			allowedSlots[]={801};
		};
	};
//	Vehicle Ammo
	class CR2_HESH_Item:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\L31A7_HESH.paa";
		displayName="L31A7 HESH";
		descriptionShort="High Explosive Squash Head Tank Shot </br> Calibre:120mm </br> Used in: L30A1 Tank Cannon";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=100;
		};
	};
	class CR2_WP_Item:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\rifles_capbadge.paa";
        displayName="L34A2 Smoke";
		descriptionShort="Smoke Tank Shot </br> Calibre:120mm </br> Used in: L30A1 Tank Cannon";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=100;
		};
	};
	class CR2_FIN_Item:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\rifles_capbadge.paa";
		displayName="L28A1 APFDS";
		descriptionShort="Armour Piercing Fin Stabilised Discarding Sabot Tank Shot </br> Calibre:120mm </br> Used in: L30A1 Tank Cannon";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=100;
		};
	};
	class CR2_TRG_Item:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\rifles_capbadge.paa";
        displayName="L32A6 Training Round";
		descriptionShort="Squash Head Practise Tank Shot </br> Calibre:120mm </br> Used in: L30A1 Tank Cannon";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=100;
		};
	};
	class CR2_CHARGE_Item:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\rifles_capbadge.paa";
		displayName="L3 Propellant Charge";
		descriptionShort="Cloth bag charge used to fire the L30A1 cannon";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=100;
		};
	};
	class 4R_Ammobox_30HE:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\ammocan_co.paa";
		displayName="RARDEN 15rnd HE Ammobox";
		descriptionShort="Contains 15 HE rounds for the RARDEN cannon.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=400;
		};
	};
	class 4R_Ammobox_30AP:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\ammocan_co.paa";
		displayName="RARDEN 15rnd APDS Ammobox";
		descriptionShort="Contains 15 APDS rounds for the RARDEN cannon.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=400;
		};
	};
//	Logistics Kit
	class 4R_CPERSKIT:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\CPERSKIT.paa";
		displayName="CPER's Kit";
		descriptionShort="This is for Commander's to process captured persons.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class 4R_Evidence_Bag:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\rifles_capbadge.paa";
		displayName="Evidence Bag";
		descriptionShort="Store the enemy combatant's weapons and any other evidence or non-personal equipment within this bag.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=0.8;
		};
	};
	class 4R_ACETrack:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\rifles_capbadge.paa";
		displayName="Replacement Track Pad";
		descriptionShort="A replacement pad for damaged tracks.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150;
		};
	};
	class 4R_PE4:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\pe4.paa";
		displayName="PE4 Brick";
		descriptionShort="A large brick of explosive materials.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150;
		};
	};
//	Mortar Cases
	class 4R_bandolier_Mortar_HE:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\bandolier_co.paa";
		displayName="60mm Case - HE";
		descriptionShort="Contains 4 60mm HE Mortar Bombs.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150.0;
		};
	};
	class 4R_bandolier_Mortar_SMK:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\bandolier_co.paa";
		displayName="60mm Case - Smoke";
		descriptionShort="Contains 4 60mm White Phosphorous Smoke Mortar Bombs.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150.0;
		};
	};
	class 4R_bandolier_Mortar_SUP:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\bandolier_co.paa";
		displayName="60mm Case - Support";
		descriptionShort="Contains 1 60mm Red Smoke and 3 60mm White Flare Mortar Bombs.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150.0;
		};
	};
//	Ammoboxes
	class 4R_Ammobox_SmokeLauncher:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\ammocan_co.paa";
		displayName="66mm Smoke Grenade Case";
		descriptionShort="Contains 8 66mm Red Visual and Infrared Screening Smoke (VIRSS) grenades.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150.0;
		};
	};
	class 4R_bandolier_L109:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\ammocan_co.paa";
		displayName="HE Grenade, Hand Box";
		descriptionShort="Contains 10 L109A2 Hand Grenades";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150.0;
		};
	};
	class 4R_bandolier_L50:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\ammocan_co.paa";
		displayName="Screening Smoke Grenade Hand Box";
		descriptionShort="Contains 12 L50A1 White Smoke Grenades";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150.0;
		};
	};
	class 4R_bandolier_csmk:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\ammocan_co.paa";
		displayName="Mixed, Smoke Grenade Hand Box";
		descriptionShort="Contains 3 Screening grenades and 4 Coloured smoke grenades.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150.0;
		};
	};
	class 4R_Ammobox_556:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\ammocan_co.paa";
		displayName="5.56 Ammo Canister (800 Rnds)";
		descriptionShort="Contains 810 5.56 ball ammunition in boxes.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150.0;
		};
	};
	class 4R_Ammobox_762:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\ammocan_co.paa";
		displayName="7.62 Ammo Canister (200 Rnds)";
		descriptionShort="Contains 210 7.62 ball ammunition in boxes.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=150.0;
		};
	};
}