/*
* Author: Ampersand
* Destroy a bush or cut down a tree.
*
* Arguments:
* -
*
* Return Value:
* -
*
*/
"ace_gestures_cover" call ace_gestures_fnc_playSignal;

private _position0 = AGLToASL positionCameraToWorld [0, 0, 0];
private _position1 = AGLToASL positionCameraToWorld [0, 0, 2];

private _intersections = lineIntersectsSurfaces [_position0, _position1, cameraOn, objNull, true, 1, "VIEW"];

if (_intersections isEqualTo []) exitWith {};

(_intersections # 0) params ["_intersectPosASL", "_surfaceNormal", "_intersectObj", "_parentObject"];

if (_intersectObj isEqualTo objNull && {_parentObject isEqualTo objNull}) then {
	if !((nearestTerrainObjects [ _intersectObj , ["Bush"], 0]) isEqualTo [] ) then {
		//map bush, destroy
		_intersectObj setDamage 1;
	};
};
(_intersections # 0)