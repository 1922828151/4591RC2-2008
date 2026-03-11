/*
 * func-name: ??0FSeat@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10128b50
 * callers: 0x1000c1ad
 * callees: 0x100065e1, 0x1000b613, 0x10019a97
 */

GameClient::FSeat *__thiscall GameClient::FSeat::FSeat(GameClient::FSeat *this, const struct GameClient::FSeat *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FSeat::`vftable';
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  std::string::string((char *)this + 112, (char *)a2 + 112);
  std::string::string((char *)this + 140, (char *)a2 + 140);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
  sub_100065E1((int)a2 + 176);
  sub_1000B613((int)a2 + 192);
  qmemcpy((char *)this + 208, (char *)a2 + 208, 0x44u);
  return this;
}
