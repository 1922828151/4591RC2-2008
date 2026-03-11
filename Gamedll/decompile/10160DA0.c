/*
 * func-name: ??0Item@GameClient@@QAE@K@Z_0
 * func-address: 0x10160da0
 * callers: 0x100116fd
 * callees: 0x1001a3a7
 */

GameClient::Item *__thiscall GameClient::Item::Item(GameClient::Item *this, unsigned int a2)
{
  GameClient::Equip::Equip(this, a2);
  *(_DWORD *)this = &GameClient::Item::`vftable';
  std::string::string((char *)this + 740);
  *((_DWORD *)this + 192) = 0;
  *((_DWORD *)this + 193) = 0;
  std::string::operator=((char *)this + 740, &unk_1031434A);
  return this;
}
