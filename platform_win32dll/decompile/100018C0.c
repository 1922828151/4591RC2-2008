/*
 * func-name: sub_100018C0
 * func-address: 0x100018c0
 * callers: 0x10001360
 * callees: 0x10001770, 0x10001830
 */

int __cdecl sub_100018C0(int a1, int a2)
{
  int v2; // edi
  int v3; // ebx
  std::ios_base *v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v11; // [esp+0h] [ebp-38h] BYREF
  int v12; // [esp+10h] [ebp-28h] BYREF
  char v13; // [esp+14h] [ebp-24h]
  int v14; // [esp+18h] [ebp-20h] BYREF
  int v15; // [esp+1Ch] [ebp-1Ch] BYREF
  int v16; // [esp+20h] [ebp-18h] BYREF
  int v17; // [esp+24h] [ebp-14h]
  int *v18; // [esp+28h] [ebp-10h]
  int v19; // [esp+34h] [ebp-4h]

  v18 = &v11;
  v2 = 0;
  v17 = 0;
  v3 = std::char_traits<char>::length(a2);
  if ( (int)std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) > 0
    && std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) > v3 )
  {
    v2 = std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) - v3;
  }
  sub_10001770(&v12, a1);
  v19 = 0;
  if ( v13 )
  {
    v4 = (std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
    LOBYTE(v19) = 1;
    if ( (std::ios_base::flags(v4) & 0x1C0) == 0x40 )
      goto LABEL_11;
    while ( v2 > 0 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)a1 + 4) + a1;
      LOBYTE(v16) = *(_BYTE *)(v5 + 48);
      v6 = std::ios::rdbuf(v5);
      v15 = std::streambuf::sputc(v6, v16);
      v14 = std::char_traits<char>::eof();
      if ( (unsigned __int8)std::char_traits<char>::eq_int_type(&v14, &v15) )
      {
        v17 |= 4u;
        break;
      }
      --v2;
    }
    if ( !v17 )
    {
LABEL_11:
      v7 = std::ios::rdbuf(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
      if ( std::streambuf::sputn(v7, a2, v3) == v3 )
      {
        while ( v2 > 0 )
        {
          v8 = *(_DWORD *)(*(_DWORD *)a1 + 4);
          LOBYTE(v14) = *(_BYTE *)(v8 + a1 + 48);
          v9 = std::ios::rdbuf(a1 + v8);
          v15 = std::streambuf::sputc(v9, v14);
          v16 = std::char_traits<char>::eof();
          if ( (unsigned __int8)std::char_traits<char>::eq_int_type(&v16, &v15) )
          {
            v17 |= 4u;
            break;
          }
          --v2;
        }
      }
      else
      {
        v17 = 4;
      }
    }
    std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)), 0);
    v19 = 0;
  }
  else
  {
    v17 = 4;
  }
  std::ios::setstate(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v17, 0);
  v19 = -1;
  sub_10001830(&v12);
  return a1;
}
