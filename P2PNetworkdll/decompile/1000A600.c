/*
 * func-name: sub_1000A600
 * func-address: 0x1000a600
 * callers: none
 * callees: 0x1000a620, 0x10023306
 */

void *__thiscall sub_1000A600(void *this, char a2)
{
  sub_1000A620(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
