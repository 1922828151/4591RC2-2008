/*
 * func-name: sub_10010720
 * func-address: 0x10010720
 * callers: none
 * callees: 0x10010640, 0x100294f2
 */

void **__thiscall sub_10010720(void **this, char a2)
{
  sub_10010640(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
