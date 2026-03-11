/*
 * func-name: sub_100029F0
 * func-address: 0x100029f0
 * callers: none
 * callees: 0x10002980, 0x10023306
 */

_DWORD *__thiscall sub_100029F0(_DWORD *this, char a2)
{
  sub_10002980(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
