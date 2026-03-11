/*
 * func-name: sub_100D2E90
 * func-address: 0x100d2e90
 * callers: 0x1001398a
 * callees: 0x1000ac4a, 0x102c9d50
 */

_DWORD *__thiscall sub_100D2E90(_DWORD *this, char a2)
{
  *this = &NxPedrailVehicleWheel::`vftable';
  sub_1000AC4A();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
