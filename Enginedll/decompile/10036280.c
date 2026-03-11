/*
 * func-name: sub_10036280
 * func-address: 0x10036280
 * callers: 0x10033d30, 0x10034690, 0x10034920
 * callees: 0x10036150, 0x10036200
 */

int __cdecl sub_10036280(int a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  std::ios_base *v4; // ecx
  std::ios_base *v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  char v9; // al
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v15; // [esp+0h] [ebp-34h] BYREF
  int v16; // [esp+Ch] [ebp-28h] BYREF
  char v17; // [esp+10h] [ebp-24h]
  int v18; // [esp+14h] [ebp-20h] BYREF
  int v19; // [esp+18h] [ebp-1Ch] BYREF
  int v20; // [esp+1Ch] [ebp-18h]
  int v21; // [esp+20h] [ebp-14h]
  int *v22; // [esp+24h] [ebp-10h]
  int v23; // [esp+30h] [ebp-4h]

  v22 = &v15;
  v2 = 0;
  v21 = 0;
  v3 = std::char_traits<wchar_t>::length(a2);
  v4 = (std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
  v20 = v3;
  if ( (int)std::ios_base::width(v4) > 0
    && std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) > v3 )
  {
    v2 = std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) - v3;
  }
  sub_10036150(&v16, a1);
  v23 = 0;
  if ( v17 )
  {
    v5 = (std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
    LOBYTE(v23) = 1;
    if ( (std::ios_base::flags(v5) & 0x1C0) == 0x40 )
      goto LABEL_11;
    while ( v2 > 0 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)a1 + 4);
      v7 = *(unsigned __int16 *)(v6 + a1 + 48);
      v8 = std::wios::rdbuf(v6 + a1);
      v19 = (unsigned __int16)std::wstreambuf::sputc(v8, v7);
      v18 = (unsigned __int16)std::char_traits<wchar_t>::eof();
      v9 = std::char_traits<wchar_t>::eq_int_type(&v18, &v19);
      v3 = v20;
      if ( v9 )
      {
        v21 |= 4u;
        break;
      }
      --v2;
    }
    if ( !v21 )
    {
LABEL_11:
      v10 = std::wios::rdbuf(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
      if ( std::wstreambuf::sputn(v10, a2, v3) == v3 )
      {
        while ( v2 > 0 )
        {
          v11 = *(_DWORD *)(*(_DWORD *)a1 + 4);
          v12 = *(unsigned __int16 *)(v11 + a1 + 48);
          v13 = std::wios::rdbuf(v11 + a1);
          v18 = (unsigned __int16)std::wstreambuf::sputc(v13, v12);
          v19 = (unsigned __int16)std::char_traits<wchar_t>::eof();
          if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v19, &v18) )
          {
            v21 |= 4u;
            break;
          }
          --v2;
        }
      }
      else
      {
        v21 = 4;
      }
    }
    std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)), 0);
    v23 = 0;
  }
  else
  {
    v21 = 4;
  }
  std::wios::setstate(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v21, 0);
  v23 = -1;
  sub_10036200(&v16);
  return a1;
}
