/*
 * func-name: sub_100105A0
 * func-address: 0x100105a0
 * callers: none
 * callees: 0x100102f0, 0x100294f2
 */

void **__thiscall sub_100105A0(void **this, char a2)
{
  sub_100102F0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
