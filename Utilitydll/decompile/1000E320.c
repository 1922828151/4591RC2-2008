/*
 * func-name: sub_1000E320
 * func-address: 0x1000e320
 * callers: none
 * callees: 0x1000e2b0, 0x10018cf2
 */

void *__thiscall sub_1000E320(void *this, char a2)
{
  sub_1000E2B0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
