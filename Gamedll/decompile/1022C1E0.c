/*
 * func-name: ??0FFunc_Produce@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1022c1e0
 * callers: 0x10014d99
 * callees: 0x10019a97
 */

GameClient::FFunc_Produce *__thiscall GameClient::FFunc_Produce::FFunc_Produce(
        GameClient::FFunc_Produce *this,
        const struct GameClient::FFunc_Produce *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FFunc_Produce::`vftable';
  return this;
}
