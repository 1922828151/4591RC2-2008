/*
 * func-name: sub_100D81C0
 * func-address: 0x100d81c0
 * callers: none
 * callees: none
 */

int __stdcall sub_100D81C0(int a1, int a2)
{
  int v2; // eax
  _BYTE v4[28]; // [esp+0h] [ebp-B0h] BYREF
  _BYTE v5[8]; // [esp+1Ch] [ebp-94h] BYREF
  _BYTE v6[128]; // [esp+24h] [ebp-8Ch] BYREF
  int v7; // [esp+ACh] [ebp-4h]

  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(
    v5,
    3,
    1);
  v7 = 0;
  std::operator<<<wchar_t>(v6, a2);
  v2 = std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::str(v5, v4);
  LOBYTE(v7) = 1;
  std::wstring::operator=(a1, v2);
  LOBYTE(v7) = 0;
  std::wstring::~wstring(v4);
  v7 = -1;
  return std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vbase destructor'(v5);
}
