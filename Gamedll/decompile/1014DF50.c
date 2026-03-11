/*
 * func-name: ??0DamageEquip@GameClient@@QAE@K@Z_0
 * func-address: 0x1014df50
 * callers: 0x10012616
 * callees: 0x100057f4, 0x1000d3e6, 0x100116fd
 */

GameClient::DamageEquip *__thiscall GameClient::DamageEquip::DamageEquip(
        GameClient::DamageEquip *this,
        unsigned int a2)
{
  int v4; // [esp+0h] [ebp-1Ch]
  int v5; // [esp+4h] [ebp-18h]

  GameClient::Item::Item(this, a2);
  GameClient::DamageUnit::DamageUnit((GameClient::DamageEquip *)((char *)this + 780));
  *(_DWORD *)this = &GameClient::DamageEquip::`vftable'{for `GameClient::Item'};
  *((_DWORD *)this + 195) = &GameClient::DamageEquip::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 200) = 0;
  *((float *)this + 202) = 0.0;
  *((float *)this + 203) = 0.0;
  *((float *)this + 204) = 0.0;
  sub_100057F4(v4, v5);
  *((_DWORD *)this + 201) = -1;
  *((_BYTE *)this + 820) = 1;
  return this;
}
