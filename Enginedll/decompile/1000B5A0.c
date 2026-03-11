/*
 * func-name: sub_1000B5A0
 * func-address: 0x1000b5a0
 * callers: none
 * callees: 0x1017a0b0, 0x101a2500
 */

void *__thiscall sub_1000B5A0(void *this, char a2)
{
  sub_1017A0B0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
