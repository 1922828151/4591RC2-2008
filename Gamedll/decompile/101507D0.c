/*
 * func-name: ??0Item@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101507d0
 * callers: 0x1000cea0
 * callees: 0x10010555
 */

GameClient::Item *__thiscall GameClient::Item::Item(GameClient::Item *this, const struct GameClient::Item *a2)
{
  GameClient::Equip::Equip(this, a2);
  *(_DWORD *)this = &GameClient::Item::`vftable';
  std::string::string((char *)this + 740, (char *)a2 + 740);
  *((_DWORD *)this + 192) = *((_DWORD *)a2 + 192);
  *((_DWORD *)this + 193) = *((_DWORD *)a2 + 193);
  *((_DWORD *)this + 194) = *((_DWORD *)a2 + 194);
  return this;
}
