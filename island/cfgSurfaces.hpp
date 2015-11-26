class CfgSurfaces 
{
	class Default {};
	class grass_green_surface : Default
	{	
		 files = "grass_green*";
		 rough = 0.1;
		 dust = 0.05;
		 maxSpeedCoef = 0.8;
		 soundEnviron = "grass";
		 character = "grass_green_Character";
		  soundHit = "soft_ground";
	};
	class concrete : Default
	{	
		files = "concrete*";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.15;
		lucidity = 0.3;
		grassCover = 0.0;
		impact = "hitConcrete";
	};
};

class CfgSurfaceCharacters
{
	class grass_green_Character
  	{
			probability[]={0.9, 0.2};
			names[]={"Grass_Green", "Flower1"};
  	};
};