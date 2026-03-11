/*
 * func-name: sub_102247E0
 * func-address: 0x102247e0
 * callers: 0x10018ad4
 * callees: 0x1000321f, 0x10014c90, 0x10016b58
 */

void __thiscall sub_102247E0(GameClient::Flyweight *this)
{
  int v2; // [esp+0h] [ebp-18h]
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+4h] [ebp-14h]
  int v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+4h] [ebp-14h]

  *(_DWORD *)this = &GameClient::FBullet::`vftable';
  sub_10016B58(v2, v6);
  sub_10016B58(v3, v7);
  sub_10014C90(v4, v8);
  sub_10014C90(v5, v9);
  std::string::~string((char *)this + 108);
  GameClient::Flyweight::~Flyweight(this);
}
