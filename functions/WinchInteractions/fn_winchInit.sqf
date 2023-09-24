// Call this function directly from the Init of any vehicle equipped with a Winch.
// Example
//
// [_object] call FourRBG_fnc_winchInit;

params [["_vehicle", objNull]];

if (isNull _vehicle) exitWith {};

_4RWinchIn = ["4RWinch_takeRopes", "Deploy Winch Hook", "", {[_this, 10] call FourRBG_fnc_takeTowRopes;}, {_this call FourRBG_fnc_canTakeTowRopes}, {}] call ace_interact_menu_fnc_createAction;
[_vehicle, 0, ["ACE_MainActions"], _4RWinchIn] call ace_interact_menu_fnc_addActionToObject;

// Winch Lengths
_4RWinch25 = ["4RWinch_takeRopes25", "25 Metres", "", {[_this, 25] call FourRBG_fnc_takeTowRopes;}, {_this call FourRBG_fnc_canTakeTowRopes}, {}] call ace_interact_menu_fnc_createAction;
_4RWinch20 = ["4RWinch_takeRopes20", "20 Metres", "", {[_this, 20] call FourRBG_fnc_takeTowRopes;}, {_this call FourRBG_fnc_canTakeTowRopes}, {}] call ace_interact_menu_fnc_createAction;
_4RWinch10 = ["4RWinch_takeRopes10", "10 Metres", "", {[_this, 10] call FourRBG_fnc_takeTowRopes;}, {_this call FourRBG_fnc_canTakeTowRopes}, {}] call ace_interact_menu_fnc_createAction;
_4RWinch5 = ["4RWinch_takeRopes05", "5 Metres", "", {[_this, 5] call FourRBG_fnc_takeTowRopes;}, {_this call FourRBG_fnc_canTakeTowRopes}, {}] call ace_interact_menu_fnc_createAction;
[_vehicle, 0, ["ACE_MainActions","4RWinch_takeRopes"], _4RWinch25] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_MainActions","4RWinch_takeRopes"], _4RWinch20] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_MainActions","4RWinch_takeRopes"], _4RWinch10] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_MainActions","4RWinch_takeRopes"], _4RWinch5] call ace_interact_menu_fnc_addActionToObject;

// Put away Winch
_myaction = ["4RWinch_putAwayRopes", "Put Winch Away","",{_this call FourRBG_fnc_putAwayTowRopes;},{_existingTowRopes = (_this select 0) getVariable ["SA_Tow_Ropes",[]]; (count _existingTowRopes) > 0},{}] call ace_interact_menu_fnc_createAction;
[_vehicle, 0, ["ACE_MainActions"], _myaction] call ace_interact_menu_fnc_addActionToObject;

// Reel Winch
_4RWinchSI = ["4RWinch_RopeLength", "Winch Length","",{},{_existingTowRopes = (_this select 0) getVariable ["SA_Tow_Ropes",[]]; (count _existingTowRopes > 0 && (vectorMagnitude velocity _vehicle) < 2)},{}] call ace_interact_menu_fnc_createAction;
[_vehicle, 0, ["ACE_MainActions"], _4RWinchSI] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_SelfActions"], _4RWinchSI] call ace_interact_menu_fnc_addActionToObject;

_4RWinchR15 = ["4RWinch_Fif", "15 Meters","",{[_this, 20] call FourRBG_fnc_windTowRope;},{_existingTowRopes = (_this select 0) getVariable ["SA_Tow_Ropes",[]]; _ropeLength = (_this select 0) getVariable ["SA_RopeLength", 0];(count _existingTowRopes > 0 AND (_ropeLength >= 15 OR _ropeLength <= 12))},{}] call ace_interact_menu_fnc_createAction;
_4RWinchR10 = ["4RWinch_Ten", "10 Meters","",{[_this, 10] call FourRBG_fnc_windTowRope;},{_existingTowRopes = (_this select 0) getVariable ["SA_Tow_Ropes",[]]; _ropeLength = (_this select 0) getVariable ["SA_RopeLength", 0];(count _existingTowRopes > 0 AND (_ropeLength >= 11 OR _ropeLength <= 7))},{}] call ace_interact_menu_fnc_createAction;
_4RWinchR5 = ["4RWinch_Five", "5 Meters","",{[_this, 5] call FourRBG_fnc_windTowRope;},{_existingTowRopes = (_this select 0) getVariable ["SA_Tow_Ropes",[]]; _ropeLength = (_this select 0) getVariable ["SA_RopeLength", 0];(count _existingTowRopes > 0 AND (_ropeLength >= 6 OR _ropeLength <= 4))},{}] call ace_interact_menu_fnc_createAction;
_4RWinchR3 = ["4RWinch_Three", "3 Meters","",{[_this, 3] call FourRBG_fnc_windTowRope;},{_existingTowRopes = (_this select 0) getVariable ["SA_Tow_Ropes",[]]; _ropeLength = (_this select 0) getVariable ["SA_RopeLength", 0];(count _existingTowRopes > 0 AND _ropeLength >= 4)},{}] call ace_interact_menu_fnc_createAction;
[_vehicle, 0, ["ACE_MainActions", "4RWinch_RopeLength"], _4RWinchR15] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_SelfActions", "4RWinch_RopeLength"], _4RWinchR15] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_MainActions", "4RWinch_RopeLength"], _4RWinchR10] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_SelfActions", "4RWinch_RopeLength"], _4RWinchR10] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_MainActions", "4RWinch_RopeLength"], _4RWinchR5] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_SelfActions", "4RWinch_RopeLength"], _4RWinchR5] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_MainActions", "4RWinch_RopeLength"], _4RWinchR3] call ace_interact_menu_fnc_addActionToObject;
[_vehicle, 0, ["ACE_SelfActions", "4RWinch_RopeLength"], _4RWinchR3] call ace_interact_menu_fnc_addActionToObject;
// _ropeLength = (_this select 0) getVariable ["SA_RopeLength", 0];(count _existingTowRopes > 0 AND _ropeLength >= 8)