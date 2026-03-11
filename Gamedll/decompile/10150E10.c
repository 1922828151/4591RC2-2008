/*
 * func-name: ??0FItem@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10150e10
 * callers: 0x100068f2
 * callees: 0x10018228
 */

GameClient::FItem *__thiscall GameClient::FItem::FItem(GameClient::FItem *this, const struct GameClient::FItem *a2)
{
  GameClient::FItem *result; // eax

  GameClient::FEquip::FEquip(this, a2);
  *(_DWORD *)this = &GameClient::FItem::`vftable';
  std::string::string((char *)this + 2084, (char *)a2 + 2084);
  std::string::string((char *)this + 2112, (char *)a2 + 2112);
  std::string::string((char *)this + 2140, (char *)a2 + 2140);
  *((_DWORD *)this + 542) = *((_DWORD *)a2 + 542);
  *((_DWORD *)this + 543) = *((_DWORD *)a2 + 543);
  *((_DWORD *)this + 544) = *((_DWORD *)a2 + 544);
  *((_DWORD *)this + 545) = *((_DWORD *)a2 + 545);
  *((_DWORD *)this + 546) = *((_DWORD *)a2 + 546);
  *((_DWORD *)this + 547) = *((_DWORD *)a2 + 547);
  *((float *)this + 548) = *((float *)a2 + 548);
  result = this;
  *((float *)this + 549) = *((float *)a2 + 549);
  return result;
}
