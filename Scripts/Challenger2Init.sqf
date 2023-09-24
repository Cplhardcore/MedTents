params ["_vehicle","_turret"];

uiSleep 5;
_vehicle execVM "\FourRBG\Scripts\IntLight.sqf";
_cfg = [_vehicle, _turret] call BIS_fnc_turretConfig;
if (isNumber (_cfg >> "4R_LockTurret")) then 
{
	_doLock = getNumber (_cfg >> "4R_LockTurret");
	if (_doLock == 1) then 
	{
		[_vehicle,[_turret, true]] remoteExec ["lockTurret"];
	};
};