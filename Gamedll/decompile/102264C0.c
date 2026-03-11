/*
 * func-name: ??1FDamageEquip@GameClient@@UAE@XZ_0
 * func-address: 0x102264c0
 * callers: 0x1000f600
 * callees: 0x100028ab, 0x10014c90, 0x102c0750
 */

void __thiscall GameClient::FDamageEquip::~FDamageEquip(GameClient::FDamageEquip *this)
{
  int v2; // [esp+0h] [ebp-18h]
  int v3; // [esp+4h] [ebp-14h]

  *(_DWORD *)this = &GameClient::FDamageEquip::`vftable';
  sub_10014C90(v2, v3);
  std::string::~string((char *)this + 2268);
  sub_102C0750((char *)this + 2212);
  GameClient::FItem::~FItem(this);
}
