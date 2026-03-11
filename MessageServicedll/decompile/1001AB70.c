/*
 * func-name: sub_1001AB70
 * func-address: 0x1001ab70
 * callers: none
 * callees: 0x1001aa00, 0x100294f2
 */

_DWORD *__thiscall sub_1001AB70(_DWORD *this, char a2)
{
  sub_1001AA00(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
