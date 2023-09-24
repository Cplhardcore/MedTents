TAG_StartingRespawnDelay=10;
addMissionEventHandler["EntityKilled",
{
	params ["_killed","_killer","_instigator"],
	if (isNull _instigator) then {_instigator = UAVControl vehicle _killer select 0};
	if (isNull _instigator) then {_instigator = _killer};
	if ((side group _killed == civilian) && (isPlayer _instigator)) then
	{ 
		if(isServer) then { [(side _instigator), -1] call BIS_fnc_respawnTickets; };
		TAG_StartingRespawnDelay = TAG_StartingRespawnDelay + 10;
		setPlayerRespawnTime TAG_StartingRespawnDelay;
		systemChat format ["%1 killed a Non-Combatant. Respawn tickets remaining (%2), Respawn time added (%3).", name _instigator, [_instigator,nil,true] call BIS_fnc_respawnTickets, TAG_StartingRespawnDelay];
	};
}];