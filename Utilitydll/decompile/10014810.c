/*
 * func-name: sub_10014810
 * func-address: 0x10014810
 * callers: none
 * callees: 0x100147a0, 0x10018cf2
 */

void **__thiscall sub_10014810(void **this, char a2)
{
  sub_100147A0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
