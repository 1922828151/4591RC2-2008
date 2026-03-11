/*
 * func-name: sub_1001A870
 * func-address: 0x1001a870
 * callers: none
 * callees: 0x100195e0, 0x1004e870
 */

_DWORD *__thiscall sub_1001A870(_DWORD *this, char a2)
{
  sub_100195E0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
