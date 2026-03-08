class CfgPatches
{
    class KTT_BoonieHat
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "DZ_Data", "DZ_Characters"
        };
    };
};

class CfgVehicles
{
    class BoonieHat_ColorBase;
    class KTT_BoonieHat_Orange: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Orange Boonie Hat";
        descriptionShort = "Found in a Shipping Container. Designed and Made by Canadian and Norweigan children.";
        hiddenSelectionsTextures[] =
        {
            "\KBS-Retextures\addons\DZBase\hats\boonie_hat\booniehat_orange_co.paa"
        };
    };
};