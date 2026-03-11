/*
 * func-name: ??0Flyweight@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10063e00
 * callers: 0x10019a97
 * callees: 0x1000eb29
 */

GameClient::Flyweight *__thiscall GameClient::Flyweight::Flyweight(
        GameClient::Flyweight *this,
        const struct GameClient::Flyweight *a2)
{
  sub_1000EB29((int)a2);
  *(_DWORD *)this = &GameClient::Flyweight::`vftable';
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  std::string::string((char *)this + 52, (char *)a2 + 52);
  std::string::string((char *)this + 80, (char *)a2 + 80);
  return this;
}
