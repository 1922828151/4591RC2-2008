/*
 * func-name: sub_10015E90
 * func-address: 0x10015e90
 * callers: 0x10008f60, 0x10044ab0
 * callees: 0x10011260, 0x100112c0, 0x10015410, 0x10097220, 0x1017a310, 0x1017a610, 0x101a2500
 */

char __thiscall sub_10015E90(int *this, int a2)
{
  int v3; // ebp
  int v5; // eax
  unsigned int v6; // edi
  int *v7; // esi
  int v8; // eax
  int v9; // eax
  char *v10; // esi
  char *v11; // edi
  _BYTE v12[28]; // [esp+8h] [ebp-7Ch] BYREF
  int v13[7]; // [esp+24h] [ebp-60h] BYREF
  _BYTE v14[40]; // [esp+40h] [ebp-44h] BYREF
  void *v15; // [esp+68h] [ebp-1Ch]
  char *v16; // [esp+6Ch] [ebp-18h]
  int v17; // [esp+70h] [ebp-14h]
  int v18; // [esp+80h] [ebp-4h]

  sub_10011260((int)v13);
  v3 = 0;
  v18 = 0;
  std::string::operator=(v14, a2);
  sub_1017A610(v14);
  if ( (unsigned __int8)FindMedia(v14, "Shaders", 0, 0) )
  {
    v5 = sub_1017A310(v12, v14);
    LOBYTE(v18) = 1;
    std::string::operator=(v13, v5);
    LOBYTE(v18) = 0;
    std::string::~string(v12);
    v6 = 0;
    v7 = this + 22;
    while ( 1 )
    {
      v8 = v7[1];
      if ( !v8 || v6 >= (v7[2] - v8) / 84 )
        break;
      v9 = v7[1];
      if ( !v9 || v6 >= (v7[2] - v9) / 84 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(v3 + v7[1], v13) )
      {
        v18 = -1;
        sub_100112C0(v13);
        return 0;
      }
      ++v6;
      v3 += 84;
    }
    sub_10015410(v7, (int)v13);
    v10 = (char *)v15;
    v18 = 3;
    if ( v15 )
    {
      v11 = v16;
      if ( v15 != v16 )
      {
        do
        {
          std::string::~string(v10);
          v10 += 28;
        }
        while ( v10 != v11 );
        v10 = (char *)v15;
      }
      operator delete(v10);
    }
    v15 = 0;
    v16 = 0;
    v17 = 0;
    LOBYTE(v18) = 2;
    std::string::~string(v14);
    v18 = -1;
    std::string::~string(v13);
    return 1;
  }
  else
  {
    v18 = -1;
    sub_100112C0(v13);
    return 0;
  }
}
