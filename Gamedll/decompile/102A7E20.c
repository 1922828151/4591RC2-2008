/*
 * func-name: sub_102A7E20
 * func-address: 0x102a7e20
 * callers: 0x10002c7a
 * callees: 0x10005b46, 0x1001a447
 */

int __cdecl sub_102A7E20(int a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  std::ios_base *v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v11[4]; // [esp+0h] [ebp-38h] BYREF
  char v12; // [esp+14h] [ebp-24h]
  int v13; // [esp+18h] [ebp-20h] BYREF
  int v14; // [esp+1Ch] [ebp-1Ch] BYREF
  int v15; // [esp+20h] [ebp-18h] BYREF
  int v16; // [esp+24h] [ebp-14h]
  int *v17; // [esp+28h] [ebp-10h]
  int v18; // [esp+34h] [ebp-4h]

  v17 = v11;
  v2 = 0;
  v3 = 0;
  v16 = 0;
  sub_10005B46(a1);
  v18 = 0;
  if ( v12 )
  {
    if ( (int)std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) > 1 )
      v3 = std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) - 1;
    v4 = (std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
    LOBYTE(v18) = 1;
    if ( (std::ios_base::flags(v4) & 0x1C0) == 0x40 )
    {
LABEL_10:
      v7 = std::ios::rdbuf(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
      v13 = std::streambuf::sputc(v7, a2);
      v14 = std::char_traits<char>::eof();
      if ( (unsigned __int8)std::char_traits<char>::eq_int_type(&v14, &v13) )
      {
        v2 = 4;
        v16 = 4;
      }
      while ( !v2 && v3 > 0 )
      {
        v8 = *(_DWORD *)(*(_DWORD *)a1 + 4) + a1;
        LOBYTE(v13) = *(_BYTE *)(v8 + 48);
        v9 = std::ios::rdbuf(v8);
        v14 = std::streambuf::sputc(v9, v13);
        v15 = std::char_traits<char>::eof();
        if ( (unsigned __int8)std::char_traits<char>::eq_int_type(&v15, &v14) )
        {
          v2 = 4;
          v16 = 4;
        }
        --v3;
      }
    }
    else
    {
      while ( !v2 )
      {
        if ( v3 <= 0 )
          goto LABEL_10;
        v5 = *(_DWORD *)(*(_DWORD *)a1 + 4);
        LOBYTE(v15) = *(_BYTE *)(v5 + a1 + 48);
        v6 = std::ios::rdbuf(a1 + v5);
        v14 = std::streambuf::sputc(v6, v15);
        v13 = std::char_traits<char>::eof();
        if ( (unsigned __int8)std::char_traits<char>::eq_int_type(&v13, &v14) )
        {
          v2 = 4;
          v16 = 4;
        }
        --v3;
      }
    }
    v18 = 0;
  }
  std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)), 0);
  std::ios::setstate(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v2, 0);
  v18 = -1;
  sub_1001A447(v11[0], v11[1]);
  return a1;
}
