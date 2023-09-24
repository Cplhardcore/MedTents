/*
Script by CUP team, code copied here to borrow function. Code remains property of the CUP team.

 * GetOut handler
 *
 * Called by EventHandlers
 * class Eventhandlers : Eventhandlers
 * {
 *     class CUP_TrackedVehicles_M1Abrams {
 *         GetOut = "_this call CUP_fnc_LockedTurretGetOut";
 *     };
 * };
 *
 * This function uses two config entries in the turrets itself:
 *
 * Example: 
 * class Turrets : Turrets
 *   {
 *       class MainTurret : MainTurret
 *       {
 *           class Turrets : Turrets
 *           {
 *           class CommanderOpticsGPSE : NewTurret
 *           {
 *               4R_LockTurret = 1;
 *               4R_UnlockOnGetOut[] = { 0,0 };
 *               dontCreateAI = 1;
 *               cantCreateAI = 1;
 *                 ...
 *
 * When a unit gets out of a turret with one or both of these config entries, the function -
 *
 * - Locks the turret if CUP_LockTurret = 1
 * - Unlocks the given turret ( in the example [0,0])
 *
 * In the example, the CommanderOpticsGPSE turret is automatically locked when the commander
 * disembarks or ejects from the vehicle, and the original commander turret [0,0] is unlocked
 *
 */
params ["_vehicle", "_turret"];

_cfg = [_vehicle, _turret] call BIS_fnc_turretConfig;
if (isNumber (_cfg >> "4R_LockTurret")) then 
{
	_doLock = getNumber (_cfg >> "4R_LockTurret");
	// If we exit a turret that is locked by default, lock it
	// (just in case; under normal circumstances, the turret should remain locked)
	if (_doLock == 1) then 
	{
		[_vehicle,[_turret, true]] remoteExec ["lockTurret"];
	};
};

if (isArray (_cfg >> "4R_UnlockOnGetOut")) then 
{
	// If there is an unlock turret target, unlock the turret.
	_unlockTurret = getArray (_cfg >> "4R_UnlockOnGetOut");
	[_vehicle, [_unlockTurret, false]] remoteExec ["lockTurret"];
};