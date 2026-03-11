/*
 * func-name: sub_100D8B50
 * func-address: 0x100d8b50
 * callers: 0x100d8d90
 * callees: 0x10036010, 0x10036150, 0x10036200
 */

int __cdecl sub_100D8B50(int a1, int a2)
{
  int v2; // ebx
  std::locale *v3; // eax
  std::ios_base *v4; // ecx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v14; // [esp+0h] [ebp-38h] BYREF
  int v15; // [esp+Ch] [ebp-2Ch] BYREF
  char v16; // [esp+10h] [ebp-28h]
  const struct std::locale::facet *v17; // [esp+14h] [ebp-24h] BYREF
  int v18; // [esp+18h] [ebp-20h] BYREF
  int v19; // [esp+1Ch] [ebp-1Ch] BYREF
  _BYTE v20[4]; // [esp+20h] [ebp-18h] BYREF
  int v21; // [esp+24h] [ebp-14h]
  int *v22; // [esp+28h] [ebp-10h]
  int v23; // [esp+34h] [ebp-4h]

  v22 = &v14;
  v2 = 0;
  v21 = 0;
  sub_10036150(&v15, a1);
  v23 = 0;
  if ( v16 )
  {
    v3 = (std::locale *)std::ios_base::getloc(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v20);
    LOBYTE(v23) = 1;
    v17 = sub_10036010(v3);
    LOBYTE(v23) = 0;
    std::locale::~locale((std::locale *)v20);
    if ( (int)std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) > 1 )
      v2 = std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) - 1;
    v4 = (std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
    LOBYTE(v23) = 2;
    if ( (std::ios_base::flags(v4) & 0x1C0) == 0x40 )
    {
LABEL_10:
      v8 = (unsigned __int16)std::ctype<wchar_t>::widen(v17, a2);
      v9 = std::wios::rdbuf(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
      v17 = (const struct std::locale::facet *)(unsigned __int16)std::wstreambuf::sputc(v9, v8);
      v18 = (unsigned __int16)std::char_traits<wchar_t>::eof();
      if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v18, &v17) )
        v21 = 4;
      while ( !v21 && v2 > 0 )
      {
        v10 = *(_DWORD *)(*(_DWORD *)a1 + 4);
        v11 = *(unsigned __int16 *)(v10 + a1 + 48);
        v12 = std::wios::rdbuf(v10 + a1);
        v17 = (const struct std::locale::facet *)(unsigned __int16)std::wstreambuf::sputc(v12, v11);
        v18 = (unsigned __int16)std::char_traits<wchar_t>::eof();
        if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v18, &v17) )
          v21 = 4;
        --v2;
      }
    }
    else
    {
      while ( !v21 )
      {
        if ( v2 <= 0 )
          goto LABEL_10;
        v5 = *(_DWORD *)(*(_DWORD *)a1 + 4);
        v6 = *(unsigned __int16 *)(v5 + a1 + 48);
        v7 = std::wios::rdbuf(v5 + a1);
        v19 = (unsigned __int16)std::wstreambuf::sputc(v7, v6);
        v18 = (unsigned __int16)std::char_traits<wchar_t>::eof();
        if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v18, &v19) )
          v21 = 4;
        --v2;
      }
    }
    v23 = 0;
  }
  std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)), 0);
  std::wios::setstate(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v21, 0);
  v23 = -1;
  sub_10036200(&v15);
  return a1;
}
