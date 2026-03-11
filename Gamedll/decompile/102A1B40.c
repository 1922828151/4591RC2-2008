/*
 * func-name: sub_102A1B40
 * func-address: 0x102a1b40
 * callers: 0x100160c7
 * callees: 0x10013d4f, 0x102c9d50
 */

void *__thiscall sub_102A1B40(void *this, char a2)
{
  sub_10013D4F();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
