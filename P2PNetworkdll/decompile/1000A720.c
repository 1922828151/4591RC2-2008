/*
 * func-name: sub_1000A720
 * func-address: 0x1000a720
 * callers: none
 * callees: 0x1000a740, 0x10023306
 */

void *__thiscall sub_1000A720(void *this, char a2)
{
  sub_1000A740(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
