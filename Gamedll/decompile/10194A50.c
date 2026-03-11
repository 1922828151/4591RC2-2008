/*
 * func-name: ??1TransformItem@GameClient@@UAE@XZ_0
 * func-address: 0x10194a50
 * callers: 0x10003143
 * callees: none
 */

void __thiscall GameClient::TransformItem::~TransformItem(GameClient::Item *this)
{
  *(_DWORD *)this = &GameClient::TransformItem::`vftable';
  GameClient::Item::~Item(this);
}
