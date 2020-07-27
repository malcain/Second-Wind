# Second-Wind
Breaking Point Mod ( Core Client / Server Code + Assets ) 

##Configuration
Download the BreakingPoint Client + Server files to your server (A batch file will be included in a tools folder for steam cmd users).

Import the included breakingpoint.sql file from the SQL folder to a clean database and make sure you have a sql account that has full access to that database.

Copy the ServerConfig folder to your ArmA server directory.
Open the BreakingPointExt.ini in ServerConfig and change the database ip, name, username, password and port to the ones you setup earlier.
``` [DATABASE]
 ip = 127.0.0.1
 port = 3306
 database = breakingpointmod
 username = root
 password =
```

Open the config.cfg in ServerConfig directory and setup your instance, this is important to remember for each server you host.
``` class Params
 {
 	instance = 1;
 	debug = false;
 };
To can find instance values in your database manager: go to the instance table and look at the world id.
```

Set the correct mission file for the map you'd like to run.
 /*
 List of mission names.
 "BP1_BreakingPoint.Altis" //Altis
 "BP2_BreakingPoint.Stratis" //Stratis
 "BP4_BreakingPoint.Thirsk" //Thirsk
 "BP3_BreakingPoint.ThirskW" //Thirsk Winter
 "BP5_BreakingPoint.Tanoa" //Tanoa
 "BP6_BreakingPoint.newhaven" //Newhaven
 "BP7_BreakingPoint.Esseker" //Esseker
 "BP8_BreakingPoint.Chernarus" //Chernarus
 "BP9_BreakingPoint.namalsk" //Namalsk
 */
``` class Missions
 {
   class BreakingPoint
   {
 	  template = "BP1_BreakingPoint.Altis";
 	  difficulty = "Regular";
 	  class Params
 	  {
 		  instance = 1;
 		  debug = false;
 	  };
   };
 };
```


Copy the included server_start.bat file from the Tools folder to your server directory and edit as necessary (The defaults provided will work for a 64 Bit server running on port 2302).

Double click the batch file and wait for the server to start, if everything went successfully you should see the server start and a console displayed saying the following.
