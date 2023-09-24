class 4R_Scimitar : afuk_scimitar2a_d
{
    author="4 Rifles Milsim";
    displayName="FV107 Scimitar";
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
    maximumLoad = 8000;
    maxSpeed = 75;
    ace_cargo_space = 0;
    ace_cargo_hasCargo = 0;
    crewCrashProtection = 0.01;
    ace_hunterkiller[]={{{0},1},{{0,0},3}};
    magazines[]={};
    weapons[]={};
    smokeLauncherGrenadeCount=8;
    smokeLauncherOnTurret=1;
    smokeLauncherVelocity=20;
    smokeLauncherAngle=120;
    canBeTransported=1;

    enginePower = 5420;
    peakTorque = 7500;

    waterResistance=6;
    waterDamageEngine=0.3;
    maxFordingDepth=2;

    tankTurnForce="0.33e6";
    tankTurnForceAngMinSpd=0.4;
    tankTurnForceAngSpd=0.8;
    enableManualFire=0;

    class complexGearbox
    {
        GearboxRatios[]=
        {
            "R1",
            -1,
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
        transmissionDelay=1;
    };

    class ace_viewports
    {
        class SLD_commander
        {
            type="screen";
            camLocation[] = {0,0,-0.05};
            maxDistance=5;
            camAttach[]={0,0};
            screenLocation[]={-0.5,2,2};
            roles[]={"driver"};
        };
        class SLD_Reverse
        {
            type="";
            camLocation[]={-0.25,-2.5,1.6};
            maxDistance=50;
            camAttach=180;
            screenLocation[]={-0.5,2,1.8};
            roles[]={"driver"};
        };
    };

    class Turrets:Turrets
    {
        class MainTurret:MainTurret
        {
            enableManualFire=0;
            weapons[]=
            {
                "4R_Rarden",
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
                    minElev=-15;
                    maxElev= 15;
                    minTurn=-85;
                    maxTurn= 85;
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
                };
            };
        };
    };

    class TransportMagazines
    {
        class xx_Scimitar_Coax
        {
            magazine="4R_762_800Rnd_T";
            count=2;
        };
        class xx_Rarden_AP
        {
            magazine="4R_30mm_AP";
            count=10;
        };
        class xx_Rarden_HE
        {
            magazine="4R_30mm_HE";
            count=10;
        };
    };

    class TransportWeapons
    {
        class xx_ATLauncher
        {
            weapon="launch_NLAW_F";
            count=2;
        };
    };

    class TransportItems {};
    class TransportBackpacks {};

    class AcreIntercoms
    {
        class Intercom_1
        {
            displayName = "Crew Intercom";
            shortName = "INT";
            allowedPositions[]= {"crew"};
            disabledPositions[]={};
            masterPositons[]={"commander"};
            connectedByDefault = 1;
        };
    };
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneIntercom[] = {"Intercom_1"};
    acre_infantryPhoneControlActions[] = {"Intercom_1"};
    acre_infantryPhonePosition[] = {-0.25,-2.5,1.6};
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
    };

    class ACE_SelfActions
    {
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