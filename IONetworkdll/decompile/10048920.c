/*
 * func-name: sub_10048920
 * func-address: 0x10048920
 * callers: none
 * callees: 0x10048880, 0x1004e870
 */

_DWORD *__thiscall sub_10048920(_DWORD *this, char a2)
{
  sub_10048880(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
