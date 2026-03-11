/*
 * func-name: sub_10003770
 * func-address: 0x10003770
 * callers: none
 * callees: 0x10003710, 0x100294f2
 */

std::exception *__thiscall sub_10003770(std::exception *this, char a2)
{
  sub_10003710(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
