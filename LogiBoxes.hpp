class ReammoBox;
class NATO_Box_Base;
class Box_NATO_Ammo_F;
class Box_NATO_AmmoOrd_F;
class Box_NATO_Support_F;

class 4R_Section_Supplies : Box_NATO_Ammo_F
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Section Resupply Crate";
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg"; //TODO: Replace with local copy
    maximumLoad = 2000;

    class TransportMagazines
    {
        class xx_ShotgunBuck
        {
            magazine = "UK3CB_BAF_12G_Pellets";
            count = 2;
        };
        class xx_ShotgunSlug
        {
            magazine = "UK3CB_BAF_12G_Slugs";
            count = 2;
        };
    };
    class TransportWeapons
    {
        class xx_IW
        {
            weapon = "UK3CB_BAF_L85A3";
            count = 2;
        };
        class xx_HGun
        {
            weapon = "4R_GSP";
            count = 4;
        };
        class xx_Sharp
        {
            weapon = "UK3CB_BAF_L129A1";
            count = 1;
        };
        class xx_LMG
        {
            weapon = "UK3CB_BAF_L110A3";
            count = 1;
        };
    };
    class TransportItems
    {
        class xx_FirstAid
        {
            name = "4R_IFAK2";
            count = 15;
        };
        class xx_LLM
        {
            name = "UK3CB_BAF_LLM_IR_Black";
            count = 4;
        };
    };
};

class 4R_Explosives : Box_NATO_AmmoOrd_F
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Assault Pioneer Explosive Crate";
    maximumLoad = 20000;

    class TransportItems
    {
        class xx_PE4
        {
            name = "4R_PE4";
            count = 8;
        };
    };

    class TransportWeapons
    {
        class xx_Signs
        {
            name = "aceextitemsplus_MinesSign";
            count = 50;
        };
        class xx_Frame
        {
            name = "tsp_frameCharge_mag";
            count = 15;
        };
        class xx_Claymore
        {
            name = "ClaymoreDirectionalMine_Remote_Mag";
            count = 20;
        };
        class xx_ATMine
        {
            name = "CUP_Mine_M";
            count = 8;
        };
        class xx_APMine
        {
            name = "APERSMine_Range_Mag";
            count = 20;
        };
        class xx_APTripMine
        {
            name = "APERSTripMine_Wire_Mag";
            count = 10;
        };
        class xx_FlareMine
        {
            name = "ACE_FlareTripMine_Mag";
            count = 10;
        };
    };
};

class 4R_HouseDefence : Box_NATO_Support_F
{
    scope = 2;
    scopeCurator = 2;
    displayName = "House Defence Crate";
    maximumLoad = 2000;

    class TransportWeapons
    {
        class xx_SandbagCorner
        {
            name = "aceextitemsplus_SandbagWallCorner";
            count = 20;
        };
        class xx_Sandbag_End
        {
            name = "aceextitemsplus_SandbagWallEnd";
            count = 20;
        };
        class xx_Sandbag_Long
        {
            name = "kka3_ace_extension_Land_BagFence_Long_F";
            count = 20;
        };
        class xx_Sandbag_Round
        {
            name = "kka3_ace_extension_Land_BagFence_Round_F";
            count = 20;
        };
        class xx_Sandbag_Short
        {
            name = "aceextitemsplus_SandbagWallShort";
            count = 20;
        };
        class xx_Pallet
        {
            name = "kka3_ace_extension_Land_Pallet_vertical_F";
            count = 20;
        };
    };
};

class 4R_VCP : Box_NATO_Support_F
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Vehicle Checkpoint Crate";
    maximumLoad = 2000;

    class TransportWeapons
    {
        class xx_Sandbag_End
        {
            name = "aceextitemsplus_SandbagWallEnd";
            count = 3;
        };
        class xx_Sandbag_Long
        {
            name = "kka3_ace_extension_Land_BagFence_Long_F";
            count = 2;
        };
        class xx_Sandbag_Round
        {
            name = "kka3_ace_extension_Land_BagFence_Round_F";
            count = 4;
        };
        class xx_Sandbag_Short
        {
            name = "aceextitemsplus_SandbagWallShort";
            count = 4;
        };
        class xx_Light
        {
            name = "kka3_ace_extension_Land_PortableLight_single_F";
            count = 2;
        };
        class xx_Barrier
        {
            name = "kka3_ace_extension_roadbarrier_f";
            count = 2;
        };
        class xx_Cone
        {
            name = "kka3_ace_extension_roadcone_l_f";
            count = 6;
        };
        class xx_Stop
        {
            name = "aceextitemsplus_StopSign";
            count = 1;
        };
    };
};

class ContainerSupply;
class Bag_Base;