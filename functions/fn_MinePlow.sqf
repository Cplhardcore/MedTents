params ["_target"];

_lowerPlow = ["lowerPlowAction",("<t color='#00FF00'>Lower Plow for digging mines</t>"),"",{
	
	params ["_target", "_player", "_params"];
	_target animateSource ["MovePlow", 1];
	_target allowDamage false;
	_target forceSpeed 5;
	
},{ (driver _target) isEqualTo _player && _target animationSourcePhase 'MovePlow' isEqualTo 0 }] call ace_interact_menu_fnc_createAction;

_raisePlow = ["raisePlowAction",("<t color='#FF0000'>Raise Plow</t>"),"",{
	
	params ["_target", "_player", "_params"];
	_target animateSource ["MovePlow", 0];
	_target allowDamage true;
	_target forceSpeed -1;
	
},{ (driver _target) isEqualTo _player && _target animationSourcePhase 'MovePlow' isEqualTo 1 }] call ace_interact_menu_fnc_createAction;

[_target , 1, ["ACE_SelfActions"],_lowerPlow] call ace_interact_menu_fnc_addActionToObject;
[_target , 1, ["ACE_SelfActions"],_raisePlow] call ace_interact_menu_fnc_addActionToObject;

/*_target addEventHandler ["explosion",{
	params ["_target","_damage"];
	if (_target animationSourcePhase 'MovePlow' isEqualTo 1 && speed _target < 25) then {
		private _oldDamage = (damage _target) - _damage;
		private _newDamage = _oldDamage + (_damage) *0.1;
		{_target setHitPointDamage [_x, _newDamage]} forEach ["hitengine","hitrtrack","hitltrack","#light_l","#light_l_flare","#light_r","#light_r_flare"];
	};
}];*/

_target addEventHandler ["EpeContactStart", {
	params ["_target", "_object", "_selection1", "_selection2", "_force"]; 
	if (_target animationSourcePhase 'MovePlow' isEqualTo 1) then {
		private _destTypes = ["craterlong_small","craterlong","crater","ace_envelope_small","ace_envelope_big","grad_envelope_short","grad_envelope_vehicle"];
		private _slowCraters = ["craterlong_small"];
		private _factor = 20;
		if ( toLower (typeOf _object) in _slowCraters ) then {
			_factor = 500;
		};
		if ( toLower (typeOf _object) in _forts ) then {
			_factor = 700;
		};
		if ( toLower (typeOf _object) in _destTypes ) then {
			_object setPos [getPos _object select 0, getPos _object select 1, (getPos _object select 2) - (1/_factor)];
			if (getPos _object select 2 < - 0.5) then {deleteVehicle _object};
		};
	};
}];
/*
MICLIC_DetonateRope = {
	params ["_rope","_target"];
	_veh setVariable ["MICLIC_isLaunching",true,true];
	_explosion = "IEDUrbanBig_Remote_Ammo";
	_temp = "";
	_rope enableSimulationGlobal false;
	for "_i" from ropeLength _rope to 20 step -10 do
	{
		_ends = ropeEndPosition _rope;
		_temp = _explosion createVehicle (_ends select 1);
		[(_ends select 1)] call MICLIC_wallsHandler;
		_temp setDamage 1;
		ropeCut [_rope,ropeLength _rope -10];
		sleep 0.002;
		if (ropeLength < 20) exitWith {};
	};
	_rope enableSimulationGlobal true;
	sleep 1;
	_target setVariable ["MICLIC_isLaunching",false,true];
	for "_i" from 20 to 1 step -1 do
	{
		ropeCut [_rope, _i];
		sleep 0.5;
	};
	ropeDestroy _rope;
};

MICLIC_GenRope = {
	params ["_target"];
	_target setVariable ["MICLIC_islaunching",true,true];
	_pos = [1.649,-2.9100001,-0.23,1.649,-2.9100001,-0.23,4];
	_bag = "Land_Sleeping_bag_folded_F" createVehicle [0,0,0];
	_chem = "Chemlight_red" createVehicle [0,0,0];
	_chem attachTo [_bag,[0,0,0]];
	_bag attachTo [_target,(_pos select 1)];

	_dir = [0,-0.5,0.75];
	_up = [0,-0.75,-0.5];
	_bag setVectorDirAndUp [_dir,_up];
	sleep 3;
	detach _bag;
	_rope = ropeCreate [_target, (_pos select 0), 100];
	[_bag,[0,0,0],[0,0,-1]] ropeAttachTo _rope;
	_light = "#lightpoint" createVehicle [0,0,0];
	[_light,_bag]  remoteExec ["MICLIC_Light",0,true];
	_source01 = "#particlesource" createVehicle [0,0,0];
	_source01 setParticleClass "missile1";
	_source01 attachTo [_bag,[0,0,0.5]];
	_bag setVelocityModelSpace [0,0,-30];
	playSound3D ["A3\Sounds_F\weapons\Rockets\missile_1.wss", _target];
	_target setVariable ["MICLIC_rope", _rope, true];
	sleep 2;
	deleteVehicle _source01;
	deleteVehicle _light;
	_target setVariable ["MICLIC_islaunching",false,true];
};

MICLIC_cut = {
	params ["_target"];
	ropeDestroy (_target getVariable ["MICLIC_rope",objNull]);
};

MICLIC_Act = {
	params ["_target"];
	if (_target getVariable ["MICLIC_islaunching",false]) exitWith {};
	if (isNull (_target getVariable ["MICLIC_rope",objNull])) then {
		_target setVariable ["MICLIC_length", 100];
		[_target] remoteExec ["MICLIC_GenRope",2];
		_target setVariable ["MICLIC_ammo", 4 , true];
	};
};

MICLIC_Light = {
	_light  = _this select 0;
	_bag = _this select 1;
	_light setLightBrightness 1;
	_light setLightAmbient [0.9,0.9,0.6];
	_light setLightColor [0.9,0.9,0.6];
	_light lightAttachObject [_bag, [0,0,0.5]];
};

MICLIC_WallsHandler = {
    params [
        ["_pos",[0,0,0],[[]]],
        ["_range",20, [0]]
    ];

    _walls = nearestTerrainObjects [_pos,["FENCE","WALL","TREE", "SMALL TREE", "BUSH"],_range];
    _walls = _walls apply {
        _damage = if (_x distance _pos > (_range/2)) then {0.9} else {1};
        _x setDamage _damage;
        _damage;
    };
    _walls
};

MICLIC_CONDITION_CUT = {
	((driver (vehicle player)) == player) && 
	((vehicle player) getVariable ["MICLIC_ammo",1] != 0) &&
	!(isNull ((vehicle player) getVariable ["MICLIC_rope",objNull]))
};

MICLIC_CONDITION = {
	player setUserActionText [
		(player getVariable ["MICLIC_actionid",-1]),
		(["<t color='#e74c3c'>",Launch MICLIC</t>"] joinString "")
	];
	if ((vehicle player) getVariable ["MICLIC_ammo",-1] != -1) then {
		player setUserActionText [
			(player getVariable ["MICLIC_actionid",-1]),
			(["<t color='#e74c3c'>"Launch MICLIC" (",(vehicle player) getVariable ["MICLIC_ammo",2")</t>"] joinString "")
		];
	};
	if (!isNull ((vehicle player) getVariable ["MICLIC_rope",objNull])) then {
		_extendcheck = {
			_rope = (vehicle player) getVariable ["MICLIC_rope",objNull];
			if (isNull _rope) exitWith {""};
			_maxlength = 100;
			_ropepos = (ropeEndPosition _rope select 1);
			if ((vehicle player) distance _ropepos < _maxlength) exitWith {[" (",localize "STR_NOT_EXTENDED",")"] joinString ""};
			"";
		};
		player setUserActionText [
			(player getVariable ["MICLIC_actionid",-1]),
			(["<t color='#e74c3c'>"DETONATE",call _extendcheck,"</t>"] joinString "")
		];
	};
	((driver (vehicle player)) == player) &&
	((vehicle player) getVariable ["MICLIC_ammo",1] != 0 || !isNull ((vehicle player) getVariable ["MICLIC_rope",objNull]))
};

MICLIC_CONDITION_CUT = {
	((driver (vehicle player)) == player) && 
	((vehicle player) getVariable ["MICLIC_ammo",1] != 0) &&
	!(isNull ((vehicle player) getVariable ["MICLIC_rope",objNull]))
};

MICLIC_actionHandler = {
	(player getVariable ["MICLIC_actionid",-1])
	_actionid = player addAction [
		(["<t color='#e74c3c'>"Launch MICLIC" (",call MICLIC_Vehammo,")</t>"] joinString ""),
		{
			[vehicle player] call MICLIC_Act;
		},
		[],
		1,
		false,
		false,
		"",
		"call MICLIC_CONDITION"
	];
	_actionid2 = player addAction [
		(["<t color='#e74c3c'>CUT MICLIC</t>"] joinString ""),
		{
			[vehicle player] call MICLIC_cut;
		},
		[],
		0,
		false,
		false,
		"",
		"call MICLIC_CONDITION_CUT"
	];
	player setVariable ["MICLIC_actionid",_actionid];
	player setVariable ["MICLIC_actionid2",_actionid2];
	[_actionid,_actionid2];
};
call MICLIC_actionHandler;
player addEventHandler ["Respawn",{call MICLIC_actionHandler}];
*/