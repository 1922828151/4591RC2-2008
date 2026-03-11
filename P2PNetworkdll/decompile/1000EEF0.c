/*
 * func-name: sub_1000EEF0
 * func-address: 0x1000eef0
 * callers: none
 * callees: 0x1000ee60, 0x10023306
 */

_DWORD *__thiscall sub_1000EEF0(_DWORD *this, char a2)
{
  sub_1000EE60(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
