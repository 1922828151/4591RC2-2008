/*
 * func-name: ??1FWeapon@GameClient@@UAE@XZ_0
 * func-address: 0x10244110
 * callers: 0x1000834b
 * callees: 0x10005f7e, 0x10014c90, 0x102c9e3e
 */

void __thiscall GameClient::FWeapon::~FWeapon(GameClient::FWeapon *this)
{
  int v2; // [esp+0h] [ebp-18h]
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+4h] [ebp-14h]
  int v10; // [esp+4h] [ebp-14h]
  int v11; // [esp+4h] [ebp-14h]

  *(_DWORD *)this = &GameClient::FWeapon::`vftable';
  sub_10014C90(v2, v7);
  sub_10014C90(v3, v8);
  sub_10014C90(v4, v9);
  sub_10014C90(v5, v10);
  sub_10014C90(v6, v11);
  std::string::~string((char *)this + 2440);
  std::string::~string((char *)this + 2412);
  `eh vector destructor iterator'(
    (char *)this + 2084,
    0xA0u,
    2,
    (void (__thiscall *)(void *))GameClient::WeaponPattern::~WeaponPattern);
  GameClient::FEquip::~FEquip(this);
}
