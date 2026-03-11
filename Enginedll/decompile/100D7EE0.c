/*
 * func-name: sub_100D7EE0
 * func-address: 0x100d7ee0
 * callers: none
 * callees: none
 */

int __stdcall sub_100D7EE0(int a1, int a2)
{
  _BYTE v3[136]; // [esp+0h] [ebp-94h] BYREF
  int v4; // [esp+90h] [ebp-4h]

  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(
    v3,
    a1,
    3,
    1);
  v4 = 0;
  std::wistream::operator>>(v3, a2);
  v4 = -1;
  return std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vbase destructor'(v3);
}
