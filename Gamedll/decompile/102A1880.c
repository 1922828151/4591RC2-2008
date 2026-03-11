/*
 * func-name: sub_102A1880
 * func-address: 0x102a1880
 * callers: 0x1001a965
 * callees: 0x1000a867, 0x1000ee0d
 */

int __cdecl sub_102A1880(int a1, int a2)
{
  int v2; // ebx
  std::ios_base *v3; // ecx
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v12[4]; // [esp+0h] [ebp-34h] BYREF
  char v13; // [esp+14h] [ebp-20h]
  int v14; // [esp+18h] [ebp-1Ch] BYREF
  int v15; // [esp+1Ch] [ebp-18h] BYREF
  int v16; // [esp+20h] [ebp-14h]
  int *v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+30h] [ebp-4h]

  v17 = v12;
  v2 = 0;
  v16 = 0;
  sub_1000A867(a1);
  v18 = 0;
  if ( v13 )
  {
    if ( (int)std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) > 1 )
      v2 = std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) - 1;
    v3 = (std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
    LOBYTE(v18) = 1;
    if ( (std::ios_base::flags(v3) & 0x1C0) == 0x40 )
    {
LABEL_10:
      v7 = std::wios::rdbuf(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
      v14 = (unsigned __int16)std::wstreambuf::sputc(v7, a2);
      v15 = (unsigned __int16)std::char_traits<wchar_t>::eof();
      if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v15, &v14) )
        v16 = 4;
      while ( !v16 && v2 > 0 )
      {
        v8 = *(_DWORD *)(*(_DWORD *)a1 + 4);
        v9 = *(unsigned __int16 *)(v8 + a1 + 48);
        v10 = std::wios::rdbuf(a1 + v8);
        v14 = (unsigned __int16)std::wstreambuf::sputc(v10, v9);
        v15 = (unsigned __int16)std::char_traits<wchar_t>::eof();
        if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v15, &v14) )
          v16 = 4;
        --v2;
      }
    }
    else
    {
      while ( !v16 )
      {
        if ( v2 <= 0 )
          goto LABEL_10;
        v4 = *(_DWORD *)(*(_DWORD *)a1 + 4);
        v5 = *(unsigned __int16 *)(v4 + a1 + 48);
        v6 = std::wios::rdbuf(a1 + v4);
        v15 = (unsigned __int16)std::wstreambuf::sputc(v6, v5);
        v14 = (unsigned __int16)std::char_traits<wchar_t>::eof();
        if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v14, &v15) )
          v16 = 4;
        --v2;
      }
    }
    v18 = 0;
  }
  std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)), 0);
  std::wios::setstate(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v16, 0);
  v18 = -1;
  sub_1000EE0D(v12[0], v12[1]);
  return a1;
}
