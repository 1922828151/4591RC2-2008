/*
 * func-name: sub_100D7150
 * func-address: 0x100d7150
 * callers: 0x1000c581
 * callees: 0x1001263e, 0x102c9d50
 */

void *__thiscall sub_100D7150(void *this, char a2)
{
  sub_1001263E();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
