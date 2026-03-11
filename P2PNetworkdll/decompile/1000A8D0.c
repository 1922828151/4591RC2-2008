/*
 * func-name: sub_1000A8D0
 * func-address: 0x1000a8d0
 * callers: 0x1000ec20
 * callees: 0x1000a9d0, 0x10023306
 */

void *__thiscall sub_1000A8D0(void *this, char a2)
{
  sub_1000A9D0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
