/*
 * func-name: sub_100D8D90
 * func-address: 0x100d8d90
 * callers: none
 * callees: 0x100d8b50
 */

int __stdcall sub_100D8D90(int a1, int *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp-14h] [ebp-C4h]
  int v12; // [esp-Ch] [ebp-BCh]
  int v13; // [esp-4h] [ebp-B4h]
  _BYTE v14[28]; // [esp+0h] [ebp-B0h] BYREF
  _BYTE v15[8]; // [esp+1Ch] [ebp-94h] BYREF
  _BYTE v16[128]; // [esp+24h] [ebp-8Ch] BYREF
  int v17; // [esp+ACh] [ebp-4h]

  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(
    v15,
    3,
    1);
  v13 = a2[3];
  v12 = a2[2];
  v2 = *a2;
  v11 = a2[1];
  v17 = 0;
  v3 = std::wostream::operator<<(v16, v2);
  v4 = sub_100D8B50(v3, 32);
  v5 = std::wostream::operator<<(v4, v11);
  v6 = sub_100D8B50(v5, 32);
  v7 = std::wostream::operator<<(v6, v12);
  v8 = sub_100D8B50(v7, 32);
  std::wostream::operator<<(v8, v13);
  v9 = std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::str(v15, v14);
  LOBYTE(v17) = 1;
  std::wstring::operator=(a1, v9);
  LOBYTE(v17) = 0;
  std::wstring::~wstring(v14);
  v17 = -1;
  return std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vbase destructor'(v15);
}
