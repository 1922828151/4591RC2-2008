/*
 * func-name: sub_10020310
 * func-address: 0x10020310
 * callers: none
 * callees: 0x1001f610, 0x1004e870
 */

_DWORD *__thiscall sub_10020310(_DWORD *this, char a2)
{
  sub_1001F610(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
