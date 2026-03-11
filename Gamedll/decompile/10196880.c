/*
 * func-name: ??1Weapon@GameClient@@UAE@XZ_0
 * func-address: 0x10196880
 * callers: 0x10018d2c
 * callees: 0x10012fd0, 0x10014c90, 0x10016b58, 0x102c9e3e
 */

void __thiscall GameClient::Weapon::~Weapon(GameClient::Weapon *this)
{
  int v2; // [esp+0h] [ebp-18h]
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+0h] [ebp-18h]
  int v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+4h] [ebp-14h]
  int v10; // [esp+4h] [ebp-14h]
  int v11; // [esp+4h] [ebp-14h]
  int v12; // [esp+4h] [ebp-14h]
  int v13; // [esp+4h] [ebp-14h]

  *(_DWORD *)this = &GameClient::Weapon::`vftable';
  sub_10014C90(v2, v8);
  sub_10014C90(v3, v9);
  sub_10014C90(v4, v10);
  sub_10014C90(v5, v11);
  sub_10014C90(v6, v12);
  sub_10016B58(v7, v13);
  `eh vector destructor iterator'((char *)this + 760, 0x48u, 2, sub_1000602D);
  GameClient::Equip::~Equip(this);
}
