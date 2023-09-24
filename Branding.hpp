class RscButton;
class RscText;
class RscCombo;
class RscPicture;
class RscEdit;
class RscActiveText;
class RscControlsGroup;
class RscStandardDisplay;
class RscPictureKeepAspect;
class IGUIBack;
class RscFrame;
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	scriptName="RscDisplayMain";
	scriptPath="GUI";
	onLoad="[""onLoad"",_this,""RscDisplayMain"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayMain"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controls
	{
		class Logo:RscPictureKeepAspect
		{
			text="\FourRBG\data\rifles_capbadge.paa";
			tooltip="4 Rifles Milsim";
			x="0.4425 -  5 *  (pixelW * pixelGrid * 2)";
			y="safezoneY + (3 - 0.5 *  5) *  (pixelH * pixelGrid * 2)";
			w="3 *  5 *  (pixelW * pixelGrid * 2)";
			h="2 *  5 *  (pixelH * pixelGrid * 2)";
			onButtonClick="";
			onKillFocus="";
			onSetFocus="";
			onLoad="";
		};
		class LogoApex: Logo
		{
			show=0;
			text="\FourRBG\data\rifles_capbadge.paa";
			onLoad="";
		};
	};
	class Spotlight
	{
		delete Spotlight1;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete SpotlightPrev;
		delete SpotlightNext;
		class Join4RBGServer
		{
			text="4RBG Server";
			textIsQuote=0;
			picture="FourRBG\data\big_banner_co.paa";
			video="";
			action="0 = [_this, 'arma.midnightraiders.online', '2302', 'celeretaudax'] execVM 'FourRBG\Scripts\joinServer.sqf';";
			actionText="Join the 4 Rifles Milsim server";
			condition="true";
		};
	};
	class ControlsBackground
	{
		class backgroundPicture : RscPicture
		{
			idc=5001;
			text="";
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="1 * safezoneH";
		};
	};
}