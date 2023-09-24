#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class 4Rifles
	{
		name="4 Rifles Milsim Config Edits";
		units[]=
		{
			"4R_Warrior",
			"4R_Challenger",
			"4R_CET",
			"4R_FV432_MC",
			"4R_FV432_Log",
			"4R_FV432_Amb",
			"4R_Scimitar",
			"4R_FV513",
			"4R_FV511",
			"4R_Wolfhound",
			"4R_AFM_RifleLizard"
		};
		weapons[]=
		{
			"4R_MK50",
			"4R_Bayonet_Melee",
			"4R_GSP2",
			"4R_Throw_L109",
			"4R_Bayonet",
			"CR2_L30A1",
			"4R_L111A1",
			"4R_RARDEN",
			"4R_Beret_Parade",
			"4R_Beret_REME",
			"4R_Beret_ICorp",
			"4R_Beret_RAMC",
			"4R_Beret_RTR",
			"4R_Beret_Patrol",
			"4R_Beret_Patrol_REME",
			"4R_Beret_Patrol_RAMC",
			"4R_Boonie_Patrol",
			"4R_Mk7_A",
			"4R_Mk7_A_CESS",
			"4R_Mk7_A_ESS",
			"4R_Mk7_A_Net",
			"4R_Mk7_A_Net_ESS",
			"4R_Mk7_A_Scrim",
			"4R_Mk7_A_Scrim_ESS",
			"4R_IFAK",
			"4R_IFAK2",
			"4R_BANDAGES",
			"4R_CONSUMABLES",
			"4R_DRUGS",
			"4R_MASCAS",
			"4R_mars",
			"4R_marsdf",
			"4R_haribo",
			"4R_irnbru",
			"4R_kron",
			"4R_camelbak_full",
			"4R_camelbak_110",
			"4R_camelbak_210",
			"4R_camelbak_310",
			"4R_camelbak_410",
			"4R_camelbak_510",
			"4R_camelbak_610",
			"4R_camelbak_710",
			"4R_camelbak_810",
			"4R_camelbak_910",
			"4R_camelbak_empty",
			"4R_jerry_can",
			"4R_bandolier_556",
			"4R_bandolier_762",
			"4R_bandolier_40mm",
			"4R_bandolier_40mmsmk",
			"4R_bandolier_tracer",
			"4R_343_DAMAGED",
			"4R_152_DAMAGED",
			"4R_177_DAMAGED",
			"4R_EPW_TAG",
			"4R_MIST_TAG",
			"4R_COMD_AD",
			"4R_BCD_AD",
			"4R_CPERSKIT",
			"4R_Evidence_Bag",
			"4R_ACETrack",
			"4R_PE4",
			"4R_bandolier_Mortar_HE",
			"4R_bandolier_Mortar_SMK",
			"4R_bandolier_Mortar_SUP",
			"4R_Ammobox_SmokeLauncher",
			"4R_bandolier_L109",
			"4R_bandolier_L50",
			"4R_bandolier_csmk",
			"4R_Ammobox_556",
			"4R_Ammobox_762",
			"4R_Ammobox_30HE",
			"4R_Ammobox_30AP"
		};
		requiredVersion = 0.3;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_UI_F",
			"ace_laserpointer",
			"cba_accessory",
			"cba_settings",
			"MK50",
			"UK3CB_BAF_Weapons_Ammo",
			"UK3CB_BAF_Equipment",
			"Weap_melee_knife",
			"UK3CB_BAF_Weapons_L3A1",
			"uk3CB_baf_weapons_Accessories",
			"ace_interaction",
			"greenmag_main",
			"acre_sys_prc152",
			"acre_sys_prc343",
			"CBA_XEH",
			"CBA_MAIN"
		};
		author="Challenger";
	};
};

#include "Branding.hpp"
#include "CfgAmmo.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgITNCompat.hpp"
#include "CfgMagazines.hpp"
#include "CribCards.hpp"
#include "Functions.hpp"
#include "Inventory.hpp"
#include "CfgEditorSubcategory.hpp"

class Extended_PreInit_EventHandlers
{
	class FourRBG_ACRE_RadioDamage
	{
		init="call compile preProcessFileLineNumbers '\FourRBG\Scripts\radioDamageCBA.sqf'";
	};
};

class Extended_Init_EventHandlers
{
	class LandVehicle
	{
		init = "[_this select 0] call FourRBG_fnc_objectInit;";
	};
	class Ship
	{
		init = "[_this select 0] call FourRBG_fnc_objectInit;";
	};
};

class Extended_PostInit_EventHandlers
{
	class FourRBG_ACRE_RadioDamage_SRR
	{
		init="execVM 'FourRBG\scripts\prc343.sqf'";
	};
	class FourRBG_ACRE_RadioDamage_MRR
	{
		init="execVM 'FourRBG\scripts\prc152.sqf'";
	};
	class FourRBG_ACRE_RadioDamage_LRR
	{
		init="execVM 'FourRBG\scripts\prc117.sqf'";
	};
};

class DefaultEventHandlers;
class Optics_Armored;
class Optics_Gunner_APC_02 : Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Commander_02;
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class All;
	class Items_base_F;
	class AllVehicles;
	class Land;
	class LandVehicle;
	class Tank:LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F:Tank
	{
		class Turrets
		{
			class MainTurret:NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class Burnes_FV4034_base : Tank_F
	{
	};
	class APC_Tracked_03_base_F:Tank_F
	{
		class ViewPilot;
		class AnimationSources: AnimationSources
		{
			class showCamonetHull;
			class showCamonetTurret;
			class showSLATHull;
			class showSLATTurret;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics;
						class OpticsIn: Optics_Commander_02
						{
							class Wide;
							class Medium;
							class Narrow;
						};
					};
				};
				class ViewOptics;
				class OpticsIn: Optics_Gunner_APC_02
				{
					class Wide;
					class Medium;
					class Narrow;
				};
			};
		};
		class UserActions;
		class Wheels
		{
			class L1;
			class L2;
			class L3;
			class L4;
			class L5;
			class L6;
			class L7;
			class L9;
			class R1;
			class R2;
			class R3;
			class R4;
			class R5;
			class R6;
			class R7;
			class R9;
		};
	};
	class APC_Tracked_01_base_F : Tank_F {};
	class B_APC_Tracked_01_base_F : APC_Tracked_01_base_F {};
	class B_APC_Tracked_01_CRV_F : B_APC_Tracked_01_base_F
	{
		class AnimationSources;
	};
	class O_Soldier_base_F;
	class CUP_FV432_Bulldog_Base: Tank_F {};
	class CUP_B_FV432_Bulldog_GB_D: CUP_FV432_Bulldog_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : NewTurret {};
		};
	};
	class CUP_B_FV432_Base: CUP_B_FV432_Bulldog_GB_D
	{
		class Turrets : Turrets
		{
			class MainTurret : Mainturret {};
			class Commander : MainTurret {};
		};
	};
	class CUP_B_FV432_GB_Ambulance: CUP_B_FV432_Base {};
	class CUP_B_FV432_GB_GPMG: CUP_B_FV432_Base {};
	class CUP_B_FV432_Mortar : CUP_B_FV432_GB_GPMG
	{
		class Turrets : Turrets
		{
			class MainTurret : Mainturret {};
			class Commander : Commander {};
			class MortarTurret : NewTurret {};
		};
	};
	class CUP_B_FV432_Bulldog_GB_D_RWS: CUP_B_FV432_Bulldog_GB_D {};
	class CUP_B_FV432_Bulldog_GB_W_RWS: CUP_B_FV432_Bulldog_GB_D_RWS {};
	class Car : LandVehicle {};
	class Car_F : Car {};
	class Wheeled_APC_F : Car_F {};
	class CUP_Wolfhound_Base : Wheeled_APC_F {};
	class CUP_B_Wolfhound_LMG_GB_D : CUP_Wolfhound_Base {};
	class afuk_scimitar2a_base : Tank_F
	{
	};
	class afuk_scimitar2a_d : afuk_scimitar2a_base
	{
	};

#include "AFM_Faction.hpp"
#include "LogiBoxes.hpp"
#include "4RWarrior.hpp"
#include "4RSupport.hpp"
#include "4RChallenger.hpp"
#include "4RPlayer.hpp"
#include "4RScimitar.hpp"
};

class CfgDigVehicles
{
    class 4R_CET
    {
        type = "animate";
        animation = "moveplow";
        selection = "plow";
        plowRaised = 0;
        plowLowered = 0.9;
        distanceToTrench = 3.35;
    };
};

class RscControlsGroupNoScrollbars;
class RscMapControlEmpty;
class ctab_HorizontalCompass : RscControlsGroupNoScrollbars {};
class RscInGameUI
{
	class RscUnitInfo;
	class RscOptics_crows: RscUnitInfo
	{
		controls[]+=
		{
			"ctab_compass"
		};
		class ctab_compass: ctab_HorizontalCompass {};
	};
};