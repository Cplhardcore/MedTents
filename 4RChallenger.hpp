class 4R_Challenger : Burnes_FV4034_base
{
    class Turrets : Turrets
    {
        class MainTurret : MainTurret
        {
            class Turrets : Turrets
            {
                class CommanderOptics:CommanderOptics
                {
                    gunnerCompartments="Compartment3";
                    LODTurnedOut=1;
                    LODTurnedIn="View_Commander";
                    commanding=3;
                    gunnerAction="commander_mbt3_out";
                    gunnerInAction="passenger_mrap_03exgunner";
                    getinAction="Heli_Attack_01_Pilot_Enter";
                    getoutaction="Heli_Attack_01_Pilot_Exit";
                    memoryPointsGetInGunner="pos_Cargo";
                    memoryPointsGetInGunnerDir="pos_Cargo_dir";
                    proxyIndex=1;
                    hasGunner=1;
                    usepip=1;
                    turretFollowFreeLook=0;
                    isPersonTurret=0;
                    outGunnerMayFire = 1;                  
                    enabledByAnimationSource="hatchCommander";
                    body="ObsTurret";
                    gun="ObsGun";
                    animationSourceBody="ObsTurret";
                    animationSourceGun="ObsGun";
                    maxHorizontalRotSpeed=1.8;
                    maxVerticalRotSpeed=1.8;
                    stabilizedInAxes=3;
                    startEngine=0;
                    viewGunnerInExternal=1;
                    minElev=-25;
                    maxElev=60;
                    initElev=0;
                    minTurn=-360;
                    maxTurn=360;
                    initTurn=0;
                    soundServo[]=
                    {
                        "\Burnes_challenger\data\gun_elevate2",
                        0.31778279,
                        1,
                        10
                    };
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
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
                    discreteDistanceInitIndex=2;
                    memoryPointGunnerOptics="commanderview";
                    gunnerForceOptics=0;
                    gunnerOutForceOptics=0;
                    inGunnerMayFire=1;
                    gunnerOpticsModel="\Burnes_Challenger\data\Burnes_fv4034_opticC";
                    turretInfoType="RscOptics_crows";
                    gunnerOutOpticsModel="";
                    gunnerOpticsEffect[]=
                    {
                        "TankGunnerOptics1",
                        "OpticsBlur2"
                    };
                    class ViewOptics : ViewOptics
                    {
                        initAngleX=0;
                        minAngleX=-30;
                        maxAngleX=30;
                        initAngleY=0;
                        minAngleY=-100;
                        maxAngleY=100;
                        initFov=0.69999999;
                        minFov=0.0099999998;
                        maxFov=0.69999999;
                        visionMode[]=
                        {
                            "Normal",
                            "NVG",
                            "TI"
                        };
                        thermalMode[]={0,1};
                    };
                    class HitPoints
                    {
                        class HitTurret
                        {
                            armor=0.30000001;
                            material=-1;
                            name="vez";
                            visual="vezVelitele";
                            passThrough=0.40000001;
                            minimalHit=0.1;
                            explosionShielding=1e-006;
                            radius=0.15000001;
                        };
                        class HitGun
                        {
                            armor=0.30000001;
                            material=-1;
                            name="zbranVelitele";
                            visual="zbranVelitele";
                            passThrough=0;
                            minimalHit=0.1;
                            explosionShielding=9.9999997e-006;
                            radius=0.15000001;
                        };
                    };
                };
                class LoaderTurret : NewTurret
                {
                    weapons[]=
                    {
                        "4R_L111A1"
                    };
                    magazines[]=
                    {
                        "4R_127_500Rnd"
                    };
                    LODTurnedOut=0;
                    gunnerCompartments="Compartment1";
                    gunnerAction="commander_mbt3_out";
                    gunnerInAction="passenger_mrap_03exgunner";
                    startEngine=0;
                    gunnerCanSee=1+2+4+8+16;
                    canUseScanners=1;
                    outGunnerMayFire=0;
                    inGunnerMayFire=1;
                    animationSourceHatch="hatchLoader";
                    stabilizedInAxes=3;
                    commanding=2;
                    gunnerName="Loader";
                    proxyType="CPGunner";
                    proxyIndex=2;
                    memoryPointsGetInGunner="pos_Cargo";
                    memoryPointsGetInGunnerDir="pos_Cargo_dir";
                    hasGunner=1;
                    usePip=0;
                    isPersonTurret=0;
                    viewGunnerInExternal=1;
                    body="LoaderTurret";
                    gun="LoaderGun";
                    animationSourceBody="LoaderTurret";
                    animationSourceGun="LoaderGun";
                    maxHorizontalRotSpeed=1.8;
                    maxVerticalRotSpeed=1.8;
                    soundServo[]=
                    {
                        "\Burnes_challenger\data\gun_elevate2",
                        0.1177828,
                        1,
                        10
                    };
                    minElev=-10;
                    maxElev=25;
                    initElev=0;
                    minTurn=-360;
                    maxTurn=360;
                    initTurn=0;
                    memoryPointGun="usti hlavne3";
                    gunBeg="usti hlavne";
                    gunEnd="konec hlavne";
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
                    discreteDistanceInitIndex=2;
                    memoryPointGunnerOutOptics="loaderview";
                    memoryPointGunnerOptics="loaderview";
                    gunnerForceOptics=0;
                    gunnerOutForceOptics=0;
                    gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
                    turretInfoType="RscOptics_crows";
                    gunnerOutOpticsModel="";
                    gunnerOpticsEffect[]=
                    {
                        "TankGunnerOptics1",
                        "OpticsBlur2"
                    };
                    class Turrets
                    {
                    };
                    class ViewOptics: ViewOptics
                    {
                        initAngleX=0;
                        minAngleX=-30;
                        maxAngleX=30;
                        initAngleY=0;
                        minAngleY=-100;
                        maxAngleY=100;
                        initFov=0.69999999;
                        minFov=0.050000001;
                        maxFov=1;
                        visionMode[]=
                        {
                            "Normal",
                            "NVG",
                            "TI"
                        };
                        thermalMode[]={0,1};
                    };
                    class ViewGunner
                    {
                        initAngleX=5;
                        minAngleX=-65;
                        maxAngleX=85;
                        initAngleY=0;
                        minAngleY=-150;
                        maxAngleY=150;
                        initFov=0.69999999;
                        minFov=0.15000001;
                        maxFov=1.1;
                        visionMode[]=
                        {
                            "Normal",
                            "TI"
                        };
                        thermalMode[]={0,1};
                    };
                };
            };
            primaryGunner="true";
            isPersonTurret=0;
            canUseScanners=0;
            gunnerInAction="gunner_MRAP_01";
            gunnerAction="gunner_MRAP_01";
            forceHideGunner=1;
            proxyIndex=1;
            LODTurnedOut=1200;
            body="mainturret";
            gun="maingun";
            animationSourceBody="mainturret";
            animationSourceGun="maingun";
            memoryPointGun="usti hlavne2";
            gunBeg="usti hlavne3";
            gunEnd="konec hlavne3";
            lockWhenDriverOut=1;
            weapons[]=
            {
                "CR2_L30A1",
                "UK3CB_BAF_L94A1_veh"
            };
            magazines[]=
            {
                "4R_762_800Rnd_T"
            };
            stabilizedInAxes=3;
            commanding=1;
            soundServo[]=
            {
                "A3\sounds_f\dummysound",
                0.031622775,
                1,
                30
            };
            minElev=-10;
            maxElev=20;
            initElev=20;
            turretInfoType="RscOptics_MBT_03_gunner";
            discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500};
            discreteDistanceInitIndex=4;
            allowTabLock=0;
            memoryPointGunnerOptics="gunnerview";
            gunnerOutOpticsModel="";
            gunnerOutOpticsEffect[]={};
            gunnerOpticsEffect[]={};
            gunnerForceOptics=0;
            usePip=0;
            startEngine=0;
            inGunnerMayFire=1;
            viewGunnerInExternal=0;
            class OpticsIn
            {
                class Wide: ViewOptics
                {
                    initAngleX=0;
                    minAngleX=-30;
                    maxAngleX=30;
                    initAngleY=0;
                    minAngleY=-100;
                    maxAngleY=100;
                    initFov=0.30000001;
                    minFov=0.30000001;
                    maxFov=0.30000001;
                    visionMode[]=
                    {
                        "Normal",
                        "NVG",	
                        "TI"
                    };
                    thermalMode[]={0};
                    gunnerOpticsModel="\Burnes_Challenger\data\Burnes_fv4034_opticG1";
                    gunnerOpticsEffect[]={};
                };
                class Medium: Wide
                {
                    gunnerOpticsModel="\Burnes_Challenger\data\Burnes_fv4034_opticG2";
                    initFov=0.050000001;
                    minFov=0.050000001;
                    maxFov=0.050000001;
                };
                class Narrow: Wide
                {
                    gunnerOpticsModel="\Burnes_Challenger\data\Burnes_fv4034_opticG3";
                    initFov=0.0099999998;
                    minFov=0.0099999998;
                    maxFov=0.0099999998;
                };
            };
            class ace_viewports
            {
                class Driver_FL
                {
                    type="screen";
                    camLocation[] = {-1.34814, 1.45313, -0.451851};
                    camAttach = 315;
                    screenLocation[]={0.5,1,-0.5};
                    roles[]={"driver"};
                };
                class Driver_F
                {
                    type="screen";
                    camLocation[] = {-0.169434, 2.04443, -0.737031};
                    camAttach = 0;
                    screenLocation[]={0,1,-0.5};
                    roles[]={"driver"};
                };
                class Driver_FR
                {
                    type="screen";
                    camLocation[] = {1.43066, 1.61719, -0.45369};
                    camAttach = 45;
                    screenLocation[]={-0.5,1,-0.5};
                    roles[]={"driver"};
                };
            };

            class HitPoints
            {
                class HitTurret
                {
                    armor=1.8;
                    material=-1;
                    name="vez";
                    visual="vez";
                    passThrough=0;
                    minimalHit=0.02;
                    explosionShielding=0.30000001;
                    radius=0.25;
                };
                class HitGun
                {
                    armor=1.3;
                    material=-1;
                    name="zbran";
                    visual="";
                    passThrough=0;
                    minimalHit=0;
                    explosionShielding=1;
                    radius=0.25;
                };
            };
        };
    };

    displayName="FV4034 Challenger 2";
    scope=2;
    scopeCurator=2;
    faction="4RBG";
    editorSubcategory = "FourRBG_AFV";
    accuracy=10;
    camouflage=8;
    side=1;
    crew="B_crew_F";
    typicalCargo[]=
    {
        "B_crew_F"
    };
    maxSpeed=60;
    peakTorque=4126;
    maximumLoad=10000;
    ace_cargo_hasCargo=0;
    ace_hunterkiller[]={{{0},1},{{0,0},3}};
    magazines[]={};
    weapons[]={};
    smokeLauncherGrenadeCount=24;
    incomingMissileDetectionSystem=8;
    smokeLauncherOnTurret=1;
    smokeLauncherVelocity=14;
    smokeLauncherAngle=270;
    canBeTransported=1;
    fuelCapacity=200;
    cost=1500000;
    crewVulnerable=0;
    armor=1189;
    armorStructural=16.4965;
    damageResistance=0.5;
    crewCrashProtection=0.05000001;
    crewExplosionProtection=0.99949998;
    insideSoundCoef=0.89999998;
    recieveRemoteTargets=1;
    reportOwnPosition=1;
    
    class Damage
    {
        tex[]={};
        mat[]=
        {
            "a3\data_f\default.rvmat",
            "a3\data_f\default.rvmat",
            "a3\data_f\default_destruct.rvmat"
        };
    };

    class ViewOptics : ViewOptics
    {
        visionMode[]=
        {
            "Normal",
            "NVG"
        };
    };

    class Exhausts
    {
        class Exhaust1
        {
            position="exhaust";
            direction="exhaust_dir";
            effect="ExhaustEffectTankBack";
        };
    };

    class Reflectors
    {
        class Left
        {
            color[]={1900,1300,950};
            ambient[]={5,5,5};
            position="L Svetlo";
            direction="konec L Svetlo";
            hitpoint="L Svetlo";
            selection="L Svetlo";
            size=1;
            innerAngle=50;
            outerAngle=179;
            coneFadeCoef=10;
            intensity=1;
            useFlare=0;
            dayLight=0;
            flareSize=1;
            class Attenuation
            {
                start=1;
                constant=0;
                linear=0;
                quadratic=0.25;
                hardLimitStart=30;
                hardLimitEnd=60;
            };
        };
        class Right: Left
        {
            position="R Svetlo";
            direction="konec R Svetlo";
            hitpoint="R Svetlo";
            selection="R Svetlo";
            ambient[]={0.1,0.1,0.1,0.1};
        };
    };

    class TransportMagazines
    {
        class 4R_CR2_Coax
        {
            magazine="4R_762_800Rnd_T";
            count=2;
        };
    };

    class AcreIntercoms
    {
        class Intercom_1
        {
            displayName = "Tank Intercom";
            shortName = "IC";
            allowedPositions[]={"crew",{"turret",{0,0},{0,1},{0}},"ffv"};
            disabledPositions[]={};
            masterPositons[]={"commander"};
            limitedPositions[]={};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 0;
    acre_infantryPhoneIntercom[] = {"all"};
    acre_infantryPhoneControlActions[] = {"intercom_1"};
    acre_infantryPhonePosition[] = {-1.2, -5, -0.82};
    
    class AcreRacks
    {
        class Rack_1
        {
            displayName = "Bowman Set A";
            shortName = "Set-A";
            componentName = "ACRE_VRC103";
            allowedPositions[]={{"turret",{0,1}},"commander"};
            disabledPositions[]={"driver","gunner"};
            defaultComponents[]={};
            mountedRadio = "ACRE_PRC117F";
            isRadioRemoveable=0;
            intercom[]={"Intercom_1"};
        };
        class Rack_2
        {
            displayName = "Bowman Set B";
            shortName = "Set-B";
            componentName = "ACRE_VRC103";
            allowedPositions[]={{"turret",{0,1}},"commander"};
            disabledPositions[]={"driver","gunner"};
            defaultComponents[]={};
            mountedRadio = "ACRE_PRC117F";
            isRadioRemoveable=0;
            intercom[]={"Intercom_1"};
        };
        class Rack_3
        {
            displayName = "Bowman Set C";
            shortName = "Set-C";
            componentName = "ACRE_VRC103";
            allowedPositions[]={{"turret",{0,1}},"commander"};
            disabledPositions[]={"driver","gunner"};
            defaultComponents[]={};
            mountedRadio = "ACRE_PRC117F";
            isRadioRemoveable=0;
            intercom[]={"Intercom_1"};
        };
        class Rack_4
        {
            displayName = "Bowman Set D";
            shortName = "Set-D";
            componentName = "ACRE_VRC103";
            allowedPositions[]={{"turret",{0,1}},"commander"};
            disabledPositions[]={"driver","gunner"};
            defaultComponents[]={};
            mountedRadio = "ACRE_PRC117F";
            isRadioRemoveable=0;
            intercom[]={"Intercom_1"};
        };
    };

    class UserActions
    {
        class SmokeScreen
        {
            displayName="<t color='#FF0000'>Smoke Screen ON </t>";
            position="Crew_L";
            radius=3;
            onlyforplayer=0;
            showWindow=0;
            condition="player in [driver this]";
            statement="[vehicle player] execVM ""Burnes_Challenger\SmokeScreen.sqf""";
        };
        class 4R_SwitchLoaderCommander
        {
            displayName="Switch to Commander Seat";
            displayNameDefault="Get in Commander Seat";
            position="";
            radius=3;
            showWindow=0;
            onlyForPlayer=0;
            condition="(player == this turretUnit [0,1] && isNull (vehicle player turretUnit [0,0]))";
            statement="player action [""MoveToTurret"", this, [0,0]];";
        };
        class 4R_SwitchCommanderLoader
        {
            displayName="Switch to Loader Seat";
            displayNameDefault="Get in Loader Seat";
            position="";
            radius=3;
            showWindow=0;
            onlyForPlayer=0;
            condition="(player == this turretUnit [0,0] && isNull (vehicle player turretUnit [0,1]))";
            statement="player action [""MoveToTurret"", this, [0,1]];";
        };
    };

    class ACE_SelfActions
    {
      class GunnerActions
        {
            displayName = "Ammo Handling";
            icon="a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\cargoMagAll_ca.paa";
            condition="player == vehicle player turretUnit [0]";
            exceptions[]=
            {
                "isNotInside",
                "isNotSitting"
            };

            class CR2_Load_COAX
            {
                displayName = "Load Coax";
                condition="(count magazines vehicle player <=1 && player == vehicle player turretUnit [0] && '4R_762_800Rnd' in (magazines player))";
                icon="";
                statement="vehicle _player addMagazineGlobal '4R_762_800Rnd'; _player removeItem '4R_762_800Rnd'";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
            class CR2_Load_COAX_Tracer
            {
                displayName = "Load Coax with Tracer";
                condition="(count magazines vehicle player <=1 && player == vehicle player turretUnit [0] && '4R_762_800Rnd_T' in (magazines player))";
                icon="";
                statement="vehicle _player addMagazineGlobal '4R_762_800Rnd_T'; _player removeItem '4R_762_800Rnd_T'";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
        };

      class LoaderActions
        {
            displayName = "Ammo Handling";
            icon="a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\cargoMagAll_ca.paa";
            condition="player == vehicle player turretUnit [0,1]";
            exceptions[]=
            {
                "isNotInside",
                "isNotSitting"
            };

            class CR2_Load_HESH
            {
                displayName = "Load HESH";
                condition="(count magazines vehicle player <=1 && player == vehicle player turretUnit [0,1] && 'CR2_HESH_Item' in (items player) && 'CR2_CHARGE_Item' in (items player))";
                icon="";
                statement="vehicle _player addMagazineGlobal 'CR2_HESH_Mag'; vehicle _player loadMagazine [[0], 'CR2_L30A1', 'CR2_HESH_Mag']; _player removeItem 'CR2_HESH_Item'; _player removeItem 'CR2_CHARGE_Item'";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
            class CR2_Load_FIN
            {
                displayName = "Load FIN";
                condition="(count magazines vehicle player <=1 && player == vehicle player turretUnit [0,1] && 'CR2_FIN_Item' in (items player) && 'CR2_CHARGE_Item' in (items player))";
                icon="";
                statement="vehicle _player addMagazineGlobal 'CR2_FIN_Mag'; vehicle _player loadMagazine [[0], 'CR2_L30A1', 'CR2_FIN_Mag']; _player removeItem 'CR2_FIN_Item'; _player removeItem 'CR2_CHARGE_Item'";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
            class CR2_Load_WP
            {
                displayName = "Load Smoke";
                condition="(count magazines vehicle player <=1 && player == vehicle player turretUnit [0,1] && 'CR2_WP_Item' in (items player) && 'CR2_CHARGE_Item' in (items player))";
                icon="";
                statement="vehicle _player addMagazineGlobal 'CR2_WP_Mag'; vehicle _player loadMagazine [[0], 'CR2_L30A1', 'CR2_WP_Mag']; _player removeItem 'CR2_WP_Item'; _player removeItem 'CR2_CHARGE_Item'";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
            class CR2_Load_TRG
            {
                displayName = "Load TRAINING AMMO!";
                condition="(count magazines vehicle _player <=1 && _player == vehicle player turretUnit [0,1] && 'CR2_TRG_Item' in (items player) && 'CR2_CHARGE_Item' in (items player))";
                icon="";
                statement="vehicle _player addMagazineGlobal 'CR2_TRG_Mag'; vehicle _player loadMagazine [[0], 'CR2_L30A1', 'CR2_FIN_Mag']; _player removeItem 'CR2_TRG_Item'; _player removeItem 'CR2_CHARGE_Item'";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
            class CR2_Load_RCWS
            {
                displayName = "Reload RCWS";
                condition="(_player == vehicle player turretUnit [0,1] && isTurnedOut _player && '4R_127_500Rnd' in (magazines player))";
                icon="";
                statement="vehicle _player addMagazineTurret ['4R_127_500Rnd',[0,1], 500]; _player removeMagazine '4R_127_500Rnd'";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
        };
        class BoilingVessel
        {
            displayName="Boiling Vessel";
            icon="";
            condition="player == vehicle player turretUnit [0,1] || player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };

            class MakeTea
            {
                displayName="Brew Tea";
                conditions="('ACE_Canteen' in (items player))";
                icon="";
                statement="";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
            class MakeTea2
            {
                displayName="Brew Tea";
                conditions="('ACE_Canteen_Half' in (items player))";
                icon="";
                statement="";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
            class MakeTea3
            {
                displayName="Brew Tea";
                conditions="('ACE_Waterbottle' in (items player))";
                icon="";
                statement="";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
            class MakeTea4
            {
                displayName="Brew Tea";
                conditions="('ACE_Waterbottle_Half' in (items player))";
                icon="";
                statement="";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSitting"
                };
            };
        };

    };

    class EventHandlers: DefaultEventHandlers
    {
        init="[_this select 0,[0,2]] execVM ""\FourRBG\Scripts\Challenger2Init.sqf"";";
    };
    
    hiddenSelections[]=
    {
        "Camo1",
        "CDU1",
        "reversecam",
        "Camo2",
        "Camo3",
        "Callsign",
        "flags",
        "hatches"
    };
    hiddenSelectionsTextures[]=
    {
        "\Burnes_Challenger\data\PH\challenger2_woodland_co",
        "#(argb,512,512,1)r2t(rendertarget3000,1.0)",
        "#(argb,512,512,1)r2t(rendertarget66,1.0)",
        "\Burnes_Challenger\data\PH\challenger2_turret_wood_co.paa",
        "\Burnes_Challenger\data\PH\challengerV2_hull_wood_co.paa",
        "",
        "",
        "\Burnes_Challenger\data\PH\hatches_co"
    };
    textureList[]=
    {
        "4RBG_Green",
        1
    };
    class TextureSources
    {
        class 4RBG_Woodland
        {
            displayName="Woodland";
            textures[]=
            {
            "\Burnes_Challenger\data\PH\challenger2_woodland_co",
            "#(argb,512,512,1)r2t(rendertarget3000,1.0)",
            "#(argb,512,512,1)r2t(rendertarget66,1.0)",
            "\Burnes_Challenger\data\PH\challenger2_turret_wood_co.paa",
            "\Burnes_Challenger\data\PH\challengerV2_hull_wood_co.paa",
            "\FourRBG\data\callsigns\30.paa",
            "",
            "\Burnes_Challenger\data\PH\hatches_co"
            };
            factions[]=
            {
                "BLU_F"
            };
        };
        class 4RBG_Desert
        {
            displayName="Desert";
            textures[]=
            {
            "\Burnes_Challenger\data\PH\challenger2_desert_co.paa",
            "#(argb,512,512,1)r2t(rendertarget3000,1.0)",
            "#(argb,512,512,1)r2t(rendertarget66,1.0)",
            "\Burnes_Challenger\data\PH\challenger2_turret_des_co.paa",
            "\Burnes_Challenger\data\PH\challengerV2_hull_des_co.paa",
            "\FourRBG\data\callsigns\30.paa",
            "",
            "\Burnes_Challenger\data\PH\hatches_co"
            };
            factions[]=
            {
                "BLU_F"
            };
        };
    };
};