/*
 * func-name: sub_100D7B70
 * func-address: 0x100d7b70
 * callers: 0x100111fd
 * callees: 0x1001263e, 0x102c9d50
 */

_DWORD *__thiscall sub_100D7B70(_DWORD *this, char a2)
{
  *this = &NxSuspendVehicle::`vftable';
  sub_1001263E();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
