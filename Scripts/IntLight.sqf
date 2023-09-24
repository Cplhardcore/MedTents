// // // // // // // // // //
// Interior Light script
// Version 1.5
// Date: 2014.05.08
// Autors: Lala14, Tajin
// // // // // // // // // //

// init line:
// nul=[] execVM "IntLight.sqf";


if (isDedicated) exitWith {};



diag_log "IL starting";


// light colors:
IL_c_white = [255,255,255];
IL_c_red = [255,0,0];
IL_c_green = [0,255,0];
IL_c_blue = [0,0,255];
IL_c_yellow = [255,200,0];
IL_c_orange = [255,75,0];

// predefined default values used in the config below
IL_attenuation = [0.3,0,0,500];
IL_att_soft = [0,10,10,10];
IL_att_tiny = [0,0,0,0,0.2,0.4];
IL_intensity = 50;

// To make all lights brighter or darker, simply adjust the following multiplier.
IL_intensity_mult = 0.1;

diag_log "IL config loading";

// config ["kindOf classnames","First person only",[["position in modelspace","lightcolor","attentuation","intensity"],[..] ] ]
if (isnil "IL_config") then { IL_config = [] };
IL_config = IL_config + [
	
	[["4R_Challenger"], false, [
		 [ [0,-16.7,-0.6], IL_c_red, IL_att_soft, IL_intensity ]
	]]
];
// The config-array can be modified at runtime. This also allows modautors to append their own settings without having to edit this script.


diag_log "IL config done";

// vars
IL_typelist = [];
IL_lights = [];
IL_varname = "interiorlight";
IL_text_ON = "<t color='#1D7BC9'>Turn Interior Light ON</t>";
IL_text_OFF = "<t color='#1D7BC9'>Turn Interior Light OFF</t>";
IL_action = -1;


// functions
IL_fnc_inList = {
	_found = false;
	_index = -1;
	{
		_types = _x select 0;
		{
			if (_this isKindOf _x) exitWith { _found = true; };
		} forEach _types;
		if _found exitWith {_index = _forEachIndex;};
	} forEach IL_config;
	_index
};

IL_fnc_addAction = {
	if (IL_action > -1) then {
		player removeAction IL_action;
	};

	IL_action = player addAction [
	IL_text_ON,
	"
		_veh = vehicle player;
		_ison = _veh getVariable [IL_varname,false];
		if (_ison) then {
			_veh setVariable[IL_varname,false,true];
		} else {
			_veh setVariable[IL_varname,true,true];
		}
	",
	"",
	0,
	false,
	false,
	"",
	"
		_veh = vehicle player;
		_show = false;
		if ( _veh != player ) then {
			_vehtype = typeOf _veh;
			_i = _veh call IL_fnc_inList;
			if (_i > -1) then {
				_show = true;
				_ison = _veh getVariable [IL_varname,false];
				if (_ison) then {
					player setUserActionText[IL_action,IL_text_OFF];

					if ( (cameraView != 'INTERNAL') && ((IL_config select _i) select 1) ) then {
						if (count IL_lights > 0) then {
							{
								IL_lights = IL_lights - [_x];
								deleteVehicle _x;
							} forEach IL_lights;
						};
					} else {
						if (count IL_lights == 0) then {
							_lights = (IL_config select _i) select 2;
							{
								_light = '#lightpoint' createVehicleLocal [0,0,0];
								_light lightAttachObject [_veh,[-1, -0.4, -1.3]];
								
								_light setLightColor (_x select 1);
								_light setLightAttenuation (_x select 2);
								_light setLightIntensity (_x select 3) * IL_intensity_mult;
								IL_lights = IL_lights + [ _light ];
							} forEach _lights;
						};
					};
				} else {
					player setUserActionText[IL_action,IL_text_ON];
					if (count IL_lights > 0) then {
						{
							IL_lights = IL_lights - [_x];
							deleteVehicle _x;
						} forEach IL_lights;
					};
				};
			};
		} else {
			if (count IL_lights > 0) then {
				{
					IL_lights = IL_lights - [_x];
					deleteVehicle _x;
				} forEach IL_lights;
			};
		};
		_show
	"];
};

diag_log "IL func loaded";

// init
[] spawn IL_fnc_addAction;
player addEventHandler ["Respawn", {
	[] spawn IL_fnc_addAction;
}];

diag_log "IL ready";