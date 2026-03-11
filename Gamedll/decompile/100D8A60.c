/*
 * func-name: sub_100D8A60
 * func-address: 0x100d8a60
 * callers: 0x10019669
 * callees: 0x1000ac4a, 0x102c9d50
 */

_DWORD *__thiscall sub_100D8A60(_DWORD *this, char a2)
{
  *this = &NxWheelVehicleWheel::`vftable';
  sub_1000AC4A();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
