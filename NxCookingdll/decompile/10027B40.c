/*
 * func-name: sub_10027B40
 * func-address: 0x10027b40
 * callers: 0x10027bb0
 * callees: 0x10026de0, 0x10026e40, 0x10027110
 */

int *__thiscall sub_10027B40(int *this, int a2, int a3, int a4)
{
  this[1] = 0;
  this[2] = 0;
  *this = 0;
  if ( a2 )
    sub_10027110(this, a2);
  this[4] = 0;
  this[5] = 0;
  this[3] = 0;
  if ( a3 )
    sub_10026DE0(this + 3, a3);
  this[7] = 0;
  this[8] = 0;
  this[6] = 0;
  if ( a4 )
    sub_10026E40(this + 6, a4);
  this[7] = a4;
  this[1] = a2;
  this[4] = a3;
  return this;
}
