/*
 * func-name: sub_100D2EC0
 * func-address: 0x100d2ec0
 * callers: 0x10013179
 * callees: 0x1001263e, 0x102c9d50
 */

_DWORD *__thiscall sub_100D2EC0(_DWORD *this, char a2)
{
  *this = &NxPedrailVehicle::`vftable';
  sub_1001263E();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
