/*
 * func-name: ??1Item@GameClient@@UAE@XZ_0
 * func-address: 0x10160e30
 * callers: 0x10012a2b
 * callees: 0x10012fd0
 */

void __thiscall GameClient::Item::~Item(GameClient::Item *this)
{
  *(_DWORD *)this = &GameClient::Item::`vftable';
  std::string::~string((char *)this + 740);
  GameClient::Equip::~Equip(this);
}
