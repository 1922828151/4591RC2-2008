/*
 * func-name: sub_1000EDC0
 * func-address: 0x1000edc0
 * callers: none
 * callees: 0x1000ed30, 0x10023306
 */

_DWORD *__thiscall sub_1000EDC0(_DWORD *this, char a2)
{
  sub_1000ED30(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
