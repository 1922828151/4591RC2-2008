/*
 * func-name: sub_102B3F60
 * func-address: 0x102b3f60
 * callers: 0x100107e9
 * callees: 0x1000959d, 0x102c9d50
 */

void *__thiscall sub_102B3F60(void *this, char a2)
{
  sub_1000959D();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
