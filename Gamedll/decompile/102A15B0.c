/*
 * func-name: sub_102A15B0
 * func-address: 0x102a15b0
 * callers: 0x100109dd
 * callees: 0x1000a867, 0x1000d346, 0x1000ee0d
 */

int __cdecl sub_102A15B0(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  std::ios_base *v4; // ecx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v14[4]; // [esp+0h] [ebp-3Ch] BYREF
  char v15; // [esp+14h] [ebp-28h]
  int v16; // [esp+18h] [ebp-24h] BYREF
  int v17; // [esp+1Ch] [ebp-20h] BYREF
  int v18; // [esp+20h] [ebp-1Ch] BYREF
  _BYTE v19[4]; // [esp+24h] [ebp-18h] BYREF
  int v20; // [esp+28h] [ebp-14h]
  int *v21; // [esp+2Ch] [ebp-10h]
  int v22; // [esp+38h] [ebp-4h]

  v21 = v14;
  v2 = 0;
  v20 = 0;
  sub_1000A867(a1);
  v22 = 0;
  if ( v15 )
  {
    v3 = std::ios_base::getloc(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v19);
    LOBYTE(v22) = 1;
    v16 = sub_1000D346(v3, v14[0]);
    LOBYTE(v22) = 0;
    std::locale::~locale((std::locale *)v19);
    if ( (int)std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) > 1 )
      v2 = std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4))) - 1;
    v4 = (std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
    LOBYTE(v22) = 2;
    if ( (std::ios_base::flags(v4) & 0x1C0) == 0x40 )
    {
LABEL_10:
      v8 = (unsigned __int16)std::ctype<wchar_t>::widen(v16, a2);
      v9 = std::wios::rdbuf(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
      v16 = (unsigned __int16)std::wstreambuf::sputc(v9, v8);
      v17 = (unsigned __int16)std::char_traits<wchar_t>::eof();
      if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v17, &v16) )
        v20 = 4;
      while ( !v20 && v2 > 0 )
      {
        v10 = *(_DWORD *)(*(_DWORD *)a1 + 4);
        v11 = *(unsigned __int16 *)(v10 + a1 + 48);
        v12 = std::wios::rdbuf(v10 + a1);
        v16 = (unsigned __int16)std::wstreambuf::sputc(v12, v11);
        v17 = (unsigned __int16)std::char_traits<wchar_t>::eof();
        if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v17, &v16) )
          v20 = 4;
        --v2;
      }
    }
    else
    {
      while ( !v20 )
      {
        if ( v2 <= 0 )
          goto LABEL_10;
        v5 = *(_DWORD *)(*(_DWORD *)a1 + 4);
        v6 = *(unsigned __int16 *)(v5 + a1 + 48);
        v7 = std::wios::rdbuf(v5 + a1);
        v18 = (unsigned __int16)std::wstreambuf::sputc(v7, v6);
        v17 = (unsigned __int16)std::char_traits<wchar_t>::eof();
        if ( (unsigned __int8)std::char_traits<wchar_t>::eq_int_type(&v17, &v18) )
          v20 = 4;
        --v2;
      }
    }
    v22 = 0;
  }
  std::ios_base::width((std::ios_base *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)), 0);
  std::wios::setstate(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v20, 0);
  v22 = -1;
  sub_1000EE0D(v14[0], v14[1]);
  return a1;
}
