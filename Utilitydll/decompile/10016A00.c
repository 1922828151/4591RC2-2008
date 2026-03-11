/*
 * func-name: sub_10016A00
 * func-address: 0x10016a00
 * callers: none
 * callees: 0x10016990, 0x10018cf2
 */

_DWORD *__thiscall sub_10016A00(_DWORD *this, char a2)
{
  _DWORD *v2; // esi

  v2 = this - 24;
  sub_10016990(this);
  std::ios::~ios<char,std::char_traits<char>>(this);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}
