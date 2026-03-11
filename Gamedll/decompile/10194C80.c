/*
 * func-name: ??0TransformItem@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10194c80
 * callers: 0x10019475
 * callees: 0x1000cea0
 */

GameClient::TransformItem *__thiscall GameClient::TransformItem::TransformItem(
        GameClient::TransformItem *this,
        const struct GameClient::TransformItem *a2)
{
  GameClient::Item::Item(this, a2);
  *(_DWORD *)this = &GameClient::TransformItem::`vftable';
  *((_DWORD *)this + 195) = *((_DWORD *)a2 + 195);
  return this;
}
