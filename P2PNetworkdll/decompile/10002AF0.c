/*
 * func-name: sub_10002AF0
 * func-address: 0x10002af0
 * callers: none
 * callees: 0x10002a80, 0x10023306
 */

_DWORD *__thiscall sub_10002AF0(_DWORD *this, char a2)
{
  sub_10002A80(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
