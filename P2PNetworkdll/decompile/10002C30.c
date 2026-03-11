/*
 * func-name: sub_10002C30
 * func-address: 0x10002c30
 * callers: none
 * callees: 0x10002ba0, 0x10023306
 */

_DWORD *__thiscall sub_10002C30(_DWORD *this, char a2)
{
  sub_10002BA0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
