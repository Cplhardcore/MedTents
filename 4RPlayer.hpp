class Man;
class CAManBase: Man
{
	sensitivityEar = 0.2;
	class ACE_SelfActions
	{
		delete cTab_Interact;
		delete greenmag_main_refill;
		delete greenmag_main_unload;
		delete greenmag_main_unpack;
		delete greenmag_main_connectBelt;
		delete ACE_Animations;
		class ACE_Equipment
		{
			delete murshun_cigs_start_cig;
			delete murshun_cigs_stop_cig;
			delete murshun_cigs_take_cig_from_pack;
			delete ACPL_LooseHelmet_menu;
			delete zsn_blowwhistle;
			delete zsn_blastwhistle;
		};
		class 4R_Interactions
		{
			displayName="Object Interactions";
			icon="";

			class 4R_BodyDrop
			{
				displayName="Drop Body";
				condition="a isequalto 0 && animationState ace_player isequalto 'acinpknlmstpsraswrfldnon'";
				statement="ace_player switchAction ''; a = 1";
				icon="";
				exceptions[] = {};
			};
			class ClearBrush
			{
				displayName = "Cut Bushes";
				condition = "[player] call FourRBG_fnc_canClearBrush";
				statement = "[] call FourRBG_fnc_clearBrush;"
				exceptions[] = {};
				showDisabled = 0;
				icon = "";
			};
			class 4R_knife_swap1
			{
				displayName="Swap Knife to Muzzle";
				condition="('4R_Bayonet_Melee' in (items player))";
				exceptions[]={};
				statement="_player removeItem '4R_Bayonet_Melee'; _player addItem '4R_Bayonet'";
				icon="\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L3A1\UI\L3A1_ca";
			};
			class 4R_knife_swap2
			{
				displayName="Swap Knife to Melee";
				condition="('4R_Bayonet' in (items player))";
				exceptions[]={};
				statement="_player removeItem '4R_Bayonet'; _player addItem '4R_Bayonet_Melee'";
				icon="\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L3A1\UI\L3A1_ca";
			};
			class ACPL_LooseHelmet_gun_fasten
			{
				displayName="Wear Rifle Sling";
				condition="(primaryweapon _player != '') && !(_player getVariable ['ACPL_LooseWeapon_fix_gun', false])";
				statement="[[_player, 'GUN', true], ACPL_LooseHelmet_fnc_FixAction] remoteExec ['call', _player];";
				icon="\ACPL_LooseHelmet\icons\gun.paa";
				exceptions[]=
				{
					"isNotInside",
					"isNotSitting"
				};
			};
			class ACPL_LooseHelmet_gun_unfasten
			{
				displayName="Take Rifle Sling Off";
				condition="(primaryweapon _player != '') && (_player getVariable ['ACPL_LooseWeapon_fix_gun', false])";
				statement="[[_player, 'GUN', false], ACPL_LooseHelmet_fnc_FixAction] remoteExec ['call', _player];";
				icon="\ACPL_LooseHelmet\icons\gun.paa";
				exceptions[]=
				{
					"isNotInside",
					"isNotSitting"
				};
			};
			class 4R_startCig
			{
				displayName="$STR_murshun_cigs_start_cig";
				condition="[_player] call immersion_cigs_canStartSmoking";
				statement="[_player] spawn murshun_cigs_fnc_start_cig_your";
				showDisabled=0;
				exceptions[]=
				{
					"isNotInside",
					"isNotSitting"
				};
				icon="murshun_cigs\UI\light_cig.paa";
			};
			class 4R_stopCig
			{
				displayName="$STR_murshun_cigs_stop_cig";
				condition="[_player] call immersion_cigs_canStopSmoking";
				statement="[_player] spawn murshun_cigs_fnc_stop_cig";
				showDisabled=0;
				exceptions[]=
				{
					"isNotInside",
					"isNotSitting"
				};
				icon="murshun_cigs\UI\light_cig.paa";
			};
			class 4R_takeCigFromPack
			{
				displayName="$STR_murshun_cigs_take_cig_from_pack";
				condition="[_player] call immersion_cigs_canTakeCigFromPack";
				statement="[_player] spawn murshun_cigs_fnc_take_cig_from_pack";
				showDisabled=0;
				exceptions[]=
				{
					"isNotInside",
					"isNotSitting"
				};
				icon="murshun_cigs\UI\take_cig.paa";
			};
			class 4R_open_CPERSKIT
			{
				displayName="Unpack CPERS Kit";
				condition="('4R_CPERSKIT' in (items player))";
				exceptions[]= {};
				statement="_player removeItem '4R_CPERSKIT';_player addItem 'G_Blindfold_01_black_F'; _player addItem '4R_Evidence_Bag'; _player addItem 'ACE_CableTie'; _player addItem '4R_EPW_TAG'";
				icon="";
			};
			class 4R_create_WaterObject
			{
				displayName="Place Jerry Can";
				condition="('4R_jerry_can' in (items player))";
				exceptions[]={};
				statement="_player call FourRBG_fnc_create_waterObject";
				icon="";
			};
			class 4R_ACETrack
			{
				displayName="Drop Track Pad";
				condition="('4R_ACETrack' in (items player))";
				exceptions[]={};
				statement="_player call FourRBG_fnc_deployTrack";
				icon="";
			};
		};
		class 4R_Actions
		{
			displayName="4 Rifles";
			icon="\FourRBG\data\rifles_capbadge.paa";
			exceptions[]=
			{
				"isNotInside",
				"isNotSitting"
			};

			class 4R_Headgear
			{
   				displayName="Headgear";
				icon="\FourRBG\data\HelmetInteraction.paa";

				class 4R_Helmet_CESS_Off
				{
					displayName="Take cover off Goggles";
					condition="('UK3CB_BAF_H_Mk7_Camo_CESS_C'in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Camo_CESS_C'; _player addItem 'UK3CB_BAF_H_Mk7_Camo_ESS_C'";
					icon="\FourRBG\data\HelmetGlasses.paa";
				};
				class 4R_Helmet_CESS_On
				{
					displayName="Cover Goggles";
					condition="('UK3CB_BAF_H_Mk7_Camo_ESS_C'in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Camo_ESS_C'; _player addItem 'UK3CB_BAF_H_Mk7_Camo_CESS_C'";
					icon="\FourRBG\data\HelmetGlasses.paa";
				};
				class 4R_Helmet_ESS_Off
				{
					displayName="Take goggles off helmet";
					condition="('UK3CB_BAF_H_Mk7_Camo_ESS_C' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Camo_ESS_C'; _player addItem 'UK3CB_BAF_H_Mk7_Camo_B'; _player addItem 'CUP_G_ESS_KHK'";
					icon="\FourRBG\data\HelmetGlasses.paa";
				};
				class 4R_Helmet_ESS_On
				{
					displayName="Store goggles on helmet";
					condition="('UK3CB_BAF_H_Mk7_Camo_B' in (items player) && 'CUP_G_ESS_KHK' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Camo_B'; _player removeItem 'CUP_G_ESS_KHK'; _player addItem 'UK3CB_BAF_H_Mk7_Camo_ESS_C'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Helmet_Net_On
				{
					displayName="Place Net on Helmet";
					condition="('UK3CB_BAF_H_Mk7_Camo_B' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Camo_B'; _player addItem 'UK3CB_BAF_H_Mk7_Net_B'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Helmet_Net_Off
				{
					displayName="Take net off helmet";
					condition="('UK3CB_BAF_H_Mk7_Net_B' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Net_B'; _player addItem 'UK3CB_BAF_H_Mk7_Camo_B'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Helmet_ESS_Net_On
				{
					displayName="Store goggles on helmet";
					condition="('UK3CB_BAF_H_Mk7_Net_B' in (items player) && 'CUP_G_ESS_KHK' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Net_B'; _player removeItem 'CUP_G_ESS_KHK'; _player addItem 'UK3CB_BAF_H_Mk7_Net_ESS_C'";
					icon="\FourRBG\data\HelmetGlasses.paa";
				};
				class 4R_Helmet_ESS_Net_Off
				{
					displayName="Take goggles off helmet";
					condition="('UK3CB_BAF_H_Mk7_Net_ESS_C' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Net_ESS_C'; _player addItem 'CUP_G_ESS_KHK'; _player addItem 'UK3CB_BAF_H_Mk7_Net_B'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Helmet_Scrim_On
				{
					displayName="Camouflage Helmet";
					condition="('UK3CB_BAF_H_Mk7_Net_B' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Net_B'; _player addItem 'UK3CB_BAF_H_Mk7_Scrim_A'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Helmet_Scrim_Off
				{
					displayName="Remove camouflage";
					condition="('UK3CB_BAF_H_Mk7_Scrim_A' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Scrim_A'; _player addItem 'UK3CB_BAF_H_Mk7_Net_B'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Helmet_ESS_Scrim_On
				{
					displayName="Put goggles on helmet";
					condition="('UK3CB_BAF_H_Mk7_Scrim_A' in (items player) && 'CUP_G_ESS_KHK' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Scrim_A'; _player removeItem 'CUP_G_ESS_KHK'; _player addItem 'UK3CB_BAF_H_Mk7_Scrim_ESS_A'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Helmet_ESS_Scrim_Off
				{
					displayName="Take goggles off helmet";
					condition="('UK3CB_BAF_H_Mk7_Scrim_ESS_A' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Scrim_ESS_A'; _player addItem 'CUP_G_ESS_KHK'; _player addItem 'UK3CB_BAF_H_Mk7_Scrim_A'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Shemag_Up
				{
					displayName="Pull mask up";
					condition="('CUP_FR_NeckScarf2' in (goggles player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="removeGoggles _player; _player addGoggles 'CUP_G_Scarf_Face_Tan'";
					icon="\FourRBG\data\FaceMask.paa";
				};
				class 4R_Shemag_Down
				{
					displayName="Pull mask down";
					condition="('CUP_G_Scarf_Face_Tan' in (goggles _player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="removeGoggles _player; _player addGoggles 'CUP_FR_NeckScarf2'";
					icon="\FourRBG\data\FaceMask.paa";
				};
				class 4R_Shemag_Goggles_Up
				{
					displayName="Wear Goggles";
					condition="('CUP_FR_NeckScarf2' in (goggles player)) && ('CUP_G_ESS_KHK' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="removeGoggles _player; _player removeItem 'CUP_G_ESS_KHK'; _player addGoggles 'CUP_G_Scarf_Face_Tan'";
					icon="\FourRBG\data\MaskGlasses.paa";
				};
				class 4R_Scarf_Goggles_Up
				{
					displayName="Wear Goggles";
					condition="('rhsusf_shemagh2_tan' in (goggles _player)) && ('CUP_G_ESS_KHK' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="removeGoggles _player; _player removeItem 'CUP_G_ESS_KHK'; _player addGoggles 'rhsusf_shemagh2_gogg_tan'";
					icon="\FourRBG\data\MaskGlasses.paa";
				};
				class 4R_Shemag_Goggles_Down
				{
					displayName="Take goggles off";
					condition="('CUP_G_Scarf_Face_Tan' in (goggles player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="removeGoggles _player; _player addItem 'CUP_G_ESS_KHK'; _player addGoggles 'CUP_FR_NeckScarf2'";
					icon="\FourRBG\data\FaceMask.paa";
				};
				class 4R_Scarf_Goggles_Down
				{
					displayName="Take goggles off";
					condition="('rhsusf_shemagh2_gogg_tan' in (goggles player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="removeGoggles _player; _player addItem 'CUP_G_ESS_KHK'; _player addGoggles 'rhsusf_shemagh2_tan'";
					icon="\FourRBG\data\FaceMask.paa";
				};
				class 4R_Shemag_Scarf_Swap
				{
					displayName="Pull mask up";
					condition="('CUP_G_Scarf_Face_Tan' in (goggles player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="removeGoggles _player; _player addGoggles 'rhsusf_shemagh2_gogg_tan'";
					icon="\FourRBG\data\MaskGlasses.paa";
				};
				class 4R_Scarf_Shemag_Swap
				{
					displayName="Pull mask down";
					condition="('rhsusf_shemagh2_gogg_tan' in (goggles player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="removeGoggles _player; _player addGoggles 'CUP_G_Scarf_Face_Tan'";
					icon="\FourRBG\data\MaskGlasses.paa";
				};
				class 4R_Crew_Helmet_Convert
				{
					displayName="Add hearing protection to helmet";
					condition="('UK3CB_BAF_H_Mk7_Camo_B' in (items player)) && ('UK3CB_BAF_H_Earphone' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem 'UK3CB_BAF_H_Mk7_Camo_B'; _player removeItem 'UK3CB_BAF_H_Earphone'; _player addItem '4R_Mk7_A'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Helmet_Convert
				{
					displayName="Remove hearing protection from helmet";
					condition="('4R_Mk7_A' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A'; _player addItem 'UK3CB_BAF_H_Mk7_Camo_B'; _player addItem 'UK3CB_BAF_H_Earphone'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_storeGoggles
				{
					displayName="Store goggles on helmet";
					condition="('4R_Mk7_A' in (items player)) && ('CUP_G_ESS_KHK' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A'; _player removeItem 'CUP_G_ESS_KHK'; _player addItem '4R_Mk7_A_ESS'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_takeGoggles
				{
					displayName="Take goggles off helmet";
					condition="('4R_Mk7_A_ESS' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A_ESS'; _player addItem '4R_Mk7_A'; _player addItem 'CUP_G_ESS_KHK'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_coverGoggles
				{
					displayName="Cover goggles";
					condition="('4R_Mk7_A_ESS' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A_ESS'; _player addItem '4R_Mk7_A_CESS'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_uncoverGoggles
				{
					displayName="Uncover goggles";
					condition="('4R_Mk7_A_CESS' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A_CESS'; _player addItem '4R_Mk7_A_ESS'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_addNet
				{
					displayName="Add net to helmet";
					condition="('4R_Mk7_A' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A'; _player addItem '4R_Mk7_A_Net'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_removeNet
				{
					displayName="Take net off helmet";
					condition="('4R_Mk7_A_Net' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A_Net'; _player addItem '4R_Mk7_A'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_Net_storeGoggles
				{
					displayName="Store goggles on helmet";
					condition="('4R_Mk7_A_Net' in (items player)) && ('CUP_G_ESS_KHK' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A_Net'; _player removeItem 'CUP_G_ESS_KHK'; _player addItem '4R_Mk7_A_Net_ESS'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_Net_takeGoggles
				{
					displayName="Take goggles off helmet";
					condition="('4R_Mk7_A_Net_ESS' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A_Net_ESS'; _player addItem '4R_Mk7_A_Net'; _player addItem 'CUP_G_ESS_KHK'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_addScrim
				{
					displayName="Camouflage helmet";
					condition="('4R_Mk7_A_Net' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A_Net'; _player addItem '4R_Mk7_A_Scrim'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_removeScrim
				{
					displayName="Remove Camouflage";
					condition="('4R_Mk7_A_Scrim' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A_Scrim'; _player addItem '4R_Mk7_A_Net'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_Scrim_storeGoggles
				{
					displayName="Store goggles on helmet";
					condition="('4R_Mk7_A_Scrim' in (items player)) && ('CUP_G_ESS_KHK' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A_Scrim'; _player removeItem 'CUP_G_ESS_KHK'; _player addItem '4R_Mk7_A_Scrim_ESS'";
					icon="\FourRBG\data\Helmet.paa";
				};
				class 4R_Crew_Helmet_Scrim_takeGoggles
				{
					displayName="Take goggles off helmet";
					condition="('4R_Mk7_A_Scrim_ESS' in (items player))";
					exceptions[]=
					{
					"isNotInside",
					"isNotSitting"
					};
					statement="_player removeItem '4R_Mk7_A_Scrim_ESS'; _player addItem '4R_Mk7_A_Scrim'; _player addItem 'CUP_G_ESS_KHK'";
					icon="\FourRBG\data\Helmet.paa";
				};

				class ACPL_LooseHelmet_helmet_fasten
				{
					displayName="Do up Chinstrap";
					condition="(headgear _player != '') && !(_player getVariable ['ACPL_LooseWeapon_fix_helmet', false])";
					statement="[[_player, 'HELMET', true], ACPL_LooseHelmet_fnc_FixAction] remoteExec ['call', _player];";
					icon="\ACPL_LooseHelmet\icons\helmet.paa";
					exceptions[]=
					{
						"isNotInside",
						"isNotSitting"
					};
				};
				class ACPL_LooseHelmet_helmet_unfasten
				{
					displayName="Undo Chinstrap";
					condition="(headgear _player != '') && (_player getVariable ['ACPL_LooseWeapon_fix_helmet', false])";
					statement="[[_player, 'HELMET', false], ACPL_LooseHelmet_fnc_FixAction] remoteExec ['call', _player];";
					icon="\ACPL_LooseHelmet\icons\helmet.paa";
					exceptions[]=
					{
						"isNotInside",
						"isNotSitting"
					};
				};
			};

			class 4R_Personal
			{
				displayName="Uniforms";
				icon="";
				exceptions[]=
				{
					"isNotInside",
					"isNotSitting"
				};

				class 4R_moveSleeves
				{
					displayName="Move sleeves.";
					condition="('mpx_mtp_rifles_uniform_k' in (uniform player)) || ('mpx_mtp_rifles_uniform_kr' in (uniform player)) || ('mpx_mtp_ramc_uniform' in (uniform player)) || ('mpx_mtp_ramc_uniform_r' in (uniform player)) || ('mpx_mtp_full_uniform' in (uniform player)) || ('mpx_mtp_full_uniform_r' in (uniform player))";
    				exceptions[]={};
					statement="call FourRBG_fnc_swapSleeves";
					icon="";
				};
				class 4R_CBRNWear
				{
					displayName="Wear CBRN Overgarment";
					condition="('mpx_mtp_rifles_uniform_k' in (uniform player)) && ('afuk_cbrn_dpm' in (items player))";
					exceptions[]={};
					statement="call FourRBG_fnc_CBRNSwap";
					icon="";
				};
				class 4R_CBRNOff
				{
					displayName="Take off CBRN Overgarment";
					condition="('afuk_cbrn_dpm' in (uniform player)) && ('mpx_mtp_rifles_uniform_k' in (items player)) || ('afuk_cbrn_dpm' in (uniform player)) && ('mpx_mtp_rifles_uniform_kr' in (items player))";
					exceptions[]={};
					statement="call FourRBG_fnc_CBRNSwap";
					icon="";
				};
				class 4R_swapToOveralls
				{
					displayName="Put Overalls On";
					condition="('UK3CB_BAF_U_CombatUniform_MTP_TShirt' in (uniform player)) && ('UK3CB_BAF_U_CrewmanCoveralls_RTR' in (items player))";
					exceptions[]={};
					statement="call FourRBG_fnc_swapOveralls";
					icon="";
				};
				class 4R_swapFromOveralls
				{
					displayName="Take Overalls Off";
					condition="('UK3CB_BAF_U_CrewmanCoveralls_RTR' in (uniform player)) && ('UK3CB_BAF_U_CombatUniform_MTP_TShirt' in (items player))";
					exceptions[]={};
					statement="call FourRBG_fnc_swapOveralls";
					icon="";
				};
				class 4R_GhilleOn
				{
					displayName="Put Ghillie Suit On";
					condition="('U_B_GhillieSuit' in (items player))";
    				exceptions[]={};
					statement="call FourRBG_fnc_GhilleSwap";
					icon="";
				};
				class 4R_GhilleOff
				{
					displayName="Take Ghillie Suit Off";
					condition="('U_B_GhillieSuit' in (uniform player))";
					exceptions[]={};
					statement="call FourRBG_fnc_GhilleSwap";
					icon="";
				};
			};

			class 4R_Logistics
			{
				displayName="Logistics";
				icon="\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryweapon_ca.paa";
				exceptions[]=
				{
						"isNotInside",
						"isNotSitting"
				};

				class 4R_Medical
				{
					displayName="Medical";
					icon="\FourRBG\data\ifak_interaction.paa";
					exceptions[]=
					{
							"isNotInside",
							"isNotSitting"
					};

					class 4R_open_ifak
					{
						displayName="Open Emergency Aid Kit";
						condition="(_player call ace_common_fnc_isMedic && '4R_IFAK' in (items player))";
						statement="_player call FourRBG_fnc_open_IFAK";
						icon="\FourRBG\data\ifak_interaction.paa";
						exceptions[]=
						{
								"isNotInside",
								"isNotSitting"
						};
					};
					class 4R_open_ifak2 : 4R_open_ifak
					{
						displayName="Open Basic Trauma Management Kit";
						condition="('4R_IFAK2' in (items player))";
						statement="_player call FourRBG_fnc_open_IFAK2";
					};
					class 4R_open_BANDAGES : 4R_open_ifak
					{
						displayName="Open Bandage resupply";
						condition="('4R_BANDAGES' in (items player))";
						statement="_player call FourRBG_fnc_open_BANDAGES";
					};
					class 4R_open_CONSUMABLES : 4R_open_ifak
					{
						displayName="Open Medical Items resupply";
						condition="('4R_CONSUMABLES' in (items player))";
						statement="_player call FourRBG_fnc_open_CONSUMABLES";
					};
					class 4R_open_MASCAS : 4R_open_ifak
					{
						displayName="Deploy MASCAS Kit";
						condition="('4R_MASCAS' in (items player))";
						statement="_player call FourRBG_fnc_open_MASCAS";
					};
					class 4R_open_DRUGS : 4R_open_ifak
					{
						displayName="Open Medical Drugs resupply";
						condition="('4R_DRUGS' in (items player))";
						statement="_player call FourRBG_fnc_open_DRUGS";
					};
					class 4R_deployStretcher
					{
						displayName="Deploy Stretcher";
						condition="('UK3CB_BAF_B_Bergen_MTP_Medic_H_A' in (backpack player))";
						exceptions[]={};
						statement="_player call FourRBG_fnc_deployStretcher";
						icon="";
					};
				};

				class 4R_Ammo
				{
					displayName="Ammunition";
					icon="";
					exceptions[]=
					{
							"isNotInside",
							"isNotSitting"
					};

					class 4R_Bandolier
					{
						displayName="Bandoliers";
						icon="\FourRBG\data\bandolier_co.paa";
						exceptions[]=
						{
								"isNotInside",
								"isNotSitting"
						};

						class 4R_open_bandolier_556
						{
							displayName="Open 5.56 Bandolier";
							condition="('4R_bandolier_556' in (items player))";
							exceptions[]=
							{
								"isNotInside",
								"isNotSitting"
							};
							statement="_player removeItem '4R_bandolier_556';for '_i' from 1 to 5 do {_player addItem 'greenmag_ammo_556x45_basic_30Rnd'}";
							icon="\FourRBG\data\bandolier_co.paa";
						};
						class 4R_open_bandolier_tracer : 4R_open_bandolier_556
						{
							displayName="Open Tracer Ammo Bandolier";
							condition="('4R_bandolier_tracer' in (items player))";
							statement="_player removeItem '4R_bandolier_tracer';for '_i' from 1 to 5 do {_player addItem 'greenmag_ammo_556x45_tracer_30Rnd'}";
						};
						class 4R_open_bandolier_762 : 4R_open_bandolier_556
						{
							displayName="Open 7.62 Bandolier";
							condition="('4R_bandolier_762' in (items player))";
							statement="_player removeItem '4R_bandolier_762';for '_i' from 1 to 10 do {_player addItem 'greenmag_ammo_762x51_basic_20Rnd'}";
						};
						class 4R_open_bandolier_40mm : 4R_open_bandolier_556
						{
							displayName="Open 40mm Bandolier";
							condition="('4R_bandolier_40mm' in (items player))";
							statement="_player removeItem '4R_bandolier_40mm'; for '_i' from 1 to 11 do {_player addItem 'UK3CB_BAF_1Rnd_HEDP_Grenade_Shell'}";
						};
						class 4R_open_bandolier_40mmsmk : 4R_open_bandolier_556
						{
							displayName="Open 40mm Smoke Bandolier";
							condition="('4R_bandolier_40mmsmk' in (items player))";
							statement="_player removeItem '4R_bandolier_40mmsmk'; for '_i' from 1 to 8 do {_player addItem 'UK3CB_BAF_1Rnd_Smoke_Grenade_shell'};for '_i' from 1 to 3 do {_player addItem 'UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell'}";
						};
						class 4R_open_bandolier_40mmflare : 4R_open_bandolier_556
						{
							displayName="Open 40mm Flare Bandolier";
							condition="('4R_bandolier_40mmflare' in (items player))";
							statement="_player removeItem '4R_bandolier_40mmflare'; for '_i' from 1 to 7 do {_player addItem 'UK3CB_BAF_UGL_FlareWhite_F'};for '_i' from 1 to 2 do {_player addItem 'UK3CB_BAF_UGL_FlareRed_F'};for '_i' from 1 to 2 do {_player addItem 'UK3CB_BAF_UGL_FlareGreen_F'}";
						};
					};

					class 4R_Canister
					{
						displayName="Canisters";
						icon="";
						exceptions[]=
						{
								"isNotInside",
								"isNotSitting"
						};
						class 4R_open_bandolier_L109
						{
							displayName="Open Hand Grenade Canister";
							condition="('4R_bandolier_L109' in (items player))";
							exceptions[]={};
							statement="_player removeItem '4R_bandolier_L109'; for '_i' from 1 to 10 do {_player addItem 'CUP_HandGrenade_L109A2_HE'}";
							icon="\FourRBG\data\ammocan_co.paa";
						};
						class 4R_open_bandolier_L50 : 4R_open_bandolier_L109
						{
							displayName="Open Smoke Grenade Canister";
							condition="('4R_bandolier_L50' in (items player))";
							statement="_player removeItem '4R_bandolier_L50'; for '_i' from 1 to 12 do {_player addItem 'UK3CB_BAF_SmokeShell'}";
						};
						class 4R_open_bandolier_csmk : 4R_open_bandolier_L109
						{
							displayName="Open Smoke, Coloured Canister";
							condition="('4R_bandolier_csmk' in (items player))";
							statement="_player removeItem '4R_bandolier_csmk'; for '_i' from 1 to 4 do {_player addItem 'UK3CB_BAF_SmokeShell'}; _player addItem 'UK3CB_BAF_SmokeShellPurple'; for '_i' from 1 to 2 do {_player addItem 'UK3CB_BAF_SmokeShellGreen'}; for '_i' from 1 to 3 do {_player addItem 'UK3CB_BAF_SmokeShellRed'}; for '_i' from 1 to 2 do {_player addItem 'UK3CB_BAF_SmokeShellBlue'}";
						};
						class 4R_open_ammobox_556 : 4R_open_bandolier_L109
						{
							displayName="Open 5.56 Ammo Canister";
							condition="('4R_Ammobox_556' in (items player))";
							statement="_player removeItem '4R_Ammobox_556'; for '_i' from 1 to 4 do {_player addItem '4R_bandolier_556'}; _player addItem '4R_bandolier_tracer';_player addItem 'greenmag_ammo_556x45_tracer_30Rnd';_player addItem 'greenmag_ammo_556x45_tracer_20Rnd'";
						};
						class 4R_open_ammobox_762 : 4R_open_bandolier_L109
						{
							displayName="Open 7.62 Ammo Canister";
							condition="('4R_Ammobox_762' in (items player))";
							statement=" _player removeItem '4R_Ammobox_762';for '_i' from 1 to 2 do {_player addItem '4R_bandolier_762'}";
						};
						class 4R_open_bandolier_60mm_HE : 4R_open_bandolier_L109
						{
							displayName="Open HE Mortar Case";
							condition="('4R_bandolier_Mortar_HE' in (items player))";
							statement="_player removeItem '4R_bandolier_Mortar_HE';for '_i' from 1 to 4 do {_player addItem 'UK3CB_BAF_1Rnd_60mm_Mo_Shells'}";
							icon="\FourRBG\data\bandolier_co.paa";
						};
						class 4R_open_bandolier_60mm_SMK : 4R_open_bandolier_L109
						{
							displayName="Open Smoke Mortar Case";
							condition="('4R_bandolier_Mortar_SMK' in (items player))";
							statement="_player removeItem '4R_bandolier_Mortar_SMK';for '_i' from 1 to 4 do {_player addItem 'UK3CB_BAF_1Rnd_60mm_Mo_WPSmoke_White'}";
							icon="\FourRBG\data\bandolier_co.paa";
						};
						class 4R_open_bandolier_60mm_SUP : 4R_open_bandolier_L109
						{
							displayName="Open Support Mortar Case";
							condition="('4R_bandolier_Mortar_SUP' in (items player))";
							statement="_player removeItem '4R_bandolier_Mortar_SUP';for '_i' from 1 to 3 do {_player addItem 'UK3CB_BAF_1Rnd_60mm_Mo_Flare_White'}; _player addItem 'UK3CB_BAF_1Rnd_60mm_Mo_Smoke_Red'";
							icon="\FourRBG\data\bandolier_co.paa";
						};
						class 4R_open_ammobox_30HE : 4R_open_bandolier_L109
						{
							displayName="Open 30mm HE Ammo Canister";
							condition="('4R_Ammobox_30HE' in (items player))";
							statement=" _player removeItem '4R_Ammobox_30HE'; for '_i' from 1 to 5 do {_player addItem '4R_30mm_HE'}";
						};
						class 4R_open_ammobox_30AP : 4R_open_bandolier_L109
						{
							displayName="Open 30mm APDS Ammo Canister";
							condition="('4R_Ammobox_30AP' in (items player))";
							statement=" _player removeItem '4R_Ammobox_30AP'; for '_i' from 1 to 5 do {_player addItem '4R_30mm_AP'}";
						};
					};

					class 4R_Magazine
					{
						displayName="Loose rounds";
						icon="";
						exceptions[]=
						{
								"isNotInside",
								"isNotSitting"
						};

						class 4R_Magazine_Unload
						{
							displayName="$STR_greenmag_main_unload";
							condition="greenmag_main_CBAS_enable";
							exceptions[]=
							{
								"isNotInside",
								"isNotSitting"
							};
							statement="";
							icon="\z\greenmag\addons\main\data\unload.paa";
							insertChildren="[_target, _player, _actionParams] call greenmag_main_fnc_createUnload";
							enableInside=1;
						};
						class 4R_Magazine_Refill
						{
							displayName="$STR_greenmag_main_refill";
							condition="greenmag_main_CBAS_enable";
							exceptions[]=
							{
								"isNotInside",
								"isNotSitting"
							};
							statement="";
							icon="\z\greenmag\addons\main\data\reload_small.paa";
							insertChildren="[_target, _player, _actionParams] call greenmag_main_fnc_createRefill";
							enableInside=1;
						};						
					};

					class 4R_Loose
					{
						displayName="Loose rounds";
						icon="";
						exceptions[]=
						{
								"isNotInside",
								"isNotSitting"
						};

						class 4R_pack_ammobox556
						{
							displayName="Place loose rounds in box";
							condition="({_x == 'greenmag_ammo_556x45_basic_1Rnd'} count items player >= 30)";
							statement="[20,[],{for '_i' from 1 to 30 do {player removeItem 'greenmag_ammo_556x45_basic_1Rnd'};player addItem 'greenmag_ammo_556x45_basic_30Rnd';},{hint 'Action Cancelled!'},'Packing loose 5.56 rounds into box'] call ace_common_fnc_progressBar;";
						};
						class 4R_pack_ammobox762 : 4R_pack_ammobox556
						{
							displayName="Place loose rounds in box";
							condition="({_x == 'greenmag_ammo_762x51_basic_1Rnd'} count items player >= 30)";
							statement="[20,[],{for '_i' from 1 to 20 do {player removeItem 'greenmag_ammo_762x51_basic_1Rnd'};player addItem 'greenmag_ammo_762x51_basic_30Rnd';},{hint 'Action Cancelled!'},'Packing loose 7.62 rounds into box'] call ace_common_fnc_progressBar;";
						};
						class 4R_greenmag_unpack_ammobox
						{
							displayName="$STR_greenmag_main_unpack";
							condition="greenmag_main_CBAS_enable";
							exceptions[]=
							{
								"isNotInside",
								"isNotSitting"
							};
							statement="";
							icon="\z\greenmag\addons\main\data\unpack.paa";
							insertChildren="[_target, _player, _actionParams] call greenmag_main_fnc_createUnpack";
							enableInside=1;
						};
						class 4R_greenmag_connectBelt
						{
							displayName="$STR_greenmag_main_combineBelts";
							condition="greenmag_main_CBAS_enable";
							exceptions[]=
							{
								"isNotInside",
								"isNotSitting"
							};
							statement="";
							icon="\z\greenmag\addons\main\data\belt_icon_w.paa";
							insertChildren="[_target, _player, _actionParams] call greenmag_main_fnc_beltactions";
							enableInside=1;
						};
					};

					class 4R_Demolitions
					{
						displayName="Demolitions";
						icon="";
						exceptions[]=
						{
								"isNotInside",
								"isNotSitting"
						};
						class 4R_DemoBlockBreakdown
						{
							displayName="Open PE4 Block";
							condition="(_player call ace_common_fnc_isEOD && '4R_PE4' in (items player))";
							exceptions[]={};
							statement="_player removeItem '4R_PE4';for '_i' from 1 to 4 do {_player addMagazine 'SatchelCharge_Remote_Mag'};";
							icon="";
						};
						class 4R_DemoBlockConvertLarge
						{
							displayName="Assemble Demo Charge";
							condition="(_player call ace_common_fnc_isEOD && { _x == 'DemoCharge_Remote_Mag' } count magazines player >= 8)";
							exceptions[]={};
							statement="for '_i' from 1 to 8 do {_player removeMagazine 'DemoCharge_Remote_Mag'} ;_player addMagazine 'SatchelCharge_Remote_Mag'";
							icon="";
						};
						class 4R_DemoBlockConvertSmall
						{
							displayName="Breakdown Demo Charge";
							condition="(_player call ace_common_fnc_isEOD && 'SatchelCharge_Remote_Mag' in (magazines player))";
							exceptions[]={};
							statement="_player removeMagazine 'SatchelCharge_Remote_Mag'; for '_i' from 1 to 8 do {_player addMagazine 'DemoCharge_Remote_Mag'};";
							icon="";
						};
						class 4R_StickChargeConvertAuto
						{
							displayName="Insert fuse into Stick Charge";
							condition="(_player call ace_common_fnc_isEOD && 'tsp_stickCharge_mag' in (magazines player))";
							exceptions[]={};
							statement="_player removeMagazine 'tsp_stickCharge_mag';_player addMagazine 'tsp_stickCharge_auto_mag'";
							icon="";
						};
						class 4R_StickChargeConvert
						{
							displayName="Remove fuse from Stick Charge";
							condition="(_player call ace_common_fnc_isEOD && 'tsp_stickCharge_auto_mag' in (magazines player))";
							exceptions[]={};
							statement="_player removeMagazine 'tsp_stickCharge_auto_mag';_player addMagazine 'tsp_stickCharge_mag'";
							icon="";
						};
						class 4R_LockPopperConvertAuto
						{
							displayName="Insert fuse into Lock Popper";
							condition="(_player call ace_common_fnc_isEOD && 'tsp_popperCharge_mag' in (magazines player))";
							exceptions[]={};
							statement="_player removeItem 'tsp_popperCharge_mag';_player addItem 'tsp_popperCharge_auto_mag'";
							icon="";
						};
						class 4R_LockPopperConvert
						{
							displayName="Remove fuse from Lock Popper";
							condition="(_player call ace_common_fnc_isEOD && 'tsp_popperCharge_auto_mag' in (magazines player))";
							exceptions[]={};
							statement="_player removeItem 'tsp_popperCharge_auto_mag';_player addItem 'tsp_popperCharge_mag'";
							icon="";
						};
					};
				};
			};

			class 4R_Crib
			{
				displayName="Commander's Aide Memoire";
				icon="\FourRBG\data\aidememoire_icon.paa";

				class 4R_OpenSALTA
				{
					displayName="SALTA Card";
					condition="('4R_COMD_AD' in (items player))";
					exceptions[]={};
					statement="createDialog '4R_ContactReport';";
					icon="\FourRBG\data\ContactReport.paa";
				};
				class 4R_OpenECAS
				{
					displayName="ECAS";
					condition="('4R_COMD_AD' in (items player))";
					exceptions[]={};
					statement="createDialog '4R_ECAS';";
					icon="\FourRBG\data\ECAS.paa";
				};
				class 4R_OpenCOMD
				{
					displayName="Commanders Card";
					condition="('4R_COMD_AD' in (items player))";
					exceptions[]={};
					statement="createDialog '4R_COMD';";
					icon="\FourRBG\data\CommandersCard.paa";
				};
				class 4R_Firemission
				{
					displayName="Fire Mission - Call for fire";
					condition="('4R_COMD_AD' in (items player))";
					exceptions[]={};
					statement="createDialog '4R_CFF';";
					icon="\FourRBG\data\FireMission.paa";
				};
			};
		};
		class 4R_Animations
		{
			displayName = "Animations";
			icon = "\z\ace\addons\gestures\UI\gestures_ca.paa";
			class tsp_ace_animate_cancel
			{
				displayName = "Cancel";
				icon = "tsp_animate\gui\cancel.paa";
				statement = "[_player, ''] remoteExec ['switchMove', 0]; (call tsp_fnc_playa) setVariable ['tsp_gestureStop', true];";
			};
			class tsp_ace_animate_emotes {displayName = "Emotes"; icon = "tsp_animate\gui\emotes.paa";};
			class tsp_ace_animate_dances {displayName = "Dances"; icon = "tsp_animate\gui\dances.paa";};
		//-- Reorganize ACE gestures
			class ace_gestures_cat_gestures
			{
				displayName = "Signals";
				icon = "tsp_animate\gui\signal.paa";
				condition = "(canStand _target)";
				statement = "";
				exceptions[] = {"isNotSwimming"};
				showDisabled = 1;
				class ace_gestures_Advance {
					displayName = "Advance";
					condition = "true";
					statement = "[_target, 'gestureAdvance'] call ace_common_fnc_doGesture";
					showDisabled = 1;
				};
				class ace_gestures_Go {
					displayName = "Go";
					condition = "true";
					statement = "[_target, selectRandom ['gestureGo', 'gestureGoB']] call ace_common_fnc_doGesture";
					showDisabled = 1;
				};
				class ace_gestures_Follow {
					displayName = "Follow";
					condition = "true";
					statement = "[_target, 'gestureFollow'] call ace_common_fnc_doGesture";
					showDisabled = 1;
				};
				class ace_gestures_Up {
					displayName = "Up";
					condition = "true";
					statement = "[_target, 'gestureUp'] call ace_common_fnc_doGesture";
					showDisabled = 1;
				};
				class ace_gestures_CeaseFire {
					displayName = "Cease Fire";
					condition = "true";
					statement = "[_target, 'gestureCeaseFire'] call ace_common_fnc_doGesture";
					showDisabled = 1;
				};
				class ace_gestures_Stop {
					displayName = "Stop";
					condition = "true";
					statement = "[_target, 'gestureFreeze'] call ace_common_fnc_doGesture";
					showDisabled = 1;
				};
				class ace_gestures_Forward {
					displayName = "Forward";
					condition = "true";
					statement = "'ace_gestures_forward' call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
				};
				class ace_gestures_Regroup {
					displayName = "Regroup";
					condition = "true";
					statement = "'ace_gestures_regroup' call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
				};
				class ace_gestures_Freeze {
					displayName = "Freeze";
					condition = "true";
					statement = "'ace_gestures_freeze' call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
				};
				class ace_gestures_Cover {
					displayName = "Cover";
					condition = "true";
					statement = "'ace_gestures_cover' call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
				};
				class ace_gestures_Point {
					displayName = "Point";
					condition = "true";
					statement = "'ace_gestures_point' call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
				};
				class ace_gestures_Engage {
					displayName = "Engage";
					condition = "true";
					statement = "'ace_gestures_engage' call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
				};
				class ace_gestures_Hold {
					displayName = "Hold";
					condition = "true";
					statement = "'ace_gestures_hold' call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
				};
				class ace_gestures_Warning {
					displayName = "Warning";
					condition = "true";
					statement = "'ace_gestures_warning' call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
				};
			};
		};
	};
	
	class ACE_Actions
	{
		class ACE_MainActions
		{
			class 4R_open_unit_ifak
			{
				displayName="Open Emergency Aid Kit";
				condition="('4R_IFAK' in (items _target))";
				exceptions[]={};
				statement="_target call FourRBG_fnc_open_IFAK";
				icon="\FourRBG\data\ifak_interaction.paa";
			};
			class 4R_Tag_CPERS
			{
				displayName = "CPERS Capture Tag";
				condition = "_target getVariable ['ace_captives_isHandcuffed', false] && ('4R_EPW_TAG' in (items player))";
				statement = "createDialog '4R_CPERS_Tag'; _player removeItem '4R_EPW_TAG'";
				icon="\FourRBG\data\EPW_Capture_card.paa";
			};
			class 4R_Blindfold
			{
				displayName = "Swap Blindfold";
				condition = "_this select 0 getVariable ['ace_captives_isHandcuffed', false] && ('G_Blindfold_01_black_F' in (items player)) || goggles _target == 'G_Blindfold_01_black_F'";
				statement = "[_this select 0] execVM 'FourRBG\scripts\switchBlindfold.sqf'";
				icon="\FourRBG\data\blindfold_icon.paa";
			};
			class 4R_DragBody
			{
				displayName = "Drag Body";
				condition = "(!alive _target && animationState ace_player isnotequalto 'acinpknlmstpsraswrfldnon')";
				statement = "call FourRBG_fnc_BodyDrag";
				icon="";
			};
			class 4R_ReleaseBody
			{
				displayName = "Release Body";
				condition = "a isequalto 0 && animationState ace_player isequalto 'acinpknlmstpsraswrfldnon'";
				statement = "ace_player switchAction ''; a = 1";
				icon = "";
			};
		};
	};
};