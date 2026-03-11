/*
 * func-name: sub_10146200
 * func-address: 0x10146200
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_10146200(_DWORD *this, char a2)
{
  *this = &NxShapeDesc::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
