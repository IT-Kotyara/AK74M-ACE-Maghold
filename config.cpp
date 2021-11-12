class CfgPatches
{
	class RHS_AK_Maghold
	{
		name = "RHS AK-74M Maghold";
		author = "IT_Kotyara";
		requiredVersion = 1.0;
		requiredAddons[] = {"rhs_weapons","rhs_weapons2","rhs_weapons3","rhs_c_weapons"};
		units[] = {};
		weapons[] = {"rhs_weap_ak74m_maghold","rhs_weap_ak74m_npz_maghold","rhs_weap_ak74m_gp25_maghold","rhs_weap_ak74m_gp25_npz_maghold","rhs_weap_ak74m_gp25_folded_maghold","rhs_weap_ak74m_gp25_pkas_maghold","rhs_weap_ak74m_gp25_1p63_maghold","rhs_weap_ak74m_gp25_pso1m2_maghold","rhs_weap_ak74m_gp25_1p29_maghold","rhs_weap_ak74m_folded_maghold","rhs_weap_ak74m_camo_maghold","rhs_weap_ak74m_camo_npz_maghold","rhs_weap_ak74m_camo_folded_maghold","rhs_weap_ak74m_camo_pkas_maghold","rhs_weap_ak74m_camo_1p63_maghold","rhs_weap_ak74m_camo_pso1m2_maghold","rhs_weap_ak74m_camo_1p29_maghold","rhs_weap_ak74m_desert_maghold","rhs_weap_ak74m_desert_npz_maghold","rhs_weap_ak74m_desert_folded_maghold","rhs_weap_ak74m_fullplum_maghold","rhs_weap_ak74m_fullplum_npz_maghold","rhs_weap_ak74m_fullplum_folded_maghold","rhs_weap_ak74m_fullplum_gp25_maghold","rhs_weap_ak74m_fullplum_gp25_npz_maghold","rhs_weap_ak74m_fullplum_gp25_folded_maghold","rhs_weap_ak74m_zenitco01_grip1_maghold","rhs_weap_ak74m_zenitco01_afg_maghold","rhs_weap_ak74m_zenitco01_npz_grip1_maghold","rhs_weap_ak74m_zenitco01_npz_afg_maghold","rhs_weap_ak74m_zenitco01_b33_grip1_maghold","rhs_weap_ak74m_zenitco01_b33_afg_maghold"};
	};
};
class CfgFunctions
{
	class Kot
	{
		class WeaponInteractions
		{
			file = "\rhs_weap_maghold\functions";
			class addWeapon{};
		};
	};
};
class CfgWeapons
{
	class Default;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};
	class rhs_weap_ak74m_Base_F;
	class rhs_weap_ak74m;
	class rhs_weap_ak74m_maghold: rhs_weap_ak74m
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_npz_maghold";
	};
	class rhs_weap_ak74m_npz;
	class rhs_weap_ak74m_npz_maghold: rhs_weap_ak74m_npz
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_maghold";
	};
	class rhs_weap_ak74m_folded;
	class rhs_weap_ak74m_folded_maghold: rhs_weap_ak74m_folded
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_maghold";
		rhs_npz = "rhs_weap_ak74m_npz_maghold";
	};
	class rhs_weap_ak74m_gp25;
	class rhs_weap_ak74m_gp25_maghold: rhs_weap_ak74m_gp25
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_gp25_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_gp25_npz_maghold";
	};
	class rhs_weap_ak74m_gp25_npz;
	class rhs_weap_ak74m_gp25_npz_maghold: rhs_weap_ak74m_gp25_npz
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_gp25_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_gp25_maghold";
	};
	class rhs_weap_ak74m_gp25_folded;
	class rhs_weap_ak74m_gp25_folded_maghold: rhs_weap_ak74m_gp25_folded
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_gp25_maghold";
		rhs_npz = "rhs_weap_ak74m_gp25_npz_maghold";
	};
	class rhs_weap_ak74m_gp25_pkas;
	class rhs_weap_ak74m_gp25_pkas_maghold: rhs_weap_ak74m_gp25_pkas
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_gp25_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_gp25_maghold";
	};
	class rhs_weap_ak74m_gp25_1p63;
	class rhs_weap_ak74m_gp25_1p63_maghold: rhs_weap_ak74m_gp25_1p63
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_gp25_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_gp25_maghold";
	};
	class rhs_weap_ak74m_gp25_pso1m2;
	class rhs_weap_ak74m_gp25_pso1m2_maghold: rhs_weap_ak74m_gp25_pso1m2
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_gp25_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_gp25_maghold";
	};
	class rhs_weap_ak74m_gp25_1p29;
	class rhs_weap_ak74m_gp25_1p29_maghold: rhs_weap_ak74m_gp25_1p29
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_gp25_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_gp25_maghold";
	};
	class rhs_weap_ak74m_camo;
	class rhs_weap_ak74m_camo_maghold: rhs_weap_ak74m_camo
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_camo_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_camo_npz_maghold";
	};
	class rhs_weap_ak74m_camo_npz;
	class rhs_weap_ak74m_camo_npz_maghold: rhs_weap_ak74m_camo_npz
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_camo_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_camo_maghold";
	};
	class rhs_weap_ak74m_camo_folded;
	class rhs_weap_ak74m_camo_folded_maghold: rhs_weap_ak74m_camo_folded
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_camo_maghold";
		rhs_npz = "rhs_weap_ak74m_camo_npz_maghold";
	};
	class rhs_weap_ak74m_camo_pkas;
	class rhs_weap_ak74m_camo_pkas_maghold: rhs_weap_ak74m_camo_pkas
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_camo_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_camo_maghold";
	};
	class rhs_weap_ak74m_camo_1p63;
	class rhs_weap_ak74m_camo_1p63_maghold: rhs_weap_ak74m_camo_1p63
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_camo_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_camo_maghold";
	};
	class rhs_weap_ak74m_camo_pso1m2;
	class rhs_weap_ak74m_camo_pso1m2_maghold: rhs_weap_ak74m_camo_pso1m2
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_camo_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_camo_maghold";
	};
	class rhs_weap_ak74m_camo_1p29;
	class rhs_weap_ak74m_camo_1p29_maghold: rhs_weap_ak74m_camo_1p29
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_camo_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_camo_maghold";
	};
	class rhs_weap_ak74m_desert;
	class rhs_weap_ak74m_desert_maghold: rhs_weap_ak74m_desert
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_desert_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_desert_npz_maghold";
	};
	class rhs_weap_ak74m_desert_npz;
	class rhs_weap_ak74m_desert_npz_maghold: rhs_weap_ak74m_desert_npz
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_desert_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_desert_maghold";
	};
	class rhs_weap_ak74m_desert_folded;
	class rhs_weap_ak74m_desert_folded_maghold: rhs_weap_ak74m_desert_folded
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_desert_maghold";
		rhs_npz = "rhs_weap_ak74m_desert_npz_maghold";
	};
	class rhs_weap_ak74m_fullplum;
	class rhs_weap_ak74m_fullplum_maghold: rhs_weap_ak74m_fullplum
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_fullplum_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_fullplum_npz_maghold";
	};
	class rhs_weap_ak74m_fullplum_npz;
	class rhs_weap_ak74m_fullplum_npz_maghold: rhs_weap_ak74m_fullplum_npz
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_fullplum_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_fullplum_npz_maghold";
	};
	class rhs_weap_ak74m_fullplum_folded;
	class rhs_weap_ak74m_fullplum_folded_maghold: rhs_weap_ak74m_fullplum_folded
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_fullplum_maghold";
		rhs_npz = "rhs_weap_ak74m_fullplum_npz_maghold";
	};
	class rhs_weap_ak74m_fullplum_gp25;
	class rhs_weap_ak74m_fullplum_gp25_maghold: rhs_weap_ak74m_fullplum_gp25
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_fullplum_gp25_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_fullplum_gp25_npz_maghold";
	};
	class rhs_weap_ak74m_fullplum_gp25_npz;
	class rhs_weap_ak74m_fullplum_gp25_npz_maghold: rhs_weap_ak74m_fullplum_gp25_npz
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_fullplum_gp25_folded_maghold";
		rhs_npz = "rhs_weap_ak74m_fullplum_gp25_maghold";
	};
	class rhs_weap_ak74m_fullplum_gp25_folded;
	class rhs_weap_ak74m_fullplum_gp25_folded_maghold: rhs_weap_ak74m_fullplum_gp25_folded
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_fullplum_gp25_maghold";
		rhs_npz = "rhs_weap_ak74m_fullplum_gp25_npz_maghold";
	};
	class rhs_weap_ak74m_zenitco01_grip1;
	class rhs_weap_ak74m_zenitco01_grip1_maghold: rhs_weap_ak74m_zenitco01_grip1
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_zenitco01_grip1_maghold";
		rhs_npz = "rhs_weap_ak74m_zenitco01_npz_grip1_maghold";
	};
	class rhs_weap_ak74m_zenitco01_afg;
	class rhs_weap_ak74m_zenitco01_afg_maghold: rhs_weap_ak74m_zenitco01_afg
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_zenitco01_afg_maghold";
		rhs_npz = "rhs_weap_ak74m_zenitco01_npz_afg_maghold";
	};
	class rhs_weap_ak74m_zenitco01_npz_grip1;
	class rhs_weap_ak74m_zenitco01_npz_grip1_maghold: rhs_weap_ak74m_zenitco01_npz_grip1
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_zenitco01_npz_grip1_maghold";
		rhs_npz = "rhs_weap_ak74m_zenitco01_grip1_maghold";
	};
	class rhs_weap_ak74m_zenitco01_npz_afg;
	class rhs_weap_ak74m_zenitco01_npz_afg_maghold: rhs_weap_ak74m_zenitco01_npz_afg
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_zenitco01_npz_afg_maghold";
		rhs_npz = "rhs_weap_ak74m_zenitco01_afg_maghold";
	};
	class rhs_weap_ak74m_zenitco01_b33_grip1;
	class rhs_weap_ak74m_zenitco01_b33_grip1_maghold: rhs_weap_ak74m_zenitco01_b33_grip1
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_zenitco01_b33_grip1_maghold";
		rhs_npz = "rhs_weap_ak74m_zenitco01_b33_grip1_maghold";
	};
	class rhs_weap_ak74m_zenitco01_b33_afg;
	class rhs_weap_ak74m_zenitco01_b33_afg_maghold: rhs_weap_ak74m_zenitco01_b33_afg
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		rhs_fold = "rhs_weap_ak74m_zenitco01_b33_afg_maghold";
		rhs_npz = "rhs_weap_ak74m_zenitco01_b33_afg_maghold";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class holdingMethod
			{
				displayName = "Change method of holding";
				condition = "(('rhs_weap_ak74m' in primaryWeapon _player) and !('rhs_weap_ak74mr' in primaryWeapon _player) and (weaponState _player select 6 isEqualTo 0))";
				exceptions[] = {"notOnMap"};
				statement = "[_target, _player, _actionParams] call Kot_fnc_addWeapon";
			};
		};
	};
};
