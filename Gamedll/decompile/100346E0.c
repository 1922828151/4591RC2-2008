/*
 * func-name: sub_100346E0
 * func-address: 0x100346e0
 * callers: 0x1000c455
 * callees: 0x102c0750, 0x102c9d50
 */

void *__thiscall sub_100346E0(void *this, char a2)
{
  sub_102C0750(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
