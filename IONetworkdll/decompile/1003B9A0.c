/*
 * func-name: sub_1003B9A0
 * func-address: 0x1003b9a0
 * callers: none
 * callees: 0x1003b800, 0x1004e870
 */

_DWORD *__thiscall sub_1003B9A0(_DWORD *this, char a2)
{
  sub_1003B800(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
