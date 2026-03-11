/*
 * func-name: ??0FProduct@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10063f00
 * callers: 0x10017bb1
 * callees: 0x10019a97
 */

GameClient::FProduct *__thiscall GameClient::FProduct::FProduct(
        GameClient::FProduct *this,
        const struct GameClient::FProduct *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FProduct::`vftable';
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  std::string::string((char *)this + 112, (char *)a2 + 112);
  std::string::string((char *)this + 140, (char *)a2 + 140);
  std::string::string((char *)this + 168, (char *)a2 + 168);
  return this;
}
