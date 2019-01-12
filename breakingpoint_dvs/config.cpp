// DVD Version 1.0

class CfgPatches
{
	class DVD
		{
			units[] = { };
			weapons[] = { };
			requiredVersion = QUOTE(REQUIRED_VERSION);
			requiredAddons[] = { };
			version = VERSION;
			versionStr = QUOTE(VERSION);
			versionAr[] = {VERSION_AR};
			author[] = {"TPW"};
		};
};

class Extended_Init_EventHandlers
{
	class All
	{
		DVD_Init = "if (isNil ""DVD_Init_Var"") then {DVD_Init_Var = [] execVM ""\DVD_103\init.sqf"";};";
	};
};
