/*
 * func-name: sub_101493B0
 * func-address: 0x101493b0
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_101493B0(_DWORD *this, char a2)
{
  *this = &NxStream::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
