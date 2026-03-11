/*
 * func-name: sub_10062590
 * func-address: 0x10062590
 * callers: none
 * callees: 0x100603b0, 0x101a2500
 */

char *__thiscall sub_10062590(char *this, char a2)
{
  sub_100603B0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
