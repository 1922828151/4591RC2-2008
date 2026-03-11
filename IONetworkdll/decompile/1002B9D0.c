/*
 * func-name: sub_1002B9D0
 * func-address: 0x1002b9d0
 * callers: none
 * callees: 0x1002b6a0, 0x1004e870
 */

_DWORD *__thiscall sub_1002B9D0(_DWORD *this, char a2)
{
  sub_1002B6A0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
