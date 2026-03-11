/*
 * func-name: sub_100D7B40
 * func-address: 0x100d7b40
 * callers: 0x1000b0d2
 * callees: 0x1000ac4a, 0x102c9d50
 */

_DWORD *__thiscall sub_100D7B40(_DWORD *this, char a2)
{
  *this = &NxSuspendVehicleWheel::`vftable';
  sub_1000AC4A();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
