//  Combat Engineering Tractor
    class 4R_CET : B_APC_Tracked_01_CRV_F
    {
        author="4 Rifles Milsim, credit to S034";
        displayName="Combat Engineering Tractor";
        scope=2;
        scopeCurator=2;
        side=1;
        faction="4RBG";
        editorSubcategory = "FourRBG_AFV";
        threat[]={0,0,0};
        ace_cargo_space = 0;
        ace_cargo_hasCargo = 0;
        ace_refuel_fuelCargo = 0;
        ace_refuel_canRefuel = 0;
        ace_rearm_defaultSupply = 0;
        ace_repair_canRepair = 1;
        ace_vehicle_damage_hullDetonationProb=0;
        ace_vehicle_damage_turretDetonationProb=0;
        ace_vehicle_damage_engineDetonationProb=0;
        ace_vehicle_damage_hullFireProb=0;
        ace_vehicle_damage_turretFireProb=0;
        ace_vehicle_damage_engineFireProb=0;
        ace_vehicle_damage_detonationDuringFireProb=0;
        ace_vehicle_damage_canHaveFireRing=0;
        ace_vehicles_engineStartDelay = 10;
        magazines[]=
        {
            "SmokeLauncherMag"
        };
        weapons[]=
        {
            "SmokeLauncher"
        };
        enginePower=1000;
        maxSpeed=80;
        armor=600;
        armorStructural=10;
        class Turrets {};

        class TransportMagazines {};
        class TransportItems {};
        class TransportWeapons {};

        class AnimationSources : AnimationSources
        {
            class HideTurret
            {
                animPeriod=0.001;
                initPhase="true";
                source="user";
            };
        };
        class EventHandlers : DefaultEventHandlers
        {
            init = "_this call FourRBG_fnc_MinePlow; _this call FourRBG_fnc_WinchInit";
        };
    };

//  FV513 Warrior Repair Vehicle
    class 4R_FV513 : 4R_Warrior
    {
        author="4 Rifles Milsim";
        displayName="FV513 Warrior Repair Vehicle";
        scope=2;
        scopeCurator=2;
        side=1;
        transportSoldier=4;
        faction="4RBG";
        ace_repair_canRepair = 1;
        editorSubcategory = "FourRBG_AFV";   
        class Turrets {};

        class TransportMagazines {};
        class TransportItems {};
        class TransportWeapons {};
        class TransportBackpacks {};

        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = "Crew Intercom";
                shortName = "CREW";
                allowedPositions[]={"crew"};
                disabledPositions[]={{"cargo","all"}};
                masterPositons[]={"driver"};
                limitedPositions[]={};
                connectedByDefault = 1;
            };
        };

        class AcreRacks
        {
            class Rack_1
            {
                displayName = "Bowman Set A";
                shortName = "Set-A";
                componentName = "ACRE_VRC103";
                allowedPositions[]={"driver"};
                disabledPositions[]={{"cargo","all"}};
                defaultComponents[]={};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemoveable=0;
                intercom[]={"intercom_1"};
            };
            class Rack_2
            {
                displayName = "Bowman Set B";
                shortName = "Set-B";
                componentName = "ACRE_VRC103";
                allowedPositions[]={"driver"};
                disabledPositions[]={{"cargo","all"}};
                defaultComponents[]={};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemoveable=0;
                intercom[]={"intercom_1"};
            };
        };

		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				animPeriod=0.001;
				initPhase="true";
				source="user";
			};
		};
        class EventHandlers : DefaultEventHandlers
        {
            init = "_this call FourRBG_fnc_WinchInit";
        };
        class ACE_SelfActions
        {
            class FourTwoAlphaDesert
            {
                displayName = "Claim Vehicle as 24A (Desert Cam)";
                condition = "player == vehicle player turretUnit [-1] && 'LAD_1' == vehicleVarName player";
                exceptions[] = {};
                statement = "vehicle player setObjectTextureGlobal[1,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_24A.paa'];vehicle player setVariable ['cTab_groupId','24A',true];";
                icon = "";
            };
            class FourTwoBravoDesert
            {
                displayName = "Claim Vehicle as 24B (Desert Cam)";
                condition = "player == vehicle player turretUnit [-1] && 'LAD_2' == vehicleVarName player";
                exceptions[] = {};
                statement = "vehicle player setObjectTextureGlobal[1,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_24B.paa'];vehicle player setVariable ['cTab_groupId','24B',true];";
                icon = "";
            };
        };
    };

//  FV511 Command Vehicle
    class 4R_FV511 : 4R_Warrior
    {
        displayName="FV511 Command Vehicle";
        transportSoldier = 4;
        scope=2;
        scopeCurator=2;
        ace_cargo_space = 6;
        ace_cargo_hasCargo = 1;

        hiddenSelectionsTextures[]=
        {
            "\FourRBG\data\WarriorTextures\Warrior_4R_Desert_Turret_Sonny.paa",
            "\FourRBG\data\WarriorTextures\Warrior_4R_Desert_0C.paa",
            "\FourRBG\data\WarriorTextures\camonet_4R_co.paa",
            "\FourRBG\data\WarriorTextures\cage_BAF_co.paa"
        };

        class TransportMagazines
        {
            class 4R_Warrior_Coax
            {
                magazine="4R_762_800Rnd_T";
                count=2;
            };
            class 4R_Warrior_Rarden_AP
            {
                magazine="4R_30mm_AP";
                count=10;
            };
            class 4R_Warrior_Rarden_HE
            {
                magazine="4R_30mm_HE";
                count=10;
            };
        };
        class TransportWeapons {};
        class TransportBackpacks {};
        class TransportItems {};

        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = "Crew Intercom";
                shortName = "CREW";
                allowedPositions[]={"crew",{"cargo","all"}};
                disabledPositions[]={};
                masterPositons[]={"commander"};
                limitedPositions[]={};
                connectedByDefault = 1;
            };
        };
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"intercom_1"};
        acre_infantryPhoneControlActions[] = {"intercom_1"};
        acre_infantryPhonePosition[] = {-1.1, -3.86, -0.82};
        acre_infantryPhoneDisableRinging = 1;

        class AcreRacks
        {
            class Rack_1
            {
                displayName = "Bowman Set A";
                shortName = "Set-A";
                componentName = "ACRE_VRC103";
                allowedPositions[]={"gunner","commander"};
                disabledPositions[]={"driver",{"cargo","all"}};
                defaultComponents[]={};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemoveable=0;
                intercom[]={"intercom_1"};
            };
            class Rack_2
            {
                displayName = "Bowman Set B";
                shortName = "Set-B";
                componentName = "ACRE_VRC103";
                allowedPositions[]={"gunner","commander"};
                disabledPositions[]={"driver",{"cargo","all"}};
                defaultComponents[]={};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemoveable=0;
                intercom[]={"intercom_1"};
            };
            class Rack_3
            {
                displayName = "Bowman Set C";
                shortName = "Set-C";
                componentName = "ACRE_VRC103";
                allowedPositions[]={"commander"};
                disabledPositions[]={};
                defaultComponents[]={};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemoveable=0;
                intercom[]={"intercom_1"};
            };
            class Rack_4
            {
                displayName = "Bowman Set D";
                shortName = "Set-D";
                componentName = "ACRE_VRC103";
                allowedPositions[]={"commander"};
                disabledPositions[]={};
                defaultComponents[]={};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemoveable=0;
                intercom[]={"intercom_1"};
            };
            class Rack_5
            {
                displayName = "Bowman Set E";
                shortName = "Set-E";
                componentName = "ACRE_VRC103";
                allowedPositions[]={"commander"};
                disabledPositions[]={};
                defaultComponents[]={};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemoveable=0;
                intercom[]={"intercom_1"};
            };
            class Rack_6
            {
                displayName = "Bowman Set F";
                shortName = "Set-F";
                componentName = "ACRE_VRC103";
                allowedPositions[]={"commander"};
                disabledPositions[]={};
                defaultComponents[]={};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemoveable=0;
                intercom[]={"intercom_1"};
            };
        };
    };

//  FV432 Mortar Carrier
    class 4R_FV432_MC : CUP_B_FV432_Mortar
    {
        displayName = "FV432 Mortar Carrier";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "4RBG";
        editorSubcategory = "FourRBG_AFV";
        crew="B_crew_F";
        canFloat=1;
        armor=250;
        armorstructural=10;
        threat[]={0.5,0.1,0.1};
        enginePower=400;
        smokeLauncherGrenadeCount=8;
        smokeLauncherVelocity=20;
        smokeLauncherAngle=180;
        ace_cargo_hasCargo=0;
        hideWeaponsCargo=0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                primaryGunner=false;
            };
            class Commander: Commander
            {
                primaryGunner=false;
            };
            class MortarTurret: MortarTurret
            {
                primaryGunner=true;
                startEngine=0;
                gunnerOutOpticsModel="\A3\Weapons_F\Reticle\optics_empty";
            };
        };
        class UserActions
        {
            class open_door
            {
                displayName="Open Door";
                position="cargo_action";
                radius=2;
                onlyForPlayer=1;
                condition="this animationPhase 'cargo_door' == 0 AND (this turretUnit [-1] == player)";
                statement="this animateSource ['cargo_door', 1]";
            };
            class close_door
            {
                displayName="Close Rear Door";
                position="cargo_action";
                radius=2;
                onlyForPlayer=1;
                condition="(this animationPhase 'cargo_door' > 0.5) AND (this turretUnit [-1] == player)";
                statement="this animateSource ['cargo_door', 0]";
            };
        };
        class TransportMagazines
        {};
        class TransportItems
        {};
        class TransportWeapons
        {};
        class TransportBackpacks
        {};
        class ACE_SelfActions
        {
            class SignalFlags
            {
                displayName = "Signal Flags";
                icon="\A3\Data_F\Flags\flag_white_CO.paa";
                condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                exceptions[]={};

                class FlagColours
                {
                    displayName="Fly the Colours!";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_uk_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_uk_CO.paa";
                };
                class FlagGreenState
                {
                    displayName="Signal Flag - Green State";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_green_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_green_CO.paa";
                };
                class FlagAmberState
                {
                    displayName="Signal Flag - Amber State";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_orange_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_orange_CO.paa";
                };
                class FlagRedState
                {
                    displayName="Signal Flag - Red State";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_red_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_red_CO.paa";
                };
                class FlagEnemySighting
                {
                    displayName="Signal Flag - Sighting";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_purple_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_purple_CO.paa";
                };
                class FlagContact
                {
                    displayName="Signal Flag - Contact";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_red_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_red_CO.paa";
                };
                class FlagReorg
                {
                    displayName="Signal Flag - Reorg";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_blue_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_blue_CO.paa";
                };
                class FlagRegroup
                {
                    displayName="Signal Flag - Regroup";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_blue_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_blue_CO.paa";
                };
                class FlagFault
                {
                    displayName="Signal Flag - Vehicle Fault";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_green_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_green_CO.paa";
                };
                class FlagEPW
                {
                    displayName="Signal Flag - EPW Onboard";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_pow_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_pow_CO.paa";
                };
                class FlagCas
                {
                    displayName="Signal Flag - Casualty Onboard";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_rcrystal_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_rcrystal_CO.paa";
                };
                class FlagRemove
                {
                    displayName="Remove Signal Flag";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture """";";
                    icon="";
                };
            };
        };
    };

//  FV432 Logistics
    class 4R_FV432_Log : CUP_B_FV432_Bulldog_GB_W_RWS
    {
        displayName = "FV432 Logistics";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "4RBG";
        editorSubcategory = "FourRBG_AFV";
        crew="B_crew_F";
        canFloat=1;
        armor=250;
        armorstructural=10;
        threat[]={0.5,0.1,0.1};
        enginePower=400;
        smokeLauncherGrenadeCount=8;
        smokeLauncherVelocity=20;
        smokeLauncherAngle=180;
        ace_cargo_hasCargo=0;
        hideWeaponsCargo=0;
        acex_field_rations_waterSupply=120;
        class TransportMagazines
        {};
        class TransportItems
        {};
        class TransportWeapons
        {};
        class TransportBackpacks
        {};
        class ACE_SelfActions
        {
            class SignalFlags
            {
                displayName = "Signal Flags";
                icon="\A3\Data_F\Flags\flag_white_CO.paa";
                condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                exceptions[]={};

                class FlagColours
                {
                    displayName="Fly the Colours!";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_uk_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_uk_CO.paa";
                };
                class FlagGreenState
                {
                    displayName="Signal Flag - Green State";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_green_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_green_CO.paa";
                };
                class FlagAmberState
                {
                    displayName="Signal Flag - Amber State";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_orange_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_orange_CO.paa";
                };
                class FlagRedState
                {
                    displayName="Signal Flag - Red State";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_red_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_red_CO.paa";
                };
                class FlagEnemySighting
                {
                    displayName="Signal Flag - Sighting";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_purple_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_purple_CO.paa";
                };
                class FlagContact
                {
                    displayName="Signal Flag - Contact";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_red_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_red_CO.paa";
                };
                class FlagReorg
                {
                    displayName="Signal Flag - Reorg";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_blue_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_blue_CO.paa";
                };
                class FlagRegroup
                {
                    displayName="Signal Flag - Regroup";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_blue_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_blue_CO.paa";
                };
                class FlagFault
                {
                    displayName="Signal Flag - Vehicle Fault";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_green_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_green_CO.paa";
                };
                class FlagEPW
                {
                    displayName="Signal Flag - EPW Onboard";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_pow_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_pow_CO.paa";
                };
                class FlagCas
                {
                    displayName="Signal Flag - Casualty Onboard";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_rcrystal_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_rcrystal_CO.paa";
                };
                class FlagRemove
                {
                    displayName="Remove Signal Flag";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture """";";
                    icon="";
                };
            };
        };
    };

//  FV432 Ambulance
    class 4R_FV432_Amb : CUP_B_FV432_GB_Ambulance
    {
        displayName="FV432 Ambulance";
        scope=2;
        scopeCurator=2;
        side=1;
        faction="4RBG";
        editorSubcategory = "FourRBG_AFV";
        crew="B_crew_F";
        canFloat=1;
        armor=250;
        armorstructural=10;
        threat[]={0.5,0.1,0.1};
        enginePower=400;
        smokeLauncherGrenadeCount=8;
        smokeLauncherVelocity=20;
        smokeLauncherAngle=180;
        ace_cargo_space = 8;
        ace_cargo_hasCargo = 1;
        hideWeaponsCargo=0;
        acex_field_rations_waterSupply=120;
        magazines[]=
        {
            "SmokeLauncherMag"
        };
        weapons[]=
        {
            "SmokeLauncher"
        };
        class TransportMagazines
        {};
        class TransportItems
        {};
        class TransportWeapons
        {};
        class TransportBackpacks
        {};
        class Library
        {
            libTextDesc = "The FV432 converted into an Ambulance. This vehicle is unarmed."
        };

        class EventHandlers : DefaultEventHandlers
        {
            init = "[_this select 0] call ace_medical_treatment_fnc_isMedicalVehicle";
        };
        class UserActions
        {
            class open_door
            {
                displayName="Open Door";
                position="cargo_action";
                radius=2;
                onlyForPlayer=1;
                condition="this animationPhase 'cargo_door' == 0 AND (this turretUnit [-1] == player)";
                statement="this animateSource ['cargo_door', 1]";
            };
            class close_door
            {
                displayName="Close Rear Door";
                position="cargo_action";
                radius=2;
                onlyForPlayer=1;
                condition="(this animationPhase 'cargo_door' > 0.5) AND (this turretUnit [-1] == player)";
                statement="this animateSource ['cargo_door', 0]";
            };
        };
        class ACE_SelfActions
        {
            class SignalFlags
            {
                displayName = "Signal Flags";
                icon="\A3\Data_F\Flags\flag_white_CO.paa";
                condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                exceptions[]={};

                class FlagColours
                {
                    displayName="Fly the Colours!";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_uk_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_uk_CO.paa";
                };
                class FlagGreenState
                {
                    displayName="Signal Flag - Green State";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_green_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_green_CO.paa";
                };
                class FlagAmberState
                {
                    displayName="Signal Flag - Amber State";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_orange_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_orange_CO.paa";
                };
                class FlagRedState
                {
                    displayName="Signal Flag - Red State";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_red_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_red_CO.paa";
                };
                class FlagEnemySighting
                {
                    displayName="Signal Flag - Sighting";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_purple_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_purple_CO.paa";
                };
                class FlagContact
                {
                    displayName="Signal Flag - Contact";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_red_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_red_CO.paa";
                };
                class FlagReorg
                {
                    displayName="Signal Flag - Reorg";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_fd_blue_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_fd_blue_CO.paa";
                };
                class FlagRegroup
                {
                    displayName="Signal Flag - Regroup";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_blue_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_blue_CO.paa";
                };
                class FlagFault
                {
                    displayName="Signal Flag - Vehicle Fault";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_green_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_green_CO.paa";
                };
                class FlagEPW
                {
                    displayName="Signal Flag - EPW Onboard";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_pow_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_pow_CO.paa";
                };
                class FlagCas
                {
                    displayName="Signal Flag - Casualty Onboard";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_rcrystal_CO.paa"";";
                    icon="\A3\Data_F\Flags\flag_rcrystal_CO.paa";
                };
                class FlagRemove
                {
                    displayName="Remove Signal Flag";
                    condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                    exceptions[]={};
                    statement="vehicle _player forceFlagTexture """";";
                    icon="";
                };
            };
        };
    };

//  Wolfhound
    class 4R_Wolfhound : CUP_B_Wolfhound_LMG_GB_D
    {
        author="4 Rifles Milsim";
        displayName="Wolfhound Tactical Support Vehicle";
        scope=2;
        scopeCurator=2;
        side=1;
        faction="4RBG";
        crew="B_crew_F";
        editorSubcategory = "FourRBG_AFV";
        threat[]={0,0,0};
        enginePower=1500;
        transportSoldier=3;
        maxSpeed=80;
        armor=600;
        armorStructural=10;
        ace_cargo_hasCargo=0;

        class TransportMagazines {};
        class TransportItems {};
        class TransportWeapons {};

        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = "Crew Intercom";
                shortName = "CREW";
                allowedPositions[]={"crew"};
                disabledPositions[]={{"cargo","all"}};
                masterPositons[]={"driver"};
                limitedPositions[]={};
                connectedByDefault = 1;
            };
        };

        class AcreRacks
        {
            class Rack_1
            {
                displayName = "Bowman Set A";
                shortName = "Set-A";
                componentName = "ACRE_VRC103";
                allowedPositions[]={"crew"};
                disabledPositions[]={};
                defaultComponents[]={};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemoveable=0;
                intercom[]={"intercom_1"};
            };
            class Rack_2
            {
                displayName = "Bowman Set B";
                shortName = "Set-B";
                componentName = "ACRE_VRC103";
                allowedPositions[]={"crew"};
                disabledPositions[]={};
                defaultComponents[]={};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemoveable=0;
                intercom[]={"intercom_1"};
            };
        };
    };