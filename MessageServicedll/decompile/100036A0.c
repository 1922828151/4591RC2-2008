/*
 * func-name: sub_100036A0
 * func-address: 0x100036a0
 * callers: none
 * callees: 0x10003710, 0x100294f2
 */

_DWORD *__thiscall sub_100036A0(_DWORD *this, char a2)
{
  *this = &std::length_error::`vftable';
  sub_10003710();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
