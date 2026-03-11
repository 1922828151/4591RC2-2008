/*
 * func-name: sub_10043910
 * func-address: 0x10043910
 * callers: 0x100010e6
 * callees: 0x102c0750, 0x102c9d50
 */

void *__thiscall sub_10043910(void *this, char a2)
{
  sub_102C0750(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
