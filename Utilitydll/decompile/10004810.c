/*
 * func-name: sub_10004810
 * func-address: 0x10004810
 * callers: none
 * callees: 0x10004730, 0x10018cf2
 */

_DWORD *__thiscall sub_10004810(_DWORD *this, char a2)
{
  sub_10004730(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
