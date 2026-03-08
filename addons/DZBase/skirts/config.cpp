class CfgPatches
{
    class KTT_Skirt
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
    class Skirt_ColorBase;
    class KTT_Skirt_PinkPlaid: Skirt_ColorBase
    {
        scope = 2;
        displayName = "Pink Plaid Skirt";
        descriptionShort = "Found in a Shipping Container. Designed and Made by Canadian and Norweigan children.";
        hiddenSelectionsTextures[] =
        {
            "\KBS-Retextures\addons\DZBase\skirts\KTT_skirt_pinkplaid.paa"
        };
    };
};