/*
 * func-name: sub_1003C7D0
 * func-address: 0x1003c7d0
 * callers: none
 * callees: 0x100372d0, 0x101a2500
 */

char *__thiscall sub_1003C7D0(char *this, char a2)
{
  sub_100372D0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
