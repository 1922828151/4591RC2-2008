/*
 * func-name: sub_1011F300
 * func-address: 0x1011f300
 * callers: 0x1011acf0, 0x1011b080
 * callees: 0x101a2500
 */

void **__thiscall sub_1011F300(void **this, char a2)
{
  if ( this[8] )
    operator delete(this[8]);
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  if ( this[4] )
    operator delete(this[4]);
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
