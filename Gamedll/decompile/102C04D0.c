/*
 * func-name: sub_102C04D0
 * func-address: 0x102c04d0
 * callers: 0x102be640, 0x102be800, 0x102beeb0, 0x102befa0, 0x102bf0f0
 * callees: 0x10005b46, 0x1001a447
 */

int __cdecl sub_102C04D0(int a1, int a2)
{
  int v2; // edi
  int v3; // ebx
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
  v16 = 0;
  v3 = std::char_traits<char>::length(a2);
  if ( (int)std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) > 0
    && std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) > v3 )
  {
    v2 = std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) - v3;
  }
  sub_10005B46(a1);
  v18 = 0;
  if ( v12 )
  {
    v4 = (std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
    LOBYTE(v18) = 1;
    if ( (std::ios_base::flags(v4) & 0x1C0) == 0x40 )
      goto LABEL_11;
    while ( v2 > 0 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)a1 + 4) + a1;
      LOBYTE(v15) = *(_BYTE *)(v5 + 48);
      v6 = std::ios::rdbuf(v5);
      v14 = std::streambuf::sputc(v6, v15);
      v13 = std::char_traits<char>::eof();
      if ( (unsigned __int8)std::char_traits<char>::eq_int_type(&v13, &v14) )
      {
        v16 |= 4u;
        break;
      }
      --v2;
    }
    if ( !v16 )
    {
LABEL_11:
      v7 = std::ios::rdbuf(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
      if ( std::streambuf::sputn(v7, a2, v3) == v3 )
      {
        while ( v2 > 0 )
        {
          v8 = *(_DWORD *)(*(_DWORD *)a1 + 4);
          LOBYTE(v13) = *(_BYTE *)(v8 + a1 + 48);
          v9 = std::ios::rdbuf(a1 + v8);
          v14 = std::streambuf::sputc(v9, v13);
          v15 = std::char_traits<char>::eof();
          if ( (unsigned __int8)std::char_traits<char>::eq_int_type(&v15, &v14) )
          {
            v16 |= 4u;
            break;
          }
          --v2;
        }
      }
      else
      {
        v16 = 4;
      }
    }
    std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)), 0);
    v18 = 0;
  }
  else
  {
    v16 = 4;
  }
  std::ios::setstate(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v16, 0);
  v18 = -1;
  sub_1001A447(v11[0], v11[1]);
  return a1;
}
