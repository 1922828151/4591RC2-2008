/*
 * func-name: sub_10001F00
 * func-address: 0x10001f00
 * callers: none
 * callees: 0x10001e90, 0x10018cf2
 */

std::exception *__thiscall sub_10001F00(std::exception *this, char a2)
{
  sub_10001E90(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
