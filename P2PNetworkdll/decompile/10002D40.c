/*
 * func-name: sub_10002D40
 * func-address: 0x10002d40
 * callers: none
 * callees: 0x10002cd0, 0x10023306
 */

_DWORD *__thiscall sub_10002D40(_DWORD *this, char a2)
{
  sub_10002CD0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
