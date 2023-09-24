class CfgFunctions
{
	class FourRBG
	{
		class functions
		{
		file="\FourRBG\functions";
			class BodyDrag {};
			class canClearBrush {};
			class CBRNSwap {};
			class clearBrush {};
			class convert_waterObject {};
			class create_waterObject {};
			class deployStretcher {};
			class deployTrack {};
			class dropRuck 
			{
				preInit = 1;
			};
			class GhilleSwap {};
			class Init
			{
				postInit = 1;
			};
			class loadCPERS {};
			class LockedTurretGetOut {};
			class MinePlow {};
			class objectInit {};
			class open_BANDAGES {};
			class open_CONSUMABLES {};
			class open_DRUGS {};
			class open_IFAK {};
			class open_IFAK2 {};
			class open_MASCAS {};
			class pickupStretcher {};
			class swapOveralls {};
			class swapSleeves {};
			class unloadCPERS {};
			class VehicleDig {};
		};

		class winch
		{
		file="\FourRBG\functions\WinchInteractions";
			class attachTowRopes {};
			class canAttachTowRopes {};
			class canPickupTowRopes {};
			class canTakeTowRopes {};
			class dropTowRopes {};
			class getCornerPoints {};
			class getHitchPoints {};
			class globalAddAction {};
			class pickupTowRopes {};
			class putAwayTowRopes {};
			class setOwner {};
			class simulateTowing {};
			class takeTowRopes {};
			class towingSpeed {};
			class winchInit {};
			class windTowRope {};
		};
	};
}