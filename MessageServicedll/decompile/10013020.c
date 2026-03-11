/*
 * func-name: sub_10013020
 * func-address: 0x10013020
 * callers: none
 * callees: 0x10012ea0, 0x100294f2
 */

void *__thiscall sub_10013020(void *this, char a2)
{
  sub_10012EA0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
