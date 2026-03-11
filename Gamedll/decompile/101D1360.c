/*
 * func-name: ?LoadResources@Aura@GameClient@@UAE_NXZ_0
 * func-address: 0x101d1360
 * callers: 0x1000a817
 * callees: 0x1000516e, 0x1000bf05, 0x1000dd73, 0x10010519, 0x10014669, 0x10019484, 0x1001a5d2, 0x102c71e0
 */

char __thiscall GameClient::Aura::LoadResources(GameClient::Aura *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  struct Game *v5; // eax
  _BYTE v7[28]; // [esp+10h] [ebp-84h] BYREF
  _BYTE v8[28]; // [esp+2Ch] [ebp-68h] BYREF
  _BYTE v9[48]; // [esp+48h] [ebp-4Ch] BYREF
  _BYTE v10[16]; // [esp+78h] [ebp-1Ch] BYREF
  int v11; // [esp+90h] [ebp-4h]

  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)(v2 + 220) )
  {
    v3 = sub_102C71E0(v8, v2 + 200);
    v11 = 0;
    v4 = std::operator+<char>(v7, v3, ".reb");
    LOBYTE(v11) = 1;
    std::string::operator=((char *)this + 36, v4);
    LOBYTE(v11) = 0;
    std::string::~string(v7);
    v11 = -1;
    std::string::~string(v8);
    v5 = Game::Instance();
    sub_10019484(*((_DWORD *)v5 + 25), 0);
    if ( sub_1000BF05() )
    {
      if ( *((_DWORD *)this + 5) || !(unsigned __int8)sub_1000DD73() )
      {
        sub_1001A5D2(0);
      }
      else
      {
        sub_1001A5D2(1);
        sub_10014669(v9);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _BYTE *, _DWORD))(**((_DWORD **)this + 8) + 88))(
               *((_DWORD *)this + 8),
               *((_DWORD *)this + 2) + 228,
               v9,
               0) )
        {
          sub_10010519((int)v9, (int)v10);
        }
        else
        {
          sub_10010519(*((_DWORD *)this + 8) + 36, *((_DWORD *)this + 8) + 24);
        }
      }
    }
  }
  return 1;
}
