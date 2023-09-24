class 4R_ContactReport
{
	idd = 4363;
	duration = "1e + ´011";
	fadeIn=0;
	fadeOut=0;
	onLoad = "_this call FourRBG_fnc_loadContactReport;";
	onUnload = "call FourRBG_fnc_unloadContactReport;";
	class ControlsBackground
	{
		class 4RBG_SALTA:RscPicture
		{
			idc = 4300;
			text = "\FourRBG\data\ContactReport.paa";
			x="0.0125 * safezoneW + safezoneX";
			y="0.02 * safezoneH + safezoneY";
			w="0.2875 * safezoneW";
			h="0.46 * safezoneH";
		};
	};
};

class 4R_ECAS
{
	idd = 4364;
	duration = "1e + ´011";
	fadeIn=0;
	fadeOut=0;
	onLoad = "_this call FourRBG_fnc_loadECAS;";
	onUnload = "call FourRBG_fnc_unloadECAS;";
	class ControlsBackground
	{
		class 4RBG_SALTA:RscPicture
		{
			idc = 4400;
			text = "\FourRBG\data\ECAS.paa";
			x="0.0125 * safezoneW + safezoneX";
			y="0.02 * safezoneH + safezoneY";
			w="0.2875 * safezoneW";
			h="0.46 * safezoneH";
		};
	};
};

class 4R_COMD
{
	idd = 4364;
	duration = "1e + ´011";
	fadeIn=0;
	fadeOut=0;
	onLoad = "_this call FourRBG_fnc_loadCOMD;";
	onUnload = "call FourRBG_fnc_unloadCOMD;";
	class ControlsBackground
	{
		class 4RBG_SALTA:RscPicture
		{
			idc = 4400;
			text = "\FourRBG\data\CommandersCard.paa";
			x="0.0125 * safezoneW + safezoneX";
			y="0.02 * safezoneH + safezoneY";
			w="0.2875 * safezoneW";
			h="0.46 * safezoneH";
		};
	};
};

class 4R_CFF
{
	idd = 4364;
	duration = "1e + ´011";
	fadeIn=0;
	fadeOut=0;
	onLoad = "_this call FourRBG_fnc_loadCFF;";
	onUnload = "call FourRBG_fnc_unloadCFF;";
	class ControlsBackground
	{
		class 4RBG_SALTA:RscPicture
		{
			idc = 4500;
			text = "\FourRBG\data\FireMission.paa";
			x="0.0125 * safezoneW + safezoneX";
			y="0.02 * safezoneH + safezoneY";
			w="0.2875 * safezoneW";
			h="0.46 * safezoneH";
		};
	};
};

class 4R_CPERS_Tag
{
	idd = 4263;
	duration="1e + ´011";
	fadeIn=0;
	fadeOut=0;
	onLoad="_this call FourRBG_fnc_loadCPERS;";
	onUnload="call FourRBG_fnc_unloadCPERS;";
	class ControlsBackground
	{
		class DD_FORM_2745:RscPicture
		{
			idc=4200;
			text="\FourRBG\data\EPW_Capture_Card.paa";
			x="0.0125 * safezoneW + safezoneX";
			y="0.02 * safezoneH + safezoneY";
			w="0.2875 * safezoneW";
			h="0.46 * safezoneH";
		};
	};
	class Controls
	{
		class DTG:RscEdit
		{
			idc=4201;
			x="0.021875 * safezoneW + safezoneX";
			y="0.0518056 * safezoneH + safezoneY";
			w="0.269141 * safezoneW";
			h="0.0469444 * safezoneH";
			style="0x200 + 0x10";
			colorText[]={0,0,0,1};
			shadow=0;
			tooltip="Enter the current real date and time in format H:M:Day:Month:Year.";
		};
		class NAME: RscEdit
		{
			idc=4202;
			x="0.0214844 * safezoneW + safezoneX";
			y="0.120834 * safezoneH + safezoneY";
			w="0.134766 * safezoneW";
			h="0.0455555 * safezoneH";
			style="0x200 + 0x10";
			colorText[]={0,0,0,1};
			shadow=0;
			tooltip="Get the captives name from thier dogtag.";
		};
		class EPW_UNIT: RscEdit
		{
			idc=4203;
			x="0.157031 * safezoneW + safezoneX";
			y="0.120833 * safezoneH + safezoneY";
			w="0.134766 * safezoneW";
			h="0.0455555 * safezoneH";
			style="0x200 + 0x10";
			colorText[]={0,0,0,1};
			shadow=0;
			tooltip="Enter what unit, if known, the captive is from, or what branch of what armed force.";
		};
		class RANK: RscEdit
		{
			idc=4204;
			x="0.0210941 * safezoneW + safezoneX";
			y="0.1875 * safezoneH + safezoneY";
			w="0.134766 * safezoneW";
			h="0.0455555 * safezoneH";
			style="0x200 + 0x10";
			colorText[]={0,0,0,1};
			shadow=0;
			tooltip="Enter the rank of the captive from their dogtag.";
		};
		class CAPTURING_UNIT: RscEdit
		{
			idc=4205;
			x="0.157031 * safezoneW + safezoneX";
			y="0.1875 * safezoneH + safezoneY";
			w="0.134766 * safezoneW";
			h="0.0455555 * safezoneH";
			style="0x200 + 0x10";
			colorText[]={0,0,0,1};
			shadow=0;
			tooltip="Enter your unit designator, for example A-1-1";
		};
		class LOCATION: RscEdit
		{
			idc=4206;
			x="0.021484 * safezoneW + safezoneX";
			y="0.254167 * safezoneH + safezoneY";
			w="0.269532 * safezoneW";
			h="0.0462499 * safezoneH";
			style="0x200 + 0x10";
			colorText[]={0,0,0,1};
			shadow=0;
			tooltip="Enter the 10fig Grid reference of capture";
		};
		class CIRCUMSTANCES: RscEdit
		{
			idc=4207;
			x="0.0210938 * safezoneW + safezoneX";
			y="0.338889 * safezoneH + safezoneY";
			w="0.0890633 * safezoneW";
			h="0.126805 * safezoneH";
			style="0x200 + 0x10";
			colorText[]={0,0,0,1};
			shadow=0;
			tooltip="Enter why you have captured this person.";
		};
		class CONDITION: RscEdit
		{
			idc=4208;
			x="0.112109 * safezoneW + safezoneX";
			y="0.355555 * safezoneH + safezoneY";
			w="0.0886727 * safezoneW";
			h="0.110138 * safezoneH";
			style="0x200 + 0x10";
			colorText[]={0,0,0,1};
			shadow=0;
			tooltip="Enter the casualties last known medical tier, and treatments undertaken.";
		};
		class EQUIPMENT: RscEdit
		{
			idc=4209;
			x="0.202734 * safezoneW + safezoneX";
			y="0.355555 * safezoneH + safezoneY";
			w="0.0886727 * safezoneW";
			h="0.110138 * safezoneH";
			style="0x200 + 0x10";
			colorText[]={0,0,0,1};
			shadow=0;
			tooltip="Enter any specialist equipment or documentation carried by the captured unit.";
		};
	};
}