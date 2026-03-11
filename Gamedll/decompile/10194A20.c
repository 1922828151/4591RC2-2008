/*
 * func-name: ??0TransformItem@GameClient@@QAE@K@Z_0
 * func-address: 0x10194a20
 * callers: 0x10011c75
 * callees: 0x100116fd
 */

GameClient::TransformItem *__thiscall GameClient::TransformItem::TransformItem(
        GameClient::TransformItem *this,
        unsigned int a2)
{
  GameClient::Item::Item(this, a2);
  *(_DWORD *)this = &GameClient::TransformItem::`vftable';
  *((_DWORD *)this + 195) = 0;
  return this;
}
