/*
 * func-name: ??0FDamageEquip@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10150f50
 * callers: 0x1000cadb
 * callees: 0x100068f2, 0x1000cf40
 */

GameClient::FDamageEquip *__thiscall GameClient::FDamageEquip::FDamageEquip(
        GameClient::FDamageEquip *this,
        const struct GameClient::FDamageEquip *a2)
{
  GameClient::FItem::FItem(this, a2);
  *(_DWORD *)this = &GameClient::FDamageEquip::`vftable';
  *((_DWORD *)this + 550) = *((_DWORD *)a2 + 550);
  *((_DWORD *)this + 551) = *((_DWORD *)a2 + 551);
  *((_BYTE *)this + 2208) = *((_BYTE *)a2 + 2208);
  *((_DWORD *)this + 553) = &Volume::`vftable';
  *((_DWORD *)this + 554) = *((_DWORD *)a2 + 554);
  *((_DWORD *)this + 555) = *((_DWORD *)a2 + 555);
  *((_DWORD *)this + 556) = *((_DWORD *)a2 + 556);
  *((_DWORD *)this + 553) = &BBox::`vftable';
  *((_DWORD *)this + 557) = *((_DWORD *)a2 + 557);
  *((_DWORD *)this + 558) = *((_DWORD *)a2 + 558);
  *((_DWORD *)this + 559) = *((_DWORD *)a2 + 559);
  *((_DWORD *)this + 560) = *((_DWORD *)a2 + 560);
  *((_DWORD *)this + 561) = *((_DWORD *)a2 + 561);
  *((_DWORD *)this + 562) = *((_DWORD *)a2 + 562);
  *((_DWORD *)this + 563) = *((_DWORD *)a2 + 563);
  *((_DWORD *)this + 564) = *((_DWORD *)a2 + 564);
  *((_DWORD *)this + 565) = *((_DWORD *)a2 + 565);
  *((_DWORD *)this + 566) = *((_DWORD *)a2 + 566);
  std::string::string((char *)this + 2268, (char *)a2 + 2268);
  sub_1000CF40((char *)a2 + 2296);
  return this;
}
