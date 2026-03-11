/*
 * func-name: sub_10277210
 * func-address: 0x10277210
 * callers: 0x100089ef
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10277210(_DWORD *this, char a2)
{
  *this = &CMsgDlgHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
