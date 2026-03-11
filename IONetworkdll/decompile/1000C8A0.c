/*
 * func-name: sub_1000C8A0
 * func-address: 0x1000c8a0
 * callers: none
 * callees: 0x1000c840, 0x1004e870
 */

std::exception *__thiscall sub_1000C8A0(std::exception *this, char a2)
{
  sub_1000C840(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
