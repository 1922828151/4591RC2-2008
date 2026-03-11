/*
 * func-name: sub_1004D3C0
 * func-address: 0x1004d3c0
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_1004D3C0(_DWORD *this, char a2)
{
  *this = &NxUserControllerHitReport::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
