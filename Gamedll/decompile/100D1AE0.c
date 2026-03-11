/*
 * func-name: sub_100D1AE0
 * func-address: 0x100d1ae0
 * callers: 0x10015ebf
 * callees: 0x1001263e, 0x102c9d50
 */

_DWORD *__thiscall sub_100D1AE0(_DWORD *this, char a2)
{
  *this = &NxAircraftVehicle::`vftable';
  sub_1001263E();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
