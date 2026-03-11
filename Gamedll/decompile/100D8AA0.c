/*
 * func-name: sub_100D8AA0
 * func-address: 0x100d8aa0
 * callers: 0x1000a367
 * callees: 0x1001263e, 0x102c9d50
 */

_DWORD *__thiscall sub_100D8AA0(_DWORD *this, char a2)
{
  *this = &NxWheelVehicle::`vftable';
  sub_1001263E();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
