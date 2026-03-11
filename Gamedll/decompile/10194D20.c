/*
 * func-name: ??0FTransformItem@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10194d20
 * callers: 0x100167ac
 * callees: 0x100068f2
 */

GameClient::FTransformItem *__thiscall GameClient::FTransformItem::FTransformItem(
        GameClient::FTransformItem *this,
        const struct GameClient::FTransformItem *a2)
{
  GameClient::FItem::FItem(this, a2);
  *(_DWORD *)this = &GameClient::FTransformItem::`vftable';
  std::string::string((char *)this + 2200, (char *)a2 + 2200);
  return this;
}
