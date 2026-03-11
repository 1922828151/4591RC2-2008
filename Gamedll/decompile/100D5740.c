/*
 * func-name: sub_100D5740
 * func-address: 0x100d5740
 * callers: 0x10010e06
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_100D5740(_DWORD *this, char a2)
{
  *this = &NxTireFunctionDesc::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
