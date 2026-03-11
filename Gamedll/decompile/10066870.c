/*
 * func-name: ??0LogicFactory@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10066870
 * callers: 0x10001fcd
 * callees: 0x100024c3, 0x100152e9
 */

GameClient::LogicFactory *__thiscall GameClient::LogicFactory::LogicFactory(
        GameClient::LogicFactory *this,
        const struct GameClient::LogicFactory *a2)
{
  sub_100024C3((int)a2);
  sub_100152E9((int)a2 + 40);
  return this;
}
