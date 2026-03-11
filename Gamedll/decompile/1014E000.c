/*
 * func-name: ??1DamageEquip@GameClient@@UAE@XZ_0
 * func-address: 0x1014e000
 * callers: 0x100188a9
 * callees: 0x10005aba, 0x10012a2b, 0x10014c90
 */

void __thiscall GameClient::DamageEquip::~DamageEquip(GameClient::DamageEquip *this)
{
  GameClient::DamageUnit *v2; // edi
  int v3; // [esp+0h] [ebp-20h]
  int v4; // [esp+4h] [ebp-1Ch]

  v2 = (GameClient::DamageEquip *)((char *)this + 780);
  *(_DWORD *)this = &GameClient::DamageEquip::`vftable'{for `GameClient::Item'};
  *((_DWORD *)this + 195) = &GameClient::DamageEquip::`vftable'{for `GameClient::DamageUnit'};
  sub_10014C90(v3, v4);
  GameClient::DamageUnit::~DamageUnit(v2);
  GameClient::Item::~Item(this);
}
