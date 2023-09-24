#include "\a3\editor_f\Data\Scripts\dikCodes.h"
["4 Rifles","4R_DropBag",["Backpack Quick Release","Press to instantly drop your rucksack on the ground."],{[player] spawn backpack_drop_function},{},[DIK,[false,false,false]]] call CBA_fnc_addKeybind;
["4 Rifles","4R_GasMask",["Equip Gas Mask","Press to instantly equip your Gasmask."],{[player] spawn gasmask_function},{},[DIK,[false,false,false]]] call CBA_fnc_addKeybind;
["4 Rifles","4R_Window",["Smash Window","Press to smash a window"],{[player] spawn window_function},{},[DIK,[false,false,false]]] call CBA_fnc_addKeybind;
["4 Rifles","4R_Brush",["Clear Brush","Clear area of grass or clutter"],{[player] spawn clearbrush_function},{},[DIK,[false,false,false]]] call CBA_fnc_addKeybind;

// Drop Bag
	backpack_drop_function =
	{
		_player = _this select 0;
		if !(backpack _player == "") then
		{
			addCamShake [15,1,5];
			playSound3D ["a3\sounds_f\characters\parachute\turning_rope_5.wss", _player, false, getPosASL _player, 4, 0.8, 10];
			sleep 0.4;
			[_player] call ace_common_fnc_dropBackpack;
		};
	};
// Gasmask
	gasmask_function = 
	{
		if !("4R_MK50" in (items player)) exitWith {
			if (goggles player == "4R_MK50") then
			{
			hintSilent "You're wearing your respirator";
			} else {
			hintSilent "You don't have your Respirator";
			}; 
		};

		if (goggles player == "") then 
		{ 
		player addGoggles "4R_MK50"; 
		player removeItem "4R_MK50"; 
		} else { 
		_existing = goggles player; 
		removeGoggles player; 
		player addItem _existing; 
		player addGoggles "4R_MK50"; 
		player removeItem "4R_MK50"; 
		};
	};
// Smash Window
	window_function = 
	{
		private _window_pos_arr = [];
		private _house = nearestObject [player , "House"];
		private _hitPoints = "isClass _x" configClasses (configFile >> "CfgVehicles" >> (typeOf _house) >> "HitPoints");
		private _brokenwindows = 0;
		private _playerweaponpos = [getPosATL player select 0, getPosATL player select 1, (getPosATL player select 2) + 1.2];
		private _rifle	= primaryWeapon player;
		private _pistol	= handgunWeapon player;
		private _weapon	= currentWeapon player;

		{
			private _cfg_entry = _x;
			private _armor = getNumber (_cfg_entry >> "armor");
			if (_weapon == "" || (animationState player == "Acts_Executioner_Forehand" || animationState player == "Acts_Miller_Knockout" || player getVariable ["ACE_isUnconscious", false] || player getVariable ["ace_captives_isHandcuffed", false])) exitWith{};
			if (_armor < 0.5) then {
				private _brokenGlass = (_cfg_entry >> "DestructionEffects") select 0;
				private _selection_name = getText (_brokenGlass >> "position");
				private _model_pos = _house selectionPosition _selection_name;
				private _world_pos = _house modelToWorld _model_pos;
				_window_pos_arr pushBack _world_pos;
				private _playerdist = _playerweaponpos distance _world_pos;
				
				if !(animationState player == "Acts_Executioner_Forehand" || animationState player == "Acts_Miller_Knockout" || player getVariable ["ACE_isUnconscious", false] || player getVariable ["ace_captives_isHandcuffed", false]) then {
				
					if !(_weapon == _rifle || _weapon == _pistol ) exitWith{};
					
						if (stance player == "STAND" && _playerdist < 1.75 && alive player) then {
							private _hitpointname = (configName _cfg_entry); 
							private _anim = "Acts_Executioner_Forehand";
							private _animspeed = 1.7;
							private _recoverspeed = 0.7;
							if (_house getHitPointDamage _hitpointname < 1) then {
								if (_weapon == _rifle) then {
									_anim = "Acts_Miller_Knockout";
									_animspeed = 1;
									_recoverspeed = 1.3;
								};
								player setAnimSpeedCoef 2;
								[player, _anim] remoteExec ["playMove", 0];
								sleep _animspeed;
								[_house,[_hitPointName, 1]] remoteExec["setHitPointDamage",0,true];
								_sound = format ["A3\Sounds_F\arsenal\sfx\bullet_hits\glass_0%1.wss", (floor random 8) + 1]; 
								playSound3D [_sound, player, false, getPosASL player, 3, 1, 30];
								sleep _recoverspeed;
								player setAnimSpeedCoef 1;
								[player, ""] remoteExec ["switchMove", 0];
								_brokenwindows = 1;
							};
						};

			};
				if (_brokenwindows > 0) exitWith{};
		};
			if (_brokenwindows > 0) exitWith{};
		} forEach _hitPoints;
	};
// Clear Brush
	clearbrush_function = 
	{
		"ace_gestures_cover" call ace_gestures_fnc_playSignal; 
		
		private _position0 = AGLToASL positionCameraToWorld [0, 0, 0]; 
		private _position1 = AGLToASL positionCameraToWorld [0, 0, 2]; 
		
		private _intersections = lineIntersectsSurfaces [_position0, _position1, cameraOn, objNull, true, 1, "VIEW"]; 
		
		if (_intersections isEqualTo []) exitWith {}; 
		
		(_intersections # 0) params ["_intersectPosASL", "_surfaceNormal", "_intersectObj", "_parentObject"]; 
		
		if (_intersectObj isEqualTo objNull && {_parentObject isEqualTo objNull}) then { 
		//terrain, spawn grass cutter 
			private _existing = _intersectPosASL nearestObject "Land_ClutterCutter_small_F"; 
			private _distance = 1; 
			private _cutter = "Land_ClutterCutter_small_F"; 
			if (_existing != objNull) then { 
				_distance = _existing distance ASLtoAGL _intersectPosASL; 
			}; 
			if (_distance < 0.5) then { 
				_cutter = "Land_ClutterCutter_medium_F"; 
			}; 
		
		createVehicle [_cutter, ASLtoAGL _intersectPosASL, [], 0, "CAN_COLLIDE"]; 
		}; 
		(_intersections # 0)
	};