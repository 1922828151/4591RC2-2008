/*
 * func-name: sub_100D8270
 * func-address: 0x100d8270
 * callers: none
 * callees: none
 */

int __stdcall sub_100D8270(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _BYTE v6[136]; // [esp+0h] [ebp-94h] BYREF
  int v7; // [esp+90h] [ebp-4h]

  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(
    v6,
    a1,
    3,
    1);
  v7 = 0;
  v2 = std::wistream::operator>>(v6, a2);
  v3 = std::wistream::operator>>(v2, a2 + 4);
  v4 = std::wistream::operator>>(v3, a2 + 8);
  std::wistream::operator>>(v4, a2 + 12);
  v7 = -1;
  return std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vbase destructor'(v6);
}
