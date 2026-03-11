/*
 * func-name: sub_1002BA10
 * func-address: 0x1002ba10
 * callers: none
 * callees: 0x1002b900, 0x1004e870
 */

_DWORD *__thiscall sub_1002BA10(_DWORD *this, char a2)
{
  sub_1002B900(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
