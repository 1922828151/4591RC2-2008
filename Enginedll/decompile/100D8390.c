/*
 * func-name: sub_100D8390
 * func-address: 0x100d8390
 * callers: none
 * callees: none
 */

int __stdcall sub_100D8390(int a1, int *a2)
{
  int v2; // eax
  int v4; // [esp-4h] [ebp-B4h]
  _BYTE v5[28]; // [esp+0h] [ebp-B0h] BYREF
  _BYTE v6[8]; // [esp+1Ch] [ebp-94h] BYREF
  _BYTE v7[128]; // [esp+24h] [ebp-8Ch] BYREF
  int v8; // [esp+ACh] [ebp-4h]

  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(
    v6,
    3,
    1);
  v4 = *a2;
  v8 = 0;
  std::wostream::operator<<(v7, v4);
  v2 = std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::str(v6, v5);
  LOBYTE(v8) = 1;
  std::wstring::operator=(a1, v2);
  LOBYTE(v8) = 0;
  std::wstring::~wstring(v5);
  v8 = -1;
  return std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vbase destructor'(v6);
}
