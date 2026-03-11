/*
 * func-name: sub_1003B980
 * func-address: 0x1003b980
 * callers: none
 * callees: 0x1003b670, 0x1004e870
 */

_DWORD *__thiscall sub_1003B980(_DWORD *this, char a2)
{
  sub_1003B670(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
