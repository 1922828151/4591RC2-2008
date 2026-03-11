/*
 * func-name: sub_100158B0
 * func-address: 0x100158b0
 * callers: 0x10005ad0, 0x10005d50, 0x10044cf0, 0x10047a80
 * callees: 0x10011260, 0x100112c0, 0x10015410, 0x10097220, 0x1017a310, 0x1017a610, 0x101a2500
 */

char __thiscall sub_100158B0(int *this, int a2)
{
  int v3; // ebp
  int v5; // eax
  unsigned int v6; // edi
  int *v7; // esi
  int v8; // eax
  int v9; // eax
  char *v10; // esi
  char *v11; // edi
  char *v12; // esi
  char *v13; // edi
  _BYTE v14[28]; // [esp+8h] [ebp-7Ch] BYREF
  int v15[7]; // [esp+24h] [ebp-60h] BYREF
  _BYTE v16[40]; // [esp+40h] [ebp-44h] BYREF
  void *v17; // [esp+68h] [ebp-1Ch]
  char *v18; // [esp+6Ch] [ebp-18h]
  int v19; // [esp+70h] [ebp-14h]
  int v20; // [esp+80h] [ebp-4h]

  sub_10011260((int)v15);
  v3 = 0;
  v20 = 0;
  std::string::operator=(v16, a2);
  sub_1017A610(v16);
  if ( (unsigned __int8)FindMedia(v16, "Models", 0, 0) || (unsigned __int8)FindMedia(v16, "Maps", 0, 0) )
  {
    v5 = sub_1017A310(v14, v16);
    LOBYTE(v20) = 1;
    std::string::operator=(v15, v5);
    LOBYTE(v20) = 0;
    std::string::~string(v14);
    v6 = 0;
    v7 = this + 18;
    while ( 1 )
    {
      v8 = v7[1];
      if ( !v8 || v6 >= (v7[2] - v8) / 84 )
        break;
      v9 = v7[1];
      if ( !v9 || v6 >= (v7[2] - v9) / 84 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(v3 + v7[1], v15) )
      {
        v10 = (char *)v17;
        v20 = 3;
        if ( v17 )
        {
          v11 = v18;
          if ( v17 != v18 )
          {
            do
            {
              std::string::~string(v10);
              v10 += 28;
            }
            while ( v10 != v11 );
            v10 = (char *)v17;
          }
          operator delete(v10);
        }
        v17 = 0;
        v18 = 0;
        v19 = 0;
        LOBYTE(v20) = 2;
        std::string::~string(v16);
        v20 = -1;
        std::string::~string(v15);
        return 0;
      }
      ++v6;
      v3 += 84;
    }
    sub_10015410(v7, (int)v15);
    v12 = (char *)v17;
    v20 = 5;
    if ( v17 )
    {
      v13 = v18;
      if ( v17 != v18 )
      {
        do
        {
          std::string::~string(v12);
          v12 += 28;
        }
        while ( v12 != v13 );
        v12 = (char *)v17;
      }
      operator delete(v12);
    }
    v17 = 0;
    v18 = 0;
    v19 = 0;
    LOBYTE(v20) = 4;
    std::string::~string(v16);
    v20 = -1;
    std::string::~string(v15);
    return 1;
  }
  else
  {
    v20 = -1;
    sub_100112C0(v15);
    return 0;
  }
}
