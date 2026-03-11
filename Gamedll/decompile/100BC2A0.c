/*
 * func-name: sub_100BC2A0
 * func-address: 0x100bc2a0
 * callers: 0x10018c55
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_100BC2A0(_DWORD *this, char a2)
{
  *this = &NxShapeDesc::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
