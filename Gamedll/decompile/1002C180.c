/*
 * func-name: ??0Game@@QAE@ABV0@@Z_0
 * func-address: 0x1002c180
 * callers: 0x1000ea20
 * callees: 0x1000b613
 */

Game *__thiscall Game::Game(Game *this, const struct Game *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  *((_BYTE *)this + 6) = *((_BYTE *)a2 + 6);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  std::vector<Model *>::vector<Model *>((char *)this + 16, (char *)a2 + 16);
  *((_BYTE *)this + 32) = *((_BYTE *)a2 + 32);
  *((_BYTE *)this + 33) = *((_BYTE *)a2 + 33);
  *((_BYTE *)this + 34) = *((_BYTE *)a2 + 34);
  *((_BYTE *)this + 35) = *((_BYTE *)a2 + 35);
  *((_BYTE *)this + 36) = *((_BYTE *)a2 + 36);
  std::string::string((char *)this + 40, (char *)a2 + 40);
  std::string::string((char *)this + 68, (char *)a2 + 68);
  *((float *)this + 24) = *((float *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((float *)this + 28) = *((float *)a2 + 28);
  *((_BYTE *)this + 116) = *((_BYTE *)a2 + 116);
  sub_1000B613((int)a2 + 120);
  return this;
}
