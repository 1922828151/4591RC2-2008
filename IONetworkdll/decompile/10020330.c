/*
 * func-name: sub_10020330
 * func-address: 0x10020330
 * callers: none
 * callees: 0x1001ff50, 0x1004e870
 */

_DWORD *__thiscall sub_10020330(_DWORD *this, char a2)
{
  sub_1001FF50(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
