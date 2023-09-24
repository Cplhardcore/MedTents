/**
 * Modified by Sean Crowe, original script by Team ~R3F~
 * please see orginal work @ https://forums.bistudio.com/topic/170033-r3f-logistics/
 *
 * To get a full list of changes please contant me on the biforums under the username S.Crowe
 *
 * Copyright (C) 2014 Team ~R3F~
 *
 * This program is free software under the terms of the GNU General Public License version 3.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

if (hasInterface) then
{

	params [["_object", objNull]];

	if (_object getVariable ["FourRBG_ObjInit", false]) exitWith {};

	[_object] spawn
	{
		private ["_config", "_name", "_myaction"];
		params [["_object", objNull]];
		if (isNull _object) exitWith {};

		//Blacklisted Objects
		if (_object isKindOf "ACE_DefuseObject") exitWith {};

		_config = configFile >> "CfgVehicles" >> (typeOf _object);
		_name = getText (_config >> "displayName");

		// Allow all Vehicles to be winched.
		_myaction = ["AdvTow_attachRopes", "Attach To Winch","",{_this call FourRBG_fnc_attachTowRopes;},{_this call FourRBG_fnc_canAttachTowRopes},{}] call ace_interact_menu_fnc_createAction;
		[_object, 0, ["ACE_MainActions"], _myaction] call ace_interact_menu_fnc_addActionToObject;
		_object setVariable ["FourRBG_ObjInit", true];
	};
};