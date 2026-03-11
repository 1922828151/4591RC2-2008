/*
 * func-name: ??0FFunc_Store@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101ca0e0
 * callers: 0x10011310
 * callees: 0x10019a97
 */

GameClient::FFunc_Store *__thiscall GameClient::FFunc_Store::FFunc_Store(
        GameClient::FFunc_Store *this,
        const struct GameClient::FFunc_Store *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FFunc_Store::`vftable';
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  return this;
}
