/*
 * func-name: sub_1002B9F0
 * func-address: 0x1002b9f0
 * callers: none
 * callees: 0x1002b770, 0x1004e870
 */

_DWORD *__thiscall sub_1002B9F0(_DWORD *this, char a2)
{
  sub_1002B770(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
