params ["_EHid"];

eh_parkour = eh_parkour select 
{
	_id = _x select 0;
	(_EHid != _id)
};      