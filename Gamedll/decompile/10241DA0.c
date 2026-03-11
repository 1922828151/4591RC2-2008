/*
 * func-name: ??1FTransformItem@GameClient@@UAE@XZ_0
 * func-address: 0x10241da0
 * callers: 0x10001474
 * callees: 0x100028ab
 */

void __thiscall GameClient::FTransformItem::~FTransformItem(GameClient::FTransformItem *this)
{
  *(_DWORD *)this = &GameClient::FTransformItem::`vftable';
  std::string::~string((char *)this + 2200);
  GameClient::FItem::~FItem(this);
}
