/*
 * func-name: sub_10014E20
 * func-address: 0x10014e20
 * callers: none
 * callees: 0x10014d20, 0x1004e870
 */

_DWORD *__thiscall sub_10014E20(_DWORD *this, char a2)
{
  sub_10014D20(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
