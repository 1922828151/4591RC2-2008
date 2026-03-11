/*
 * func-name: ??0FAura@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10143b20
 * callers: 0x1000ed77
 * callees: 0x10019a97
 */

GameClient::FAura *__thiscall GameClient::FAura::FAura(GameClient::FAura *this, const struct GameClient::FAura *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FAura::`vftable';
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_BYTE *)this + 124) = *((_BYTE *)a2 + 124);
  *((float *)this + 32) = *((float *)a2 + 32);
  *((float *)this + 33) = *((float *)a2 + 33);
  *((_BYTE *)this + 136) = *((_BYTE *)a2 + 136);
  *((_BYTE *)this + 137) = *((_BYTE *)a2 + 137);
  std::string::string((char *)this + 140, (char *)a2 + 140);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  std::string::string((char *)this + 172, (char *)a2 + 172);
  std::string::string((char *)this + 200, (char *)a2 + 200);
  std::string::string((char *)this + 228, (char *)a2 + 228);
  *((_BYTE *)this + 256) = *((_BYTE *)a2 + 256);
  return this;
}
