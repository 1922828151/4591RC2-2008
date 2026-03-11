/*
 * func-name: sub_10036480
 * func-address: 0x10036480
 * callers: 0x10033d30, 0x100cee30
 * callees: 0x10036010, 0x10036150, 0x10036200
 */

int __cdecl sub_10036480(int a1, const char *a2)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // edi
  int v11; // eax
  std::locale *v13; // [esp-4h] [ebp-40h]
  int v14; // [esp+0h] [ebp-3Ch] BYREF
  int v15; // [esp+Ch] [ebp-30h] BYREF
  char v16; // [esp+10h] [ebp-2Ch]
  const struct std::locale::facet *v17; // [esp+14h] [ebp-28h] BYREF
  int v18; // [esp+18h] [ebp-24h] BYREF
  int v19; // [esp+1Ch] [ebp-20h] BYREF
  _BYTE v20[4]; // [esp+20h] [ebp-1Ch] BYREF
  int v21; // [esp+24h] [ebp-18h]
  int v22; // [esp+28h] [ebp-14h]
  int *v23; // [esp+2Ch] [ebp-10h]
  int v24; // [esp+38h] [ebp-4h]

  v23 = &v14;
  v22 = 0;
  v2 = strlen(a2);
  if ( (int)std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) <= v2 )
  {
    v21 = 0;
  }
  else
  {
    v21 = std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) - v2;
  }
  sub_10036150(&v15, a1);
  v24 = 0;
  if ( v16 )
  {
    v3 = a1 + *(_DWORD *)(*(_DWORD *)a1 + 4);
    LOBYTE(v24) = 1;
    v13 = (std::locale *)std::ios_base::getloc(v3, v20);
    LOBYTE(v24) = 2;
    v17 = sub_10036010(v13);
    LOBYTE(v24) = 1;
    std::locale::~locale((std::locale *)v20);
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) & 0x1C0) == 0x40 )
      goto LABEL_11;
    while ( 1 )
    {
      if ( v21 <= 0 )
        goto LABEL_11;
      v4 = *(_DWORD *)(*(_DWORD *)a1 + 4);
      v5 = *(unsigned __int16 *)(v4 + a1 + 48);
      v6 = std::wios::rdbuf(a1 + v4);
      v19 = (unsigned __int16)std::wstreambuf::sputc(v6, v5);
      v18 = (unsigned __int16)std::char_traits<wchar_t>::eof();
      if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v18, &v19) )
        break;
      --v21;
    }
    v22 |= 4u;
LABEL_11:
    while ( !v22 )
    {
      if ( v2 <= 0 )
      {
        while ( v21 > 0 )
        {
          v9 = *(_DWORD *)(*(_DWORD *)a1 + 4);
          v10 = *(unsigned __int16 *)(v9 + a1 + 48);
          v11 = std::wios::rdbuf(v9 + a1);
          v17 = (const struct std::locale::facet *)(unsigned __int16)std::wstreambuf::sputc(v11, v10);
          v18 = (unsigned __int16)std::char_traits<wchar_t>::eof();
          if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v18, &v17) )
          {
            v22 |= 4u;
            goto LABEL_20;
          }
          --v21;
        }
        break;
      }
      v7 = (unsigned __int16)std::ctype<wchar_t>::widen(v17, *(unsigned __int8 *)a2);
      v8 = std::wios::rdbuf(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
      v18 = (unsigned __int16)std::wstreambuf::sputc(v8, v7);
      v19 = (unsigned __int16)std::char_traits<wchar_t>::eof();
      if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v19, &v18) )
        v22 = 4;
      --v2;
      ++a2;
    }
LABEL_20:
    std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)), 0);
    v24 = 0;
  }
  else
  {
    v22 = 4;
  }
  std::wios::setstate(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v22, 0);
  v24 = -1;
  sub_10036200(&v15);
  return a1;
}
