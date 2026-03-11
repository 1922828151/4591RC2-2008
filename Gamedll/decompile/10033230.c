/*
 * func-name: sub_10033230
 * func-address: 0x10033230
 * callers: 0x1000340e
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10033230(_DWORD *this, char a2)
{
  *this = &CMsgDlgHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
