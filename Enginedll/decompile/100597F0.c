/*
 * func-name: sub_100597F0
 * func-address: 0x100597f0
 * callers: none
 * callees: 0x10161790, 0x101a2500
 */

void *__thiscall sub_100597F0(void *this, char a2)
{
  sub_10161790();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
