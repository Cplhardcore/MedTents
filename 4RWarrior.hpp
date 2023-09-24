class 4R_Warrior : APC_Tracked_03_base_F
{
    author="4 Rifles Milsim";
    displayName="FV510 Warrior";
    scope=2;
    scopeCurator=2;
    faction="4RBG";
    editorSubcategory = "FourRBG_AFV";
    side=1;
    crew="B_crew_F";
	typicalCargo[]=
    {
        "B_crew_F"
    };
    maximumLoad=15000;
    maxSpeed=50;
    ace_cargo_space = 0;
    ace_cargo_hasCargo = 0;
    fuelCapacity=20;
    crewCrashProtection=0.03;
    threat[]={1,0.700000,0.300000};
    ace_hunterkiller[]={{{0},1},{{0,0},3}};
    magazines[]={};
    weapons[]={};
    smokeLauncherGrenadeCount=8;
    smokeLauncherOnTurret=1;
    smokeLauncherVelocity=20;
    smokeLauncherAngle=120;
    canBeTransported=1;
    waterResistance=6;
    waterDamageEngine=0.3;
    maxFordingDepth=2;
    tankTurnForce="0.40e6";
    tankTurnForceAngMinSpd=0.69999999;
    tankTurnForceAngSpd=0.87;
    slowSpeedForwardCoef=0.2;
    enableManualFire=0;

    ace_vehicle_damage_canHaveFireRing = 0;
    ace_vehicle_damage_slatHitPoints[] = {};

    class complexGearbox
    {
        GearboxRatios[]=
        {
            "R1",
            -2.5,
            "N",
            0,
            "D1",
            4.1599998,
            "D2",
            2,
            "D3",
            1.28,
            "D4",
            0.86000001
        };
        TransmissionRatios[]=
        {
            "High",
            13.06
        };
        gearBoxMode="auto";
        moveOffGear=1;
        driveString="D";
        neutralString="N";
        reverseString="R";
        transmissionDelay=0;
    };
    class Wheels: Wheels
    {
        class L1: L1
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class L2: L2
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class L3: L3
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class L4: L4
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class L5: L5
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class L6: L6
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class L7: L7
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class L9: L9
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class R1: R1
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class R2: R2
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class R3: R3
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class R4: R4
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class R5: R5
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class R6: R6
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class R7: R7
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
        class R9: R9
        {
            frictionVsSlipGraph[]=
            {
                {0,1.5},
                {0.5,1.5},
                {1,1.5}
            };
        };
    };

    class ace_viewports
    {
        class SLD_commander
        {
            type="screen";
            camLocation[] = {0,0,-0.05};
            maxDistance=5;
            camAttach[]={0,0};
            screenLocation[]={0,-2,-0.5};
            roles[]={"cargo"};
        };
        class SLD_back
        {
            type="screen";
            camLocation[] = {-0.0166016, -3.36157, -0.577052};
            maxDistance=5;
            camAttach=180;
            screenLocation[]={0,-3.5,-1};
            roles[]={"cargo"};
        };
        class SLD_backleft
        {
            type="screen";
            camLocation[] = {-1.4, -3, -0.6};
            maxDistance=5;
            camAttach=270;
            screenLocation[]={-1,-3.5,-1};
            roles[]={"cargo"};
        };
        class SLD_backright
        {
            type="screen";
            camLocation[] = {1.4, -3, -0.6};
            maxDistance=5;
            camAttach=90;
            screenLocation[]={1,-3.5,-1};
            roles[]={"cargo"};
        };
        class SLD_back2
        {
            type="";
            camLocation[] = {-0.0166016, -3.36157, -0.577052};
            maxDistance=5;
            camAttach=180;
            screenLocation[]={-0.5,1.5,-1};
            roles[]={"driver"};
        };
        class SLD_commander2
        {
            type="";
            camLocation[] = {0,0,-0.05};
            maxDistance=5;
            camAttach[]={0,0};
            screenLocation[]={-0.5,1,-0.5};
            roles[]={"driver"};
        };
        class Driver_FL
        {
            type="";
            camLocation[] = {-1.16748, 1.7998, -0.712923};
            camAttach = 315;
            maxDistance=5;
            screenLocation[]={-1,1.5,-0.5};
            roles[]={"driver"};
        };
        class Driver_FR
        {
            type="";
            camLocation[] = {1.18799, 1.63135, -0.654503};
            camAttach = 45;
            maxDistance=5;
            screenLocation[]={0,1.5,-0.5};
            roles[]={"driver"};
        };
    };

    class ViewOptics:ViewOptics
    {
        visionMode[]=
        {
            "Normal"
        };
    };

    class Turrets:Turrets
    {
        class MainTurret:MainTurret
        {
            enableManualFire=0;
            weapons[]=
            {
                "4R_RARDEN",
                "UK3CB_BAF_L94A1_veh"
            };
            magazines[]=
            {
                "4R_762_800Rnd_T"
            };
            class Turrets:Turrets
            {
                class CommanderOptics:CommanderOptics
                {
                    minElev=-30;
                    maxElev=80;
                    minTurn=-100;
                    maxTurn=100;
                    initTurn=0;
                    weapons[]=
                    {
                        "Laserdesignator_mounted",
                        "SmokeLauncher"
                    };
                    magazines[]=
                    {
                        "Laserbatteries",
                        "SmokeLauncherMag"
                    };
                    class ViewOptics: ViewOptics
                    {
                        initFov=0.25;
                        minFov=0.025;
                        maxFov=0.25;
                        visionMode[]=
                        {
                            "Normal",
                            "TI"
                        };
                        thermalMode[]={0};
                    };
                    class OpticsIn: OpticsIn
                    {
                        class Wide: Wide
                        {
                            initFov=0.25;
                            minFov=0.25;
                            maxFov=0.25;
                            visionMode[]=
                            {
                                "Normal",
                                "TI"
                            };
                            thermalMode[]={0};
                        };
                        class Medium: Narrow
                        {
                            initFov=0.0625;
                            minFov=0.0625;
                            maxFov=0.0625;
                            visionMode[]=
                            {
                                "Normal",
                                "TI"
                            };
                            thermalMode[]={0};
                        };
                        class Narrow: Narrow
                        {
                            initFov=0.031300001;
                            minFov=0.031300001;
                            maxFov=0.031300001;
                            visionMode[]=
                            {
                                "Normal",
                                "TI"
                            };
                            thermalMode[]={0};
                        };
                        class VeryNarrow: Narrow
                        {
                            initFov=0.025;
                            minFov=0.025;
                            maxFov=0.025;
                            visionMode[]=
                            {
                                "Normal",
                                "TI"
                            };
                            thermalMode[]={0};
                        };
                    };
                };
            };
            class OpticsIn: Optics_Gunner_MBT_02
            {
                class Wide: Wide
                {
                    initFov=0.25;
                    minFov=0.25;
                    maxFov=0.25;
                    visionMode[]=
                    {
                        "Normal",
                        "TI"
                    };
                    thermalMode[]={0};
                };
                class Medium: Narrow
                {
                    initFov=0.0625;
                    minFov=0.0625;
                    maxFov=0.0625;
                    visionMode[]=
                    {
                        "Normal",
                        "TI"
                    };
                    thermalMode[]={0};
                };
                class Narrow: Narrow
                {
                    initFov=0.031300001;
                    minFov=0.031300001;
                    maxFov=0.031300001;
                    visionMode[]=
                    {
                        "Normal",
                        "TI"
                    };
                    thermalMode[]={0};
                };
                class VeryNarrow: Narrow
                {
                    initFov=0.025;
                    minFov=0.025;
                    maxFov=0.025;
                    visionMode[]=
                    {
                        "Normal",
                        "TI"
                    };
                    thermalMode[]={0};
                };
            };
        };
    };

    animationList[]=
    {
        "showCamonetHull",
        0,
        "showCamonetTurret",
        0,
        "showSLATHull",
        0,
        "showSLATTurret",
        0
    };

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "CamoNet",
        "CamoSlat"
    };

    editorPreview="";
	hiddenSelectionsTextures[]=
	{
		"\FourRBG\data\WarriorTextures\Warrior_4R_Desert_Turret_Blank.paa",
		"\FourRBG\data\WarriorTextures\Warrior_4R_Desert_Blank.paa",
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
        class War_Wep_1_Mag
        {
            magazine="UK3CB_BAF_762_100Rnd_T";
            count=6;
        };
    };

    class TransportWeapons
    {
        class AT_Launchers
        {
            weapon="launch_NLAW_F";
            count=2;
        };
        class War_Wep_1
        {
            weapon="UK3CB_BAF_L7A2";
            count=1;
        };
    };

    class TransportItems
    {};

    class AcreIntercoms
    {
        class Intercom_1
        {
            displayName = "Crew Intercom";
            shortName = "CREW";
            allowedPositions[]={"crew"};
            disabledPositions[]={};
            masterPositons[]={"commander"};
            limitedPositions[]={{"cargo", "all"}};
            numLimitedPositions = 1;
            connectedByDefault = 1;
        };
        class Intercom_2
        {
            displayName = "Passenger Intercom";
            shortName = "PAX";
            allowedPositions[] = {"commander", {"cargo","all"}};
            disabledPositions[] = {"driver", "gunner"};
            masterPositons[]={"commander"};
            limitedPositions[]={};
            numLimitedPositions=0;
            connectedByDefault=0;
        };
    };
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneIntercom[] = {"intercom_2"};
    acre_infantryPhoneControlActions[] = {"intercom_2"};
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
            componentName = "ACRE_VRC110";
            allowedPositions[]={"gunner","commander"};
            disabledPositions[]={"driver",{"cargo","all"}};
            defaultComponents[]={};
            mountedRadio = "ACRE_PRC152";
            isRadioRemoveable = 1;
            intercom[]={"intercom_1"};
        };
    };

    class UserActions
    {
        class SmokeScreen
        {
            userActionID=774;
            displayName="<t color='#FF0000'>Smoke Screen ON </t>";
            position="Crew_L";
            radius=10;
            onlyforplayer=0;
            showWindow=0;
            condition="player in [driver this]";
            statement="[vehicle player] execVM ""Burnes_Challenger\SmokeScreen.sqf""";
        };
    };

    class ACE_SelfActions
    {
        class BoilingVessel
        {
            displayName="Boiling Vessel";
            condition="";
            icon="";
            exceptions[]={};

            class MakeTea
            {
                displayName="Brew Tea";
                condition="('ACE_Canteen' in (items player) && player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0])";
                icon="";
                statement="";
                exceptions[]={};
            };
        };
        class LoaderActions
        {
            icon="a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\cargoMagAll_ca.paa";
            condition="";
            exceptions[]=
            {
                "isNotInside",
                "isNotSitting"
            };
            class CoaxLoad
            {
                displayName = "Load Coax with Ball";
                condition="(count magazines vehicle player <=3 && player == vehicle player turretUnit [0] && '4R_762_800Rnd' in (magazines player))";
                icon = "";
                statement= "vehicle _player addMagazineGlobal '4R_762_800Rnd'; _player removeItem '4R_762_800Rnd'";
                exceptions[]={};
            };
            class Coax2Load
            {
                displayName = "Load Coax with Tracer";
                condition="(count magazines vehicle player <=3 && player == vehicle player turretUnit [0] && '4R_762_800Rnd_T' in (magazines player) )";
                icon = "";
                statement= "vehicle _player addMagazineGlobal '4R_762_800Rnd_T'; _player removeItem '4R_762_800Rnd_T'";
                exceptions[]={};
            };
            class APDSLoad
            {
                displayName = "Load APDS";
                condition="(count magazines vehicle player <=3 && player == vehicle player turretUnit [0,0] && '4R_30mm_AP' in (magazines player))";
                icon = "";
                statement= "vehicle _player addMagazineGlobal '4R_30mm_AP'; vehicle _player loadMagazine [[0], '4R_RARDEN', '4R_30mm_AP']; _player removeItem '4R_30mm_AP'";
                exceptions[]={};
            };
            class HELoad
            {
                displayName = "Load HE";
                condition="(count magazines vehicle player <=3 && player == vehicle player turretUnit [0,0] && '4R_30mm_HE' in (magazines player))";
                icon = "";
                statement= "vehicle _player addMagazineGlobal '4R_30mm_HE'; vehicle _player loadMagazine [[0], '4R_RARDEN', '4R_30mm_HE']; _player removeItem '4R_30mm_HE'";
                exceptions[]={};
            };
        };
    // Set Callsigns
        class OneZeroBravoDesert
        {
            displayName = "Claim Vehicle as 10B (Desert Cam)";
            condition = "player == vehicle player turretUnit [0,0] && 'WC_10' == vehicleVarName player";
            exceptions[] = {};
            statement = "vehicle player setObjectTextureGlobal[0,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_Turret_10B.paa'];vehicle player setObjectTextureGlobal[1,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_10B.paa'];vehicle player setVariable ['cTab_groupId','10B',true];";
            icon = "";
        };
        class OneOneBravoDesert
        {
            displayName = "Claim Vehicle as 11B (Desert Cam)";
            condition = "player == vehicle player turretUnit [0,0] && 'WC_11' == vehicleVarName player";
            exceptions[] = {};
            statement = "vehicle player setObjectTextureGlobal[0,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_Turret_11B.paa'];vehicle player setObjectTextureGlobal[1,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_11B.paa'];vehicle player setVariable ['cTab_groupId','11B',true];";
            icon = "";
        };
        class OneTwoBravoDesert
        {
            displayName = "Claim Vehicle as 12B (Desert Cam)";
            condition = "player == vehicle player turretUnit [0,0] && 'WC_12' == vehicleVarName player";
            exceptions[] = {};
            statement = "vehicle player setObjectTextureGlobal[0,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_Turret_12B.paa'];vehicle player setObjectTextureGlobal[1,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_12B.paa'];vehicle player setVariable ['cTab_groupId','12B',true];";
            icon = "";
        };
        class OneThreeBravoDesert
        {
            displayName = "Claim Vehicle as 13B (Desert Cam)";
            condition = "player == vehicle player turretUnit [0,0] && 'WC_13' == vehicleVarName player";
            exceptions[] = {};
            statement = "vehicle player setObjectTextureGlobal[0,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_Turret_13B.paa'];vehicle player setObjectTextureGlobal[1,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_13B.paa'];vehicle player setVariable ['cTab_groupId','13B',true];";
            icon = "";
        };
        class FourTwoBravoDesert
        {
            displayName = "Claim Vehicle as 42B (Desert Cam)";
            condition = "player == vehicle player turretUnit [0,0] && 'WC_42' == vehicleVarName player";
            exceptions[] = {};
            statement = "vehicle player setObjectTextureGlobal[0,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_Turret_Blank.paa'];vehicle player setObjectTextureGlobal[1,'\FourRBG\data\WarriorTextures\Warrior_4R_Desert_42B.paa'];vehicle player setVariable ['cTab_groupId','42B',true];";
            icon = "";
        };

    // Set Signal Flags
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
    // End ACE Actions
    };
};