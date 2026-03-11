/*
 * func-name: ??0FFunc_Sheild@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101c4ee0
 * callers: 0x10013485
 * callees: 0x10019a97
 */

GameClient::FFunc_Sheild *__thiscall GameClient::FFunc_Sheild::FFunc_Sheild(
        GameClient::FFunc_Sheild *this,
        const struct GameClient::FFunc_Sheild *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FFunc_Sheild::`vftable';
  std::string::string((char *)this + 108, (char *)a2 + 108);
  return this;
}
