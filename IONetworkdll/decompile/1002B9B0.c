/*
 * func-name: sub_1002B9B0
 * func-address: 0x1002b9b0
 * callers: none
 * callees: 0x1002acb0, 0x1004e870
 */

_DWORD *__thiscall sub_1002B9B0(_DWORD *this, char a2)
{
  sub_1002ACB0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
