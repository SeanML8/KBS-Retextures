class CfgPatches
{
	class BunnyFashion
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
	class Shabby_Hoodie_ColorBase;
	class Shabby_Hoodie_Thrifted_Floral: Shabby_Hoodie_ColorBase
	{
		scope = 2;
		displayName = "Thrifted Floral Shabby Hoodie";
		descriptionShort = "Found in a Shipping Container. Designed and Made by Canadian and Norweigan children.";
		hiddenSelectionsTextures[] = {"\KBS-Retextures\addons\WindstrideRetextures\shabby_hoodie\BUN_Shabby_Hoodie_Thrifted_Floral.paa",
		"\KBS-Retextures\addons\WindstrideRetextures\shabby_hoodie\skein_grey_ca.paa"};
	};
	class Shabby_Hoodie_ColorBase;
	class Shabby_Hoodie_Thrifted_CB: Shabby_Hoodie_ColorBase
	{
		scope = 2;
		displayName = "Thrifted CB Shabby Hoodie";
		descriptionShort = "Found in a Shipping Container. Designed and Made by Canadian and Norweigan children.";
		hiddenSelectionsTextures[] = {"\KBS-Retextures\addons\WindstrideRetextures\shabby_hoodie\BUN_shabby_hoodie_thrifted_cb2.paa",
		"\KBS-Retextures\addons\WindstrideRetextures\shabby_hoodie\skein_grey_ca.paa"};
	};
};