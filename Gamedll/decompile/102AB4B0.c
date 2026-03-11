/*
 * func-name: sub_102AB4B0
 * func-address: 0x102ab4b0
 * callers: 0x1000d823
 * callees: 0x100125b2, 0x102c9d50
 */

void *__thiscall sub_102AB4B0(void *this, char a2)
{
  sub_100125B2();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
