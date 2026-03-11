/*
 * func-name: sub_1004D360
 * func-address: 0x1004d360
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_1004D360(_DWORD *this, char a2)
{
  *this = &NxUserRaycastReport::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
