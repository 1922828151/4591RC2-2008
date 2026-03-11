/*
 * func-name: sub_1020E380
 * func-address: 0x1020e380
 * callers: 0x1000a7d1
 * callees: 0x102c9d50
 */

void **__thiscall sub_1020E380(void **this, char a2)
{
  *this = &InputCoord::`vftable';
  if ( this[2] )
    operator delete(this[2]);
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
