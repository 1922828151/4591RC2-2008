/*
 * func-name: ??0Game@@QAE@XZ_0
 * func-address: 0x102b7a20
 * callers: 0x10016b94
 * callees: 0x10002d6a
 */

Game *__thiscall Game::Game(Game *this)
{
  int v3[13]; // [esp-1Ch] [ebp-40h] BYREF
  int v4; // [esp+20h] [ebp-4h]

  v3[11] = (int)this;
  std::vector<Model *>::vector<Model *>((char *)this + 16);
  v4 = 0;
  std::string::string((char *)this + 40);
  std::string::string((char *)this + 68);
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  LOBYTE(v4) = 3;
  *((_BYTE *)this + 6) = 1;
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 5) = 1;
  *((_DWORD *)this + 2) = GUISystem::Instance(v3[7]);
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 116) = 0;
  v3[12] = (int)v3;
  std::string::string(v3);
  sub_10002D6A((char *)this + 120, 10, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6]);
  return this;
}
