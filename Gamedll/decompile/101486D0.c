/*
 * func-name: sub_101486D0
 * func-address: 0x101486d0
 * callers: 0x10001b6d
 * callees: 0x10002f7c, 0x1000516e, 0x1000abc8, 0x1000ae2a, 0x10010bae, 0x100141e1, 0x10014669, 0x10018fc0, 0x102c1930, 0x102c71e0
 */

int __thiscall sub_101486D0(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  struct Game *v7; // eax
  int v8; // esi
  int v10; // [esp-4h] [ebp-9Ch]
  _BYTE v11[28]; // [esp+14h] [ebp-84h] BYREF
  _BYTE v12[28]; // [esp+30h] [ebp-68h] BYREF
  _BYTE v13[64]; // [esp+4Ch] [ebp-4Ch] BYREF
  int v14; // [esp+94h] [ebp-4h]

  v5 = this[2];
  if ( *(_DWORD *)(v5 + 500) )
  {
    v6 = sub_102C71E0(v12, v5 + 480);
    v14 = 0;
    v10 = std::operator+<char>(v11, v6, ".reb");
    LOBYTE(v14) = 1;
    v7 = Game::Instance();
    v8 = sub_100141E1(*((_DWORD *)v7 + 25), v10, 1);
    LOBYTE(v14) = 0;
    std::string::~string(v11);
    v14 = -1;
    std::string::~string(v12);
    if ( sub_1000ABC8(v8) )
    {
      sub_1000AE2A(a2);
      sub_10014669(v13);
      sub_102C1930(a3);
      sub_10002F7C((int)v13);
    }
  }
  SoundMgr::Instance();
  return SoundMgr::PlaySoundA((int)(this + 45), a2, (int)(this + 9), 0, COERCE_INT(0.75));
}
