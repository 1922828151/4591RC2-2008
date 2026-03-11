/*
 * func-name: sub_100BBEE0
 * func-address: 0x100bbee0
 * callers: 0x100040ed
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_100BBEE0(_DWORD *this, char a2)
{
  *this = &NxShapeDesc::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
