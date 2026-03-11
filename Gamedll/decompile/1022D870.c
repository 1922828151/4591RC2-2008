/*
 * func-name: ??1FItem@GameClient@@UAE@XZ_0
 * func-address: 0x1022d870
 * callers: 0x100028ab
 * callees: 0x10005f7e
 */

void __thiscall GameClient::FItem::~FItem(GameClient::FItem *this)
{
  *(_DWORD *)this = &GameClient::FItem::`vftable';
  std::string::~string((char *)this + 2140);
  std::string::~string((char *)this + 2112);
  std::string::~string((char *)this + 2084);
  GameClient::FEquip::~FEquip(this);
}
