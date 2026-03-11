/*
 * func-name: sub_10015B30
 * func-address: 0x10015b30
 * callers: 0x10005610, 0x10005900, 0x10005a20, 0x10044ab0, 0x10045680, 0x10047170, 0x10047d90, 0x10116db0, 0x10175470
 * callees: 0x10011260, 0x100112c0, 0x10015410, 0x10097220, 0x100e2550, 0x1017a2d0, 0x1017a310, 0x1017a610, 0x101a2500
 */

char __thiscall sub_10015B30(int *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  const char *v6; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int *v11; // esi
  int i; // ebp
  int v13; // eax
  int v14; // eax
  char *v15; // esi
  char *v16; // edi
  char *v17; // esi
  char *v18; // edi
  int v19[7]; // [esp+10h] [ebp-B4h] BYREF
  _BYTE v20[40]; // [esp+2Ch] [ebp-98h] BYREF
  void *v21; // [esp+54h] [ebp-70h]
  char *v22; // [esp+58h] [ebp-6Ch]
  int v23; // [esp+5Ch] [ebp-68h]
  _BYTE v24[28]; // [esp+64h] [ebp-60h] BYREF
  _BYTE v25[28]; // [esp+80h] [ebp-44h] BYREF
  _BYTE v26[28]; // [esp+9Ch] [ebp-28h] BYREF
  int v27; // [esp+C0h] [ebp-4h]

  sub_10011260((int)v19);
  v27 = 0;
  std::string::operator=(v20, a2);
  sub_1017A610(v20);
  v3 = std::string::string(v24, ".dds");
  LOBYTE(v27) = 1;
  v4 = sub_1017A2D0(v25, v20);
  LOBYTE(v27) = 2;
  v5 = std::operator+<char>(v26, v4, v3);
  LOBYTE(v27) = 3;
  std::string::operator=(v20, v5);
  LOBYTE(v27) = 2;
  std::string::~string(v26);
  LOBYTE(v27) = 1;
  std::string::~string(v25);
  LOBYTE(v27) = 0;
  std::string::~string(v24);
  if ( (unsigned __int8)FindMedia(v20, "Cache", 0, 0)
    || (std::string::operator=(v20, a2), sub_1017A610(v20), (unsigned __int8)FindMedia(v20, "Textures", 0, 0)) )
  {
    v8 = sub_1017A310(v24, v20);
    LOBYTE(v27) = 4;
    std::string::operator=(v19, v8);
    LOBYTE(v27) = 0;
    std::string::~string(v24);
    v9 = sub_1017A2D0(v24, v19);
    LOBYTE(v27) = 5;
    std::string::operator=(v19, v9);
    LOBYTE(v27) = 0;
    std::string::~string(v24);
    v10 = 0;
    v11 = this + 14;
    for ( i = 0; ; i += 84 )
    {
      v13 = v11[1];
      if ( !v13 || v10 >= (v11[2] - v13) / 84 )
        break;
      v14 = v11[1];
      if ( !v14 || v10 >= (v11[2] - v14) / 84 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(i + v11[1], v19) )
      {
        v15 = (char *)v21;
        v27 = 7;
        if ( v21 )
        {
          v16 = v22;
          if ( v21 != v22 )
          {
            do
            {
              std::string::~string(v15);
              v15 += 28;
            }
            while ( v15 != v16 );
            v15 = (char *)v21;
          }
          operator delete(v15);
        }
        v21 = 0;
        v22 = 0;
        v23 = 0;
        LOBYTE(v27) = 6;
        std::string::~string(v20);
        v27 = -1;
        std::string::~string(v19);
        return 0;
      }
      ++v10;
    }
    sub_10015410(v11, (int)v19);
    v17 = (char *)v21;
    v27 = 9;
    if ( v21 )
    {
      v18 = v22;
      if ( v21 != v22 )
      {
        do
        {
          std::string::~string(v17);
          v17 += 28;
        }
        while ( v17 != v18 );
        v17 = (char *)v21;
      }
      operator delete(v17);
    }
    v21 = 0;
    v22 = 0;
    v23 = 0;
    LOBYTE(v27) = 8;
    std::string::~string(v20);
    v27 = -1;
    std::string::~string(v19);
    return 1;
  }
  else
  {
    v6 = (const char *)std::string::c_str(v20);
    LogPrintf("AsyncPacket Cache Failed. %s", v6);
    v27 = -1;
    sub_100112C0(v19);
    return 0;
  }
}
