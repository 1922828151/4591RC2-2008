/*
 * func-name: sub_10014E70
 * func-address: 0x10014e70
 * callers: none
 * callees: 0x10014e00, 0x10018cf2
 */

void **__thiscall sub_10014E70(void **this, char a2)
{
  sub_10014E00(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
