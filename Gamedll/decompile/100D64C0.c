/*
 * func-name: sub_100D64C0
 * func-address: 0x100d64c0
 * callers: 0x1000f010
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_100D64C0(_DWORD *this, char a2)
{
  this[38] = &NxTireFunctionDesc::`vftable';
  this[32] = &NxTireFunctionDesc::`vftable';
  *this = &NxShapeDesc::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
