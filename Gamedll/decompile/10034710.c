/*
 * func-name: ??0Productor@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10034710
 * callers: 0x1000a61e
 * callees: none
 */

GameClient::Productor *__thiscall GameClient::Productor::Productor(
        GameClient::Productor *this,
        const struct GameClient::Productor *a2)
{
  *(_DWORD *)this = &GameClient::Productor::`vftable';
  std::string::string((char *)this + 4, (char *)a2 + 4);
  return this;
}
