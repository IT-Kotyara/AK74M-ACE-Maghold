params ["_target", "_aceplayer", "_actionParams"];
private _kot_weaponState = weaponState _aceplayer;
private _kot_weaponAccessories = primaryWeaponItems _aceplayer;
private _kot_ammoCount = _aceplayer ammo primaryWeapon _aceplayer;

if (("gp25" in (_kot_weaponState select 0)) and (_aceplayer ammo "GP25Muzzle" isEqualTo 1)) then {_aceplayer addMagazine (primaryWeaponMagazine _aceplayer select 1);};

if !("_maghold" in primaryWeapon _aceplayer) then {	
	[_aceplayer, format ["%1_maghold", _kot_weaponState select 0], 1, primaryWeaponMagazine _aceplayer select 0] call BIS_fnc_addWeapon;
} else {
	[_aceplayer, _kot_weaponState select 0 select [0, count (_kot_weaponState select 0)-8], 1, primaryWeaponMagazine _aceplayer select 0] call BIS_fnc_addWeapon;
};

if (_kot_weaponState select 1 isEqualTo "GP25Muzzle") then {
	_aceplayer selectWeapon "GP25Muzzle";
	_aceplayer setAmmo [primaryWeapon _aceplayer, _kot_ammoCount];
} else {
	_aceplayer setAmmo [primaryWeapon _aceplayer, 0];
	_aceplayer forceWeaponFire [primaryWeapon _aceplayer, _kot_weaponState select 2];
	_aceplayer setAmmo [primaryWeapon _aceplayer, _kot_ammoCount];
};

{
	_aceplayer addPrimaryWeaponItem _x;
} forEach _kot_weaponAccessories;