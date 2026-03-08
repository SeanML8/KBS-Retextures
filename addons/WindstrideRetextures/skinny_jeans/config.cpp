class CfgPatches
{
	class KBS_Retextures_SkinnyJeans
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data", "DZ_Scripts"
		};
	};
};

class CfgVehicles
{
	class Skinny_Jeans_ColorBase;
	class Skinny_Jeans_Floral: Skinny_Jeans_ColorBase
	{
		scope = 2;
		displayName = "Floral Skinny Jeans";
		descriptionShort = "Found in a Shipping Container. Designed and Made by Canadian and Norweigan children.";
		hiddenSelectionsTextures[] = {"\KBS-Retextures\addons\WindstrideRetextures\skinny_jeans\KTT_Skinny_Jeans_Floral3.paa",
		"\KBS-Retextures\addons\WindstrideRetextures\skinny_jeans\skein_ca.paa",
		"\KBS-Retextures\addons\WindstrideRetextures\skinny_jeans\skein2_ca.paa"};
	};
	class Skinny_Jeans_ColorBase;
	class Skinny_Jeans_Red: Skinny_Jeans_ColorBase
	{
		scope = 2;
		displayName = "Red Skinny Jeans";
		descriptionShort = "Found in a Shipping Container. Designed and Made by Canadian and Norweigan children.";
		hiddenSelectionsTextures[] = {"\KBS-Retextures\addons\WindstrideRetextures\skinny_jeans\KTT_SkinnyJeans_Red.paa",
		"\KBS-Retextures\addons\WindstrideRetextures\skinny_jeans\skein_ca.paa",
		"\KBS-Retextures\addons\WindstrideRetextures\skinny_jeans\skein2_ca.paa"};
	};
	class Skinny_Jeans_ColorBase;
	class Skinny_Jeans_Stars: Skinny_Jeans_ColorBase
	{
		scope = 2;
		displayName = "Stars Skinny Jeans";
		descriptionShort = "Found in a Shipping Container. Designed and Made by Canadian and Norweigan children.";
		hiddenSelectionsTextures[] = {"\KBS-Retextures\addons\WindstrideRetextures\skinny_jeans\KTT_SkinnyJeans_Stars3.paa",
		"\KBS-Retextures\addons\WindstrideRetextures\skinny_jeans\skein_ca.paa",
		"\KBS-Retextures\addons\WindstrideRetextures\skinny_jeans\skein2_ca.paa"};
	};
};
