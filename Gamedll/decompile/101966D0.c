/*
 * func-name: ??0Weapon@GameClient@@QAE@K@Z_0
 * func-address: 0x101966d0
 * callers: 0x1000f844
 * callees: 0x100057f4, 0x100145c9, 0x1001a3a7, 0x102ca0d8
 */

GameClient::Weapon *__thiscall GameClient::Weapon::Weapon(GameClient::Weapon *this, unsigned int a2)
{
  int v4; // [esp+0h] [ebp-28h]
  int v5; // [esp+0h] [ebp-28h]
  int v6; // [esp+0h] [ebp-28h]
  int v7; // [esp+0h] [ebp-28h]
  int v8; // [esp+0h] [ebp-28h]
  int v9; // [esp+0h] [ebp-28h]
  int v10; // [esp+4h] [ebp-24h]
  int v11; // [esp+4h] [ebp-24h]
  int v12; // [esp+4h] [ebp-24h]
  int v13; // [esp+4h] [ebp-24h]
  int v14; // [esp+4h] [ebp-24h]
  int v15; // [esp+4h] [ebp-24h]

  GameClient::Equip::Equip(this, a2);
  *(_DWORD *)this = &GameClient::Weapon::`vftable';
  `eh vector constructor iterator'(
    (char *)this + 760,
    0x48u,
    2,
    (void (__thiscall *)(void *))sub_1000A29F,
    sub_1000602D);
  *((float *)this + 233) = 0.0;
  *((float *)this + 234) = 0.0;
  *((float *)this + 235) = 0.0;
  *((float *)this + 236) = 0.0;
  *((float *)this + 237) = 0.0;
  *((float *)this + 238) = 0.0;
  sub_100145C9(v4, v10);
  sub_100057F4(v5, v11);
  sub_100057F4(v6, v12);
  sub_100057F4(v7, v13);
  sub_100057F4(v8, v14);
  sub_100057F4(v9, v15);
  *((float *)this + 227) = 0.0;
  *((_DWORD *)this + 185) = 0;
  *((float *)this + 228) = 0.0;
  *((_DWORD *)this + 186) = 0;
  *((float *)this + 188) = 0.0;
  *((_BYTE *)this + 748) = 1;
  *((_DWORD *)this + 189) = 0;
  *((float *)this + 233) = 0.0;
  *((float *)this + 239) = 0.0;
  *((float *)this + 234) = 0.0;
  *((float *)this + 240) = 0.0;
  *((float *)this + 229) = 0.0;
  *((float *)this + 235) = 0.0;
  *((float *)this + 230) = 0.0;
  *((float *)this + 236) = 0.0;
  *((float *)this + 231) = 0.0;
  *((float *)this + 237) = 0.0;
  *((float *)this + 232) = 0.0;
  *((_DWORD *)this + 226) = 0;
  *((float *)this + 238) = 0.0;
  return this;
}
